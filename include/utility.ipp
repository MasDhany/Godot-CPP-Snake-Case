// Main Header
#ifndef GODOT_SNAKE_CASE_CPP_UTILITY
#include <utility.hpp>
#endif // GODOT_SNAKE_CASE_CPP_UTILITY

// External Dependencies
#include <cctype>
#include <regex>
#include <string>
#include <filesystem>

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

[[nodiscard]]
inline
bool
utility::is_cpp_file(
	const std::filesystem::path& file_path
)
{
	if (!file_path.has_extension()) {
		return false;
	}

	return utility::is_cpp_file(file_path.extension().string());
}

[[nodiscard]]
inline
bool
utility::is_cpp_header_file(
	const std::filesystem::path& file_path
)
{
	if (!file_path.has_extension()) {
		return false;
	}

	return utility::is_cpp_header_file(file_path.extension().string());
}

[[nodiscard]]
inline
bool
utility::is_cpp_header_file(
	const std::string& file_extension
)
{
	return (file_extension == ".hpp");
}

/******************************
	Functions - End
******************************/