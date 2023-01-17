#include <filesystem>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <vector>
#include <string_view>
#include <map>
#include <iostream>

#define BASE_PATH "../../"

/**
*/
struct file_data {
	std::string name = {};
	std::string name_snake_case = {};
	std::string extension = {};
	std::filesystem::path path = {};
	std::string_view directory = {};
	uintmax_t file_size = 0;
};

/**
*/
struct class_data {
	std::string name = {};
	std::string name_snake_case = {};
};

//
static std::vector<file_data> files;

//
static std::map<std::string, class_data> class_name;

/**
*/
std::string get_file_name(const std::filesystem::directory_entry& dir_entry);

/**
*/
std::string get_extension(const std::filesystem::directory_entry& dir_entry);

/**
*/
void to_snake_case(std::string& string);

/**
*/
void register_directory(std::string_view target_dir);

/**
*/
void replace_str(std::string& source, std::string_view from, std::string_view to, bool whole_word = false);

/**
*/
void parse_class_name(const std::filesystem::directory_entry& dir_entry, std::string_view keyword);

/**
*/
bool is_ignored_class_name(std::string_view name);

/**
@brief main function
*/
int main()
{
	int failed_count = 0;

	register_directory(BASE_PATH "include/core/");
	register_directory(BASE_PATH "include/gen/");
	register_directory(BASE_PATH "src/core/");
	register_directory(BASE_PATH "src/gen/");

	for (const file_data& data : files) {
		if (data.extension != ".hpp" &&
			data.extension != ".h" &&
			data.extension != ".cpp" &&
			data.extension != ".c")
		{
			std::filesystem::remove(data.path);
			continue;
		}

		std::ifstream target_file(data.path, std::ios::in | std::ios::binary);

		if (!target_file.is_open()) {
			failed_count++;

			std::cout << "[Error]: Can't open target file" << std::endl;
			continue;
		}

		std::string file_content(data.file_size, NULL);

		target_file.read(file_content.data(), file_content.size());

		target_file.close();

		std::filesystem::remove(data.path);

		replace_str(file_content, "namespace godot", "namespace gd");
		replace_str(file_content, "godot::", "gd::");

		for (const file_data& another : files) {
			if (another.extension == ".cpp" || another.extension == ".c") {
				continue;
			}

			replace_str(file_content, another.name_snake_case + ".h>", another.name + ".h>", true);
		}

		for (auto i = class_name.begin(); i != class_name.end(); i++) {
			const class_data& name = i->second;

			replace_str(file_content, name.name_snake_case, name.name_snake_case + "_", true);
		}

		for (auto i = class_name.begin(); i != class_name.end(); i++) {
			const class_data& name = i->second;

			replace_str(file_content, name.name, name.name_snake_case, true);
		}

		for (const file_data& another : files) {
			if (another.extension == ".cpp" || another.extension == ".c") {
				continue;
			}

			replace_str(file_content, another.name, another.name_snake_case, true);
		}

		std::cout << "Creating" << data.directory.data() + data.name_snake_case + data.extension << '\n';

		std::ofstream output_file(data.directory.data() + data.name_snake_case + data.extension, std::ios::trunc | std::ios::out | std::ios::binary);

		if (!output_file.is_open()) {
			failed_count++;

			std::cout << "[ERROR]: Create Failed.\n";
			continue;
		}

		output_file << file_content;

		output_file.close();

		std::cout << "Created: " << data.name_snake_case << data.extension << '\n';
	}

	std::cout << "Done! " << failed_count << " Errors." << std::endl;

	std::getchar();
	return 0;
}

std::string get_file_name(const std::filesystem::directory_entry& dir_entry)
{
	std::string file_name(1024, NULL);

	std::wcstombs(file_name.data(), dir_entry.path().c_str(), file_name.size());

	file_name.erase(0, file_name.rfind('/') + 1);
	file_name.erase(file_name.rfind('.'));

	return std::move(file_name);
}

std::string get_extension(const std::filesystem::directory_entry& dir_entry)
{
	std::wstring extension = dir_entry.path().c_str();

	extension.erase(0, extension.rfind('.'));

	return std::string(extension.begin(), extension.end());
}

void to_snake_case(std::string& string)
{
	if (string.empty()) {
		return;
	}

	for (size_t i = string.size() - 1; i > 0; i--) {
		char& current_ch = string[i];
		char& next_ch = string[i - 1];

		if (std::isupper(current_ch) && 
			(std::isupper(next_ch) || std::isdigit(next_ch))) 
		{
			current_ch = std::tolower(current_ch);
		}
		else if (std::isupper(current_ch) && std::islower(next_ch)) {
			current_ch = std::tolower(current_ch);

			string.insert(string.begin() + i, '_');
		}
	}

	string[0] = std::tolower(string[0]);
}

