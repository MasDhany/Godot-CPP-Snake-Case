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

inline
void
utility::replace(
	std::string& string,
	const std::string& from,
	const std::string& to
)
{
	utility::replace(string, std::regex("[^_[:alnum:]](" + from + ")[^_[:alnum:]]"), to);
}

/******************************
	Functions - End
******************************/