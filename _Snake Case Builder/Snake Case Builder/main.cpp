// Main Header

// External Dependencies
#include <cstdint>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include <cstdio>

// Internal Dependencies

/******************************
	Macro Init - Begin
******************************/

#define BASE_PATH "../../"

#define NEW_NAMESPACE_NAME "gd"

/******************************
	Macro Init - End
******************************/

/******************************
	Macro Method - Begin
******************************/

#define LOG(format, ...) std::printf(format, __VA_ARGS__)

#define LOG_ERROR(format, ...) std::printf("[ERROR]: " format, __VA_ARGS__)

/******************************
	Macro Method - End
******************************/

/******************************
	Types - Begin
******************************/

/**
@brief holds file data
*/
struct file_data {
	// Name of the file
	std::string name = {};
	// Name of the file in snake case
	std::string name_in_snake_case = {};
	// Extension of the file
	std::string extension = {};
	// Path of the file
	std::filesystem::path path = {};
	// Directory of the file
	std::string_view directory = {};
	// Size of the file
	std::uintmax_t size = 0;
};

/**
@brief holds data that will be transformed from PascalCase to snake_case
*/
struct transform_data {
	// Base name or the origin
	std::string base_name = {};
	// Destination name
	std::string snake_case_name = {};
};

/******************************
	Types - Begin
******************************/

/******************************
	Variables - Begin
******************************/

// File storage
static std::vector<file_data> file_storage = {};
// Transform storage
static std::map<std::string, transform_data> transform_storage = {};

/******************************
	Variables - End
******************************/

/******************************
	Methods Declaration - Begin
******************************/

/**
@brief register directory
@param dir directory to register
*/
void register_directory(std::string_view dir);

/**
@brief register file
@param dir directory of the file
@param dir_entry directory entry of the file
*/
void register_file(std::string_view dir, const std::filesystem::directory_entry& dir_entry);

/**
@brief register classes from given file data
@param data data of the file
@param keyword the keyword
*/
void register_classes(const file_data& data, std::string_view keyword);

/**
@brief get file name from given path
@param path path of the file
@param file name without extension
*/
std::string get_file_name(std::wstring_view path);

/**
@brief get file extension from given path
@param path path of the file
@return file extension with its dot
*/
std::string get_file_extension(std::wstring_view path);

/**
@brief transform given string to snake case
@param string string to transform
@return snake case string
*/
std::string transform_to_snake_case(std::string_view string);

/**
@brief checks whether given string is snake case
@param string string to check
@return true if snake case otherwise false
*/
bool is_snake_case(std::string_view string);

/**
@brief checks whether given extension is a cpp file
@param extension extension to check
@return true is it's a cpp file otherwise false
*/
bool is_cpp_file(std::string_view extension);

/**
@brief replace all strings
@param source the source
@param from before changes
@param to after changes
@param whole_word replace only for whole word found
*/
void replace_str(std::string& source, std::string_view from, std::string_view to);

/**
@brief perform transforms for file names
@param content the content to transform
*/
void perform_transform_file_name(std::string& content);

/**
@brief perform transforms for classes
@param content the content to transform
*/
void perform_transform_class(std::string& content);

/**
@brief perform transforms for variables
@param content the content to transform
*/
void perform_transform_variable(std::string& content);

/******************************
	Methods Declaration - End
******************************/

/******************************
	Main - Begin
******************************/

int main()
{
	int error_count = 0;

	register_directory(BASE_PATH "include/core/");
	register_directory(BASE_PATH "include/gen/");
	register_directory(BASE_PATH "src/core/");
	register_directory(BASE_PATH "src/gen/");

	for (const file_data& file : file_storage) {
		if (!is_cpp_file(file.extension)) {
			std::filesystem::remove(file.path);
			continue;
		}

		LOG("Building: %s ", (file.directory.data() + file.name_in_snake_case + file.extension).c_str());

		std::ifstream origin_file(file.path, std::ios::in | std::ios::binary);

		if (!origin_file.is_open()) {
			error_count++;

			LOG("[ERROR]\n");

			LOG_ERROR("Can't open file %ws\n", file.path.c_str());
			continue;
		}

		std::string file_content(file.size, NULL);

		origin_file.read(file_content.data(), file_content.size());

		origin_file.close();

		std::filesystem::remove(file.path);

		replace_str(file_content, "namespace godot", "namespace " NEW_NAMESPACE_NAME);
		replace_str(file_content, "godot::", NEW_NAMESPACE_NAME "::");

		perform_transform_variable(file_content);
		perform_transform_file_name(file_content);
		perform_transform_class(file_content);

		std::ofstream output_file(
			file.directory.data() + file.name_in_snake_case + file.extension,
			std::ios::trunc | std::ios::out | std::ios::binary
		);

		if (!output_file.is_open()) {
			error_count++;

			LOG("[ERROR]\n");

			LOG_ERROR(
				"Can't open file %s\n", 
				(file.directory.data() + file.name_in_snake_case + file.extension).c_str()
			);
			continue;
		}

		LOG("[DONE]\n");

		output_file << file_content;
	}

	LOG("DONE! %d Errors\n", error_count);

	std::getchar();
	return 0;
}

