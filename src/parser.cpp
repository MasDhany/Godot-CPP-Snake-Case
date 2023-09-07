// Main Header
#include <parser.hpp>

// External Dependencies
#include <list>
#include <string>
#include <filesystem>
#include <fstream>
#include <regex>

// Internal Dependencies
#include <utility.hpp>

/******************************
	Public Static Methods - Begin
******************************/

[[nodiscard]]
std::list<std::string>
parser::parse_class(
	const std::filesystem::path& file_path
)
{
	// File to parse
	std::ifstream file(file_path, std::ios::binary);

	if (!file.is_open()) 
		[[unlikely]]
	{
		return std::list<std::string>();
	}

	// List of class names of the file
	std::list<std::string> class_names;
	// File contents
	std::string contents(static_cast<std::size_t>(std::filesystem::file_size(file_path)), NULL);
	
	file.read(contents.data(), contents.length());

	// Begin iterator of matched class/struct name
	const std::sregex_iterator begin = std::sregex_iterator(contents.begin(), contents.end(), parser::regex_parse_class);
	// End iterator
	const std::sregex_iterator end;

	for (std::sregex_iterator it = begin; it != end; it++) {
		// Current calss/struct name
		std::string class_name = it->str(2);

		// Ignore if found '_'
		if (class_name.find('_') != std::string::npos) {
			continue;
		}

		utility::insertion_sort(class_names, std::move(class_name));
	}

	return class_names;
}

[[nodiscard]]
std::list<std::string>
parser::parse_namespace(
	const std::filesystem::path& file_path
)
{
	// File to parse
	std::ifstream file(file_path, std::ios::binary);

	if (!file.is_open()) 
		[[unlikely]]
	{
		return std::list<std::string>();
	}

	// List of namespace names of the file
	std::list<std::string> namespace_names;
	// File contents
	std::string contents(static_cast<std::size_t>(std::filesystem::file_size(file_path)), NULL);
	
	file.read(contents.data(), contents.length());

	// Begin iterator of matched namespace name
	const std::sregex_iterator begin = std::sregex_iterator(contents.begin(), contents.end(), parser::regex_parse_namespace);
	// End iterator
	const std::sregex_iterator end;

	for (std::sregex_iterator it = begin; it != end; it++) {
		// Current namespace name
		std::string namespace_name = it->str(1);

		// Ignore if the name is "godot" or found '_'
		if (namespace_name == "godot" ||
			namespace_name.find('_') != std::string::npos)
		{
			continue;
		}

		utility::insertion_sort(namespace_names, std::move(namespace_name));
	}

	return namespace_names;
}

/******************************
	Public Static Methods - End
******************************/