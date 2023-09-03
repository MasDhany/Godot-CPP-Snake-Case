#ifndef GODOT_CPP_SNAKE_CASE_UTILITY
#define GODOT_CPP_SNAKE_CASE_UTILITY

// Main Header

// External Dependencies
#include <list>
#include <string>
#include <string_view>

// Internal Dependencies

// Functions
namespace utility {
	/**
	@brief Makes [input] into snake case naming convention. Leaving unconverted 
		if found underscore in the [input]
	@param [input] String with camel case to convert
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
	@param [ch] The character to conver to lowercase
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
	@param [destination] Destination std::list
	@param [source] std::list to transfer
	*/
	extern
	void
	merge(
		std::list<std::string>& destination,
		std::list<std::string>&& source
	);

	/**
	@brief Insert [value] to specified [list] sortly with slow algorithm
	@param [list] Container to insert [value]
	@param [value] Value to insert in the container
	*/
	extern
	void
	insertion_sort(
		std::list<std::string>& destination,
		std::string&& value
	);
}

// Inline File
#include <utility.ipp>

#endif // GODOT_SNAKE_CASE_CPP_UTILITY