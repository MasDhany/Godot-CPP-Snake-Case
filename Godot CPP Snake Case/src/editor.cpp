// Main Header
#include <editor.hpp>

// External Dependencies
#include <filesystem>
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <format>

// Internal Dependencies
#include <config.hpp>
#include <parser.hpp>
#include <utility.hpp>

/******************************
	Private Static Methods - Begin
******************************/

void
editor::merge_metadata(
	editor::metadata& destination,
	editor::metadata&& source
)
{
	utility::merge(destination.class_names_original, std::move(source.class_names_original));
	
	for (std::filesystem::directory_entry& entry : source.file_entries) {
		destination.file_entries.push_back(std::move(entry));
	}
}

[[nodiscard]]
std::filesystem::path
editor::change_input_file_path_to_output(
	const std::filesystem::path& file_path
)
{
	// File name of input file path
	std::string file_name = file_path.filename().string();

	// Remove extension
	file_name.erase(file_name.rfind("."));

	// Changed input file path to output
	std::string output_file_path = file_path.string();
	
	// Change directory to output directory
	output_file_path.replace(0, config::input_directory_string.length(), config::output_directory_string);

	// Change file name to snake case
	output_file_path.replace(
		output_file_path.rfind(file_name),
		file_name.length(),
		utility::to_snake_case(file_name)
	);

	return output_file_path;
}

[[nodiscard]]
editor::metadata
editor::get_metadata_from_directory(
	const std::filesystem::path& directory
)
{
	// Metadata
	editor::metadata data;

	std::cout << "Looking for files in: " << directory << '\n';

	for (const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator(directory)) {
		if (entry.is_directory()) 
			[[unlikely]]
		{
			editor::merge_metadata(data, editor::get_metadata_from_directory(entry.path()));
		}
		else 
			[[likely]]
		{
			std::cout << "Parsing: " << entry.path() << '\n';

			utility::merge(data.class_names_original, parser::parse(entry.path()));
			data.file_entries.push_back(entry);
		}
	}

	return data;
}

[[nodiscard]]
editor::metadata
editor::get_metadata()
{
	// Metadata
	editor::metadata data;

	for (const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator(config::input_directory)) {
		if (entry.is_directory()) 
			[[unlikely]]
		{
			editor::merge_metadata(data, editor::get_metadata_from_directory(entry.path()));
		}
		else 
			[[likely]]
		{
			std::cout << "Parsing: " << entry.path() << '\n';

			utility::merge(data.class_names_original, parser::parse(entry.path()));
			data.file_entries.push_back(entry);
		}
	}

	// Get class names in snake case
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_snake_case.push_back(utility::to_snake_case(original_class));
	}

	// Get dummy class names
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_dummy.push_back("_" + original_class);
	}

	std::cout << std::vformat(
		"Parsing Finished. Found: {0} Files, {1} Classes/structs.\n",
		std::make_format_args(
			data.file_entries.size(),
			data.class_names_original.size()
		)
	);

	return data;
}

/******************************
	Private Static Methods - End
******************************/

/******************************
	Public Static Methods - Begin
******************************/

bool
editor::run()
{
	// Metadata
	const editor::metadata data = editor::get_metadata();

	for (const std::filesystem::directory_entry& entry : data.file_entries) {
		// Path of input file
		const std::filesystem::path input_file_path = entry.path();
		// Input file
		std::ifstream input_file(input_file_path, std::ios::binary);

		if (!input_file.is_open()) 
			[[unlikely]]
		{
			std::cerr << "An error occure while opening " << input_file_path;
			return false;
		}
		
		// Output file path
		const std::filesystem::path output_path = editor::change_input_file_path_to_output(input_file_path);
		// Output file
		std::ofstream output_file;

		utility::create_directories_for(output_path);

		output_file.open(output_path, std::ios::trunc | std::ios::binary);

		if (!output_file.is_open()) 
			[[unlikely]]
		{
			std::cerr << "An error occure while opening " << output_path;
			return false;
		}

		std::cout << "Editing: " << output_path << '\n';
			
		// Class names original iterator
		std::list<std::string>::const_iterator it_original = data.class_names_original.cbegin();
		// Class names snake case iterator
		std::list<std::string>::const_iterator it_snake_case = data.class_names_snake_case.cbegin();
		// Class names dummy iterator
		std::list<std::string>::const_iterator it_dummy = data.class_names_dummy.cbegin();
		// File contents
		std::string contents(static_cast<std::size_t>(std::filesystem::file_size(input_file_path)), NULL);

		input_file.read(contents.data(), contents.length());

		for (;it_original != data.class_names_original.cend();
			it_original++, it_snake_case++, it_dummy++) 
		{
			// Replace godot namespace
			utility::replace(contents, "godot", config::godot_namespace_result);
			
			// Replace variables that use godot class/struct names in snake case
			utility::replace(contents, std::regex("[^_</\\\\\"[:alnum:]](" + *it_snake_case + ")[^_[:alnum:]]"), *it_dummy);

			// Replace class/struct names to snake case
			utility::replace(contents, *it_original, *it_snake_case);
		}

		output_file << contents;
	}

	return true;
}

/******************************
	Public Static Methods - End
******************************/