// Main Header
#ifndef GODOT_SNAKE_CASE_CPP_UTILITY
#include <utility.hpp>
#endif // GODOT_SNAKE_CASE_CPP_UTILITY

// External Dependencies
#include <cctype>

// Internal Dependencies

/******************************
	Functions - Begin
******************************/

[[nodiscard]]
inline
char
utility::to_lowercase(
	const char ch
) noexcept
{
	return static_cast<char>(std::tolower(ch));
}

/******************************
	Functions - End
******************************/