/******************************
	Main - End
******************************/

/******************************
	Methods Definition - Begin
******************************/

void register_directory(std::string_view dir)
{
	LOG("Registering Directory: %s\n", dir.data());

	for (const std::filesystem::directory_entry& dir_entry : std::filesystem::directory_iterator{ dir }) {
		register_file(dir, dir_entry);
	}
}

void register_file(std::string_view dir, const std::filesystem::directory_entry& dir_entry)
{
	file_data file;

	file.path = dir_entry.path();
	file.name = get_file_name(file.path.c_str());

	if (file.name.empty()) {
		return;
	}

	file.name_in_snake_case = transform_to_snake_case(file.name);
	file.extension = get_file_extension(file.path.c_str());

	file.directory = dir;
	file.size = dir_entry.file_size();

	LOG("|-> %s%s\n", file.name.c_str(), file.extension.c_str());

	transform_data& transform = transform_storage[file.name];

	transform.base_name = file.name;
	transform.snake_case_name = file.name_in_snake_case;

	if (file.extension == ".hpp") {
		register_classes(file, "class ");
		register_classes(file, "struct ");
	}

	file_storage.push_back(std::move(file));
}

void register_classes(const file_data& data, std::string_view keyword)
{
	std::ifstream file(data.path);

	if (!file.is_open()) {
		return;
	}

	std::string file_content(data.size, NULL);

	file.read(file_content.data(), file_content.size());

	file.close();

	size_t offset = 0;
	size_t found_pos = file_content.find(keyword, offset);

	while (found_pos != std::string::npos) {
		// Validate if it's a keyword
		if (offset > 0) {
			const char& ch = file_content[offset - 1];

			// Example: aclass or _class
			if (std::isalnum(ch) || ch == '_') {
				found_pos = file_content.find(keyword, ++offset);
				continue;
			}
		}

		size_t begin_name_pos = found_pos + keyword.length();

		while (true) {
			const char& ch = file_content[begin_name_pos];

			// If it's the first character of the class name
			if (std::isalpha(ch) || ch == '_') {
				break;
			}

			begin_name_pos++;
		}

		size_t end_name_pos = begin_name_pos + 1;

		while (true) {
			const char& ch = file_content[end_name_pos];

			// If it's a symbol that isn't (_)
			if (!std::isalnum(ch) && ch != '_') {
				break;
			}

			end_name_pos++;
		}

		std::string base_name(file_content.begin() + begin_name_pos, file_content.begin() + end_name_pos);

		if (!is_snake_case(base_name) && transform_storage.find(base_name) == transform_storage.end()) {
			transform_data& transform = transform_storage[base_name];

			transform.base_name = std::move(base_name);
			transform.snake_case_name = transform_to_snake_case(transform.base_name);

			LOG(" |-> %s\n", transform.base_name.c_str());
		}
		else {
			LOG(" |>X %s\n", base_name.c_str());
		}

		offset = end_name_pos + 1;

		found_pos = file_content.find(keyword, offset);
	}
}

std::string get_file_name(std::wstring_view path)
{
	std::string file_name(path.begin(), path.end());

	// Get file name and its extension
	file_name.erase(0, file_name.rfind('/') + 1);
	
	// Remove extension
	file_name.erase(file_name.rfind('.'));

	return std::move(file_name);
}

std::string get_file_extension(std::wstring_view path)
{
	std::string file_extension(path.begin(), path.end());

	// Get file extension with its dot
	file_extension.erase(0, file_extension.rfind('.'));

	return std::move(file_extension);
}

std::string transform_to_snake_case(std::string_view string)
{
	std::string transformed = string.data();

	for (size_t i = string.size() - 1; i > 0; i--) {
		char& current = transformed[i];
		char& next = transformed[i - 1];

		// Example: [NEXT][CURRENT]
		//			AB
		if (std::isupper(current) && std::isupper(next)) {
			// Example:
			// From: AB to Ab
			current = std::tolower(current);
		}
		// Example: [NEXT][CURRENT]
		//			5C
		else if (std::isupper(current) && std::isdigit(next)) {
			// Example:
			// From: 5C to 5c
			current = std::tolower(current);
			
			if (i != string.size() - 1) {
				// Example:
				// From: 5abc to 5_abc
				transformed.insert(transformed.begin() + i, '_');
			}
		}
		// Example: [NEXT][CURRENT]
		//			aB
		else if (std::isupper(current) && std::islower(next)) {
			// Example:
			// From: aB to a_b
			current = std::tolower(current);

			transformed.insert(transformed.begin() + i, '_');
		}
	}

	transformed[0] = std::tolower(transformed.front());

	return std::move(transformed);
}

