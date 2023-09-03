// Main Header
#include <class_parser.hpp>

// External Dependencies
#include <list>
#include <string>
#include <filesystem>
#include <fstream>

#include <iostream>

// Internal Dependencies

/******************************
	Public Static Methods - Begin
******************************/

[[nodiscard]]
std::list<std::string>
class_parser::parse(
	const std::filesystem::path& file_path
)
{
	// File to parse
	std::ifstream file(file_path);

	if (!file.is_open()) {
		return std::list<std::string>();
	}

	// List of class names of the file
	std::list<std::string> class_names;
	// Read buffer
	std::string buffer = {};

	while (!file.eof()) {
		std::getline(file, buffer);

		if (buffer.empty()) {
			continue;
		}

		// Regex match
		std::smatch match;

		if (!std::regex_search(buffer, match, class_parser::regex_parse)) {
			continue;
		}

		class_names.push_back(match[2]);
	}

	return class_names;
}

/******************************
	Public Static Methods - End
******************************/