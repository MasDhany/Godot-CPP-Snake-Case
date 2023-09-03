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
	@brief Convert camel case to snake case
	@param [input] String with camel case to convert
	@return Converted camel case to snake case
	*/
	[[nodiscard]]
	std::string
	camel_to_snake(
		const std::string_view input
	);
}

// Inline File

#endif // GODOT_SNAKE_CASE_CPP_UTILITY