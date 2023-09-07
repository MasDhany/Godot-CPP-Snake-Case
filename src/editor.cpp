// Main Header
#include <editor.hpp>

// External Dependencies
#include <filesystem>
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <format>
#include <utility>
#include <regex>

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
	utility::merge(destination.namespace_names_original, std::move(source.namespace_names_original));

	for (std::filesystem::directory_entry& entry : source.file_entries) {
		destination.file_entries.push_back(std::move(entry));
	}

	for (std::string& header_original : source.header_file_names_original) {
		destination.header_file_names_original.push_back(std::move(header_original));
	}

	for (std::string& header_snake_case : source.header_file_names_snake_case) {
		destination.header_file_names_snake_case.push_back(std::move(header_snake_case));
	}
}

[[nodiscard]]
std::filesystem::path
editor::change_input_file_path_to_output(
	const std::filesystem::path& file_path
)
{
	// File name of input file path
	std::string file_name = file_path.filename().replace_extension("").string();
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
			editor::insert_metadata_from_file(data, entry);
		}
	}

	return data;
}

void
editor::insert_metadata_from_file(
	editor::metadata& data,
	const std::filesystem::directory_entry& file_entry
)
{
	// File path
	const std::filesystem::path& file_path = file_entry.path();
	// File name
	std::string file_name = file_path.filename().replace_extension("").string();

	std::cout << "Parsing: " << file_path << '\n';

	utility::merge(data.class_names_original, parser::parse_class(file_path));
	utility::merge(data.namespace_names_original, parser::parse_namespace(file_path));
	
	data.file_entries.push_back(file_entry);

	// Checks if the file is a header file
	if (file_path.extension().string() == ".hpp") {
		data.header_file_names_snake_case.push_back(utility::to_snake_case(file_name));
		data.header_file_names_original.push_back(std::move(file_name));
	}
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
			editor::insert_metadata_from_file(data, entry);
		}
	}

	// Get class/struct names in snake case, regex for matching original name, and regex for matching name in snake case.
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_snake_case.push_back(utility::to_snake_case(original_class));
		
		data.regex_class_name_original.push_back(
			std::regex("[^_\"[:alnum:]](" + original_class + ")[^_\"[:alnum:]]")
		);

		data.regex_class_name_snake_case.push_back(
			std::regex("[^_</\"[:alnum:]](" + data.class_names_snake_case.back() + ")[^_[:alnum:]]")
		);
	}

	// Get dummy class names
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_dummy.push_back("_" + original_class);
	}

	// Get namepace names in snake case, and regex for matching original name.
	for (const std::string& original_namespace : data.namespace_names_original) {
		data.namespace_names_snake_case.push_back(utility::to_snake_case(original_namespace));

		data.regex_namespace_name_original.push_back(
			std::regex("[^_</\"[:alnum:]](" + original_namespace + ")[^_[:alnum:]]")
		);
	}

	// Get regex for matching header file original name
	for (const std::string& original_header : data.header_file_names_original) {
		data.regex_header_file_name_original.push_back(
			std::regex("[</\"](" + original_header + ")\\.")
		);
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
		
		if (!utility::create_directories_for(output_path)) 
			[[unlikely]]
		{
			std::cerr << "An error occure while creating directories for " << output_path;
			return false;
		}

		// Output file
		std::ofstream output_file(output_path, std::ios::trunc | std::ios::binary);

		if (!output_file.is_open()) 
			[[unlikely]]
		{
			std::cerr << "An error occure while opening " << output_path;
			return false;
		}
	
		// File contents
		std::string contents(static_cast<std::size_t>(std::filesystem::file_size(input_file_path)), NULL);

		input_file.read(contents.data(), contents.length());

		std::cout << "Editing: " << output_path << '\n';

		// Replace namespace
		utility::replace(contents, "godot", config::godot_namespace_result);

		// Iterator of namespace names original
		std::list<std::string>::const_iterator it_namespace_original = data.namespace_names_original.cbegin();
		// Iterator of namespace names snake case
		std::list<std::string>::const_iterator it_namespace_snake_case = data.namespace_names_snake_case.cbegin();
		// Iterator of regex for matching namespace original name
		std::list<std::regex>::const_iterator it_regex_namespace_original = data.regex_namespace_name_original.cbegin();

		// Edit namespace names.
		for (;
			// Only check 1 iterator since they all have the same size
			it_namespace_original != data.namespace_names_original.cend();
			it_namespace_original++, it_namespace_snake_case++, it_regex_namespace_original++)
		{
			// Checks whether class/struct original name is found for faster process
			if (contents.find(*it_namespace_original) != std::string::npos) {
				// Replace class/struct names to snake case
				utility::replace(contents, *it_regex_namespace_original, *it_namespace_snake_case);
			}
		}

		// Iterator of class names original
		std::list<std::string>::const_iterator it_class_original = data.class_names_original.cbegin();
		// Iterator of class names snake case
		std::list<std::string>::const_iterator it_class_snake_case = data.class_names_snake_case.cbegin();
		// Iterator of class names dummy iterator
		std::list<std::string>::const_iterator it_class_dummy = data.class_names_dummy.cbegin();
		// Iterator of regex for matching class/struct original name
		std::list<std::regex>::const_iterator it_regex_class_original = data.regex_class_name_original.cbegin();
		// Iterator of regex for matching class/struct name in snake case
		std::list<std::regex>::const_iterator it_regex_class_snake_case = data.regex_class_name_snake_case.cbegin();

		// Edit variables, and class/struct names.
		for (;
			// Only check 1 iterator since they all have the same size
			it_class_original != data.class_names_original.cend();
			it_class_original++, it_class_snake_case++, it_class_dummy++, 
			it_regex_class_original++, it_regex_class_snake_case++)
		{
			// Checks whether class/struct name in snake case is found for faster process
			if (contents.find(*it_class_snake_case) != std::string::npos) {
				// Replace variables only that use class/struct names in snake case
				utility::replace(contents, *it_regex_class_snake_case, *it_class_dummy);
			}

			// Checks whether class/struct original name is found for faster process
			if (contents.find(*it_class_original) != std::string::npos) {
				// Replace class/struct names to snake case
				utility::replace(contents, *it_regex_class_original, *it_class_snake_case);
			}
		}

		// Iterator of header file original names
		std::list<std::string>::const_iterator it_header_original = data.header_file_names_original.cbegin();
		// Iterator of header file snake case iterator
		std::list<std::string>::const_iterator it_header_snake_case = data.header_file_names_snake_case.cbegin();
		// Iterator of regex for matching header file original name
		std::list<std::regex>::const_iterator it_regex_header_original = data.regex_header_file_name_original.cbegin();

		// Edit include file names.
		for (;
			// Only check 1 iterator since they all have the same size
			it_header_original != data.header_file_names_original.cend();
			it_header_original++, it_header_snake_case++, it_regex_header_original++)
		{
			// Checks whether header file original name is found for faster process
			if (contents.find(*it_header_original) != std::string::npos) {
				// Replace include file names to snake case
				utility::replace(contents, *it_regex_header_original, *it_header_snake_case);
			}
		}

		output_file << contents;
	}

	return true;
}

/******************************
	Public Static Methods - End
******************************/