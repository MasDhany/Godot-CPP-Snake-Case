#ifndef GODOT_CPP_SNAKE_CASE_EDITOR
#define GODOT_CPP_SNAKE_CASE_EDITOR

// Main Header

// External Dependencies
#include <filesystem>
#include <list>
#include <string>
#include <regex>

// Internal Dependencies

class editor {
private:	// Types
	/**
	@brief Metadata contains godot class/struct names and file entry to edit
	*/
	struct metadata {
		// List of file entries
		std::list<std::filesystem::directory_entry> file_entries;
		// List of godot class/struct original names
		std::list<std::string> class_names_original;
		// List of godot class/struct names in snake case
		std::list<std::string> class_names_snake_case;
		// List of godot class/struct dummy names. Used for replacing variables
		// that use godot class/struct names in snake case.
		std::list<std::string> class_names_dummy;
		// List of regex for matching godot class/struct original name
		std::list<std::regex> regex_class_name_original;
		// List of regex for matching godot class/struct name in snake case
		std::list<std::regex> regex_class_name_snake_case;
		// List of header file original names
		std::list<std::string> header_file_names_original;
		// List of header file names in snake case
		std::list<std::string> header_file_names_snake_case;
		// List of regex for matching header file original name
		std::list<std::regex> regex_header_file_name_original;
	};

private:	// Static Methods
	/**
	@brief Merges [source] to [destination]. Ignores class/struct name if already 
		exist, so the [destination] class names are unique
	@param [destination] Destination metadata
	@param [source] Metadata to transfer
	*/
	static
	void
	merge_metadata(
		editor::metadata& destination,
		editor::metadata&& source
	);

	/**
	@brief Changes directory of specified [file_path] from in [editor::input_directory] 
		to [editor::output_directory] and changes file name of specified [file_path]
		to snake case
	@param [file_path] Path of the file to change
	@return Changed [file_path]
	*/
	[[nodiscard]]
	static
	std::filesystem::path
	change_input_file_path_to_output(
		const std::filesystem::path& file_path
	);

	/**
	@brief Gets metadata in specified [directory]
	@param [directory] The directory to get metadata
	@return Metadata
	*/
	[[nodiscard]]
	static
	editor::metadata
	get_metadata_from_directory(
		const std::filesystem::path& directory
	);

	/**
	@brief Inserts metadata in specified [file_entry] to [data]
	@param [data] Destination metadata
	@param [file_entry] The directory entry refers to a regular file
	*/
	static
	void
	insert_metadata_from_file(
		editor::metadata& data,
		const std::filesystem::directory_entry& file_entry
	);
	
	/**
	@brief Gets metadata in [editor::input_directory]
	@return Metadata
	*/
	[[nodiscard]]
	static
	editor::metadata
	get_metadata();

public:		// Static Methods
	/**
	@brief Runs the editor to edit godot classes/struct and file names from
		[editor::input_directory] then puts the result in [editor::output_directory]
	@return [true] on success or [false] on failure
	*/
	static
	bool
	run();
};

// Inline File

#endif // GODOT_CPP_SNAKE_CASE_EDITOR