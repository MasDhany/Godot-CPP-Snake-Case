/*************************************************************************/
/*  string.hpp                                                           */
/*************************************************************************/
/*                       This file_ is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 godot engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#ifndef STRING_H
#define STRING_H

#include <gdnative/string.h>

namespace gd {

class node_path;
class variant;
class pool_byte_array;
class pool_int_array;
class pool_real_array;
class pool_string_array;
class string;

class char_string {
	friend class string;

	godot_char_string _char_string;

public:
	~char_string();

	int length() const;
	const char *get_data() const;
};

class string {
	godot_string _godot_string;

	friend class dictionary;
	friend class node_path;
	friend class variant;
	explicit inline string(godot_string contents) :
			_godot_string(contents) {}

public:
	string();
	string(const char *contents);
	string(const wchar_t *contents);
	string(const wchar_t c);
	string(const string &other);
	string(string &&other);

	~string();

	static string num(double p_num, int p_decimals = -1);
	static string num_scientific(double p_num);
	static string num_real(double p_num);
	static string num_int64(int64_t p_num, int base = 10, bool capitalize_hex = false);
	static string chr(godot_char_type p_char);
	static string md5(const uint8_t *p_md5);
	static string hex_encode_buffer(const uint8_t *p_buffer, int p_len);

	wchar_t &operator[](const int idx);
	wchar_t operator[](const int idx) const;

	void operator=(const string &s);
	void operator=(string &&s);
	bool operator==(const string &s) const;
	bool operator!=(const string &s) const;
	string operator+(const string &s) const;
	void operator+=(const string &s);
	void operator+=(const wchar_t c);
	bool operator<(const string &s) const;
	bool operator<=(const string &s) const;
	bool operator>(const string &s) const;
	bool operator>=(const string &s) const;

	operator node_path() const;

	int length() const;
	const wchar_t *unicode_str() const;
	char *alloc_c_string() const;
	char_string utf8() const;
	char_string ascii(bool p_extended = false) const;

	bool begins_with(const string &s) const;
	bool begins_with_char_array(const char *p_char_array) const;
	pool_string_array bigrams() const;
	string c_escape() const;
	string c_unescape() const;
	string capitalize() const;
	bool empty() const;
	bool ends_with(const string &text) const;
	void erase(int position, int chars);
	int find(string what, int from = 0) const;
	int find_last(string what) const;
	int findn(string what, int from = 0) const;
	string format(variant values) const;
	string format(variant values, string placeholder) const;
	string get_base_dir() const;
	string get_basename() const;
	string get_extension() const;
	string get_file() const;
	int hash() const;
	int hex_to_int() const;
	string insert(int position, string what) const;
	bool is_abs_path() const;
	bool is_rel_path() const;
	bool is_subsequence_of(string text) const;
	bool is_subsequence_ofi(string text) const;
	bool is_valid_float() const;
	bool is_valid_html_color() const;
	bool is_valid_identifier() const;
	bool is_valid_integer() const;
	bool is_valid_ip_address() const;
	string json_escape() const;
	string left(int position) const;
	bool match(string expr) const;
	bool matchn(string expr) const;
	pool_byte_array md5_buffer() const;
	string md5_text() const;
	int ord_at(int at) const;
	string pad_decimals(int digits) const;
	string pad_zeros(int digits) const;
	string percent_decode() const;
	string percent_encode() const;
	string plus_file(string file_) const;
	string replace(string what, string forwhat) const;
	string replacen(string what, string forwhat) const;
	int rfind(string what, int from = -1) const;
	int rfindn(string what, int from = -1) const;
	string right(int position) const;
	pool_byte_array sha256_buffer() const;
	string sha256_text() const;
	float similarity(string text) const;
	pool_string_array split(string divisor, bool allow_empty = true) const;
	pool_int_array split_ints(string divisor, bool allow_empty = true) const;
	pool_real_array split_floats(string divisor, bool allow_empty = true) const;
	string strip_edges(bool left = true, bool right = true) const;
	string substr(int from, int len) const;
	float to_float() const;
	int64_t to_int() const;
	string to_lower() const;
	string to_upper() const;
	string xml_escape() const;
	string xml_unescape() const;
	signed char casecmp_to(string p_str) const;
	signed char nocasecmp_to(string p_str) const;
	signed char naturalnocasecmp_to(string p_str) const;
	string dedent() const;
	pool_string_array rsplit(const string &divisor, const bool allow_empty = true, const int maxsplit = 0) const;
	string rstrip(const string &chars) const;
	string trim_prefix(const string &prefix) const;
	string trim_suffix(const string &suffix) const;
};

string operator+(const char *a, const string &b);
string operator+(const wchar_t *a, const string &b);

} // namespace gd

#endif // STRING_H
