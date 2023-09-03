#ifndef GODOT_CPP_SNAKE_CASE_CLASS_PARSER
#define GODOT_CPP_SNAKE_CASE_CLASS_PARSER

// Main Header

// External Dependencies
#include <list>
#include <string>
#include <regex>
#include <filesystem>

// Internal Dependencies

class class_parser {
private:	// Static Attributes
	// Regex for searching class/struct name
	static inline
	const std::regex regex_parse = std::regex(
		"(class|struct)[ ]+([a-zA-Z0-9_]+)[ ]*(;|\\{)",
		std::regex::ECMAScript
	);

public:		// Static Methods
	/**
	@brief Parses classes from a single file
	@param [file_path] Path of the file to parse
	@return Class names of the file
	*/
	[[nodiscard]]
	static
	std::list<std::string>
	parse(
		const std::filesystem::path& file_path
	);
};

// Inline File

#endif // GODOT_SNAKE_CASE_CPP_PARSER