#ifndef GODOT_CPP_SNAKE_CASE_PARSER
#define GODOT_CPP_SNAKE_CASE_PARSER

// Main Header

// External Dependencies
#include <list>
#include <string>
#include <regex>
#include <filesystem>

// Internal Dependencies

class parser {
private:	// Static Attributes
	// Regex for searching class/struct name
	static inline
	const std::regex regex_parse_class = std::regex(
		"[^_[:alnum:]](class|struct)[[:space:]]+([_[:alnum:]]+)[[:space:]]*[;|\\{|:]",
		std::regex::ECMAScript
	);
	// Regex for searching namespace name
	static inline
	const std::regex regex_parse_namespace = std::regex(
		"namespace[[:space:]]+([_[:alnum:]]+)[[:space:]]*\\{",
		std::regex::ECMAScript
	);

public:		// Static Methods
	/**
	@brief Parses classes/structs from a single file. Classes/structs with '_'
		character are ignored
	@param [file_path] Path of the file to parse
	@return Class/struct names of the file
	*/
	[[nodiscard]]
	static
	std::list<std::string>
	parse_class(
		const std::filesystem::path& file_path
	);

	/**
	@brief Parses namespaces from a single file. Namespaces with '_'
		character or "godot" name are ignored
	@param [file_path] Path of the file to parse
	@return Namespace names of the file
	*/
	[[nodiscard]]
	static
	std::list<std::string>
	parse_namespace(
		const std::filesystem::path& file_path
	);
};

// Inline File

#endif // GODOT_CPP_SNAKE_CASE_PARSER