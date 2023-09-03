#ifndef GODOT_CPP_SNAKE_CASE_UTILITY
#define GODOT_CPP_SNAKE_CASE_UTILITY

// Main Header

// External Dependencies
#include <string>
#include <string_view>

// Internal Dependencies

// Functions
namespace utility {
	/**
	@brief Make [input] into snake case naming convention. Leaving unconverted 
		if found underscore in the [input]
	@param [input] String with camel case to convert
	@return [input] with snake case naming convention
	*/
	[[nodiscard]]
	std::string
	to_snake_case(
		const std::string_view input
	);
}

// Inline File

#endif // GODOT_SNAKE_CASE_CPP_UTILITY