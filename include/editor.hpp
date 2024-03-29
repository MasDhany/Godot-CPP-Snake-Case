#ifndef GODOT_CPP_SNAKE_CASE_EDITOR
#define GODOT_CPP_SNAKE_CASE_EDITOR

// Main Header

// External Dependencies
#include <filesystem>
#include <list>
#include <string>
#include <regex>
#include <vector>

// Internal Dependencies

class editor {
private:	// Types
	/**
	@brief Type of C++ file
	*/
	enum cpp_file_type {
		cpp_file_type_undefined	= 0,
		cpp_file_type_header	= 1,
		cpp_file_type_source	= 2
	};

	/**
	@brief Data of a file entry
	*/
	struct file_entry {
		// Entry of the file
		std::filesystem::directory_entry entry;
		// Path of the file
		std::filesystem::path path;
		// Type of the file
		editor::cpp_file_type type = editor::cpp_file_type_undefined;
	};

	/**
	@brief Metadata contains regular expressions, class/struct names, 
		namespaces and file entries to edit
	*/
	struct metadata {
		// List of all C++ file entries
		std::list<editor::file_entry> file_entries;
		// List of class/struct original names
		std::vector<std::string> class_names_original;
		// List of class/struct names in snake case
		std::list<std::string> class_names_snake_case;
		// List of class/struct dummy names. Used for replacing variables
		// that use class/struct names in snake case.
		std::list<std::string> class_names_dummy;
		// List of regex for matching class/struct original name
		std::list<std::regex> regex_class_name_original;
		// List of regex for matching class/struct name in snake case
		std::list<std::regex> regex_class_name_snake_case;
		// List of namespace original names
		std::vector<std::string> namespace_names_original;
		// List of namespace names in snake case
		std::list<std::string> namespace_names_snake_case;
		// List of regex for matching namespace original name
		std::list<std::regex> regex_namespace_name_original;
		// List of header file original names
		std::list<std::string> header_file_names_original;
		// List of header file names in snake case
		std::list<std::string> header_file_names_snake_case;
		// List of regex for matching header file original name
		std::list<std::regex> regex_header_file_name_original;
	};

private:	// Static Methods
	/**
	@brief Get header text to insert into header file
	@return Header text on success or empty text on failure
	*/
	[[nodiscard]]
	static
	std::string
	get_header_text();

	/**
	@brief Get footer text to insert into header file
	@return Footer text on success or empty text on failure
	*/
	[[nodiscard]]
	static
	std::string
	get_footer_text();

	/**
	@brief Changes directory of specified [file_path] from in [config::input_directory] 
		to [config::output_directory] and changes file name of specified [file_path]
		to snake case
	@param file_path Path of the file to change
	@return Changed [file_path]
	*/
	[[nodiscard]]
	static
	std::filesystem::path
	change_input_file_path_to_output(
		const std::filesystem::path& file_path
	);

	/**
	@brief Gets file entries from specified [directory]
	@param directory The directory to get its file entries
	@return File entries from [directory]
	*/
	[[nodiscard]]
	static
	std::list<editor::file_entry>
	get_file_entries_from_directory(
		const std::filesystem::path& directory
	);

	/**
	@brief Gets metadata in [config::input_directory]
	@return Metadata
	*/
	[[nodiscard]]
	static
	editor::metadata
	get_metadata();

public:		// Static Methods
	/**
	@brief Runs the editor to edit classes/struct and file names from
		[config::input_directory] then puts the result in [config::output_directory]
	@return true on success or false on failure
	*/
	static
	bool
	run();

private:	// Static Attributes
	// Header text to insert into header file
	static inline
	const std::string header_text = editor::get_header_text();
	// Footer text to insert into header file
	static inline
	const std::string footer_text = editor::get_footer_text();
};

// Inline File

#endif // GODOT_CPP_SNAKE_CASE_EDITOR