bool is_snake_case(std::string_view string)
{
	if (string.size() == 1) {
		return true;
	}

	if (string.find('_') != std::string::npos) {
		return true;
	}

	for (const char& ch : string) {
		if (std::isupper(ch)) {
			return false;
		}
	}

	return true;
}

bool is_cpp_file(std::string_view extension)
{
	return extension == ".hpp" || extension == ".cpp";
}

void replace_str(std::string& source, std::string_view from, std::string_view to)
{
	size_t offset = 0;
	size_t found_pos = source.find(from, offset);

	while (found_pos != std::string::npos) {
		const size_t end_pos = found_pos + from.length();

		offset = found_pos + to.length();

		source.replace(found_pos, from.length(), to);

		found_pos = source.find(from, offset);
	}
}

void perform_transform_file_name(std::string& content)
{
	for (auto i = transform_storage.cbegin(); i != transform_storage.cend(); i++) {
		const transform_data& transform = i->second;
		size_t offset = 0;
		size_t found_pos = content.find(transform.base_name, offset);

		while (found_pos != std::string::npos) {
			const size_t end_pos = found_pos + transform.base_name.length();
			bool left_ok = false;
			bool right_ok = false;

			if (found_pos == 0) {
				left_ok = false;
			}
			else if (found_pos > 0) {
				const char& ch = content[found_pos - 1];

				// Example:
				// #include "a.hpp"		-> "
				// #include "a/b.hpp"	-> /
				// #include <b.hpp>		-> <
				if (ch == '"' ||
					ch == '/' ||
					ch == '<')
				{
					left_ok = true;
				}
			}

			if (left_ok) {
				// If found pos is more than 4 to find the .hpp("/>)
				if (content.length() - end_pos > 5) {
					const std::string extension(content.begin() + end_pos, content.begin() + end_pos + 5);

					if (extension == ".hpp\"" ||
						extension == ".hpp>")
					{
						right_ok = true;
					}
				}
			}

			if (left_ok && right_ok) {
				content.replace(found_pos, transform.base_name.length(), transform.snake_case_name);

				offset = found_pos + transform.snake_case_name.length() + 1;
			}
			else {
				offset = found_pos + transform.base_name.length() + 1;
			}

			found_pos = content.find(transform.base_name, offset);
		}
	}
}

void perform_transform_class(std::string& content)
{
	for (auto i = transform_storage.cbegin(); i != transform_storage.cend(); i++) {
		const transform_data& transform = i->second;
		size_t offset = 0;
		size_t found_pos = content.find(transform.base_name, offset);

		while (found_pos != std::string::npos) {
			if (content.length() - found_pos < transform.base_name.length()) {
				break;
			}
			
			const size_t end_pos = found_pos + transform.base_name.length();
			bool left_ok = false;
			bool right_ok = false;

			if (found_pos == 0) {
				left_ok = true;
			}
			else if (found_pos > 0) {
				const char& ch = content[found_pos - 1];

				if (!std::isalnum(ch) &&
					ch != '_' &&
					ch != '"')
				{
					left_ok = true;
				}
			}

			if (left_ok) {
				const char& ch = content[end_pos];

				if (!std::isalnum(ch) &&
					ch != '_' &&
					ch != '"') 
				{
					right_ok = true;
				}
			}

			if (left_ok && right_ok) {
				content.replace(found_pos, transform.base_name.length(), transform.snake_case_name);

				offset = found_pos + transform.snake_case_name.length() + 1;
			}
			else {
				offset = found_pos + transform.base_name.length() + 1;
			}

			found_pos = content.find(transform.base_name, offset);
		}
	}
}

void perform_transform_variable(std::string& content)
{
	for (auto i = transform_storage.cbegin(); i != transform_storage.cend(); i++) {
		const transform_data& transform = i->second;
		size_t offset = 0;
		size_t found_pos = content.find(transform.snake_case_name, offset);

		while (found_pos != std::string::npos) {
			const size_t end_pos = found_pos + transform.snake_case_name.length();
			bool left_ok = false;
			bool right_ok = false;

			if (found_pos == 0) {
				left_ok = false;
			}
			else if (found_pos > 0) {
				const char& ch = content[found_pos - 1];

				if (!std::isalnum(ch) &&
					ch != '_' &&
					ch != '"' &&
					ch != '<' &&
					ch != '/')
				{
					left_ok = true;
				}
			}

			if (left_ok) {
				const char& ch = content[end_pos];

				if (!std::isalnum(ch) &&
					ch != '_' && 
					ch != '"' &&
					ch != '>' &&
					ch != '/')
				{
					right_ok = true;
				}
			}

			if (left_ok && right_ok) {
				content.replace(found_pos, transform.snake_case_name.length(), transform.snake_case_name + "_");
			}

			offset = end_pos;

			found_pos = content.find(transform.snake_case_name, offset);
		}
	}
}

/******************************
	Methods Definition - End
******************************/