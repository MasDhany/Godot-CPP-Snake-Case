// Main Header
#include <utility.hpp>

// External Dependencies
#include <cctype>
#include <string>
#include <string_view>

// Internal Dependencies

/******************************
	Functions - Begin
******************************/

[[nodiscard]]
std::string
utility::camel_to_snake(
	const std::string_view input
)
{
	if (input.empty()) {
		return std::string();
	}

	// Converted camel case to snake case
	std::string output = {};
	// Whether previous character was upper case
	bool previous_was_upper_case = std::isupper(input.front());
	// Whether previous character was digit
	bool previous_was_digit = std::isdigit(input.front());

	output.reserve(input.length());

	if (std::isalpha(input.front())) {
		output += static_cast<char>(std::tolower(input.front()));
	}
	else {
		output += input.front();
	}

	// Increase by 1 on initialization as the first character has been checked and pushed
	for (std::string_view::const_iterator it = (input.cbegin() + 1);
		it != input.cend();)
	{
		// Current character and increment the iterator, so we can know if we're at the end
		const char& ch = *it++;
		// Whether current character is digit
		const bool current_is_digit = std::isdigit(ch);

		if (current_is_digit) {
			output += static_cast<char>(std::tolower(ch));
			
			previous_was_upper_case = false;
			previous_was_digit = true;
			continue;
		}

		// Whether current character is upper case
		const bool current_is_upper_case = std::isupper(ch);

		if (previous_was_digit) {
			if (it == input.end()) {
				output += static_cast<char>(std::tolower(ch));
				break;
			}
			else if (it != input.end()) {
				output += "_";
				output += static_cast<char>(std::tolower(ch));
			}

			previous_was_upper_case = current_is_upper_case;
			previous_was_digit = false;
			continue;
		}

		if (current_is_upper_case) {
			if (previous_was_upper_case) {
				output += static_cast<char>(std::tolower(ch));
			}
			else if (!previous_was_upper_case) {
				output += "_";
				output += static_cast<char>(std::tolower(ch));
			}

			previous_was_upper_case = true;
			previous_was_digit = false;
			continue;
		}

		if (previous_was_upper_case) {
			if (current_is_upper_case) {
				output += static_cast<char>(std::tolower(ch));
			}
			else if (!current_is_upper_case) {
				output += ch;
			}
		}
		else if (!previous_was_upper_case) {
			if (current_is_upper_case) {
				output += "_";
				output += static_cast<char>(std::tolower(ch));
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

/******************************
	Functions - End
******************************/