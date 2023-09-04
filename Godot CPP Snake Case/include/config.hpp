#ifndef GODOT_CPP_SNAKE_CASE_CONFIG
#define GODOT_CPP_SNAKE_CASE_CONFIG

// Main Header

// External Dependencies
#include <string>
#include <string_view>
#include <filesystem>

// Internal Dependencies

// Variables
namespace config {
	// Input directory in string
	constexpr
	const std::string_view input_directory_string = "Godot";
	// Input directory in string
	constexpr
	const std::string_view output_directory_string = "Result";
	// The resulting godot namespace
	inline
	const std::string godot_namespace_result = "gd";
	// Input directory
	inline
	const std::filesystem::path input_directory = config::input_directory_string;
	// Output directory
	inline
	const std::filesystem::path output_directory = config::output_directory_string;
}

// Inline File

#endif // GODOT_CPP_SNAKE_CASE_CONFIG