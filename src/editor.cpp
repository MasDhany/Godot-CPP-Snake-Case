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

[[nodiscard]]
std::string
editor::get_header_text()
{
	// File stream of header.txt
	std::ifstream header_txt_file("header.txt", std::ios::binary);

	if (!header_txt_file.is_open()) {
		return std::string();
	}

	// Header text to get
	std::string text(static_cast<std::size_t>(std::filesystem::file_size("header.txt")), NULL);

	header_txt_file.read(text.data(), text.length());

	// Add a line feed at the end if the user hasn't already added it.
	if (!text.empty() && text.back() != '\n') {
		text += '\n';
	}

	return text;
}

[[nodiscard]]
std::string
editor::get_footer_text()
{
	// File stream of footer.txt
	std::ifstream footer_txt_file("footer.txt", std::ios::binary);

	if (!footer_txt_file.is_open()) {
		return std::string();
	}

	// Footer text to get
	std::string text(static_cast<std::size_t>(std::filesystem::file_size("footer.txt")), NULL);

	footer_txt_file.read(text.data(), text.length());

	// Add a line feed at the beginning if the user hasn't already added it.
	if (!text.empty() && text.front() != '\n') {
		text.insert(text.begin(), '\n');
	}

	return text;
}

[[nodiscard]]
std::filesystem::path
editor::change_input_file_path_to_output(
	const std::filesystem::path& file_path
)
{
	// File name of input file path
	const std::string file_name = file_path.filename().replace_extension("").string();
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
std::list<editor::file_entry>
editor::get_file_entries_from_directory(
	const std::filesystem::path& directory
)
{
	// List of directory's file entries
	std::list<editor::file_entry> file_entries;

	std::cout << "Looking for files in: " << directory << '\n';

	for (const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator(directory)) {
		if (entry.is_directory()) 
			[[unlikely]]
		{
			utility::merge(file_entries, editor::get_file_entries_from_directory(entry.path()));
			continue;
		}

		// Path of the file entry
		std::filesystem::path entry_path = entry.path();

		if (!entry_path.has_extension()) {
			continue;
		}

		// Current file extension
		const std::string file_extension = entry_path.extension().string();

		if (utility::is_cpp_file(file_extension)) {
			file_entries.emplace_back(
				entry, 
				std::move(entry_path),
				utility::is_cpp_header_file(file_extension) ?
					editor::cpp_file_type_header
				:
					editor::cpp_file_type_source
			);
		}
	}

	return file_entries;
}

[[nodiscard]]
editor::metadata
editor::get_metadata()
{
	// Metadata
	editor::metadata data;

	data.file_entries = editor::get_file_entries_from_directory(config::input_directory);

	// Parse header files
	for (const editor::file_entry& file_entry : data.file_entries) {
		if (file_entry.type != editor::cpp_file_type_header) {
			continue;
		}

		// File name
		std::string file_name = file_entry.path.filename().replace_extension("").string();

		std::cout << "Parsing: " << file_entry.path << '\n';

		utility::merge_unique(data.class_names_original, parser::parse_class(file_entry.path));
		utility::merge_unique(data.namespace_names_original, parser::parse_namespace(file_entry.path));

		data.header_file_names_snake_case.push_back(utility::to_snake_case(file_name));
		data.header_file_names_original.push_back(std::move(file_name));
	}

	// Get class/struct names in snake case, regex for matching original name, and regex for matching name in snake case.
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_snake_case.push_back(utility::to_snake_case(original_class));
		
		data.regex_class_name_original.emplace_back(
			"[^_\"[:alnum:]](" + original_class + ")[^_\"[:alnum:]]",
			std::regex::ECMAScript
		);

		data.regex_class_name_snake_case.emplace_back(
			"[^_</\"[:alnum:]](" + data.class_names_snake_case.back() + ")[^_[:alnum:]]",
			std::regex::ECMAScript
		);
	}

	// Get dummy class names
	for (const std::string& original_class : data.class_names_original) {
		data.class_names_dummy.push_back("_" + original_class);
	}

	// Get namepace names in snake case, and regex for matching original name.
	for (const std::string& original_namespace : data.namespace_names_original) {
		data.namespace_names_snake_case.push_back(utility::to_snake_case(original_namespace));

		data.regex_namespace_name_original.emplace_back(
			"[^_</\"[:alnum:]](" + original_namespace + ")[^_[:alnum:]]",
			std::regex::ECMAScript
		);
	}

	// Get regex for matching header file original name
	for (const std::string& original_header : data.header_file_names_original) {
		data.regex_header_file_name_original.emplace_back(
			"[</\"](" + original_header + ")\\.",
			std::regex::ECMAScript
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

	for (const editor::file_entry& entry : data.file_entries) {
		// Input file
		std::ifstream input_file(entry.path, std::ios::binary);

		if (!input_file.is_open()) 
			[[unlikely]]
		{
			std::cerr << "An error occure while opening " << entry.path;
			return false;
		}
		
		// Output file path
		const std::filesystem::path output_path = editor::change_input_file_path_to_output(entry.path);
		
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
	
		// Regex for matching godot namespace
		static const std::regex regex_godot("[^_[:alnum:]](godot)[^_[:alnum:]]", std::regex::ECMAScript);

		// File contents
		std::string contents(static_cast<std::size_t>(std::filesystem::file_size(entry.path)), NULL);

		input_file.read(contents.data(), contents.length());

		std::cout << "Editing: " << output_path << '\n';

		// Replace godot namespace
		utility::replace(contents, "godot", regex_godot, config::godot_namespace_result);

		// Iterator of namespace names original
		std::vector<std::string>::const_iterator it_namespace_original = data.namespace_names_original.cbegin();
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
			// Replace class/struct names to snake case
			utility::replace(contents, *it_namespace_original, *it_regex_namespace_original, *it_namespace_snake_case);
		}

		// Iterator of class names original
		std::vector<std::string>::const_iterator it_class_original = data.class_names_original.cbegin();
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
			// Replace variables only that use class/struct names in snake case
			utility::replace(contents, *it_class_snake_case, *it_regex_class_snake_case, *it_class_dummy);

			// Replace class/struct names to snake case
			utility::replace(contents, *it_class_original, *it_regex_class_original, *it_class_snake_case);
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
			// Replace include file names to snake case
			utility::replace(contents, *it_header_original, *it_regex_header_original, *it_header_snake_case);
		}

		// Checks if the file is a header file
		if (entry.type == editor::cpp_file_type_header) {
			if (!editor::header_text.empty()) {
				contents.insert(0, editor::header_text);
			}

			if (!editor::footer_text.empty()) {
				contents += editor::footer_text;
			}
		}

		output_file << contents;
	}

	return true;
}

/******************************
	Public Static Methods - End
******************************/