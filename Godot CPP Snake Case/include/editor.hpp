#ifndef GODOT_CPP_SNAKE_CASE_EDITOR
#define GODOT_CPP_SNAKE_CASE_EDITOR

// Main Header

// External Dependencies
#include <filesystem>
#include <list>
#include <string>

// Internal Dependencies

class editor {
private:	// Types
	/**
	@brief Metadata contains godot class/struct names and file entry to edit
	*/
	struct metadata {
		// List of godot class/struct original names
		std::list<std::string> class_names_original;
		// List of godot class/struct names in snake case
		std::list<std::string> class_names_snake_case;
		// List of godot class/struct dummy names. Used for replacing variables
		// that use godot class/struct names in snake case.
		std::list<std::string> class_names_dummy;
		// List of file entries
		std::list<std::filesystem::directory_entry> file_entries;
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
	@brief Gets metadata in specified directory
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