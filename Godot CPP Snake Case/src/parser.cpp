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
parser::parse(
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
	const std::sregex_iterator begin = std::sregex_iterator(contents.begin(), contents.end(), parser::regex_parse);
	// End iterator
	const std::sregex_iterator end;

	for (std::sregex_iterator it = begin; it != end; it++) {
		utility::insertion_sort(class_names, (*it)[2]);
	}

	return class_names;
}

/******************************
	Public Static Methods - End
******************************/