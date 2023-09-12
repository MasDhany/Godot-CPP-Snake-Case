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
	
	for (std::sregex_iterator it = begin; it != parser::sregex_iterator_end; it++) {
		// Current calss/struct name
		std::string class_name = it->str(2);

		// Ignore if use snake case
		if (utility::is_snake_case(class_name)) {
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
	
	for (std::sregex_iterator it = begin; it != parser::sregex_iterator_end; it++) {
		// Current namespace name
		std::string namespace_name = it->str(1);

		// Ignore if the name is "godot" or it's use snake case
		if (namespace_name == "godot" ||
			utility::is_snake_case(namespace_name))
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