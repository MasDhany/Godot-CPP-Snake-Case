// Main Header
#include <utility.hpp>

// External Dependencies
#include <cctype>
#include <string>
#include <string_view>
#include <algorithm>

// Internal Dependencies

/******************************
	Functions - Begin
******************************/

[[nodiscard]]
std::string
utility::to_snake_case(
	const std::string_view input
)
{
	if (input.empty()) {
		return std::string();
	}

	// Leaving unconverted if found underscore
	if (input.find('_') != std::string_view::npos) {
		return std::string(input);
	}

	// Front character of input
	const char front_input = input.front();
	// Result
	std::string output = {};
	// Whether previous character was upper case
	bool previous_was_upper_case = std::isupper(front_input);
	// Whether previous character was digit
	bool previous_was_digit = std::isdigit(front_input);

	output.reserve(input.length());

	if (std::isalpha(front_input)) {
		output += utility::to_lowercase(front_input);
	}
	else {
		output += front_input;
	}

	// Increase by 1 on initialization as the first character has been checked and pushed
	for (decltype(input)::const_iterator it = (input.cbegin() + 1);
		it != input.cend();)
	{
		// Current character and increment the iterator, so we can know if we're at the end
		const char& ch = *it++;
		// Whether current character is digit
		const bool current_is_digit = std::isdigit(ch);

		if (current_is_digit) {
			output += utility::to_lowercase(ch);
			
			previous_was_upper_case = false;
			previous_was_digit = true;
			continue;
		}

		// Whether current character is upper case
		const bool current_is_upper_case = std::isupper(ch);

		if (previous_was_digit) {
			if (it == input.end()) {
				output += utility::to_lowercase(ch);
				break;
			}
			else if (it != input.end()) {
				output += '_';
				output += utility::to_lowercase(ch);
			}

			previous_was_upper_case = current_is_upper_case;
			previous_was_digit = false;
			continue;
		}

		if (current_is_upper_case) {
			if (previous_was_upper_case) {
				output += utility::to_lowercase(ch);
			}
			else if (!previous_was_upper_case) {
				output += '_';
				output += utility::to_lowercase(ch);
			}

			previous_was_upper_case = true;
			previous_was_digit = false;
			continue;
		}

		if (previous_was_upper_case) {
			if (current_is_upper_case) {
				output += utility::to_lowercase(ch);
			}
			else if (!current_is_upper_case) {
				output += ch;
			}
		}
		else if (!previous_was_upper_case) {
			if (current_is_upper_case) {
				output += '_';
				output += utility::to_lowercase(ch);
			}
			else if (!current_is_upper_case) {
				output += ch;
			}
		}

		previous_was_upper_case = current_is_upper_case;
		previous_was_digit = false;
	}

	return output;
}

void
utility::merge(
	std::list<std::string>& destination,
	std::list<std::string>&& source
)
{
	for (std::string& source_value : source) {
		// Checks if current value is already exist
		if (std::binary_search(destination.begin(), destination.end(), source_value)) {
			continue;
		}

		utility::insertion_sort(destination, std::move(source_value));
	}
}

void
utility::insertion_sort(
	std::list<std::string>& destination,
	std::string&& value
)
{
	for (std::list<std::string>::const_iterator it = destination.cbegin();
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

/******************************
	Functions - End
******************************/