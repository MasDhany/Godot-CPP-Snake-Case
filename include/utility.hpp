#ifndef GODOT_CPP_SNAKE_CASE_UTILITY
#define GODOT_CPP_SNAKE_CASE_UTILITY

// Main Header

// External Dependencies
#include <list>
#include <string>
#include <string_view>
#include <filesystem>
#include <regex>
#include <type_traits>

// Internal Dependencies

// Functions
namespace utility {
	/**
	@brief Checks if specified [ch] is uppercase
	@param ch A character to check
	@return true if uppercase otherwise false
	*/
	[[nodiscard]]
	extern constexpr
	bool
	is_uppercase(
		const char ch
	) noexcept;

	/**
	@brief Checks if specified [input] is snake case
	@param input String to check
	@return true if snake case otherwise false
	*/
	[[nodiscard]]
	extern constexpr
	bool
	is_snake_case(
		const std::string_view input
	) noexcept;

	/**
	@brief Makes [input] into snake case naming convention
	@param input String to convert
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
	@brief Merges [source] to [destination]
	@param destination Destination container
	@param source container to transfer
	*/
	template<
		// Type of the destination container
		class DestinationContainer,
		// Type of the source container
		class SourceContainer,
		// Checks if the destination and source container have the same value type
		typename = std::enable_if_t<
			std::is_same_v<
				typename DestinationContainer::value_type,
				typename SourceContainer::value_type
			>
		>
	>
	extern
	void
	merge(
		DestinationContainer& destination,
		SourceContainer&& source
	);

	/**
	@brief Merges [source] to [destination]. Ignores value if already exist, so the 
		[destination] will have unique values
	@param destination Destination container
	@param source container to transfer
	*/
	template<
		// Type of the destination container
		class DestinationContainer,
		// Type of the source container
		class SourceContainer,
		// Checks if the destination and source container have the same value type
		typename = std::enable_if_t<
			std::is_same_v<
				typename DestinationContainer::value_type,
				typename SourceContainer::value_type
			>
		>
	>
	extern
	void
	merge_unique(
		DestinationContainer& destination,
		SourceContainer&& source
	);

	/**
	@brief Insert [value] to specified [destination] sortly with slow algorithm
	@param destination Container to insert [value]
	@param value Value to insert in the container
	*/
	template<
		// Type of the container
		class Container
	>
	extern
	void
	insertion_sort(
		Container& destination,
		typename Container::value_type&& value
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
	@param base_find The string that is intended to replace
	@param regex The regular expression to match
	@param [to] Result
	*/
	extern
	void
	replace(
		std::string& string,
		const std::string& base_find,
		const std::regex& regex,
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