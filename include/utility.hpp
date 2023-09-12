#ifndef GODOT_CPP_SNAKE_CASE_UTILITY
#define GODOT_CPP_SNAKE_CASE_UTILITY

// Main Header

// External Dependencies
#include <list>
#include <string>
#include <string_view>
#include <filesystem>
#include <regex>

// Internal Dependencies

// Functions
namespace utility {
	/**
	@brief Makes [input] into snake case naming convention. Leaving unconverted 
		if found underscore in the [input]
	@param input String with camel case to convert
	@return [input] with snake case naming convention
	*/
	[[nodiscard]]
	extern
	std::string
	to_snake_case(
		const std::string_view input
	);

	/**
	@brief Converts [ch] to lowercase
	@param ch The character to conver to lowercase
	@return [ch] in lowercase
	*/
	[[nodiscard]]
	extern inline
	char
	to_lowercase(
		const char ch
	) noexcept;

	/**
	@brief Merges [source] to [destination]. Ignores value if already exist, so the 
		[destination] will have unique values
	@param destination Destination std::list
	@param source std::list to transfer
	*/
	extern
	void
	merge(
		std::list<std::string>& destination,
		std::list<std::string>&& source
	);

	/**
	@brief Insert [value] to specified [list] sortly with slow algorithm
	@param list Container to insert [value]
	@param value Value to insert in the container
	*/
	extern
	void
	insertion_sort(
		std::list<std::string>& destination,
		std::string&& value
	);

	/**
	@brief Creates directories for specified [file_path] so the file can be created
		there
	@param file_path Path of the file
	@return true on success or false on failure
	*/
	extern
	bool
	create_directories_for(
		const std::filesystem::path& file_path
	);

	/**
	@brief Replace all matches [regex] at position 1 to [to]
	@param string The string to replace
	@param regex The regular expression to match
	@param [to] Result
	*/
	extern
	void
	replace(
		std::string& string,
		const std::regex& regex,
		const std::string& to
	);

	/**
	@brief Replace all matches whole word from [from] to [to]
	@param string The string where [from] are
	@param from The string to replace
	@param [to] Result
	*/
	extern inline
	void
	replace(
		std::string& string,
		const std::string& from,
		const std::string& to
	);

	/**
	@brief Checks whether the specified [file_path] is C++ file
	@param file_path path of the file to check
	@retur true if the file is C++ file otherwise false
	*/
	[[nodiscard]]
	extern inline
	bool
	is_cpp_file(
		const std::filesystem::path& file_path
	);

	/**
	@brief Checks whether the specified [file_extension] is C++ file extension
	@param file_extension file extension to check
	@retur true if the [file_extension] is C++ file extension otherwise false
	*/
	[[nodiscard]]
	extern
	bool
	is_cpp_file(
		const std::string& file_extension
	);

	/**
	@brief Checks whether the specified [file_path] is C++ header file
	@param file_path file extension to check
	@retur true if the file is C++ header file otherwise false
	*/
	[[nodiscard]]
	extern inline
	bool
	is_cpp_header_file(
		const std::filesystem::path& file_path
	);

	/**
	@brief Checks whether the specified [file_extension] is C++ header file extension
	@param file_extension file extension to check
	@retur true if the [file_extension] is C++ header file extension otherwise false
	*/
	[[nodiscard]]
	extern inline
	bool
	is_cpp_header_file(
		const std::string& file_extension
	);
}

// Inline File
#include <utility.ipp>

#endif // GODOT_SNAKE_CASE_CPP_UTILITY