void register_directory(std::string_view directory)
{
	for (const std::filesystem::directory_entry& dir_entry : std::filesystem::directory_iterator{ directory }) {
		std::string file_name = get_file_name(dir_entry);

		if (file_name.empty()) {
			continue;
		}

		std::string file_name_snake_case = file_name;

		to_snake_case(file_name_snake_case);

		file_data data;

		data.name = file_name;
		data.name_snake_case = file_name_snake_case;
		data.extension = get_extension(dir_entry);
		data.path = dir_entry.path();
		data.directory = directory;
		data.file_size = dir_entry.file_size();

		files.push_back(data);

		if (data.extension == ".hpp" || data.extension == ".h") {
			parse_class_name(dir_entry, "class ");
			parse_class_name(dir_entry, "struct ");
		}
	}
}

void replace_str(std::string& source, std::string_view from, std::string_view to, bool whole_word)
{
	size_t offset = 0;
	size_t found_pos = source.find(from, offset);

	while (found_pos != std::string::npos) {
		const size_t end_pos = found_pos + from.length();

		offset = found_pos + to.length();

		if (whole_word) {
			bool lhs_ok = false;
			bool rhs_ok = false;

			if (found_pos == 0) {
				lhs_ok = true;
			}
			else if (found_pos > 0) {
				if (std::isspace(source[found_pos - 1]) ||
					(!std::isalpha(source[found_pos - 1]) && 
					!std::isdigit(source[found_pos - 1]) &&
					source[found_pos - 1] != '_'))
				{
					lhs_ok = true;
				}
			}

			if (end_pos == source.length()) {
				rhs_ok = true;
			}
			else if (end_pos < source.length()) {
				if (std::isspace(source[end_pos]) ||
					(!std::isalpha(source[end_pos]) && 
					!std::isdigit(source[end_pos]) &&
					source[end_pos] != '_' &&
					source[end_pos] != '/' &&
					source[end_pos] != '\\'))
				{
					rhs_ok = true;
				}
			}

			if (lhs_ok && rhs_ok) {
				if (source[found_pos - 1] != '"' ||
					source[end_pos] != '"')
				{
					source.replace(found_pos, from.length(), to);
				}
			}
		}
		else if (!whole_word) {
			source.replace(found_pos, from.length(), to);
		}

		found_pos = source.find(from, offset);
	}
}

void parse_class_name(const std::filesystem::directory_entry& dir_entry, std::string_view keyword)
{
	std::printf("Parsing %sfrom %ws\n", keyword.data(), dir_entry.path().c_str());

	std::ifstream file(dir_entry.path());

	if (!file.is_open()) {
		return;
	}

	std::string file_content(dir_entry.file_size(), NULL);

	file.read(file_content.data(), file_content.size());

	size_t found_pos = file_content.find(keyword);

	while (found_pos != std::string::npos) {
		if (found_pos > 0) {
			const char& ch = file_content[found_pos - 1];

			if (std::isalnum(ch) || ch == '_') {
				found_pos = file_content.find(keyword, found_pos + 1);

				continue;
			}
		}

		size_t begin_name_pos = found_pos + keyword.length();
		size_t end_name_pos = 0;

		while (true) {
			const char& ch = file_content[begin_name_pos];

			if (std::isalpha(ch) || ch == '_') {
				break;
			}

			begin_name_pos++;
		}

		end_name_pos = begin_name_pos + 1;

		while (true) {
			const char& ch = file_content[end_name_pos];

			if (!std::isalnum(ch) &&
				ch != '_') 
			{
				break;
			}

			end_name_pos++;
		}

		std::string name(file_content.begin() + begin_name_pos, file_content.begin() + end_name_pos);

		if (!is_ignored_class_name(name) && class_name.find(name) == class_name.end()) {
			class_data data;

			data.name = name;
			data.name_snake_case = name;

			to_snake_case(data.name_snake_case);
			
			std::printf("~> %s\n", name.c_str());
			class_name[name] = data;
		}
		else {
			std::printf(">| %s\n", name.c_str());
		}

		found_pos = file_content.find(keyword, end_name_pos + 1);
	}

	file.close();
}

bool is_ignored_class_name(std::string_view name)
{
	static std::map<std::string_view, bool> ignored_list = {
		{ "this", true },
		{ "float", true },
		{ "real_t", true }
	};

	return ignored_list.find(name) != ignored_list.end();
}