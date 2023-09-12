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
constexpr
bool
utility::is_uppercase(
	const char ch
) noexcept
{
	return (ch >= 'A' && ch <= 'Z');
}

[[nodiscard]]
constexpr
bool
utility::is_snake_case(
	const std::string_view input
) noexcept
{
	for (const char ch : input) {
		if (utility::is_uppercase(ch)) {
			return false;
		}
	}

	return true;
}

[[nodiscard]]
inline
char
utility::to_lowercase(
	const char ch
) noexcept
{
	return static_cast<char>(std::tolower(ch));
}

template<class DestinationContainer, class SourceContainer, typename>
void
utility::merge(
	DestinationContainer& destination,
	SourceContainer&& source
)
{
	for (typename SourceContainer::value_type& source_value : source) {
		// Checks if current value is already exist
		if (std::binary_search(destination.cbegin(), destination.cend(), source_value)) {
			continue;
		}

		utility::insertion_sort(destination, std::move(source_value));
	}
}

template<class Container>
void
utility::insertion_sort(
	Container& destination,
	typename Container::value_type&& value
)
{
	for (typename Container::const_iterator it = destination.cbegin();
		it != destination.cend();
		it++)
	{
		if (*it >= value) {
			destination.insert(it, std::move(value));
			return;
		}
	}

	destination.push_back(std::move(value));
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