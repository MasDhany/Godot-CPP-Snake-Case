/*************************************************************************/
/*  string.cpp                                                           */
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

#include "string.hpp"

#include "array.hpp"
#include "godot_global.hpp"
#include "node_path.hpp"
#include "pool_arrays.hpp"
#include "variant.hpp"

#include <gdnative/string.h>

#include <string.h>

namespace gd {

gd::char_string::~char_string() {
	gd::api->godot_char_string_destroy(&_char_string);
}

int gd::char_string::length() const {
	return gd::api->godot_char_string_length(&_char_string);
}

const char *gd::char_string::get_data() const {
	return gd::api->godot_char_string_get_data(&_char_string);
}

string string::num(double p_num, int p_decimals) {
	return string(gd::api->godot_string_num_with_decimals(p_num, p_decimals));
}

string string::num_scientific(double p_num) {
	return string(gd::api->godot_string_num_scientific(p_num));
}

string string::num_real(double p_num) {
	return string(gd::api->godot_string_num_real(p_num));
}

string string::num_int64(int64_t p_num, int base, bool capitalize_hex) {
	return string(gd::api->godot_string_num_int64_capitalized(p_num, base, capitalize_hex));
}

string string::chr(godot_char_type p_char) {
	return string(gd::api->godot_string_chr(p_char));
}

string string::md5(const uint8_t *p_md5) {
	return string(gd::api->godot_string_md5(p_md5));
}

string string::hex_encode_buffer(const uint8_t *p_buffer, int p_len) {
	return string(gd::api->godot_string_hex_encode_buffer(p_buffer, p_len));
}

gd::string::string() {
	gd::api->godot_string_new(&_godot_string);
}

string::string(const char *contents) {
	gd::api->godot_string_new(&_godot_string);
	gd::api->godot_string_parse_utf8(&_godot_string, contents);
}

string::string(const wchar_t *contents) {
	gd::api->godot_string_new_with_wide_string(&_godot_string, contents, wcslen(contents));
}

string::string(const wchar_t c) {
	gd::api->godot_string_new_with_wide_string(&_godot_string, &c, 1);
}

string::string(const string &other) {
	gd::api->godot_string_new_copy(&_godot_string, &other._godot_string);
}

string::string(string &&other) {
	gd::api->godot_string_new_copy(&_godot_string, &other._godot_string);
}

string::~string() {
	gd::api->godot_string_destroy(&_godot_string);
}

wchar_t &string::operator[](const int idx) {
	return *const_cast<wchar_t *>(gd::api->godot_string_operator_index(&_godot_string, idx));
}

wchar_t string::operator[](const int idx) const {
	return *gd::api->godot_string_operator_index((godot_string *)&_godot_string, idx);
}

int string::length() const {
	return gd::api->godot_string_length(&_godot_string);
}

void string::operator=(const string &s) {
	gd::api->godot_string_destroy(&_godot_string);
	gd::api->godot_string_new_copy(&_godot_string, &s._godot_string);
}

void string::operator=(string &&s) {
	gd::api->godot_string_destroy(&_godot_string);
	gd::api->godot_string_new_copy(&_godot_string, &s._godot_string);
}

bool string::operator==(const string &s) const {
	return gd::api->godot_string_operator_equal(&_godot_string, &s._godot_string);
}

bool string::operator!=(const string &s) const {
	return !(*this == s);
}

string string::operator+(const string &s) const {
	return string(gd::api->godot_string_operator_plus(&_godot_string, &s._godot_string));
}

void string::operator+=(const string &s) {
	*this = string(gd::api->godot_string_operator_plus(&_godot_string, &s._godot_string));
}

void string::operator+=(const wchar_t c) {
	string _to_be_added = string(c);
	*this = string(gd::api->godot_string_operator_plus(&_godot_string, &_to_be_added._godot_string));
}

bool string::operator<(const string &s) const {
	return gd::api->godot_string_operator_less(&_godot_string, &s._godot_string);
}

bool string::operator<=(const string &s) const {
	return gd::api->godot_string_operator_less(&_godot_string, &s._godot_string) ||
		   (*this == s);
}

bool string::operator>(const string &s) const {
	return !(*this <= s);
}

bool string::operator>=(const string &s) const {
	return !(*this < s);
}

string::operator node_path() const {
	return node_path(*this);
}

const wchar_t *string::unicode_str() const {
	return gd::api->godot_string_wide_str(&_godot_string);
}

char *string::alloc_c_string() const {
	godot_char_string contents = gd::api->godot_string_utf8(&_godot_string);

	int length = gd::api->godot_char_string_length(&contents);

	char *result = (char *)gd::api->godot_alloc(length + 1);

	if (result) {
		memcpy(result, gd::api->godot_char_string_get_data(&contents), length + 1);
	}

	gd::api->godot_char_string_destroy(&contents);

	return result;
}

char_string string::utf8() const {
	char_string ret;

	ret._char_string = gd::api->godot_string_utf8(&_godot_string);

	return ret;
}

char_string string::ascii(bool p_extended) const {
	char_string ret;

	if (p_extended)
		ret._char_string = gd::api->godot_string_ascii_extended(&_godot_string);
	else
		ret._char_string = gd::api->godot_string_ascii(&_godot_string);

	return ret;
}

string operator+(const char *a, const string &b) {
	return string(a) + b;
}

string operator+(const wchar_t *a, const string &b) {
	return string(a) + b;
}

bool string::begins_with(const string &p_string) const {
	return gd::api->godot_string_begins_with(&_godot_string, &p_string._godot_string);
}

bool string::begins_with_char_array(const char *p_char_array) const {
	return gd::api->godot_string_begins_with_char_array(&_godot_string, p_char_array);
}

pool_string_array string::bigrams() const {
	godot_array arr = gd::api->godot_string_bigrams(&_godot_string);
	return array(arr);
}

string string::c_escape() const {
	return string(gd::api->godot_string_c_escape(&_godot_string));
}

string string::c_unescape() const {
	return string(gd::api->godot_string_c_unescape(&_godot_string));
}

string string::capitalize() const {
	return string(gd::api->godot_string_capitalize(&_godot_string));
}

bool string::empty() const {
	return gd::api->godot_string_empty(&_godot_string);
}

bool string::ends_with(const string &p_string) const {
	return gd::api->godot_string_ends_with(&_godot_string, &p_string._godot_string);
}

void string::erase(int position, int chars) {
	gd::api->godot_string_erase(&_godot_string, position, chars);
}

int string::find(string p_what, int p_from) const {
	return gd::api->godot_string_find_from(&_godot_string, p_what._godot_string, p_from);
}

int string::find_last(string p_what) const {
	return gd::api->godot_string_find_last(&_godot_string, p_what._godot_string);
}

int string::findn(string p_what, int p_from) const {
	return gd::api->godot_string_findn_from(&_godot_string, p_what._godot_string, p_from);
}

string string::format(variant values) const {
	return string(gd::api->godot_string_format(&_godot_string, (godot_variant *)&values));
}

string string::format(variant values, string placeholder) const {
	godot_char_string contents = gd::api->godot_string_utf8(&placeholder._godot_string);
	string new_string(gd::api->godot_string_format_with_custom_placeholder(&_godot_string, (godot_variant *)&values, gd::api->godot_char_string_get_data(&contents)));
	gd::api->godot_char_string_destroy(&contents);

	return new_string;
}

string string::get_base_dir() const {
	return string(gd::api->godot_string_get_base_dir(&_godot_string));
}

string string::get_basename() const {
	return string(gd::api->godot_string_get_basename(&_godot_string));
}

string string::get_extension() const {
	return string(gd::api->godot_string_get_extension(&_godot_string));
}

string string::get_file() const {
	return string(gd::api->godot_string_get_file(&_godot_string));
}

int string::hash() const {
	return gd::api->godot_string_hash(&_godot_string);
}

int string::hex_to_int() const {
	return gd::api->godot_string_hex_to_int(&_godot_string);
}

string string::insert(int position, string what) const {
	return string(gd::api->godot_string_insert(&_godot_string, position, what._godot_string));
}

bool string::is_abs_path() const {
	return gd::api->godot_string_is_abs_path(&_godot_string);
}

bool string::is_rel_path() const {
	return gd::api->godot_string_is_rel_path(&_godot_string);
}

bool string::is_subsequence_of(string text) const {
	return gd::api->godot_string_is_subsequence_of(&_godot_string, &text._godot_string);
}

bool string::is_subsequence_ofi(string text) const {
	return gd::api->godot_string_is_subsequence_ofi(&_godot_string, &text._godot_string);
}

bool string::is_valid_float() const {
	return gd::api->godot_string_is_valid_float(&_godot_string);
}

bool string::is_valid_html_color() const {
	return gd::api->godot_string_is_valid_html_color(&_godot_string);
}

bool string::is_valid_identifier() const {
	return gd::api->godot_string_is_valid_identifier(&_godot_string);
}

bool string::is_valid_integer() const {
	return gd::api->godot_string_is_numeric(&_godot_string);
}

bool string::is_valid_ip_address() const {
	return gd::api->godot_string_is_valid_ip_address(&_godot_string);
}

string string::json_escape() const {
	return string(gd::api->godot_string_json_escape(&_godot_string));
}

string string::left(int position) const {
	return string(gd::api->godot_string_left(&_godot_string, position));
}

bool string::match(string expr) const {
	return gd::api->godot_string_match(&_godot_string, &expr._godot_string);
}

bool string::matchn(string expr) const {
	return gd::api->godot_string_match(&_godot_string, &expr._godot_string);
}

pool_byte_array string::md5_buffer() const {
	godot_pool_byte_array arr = gd::api->godot_string_md5_buffer(&_godot_string);
	return pool_byte_array(arr);
}

string string::md5_text() const {
	return string(gd::api->godot_string_md5_text(&_godot_string));
}

int string::ord_at(int at) const {
	return gd::api->godot_string_ord_at(&_godot_string, at);
}

string string::pad_decimals(int digits) const {
	return string(gd::api->godot_string_pad_decimals(&_godot_string, digits));
}

string string::pad_zeros(int digits) const {
	return string(gd::api->godot_string_pad_zeros(&_godot_string, digits));
}

string string::percent_decode() const {
	return string(gd::api->godot_string_percent_decode(&_godot_string));
}

string string::percent_encode() const {
	return string(gd::api->godot_string_percent_encode(&_godot_string));
}

string string::plus_file(string file_) const {
	return string(gd::api->godot_string_plus_file(&_godot_string, &file_._godot_string));
}

string string::replace(string p_key, string p_with) const {
	return string(gd::api->godot_string_replace(&_godot_string, p_key._godot_string, p_with._godot_string));
}

string string::replacen(string what, string forwhat) const {
	return string(gd::api->godot_string_replacen(&_godot_string, what._godot_string, forwhat._godot_string));
}

int string::rfind(string p_what, int p_from) const {
	return gd::api->godot_string_rfind_from(&_godot_string, p_what._godot_string, p_from);
}

int string::rfindn(string p_what, int p_from) const {
	return gd::api->godot_string_rfindn_from(&_godot_string, p_what._godot_string, p_from);
}

string string::right(int position) const {
	return string(gd::api->godot_string_right(&_godot_string, position));
}

pool_byte_array string::sha256_buffer() const {
	godot_pool_byte_array arr = gd::api->godot_string_sha256_buffer(&_godot_string);
	return pool_byte_array(arr);
}

string string::sha256_text() const {
	return string(gd::api->godot_string_sha256_text(&_godot_string));
}

float string::similarity(string text) const {
	return gd::api->godot_string_similarity(&_godot_string, &text._godot_string);
}

// TODO Suport allow_empty
pool_string_array string::split(string divisor, bool /*allow_empty*/) const {
	godot_array arr = gd::api->godot_string_split(&_godot_string, &divisor._godot_string);
	return array(arr);
}

// TODO Suport allow_empty
pool_int_array string::split_ints(string divisor, bool /*allow_empty*/) const {
	godot_array arr = gd::api->godot_string_split_floats(&_godot_string, &divisor._godot_string);
	return array(arr);
}

// TODO Suport allow_empty
pool_real_array string::split_floats(string divisor, bool /*allow_empty*/) const {
	// TODO The gdnative API returns godot_array, when according to the doc, it should have been godot_pool_real_array
	godot_array arr = gd::api->godot_string_split_floats(&_godot_string, &divisor._godot_string);
	array wrapped_array(arr);
	return pool_real_array(wrapped_array);
}

string string::strip_edges(bool left, bool right) const {
	return string(gd::api->godot_string_strip_edges(&_godot_string, left, right));
}

string string::substr(int from, int len) const {
	return string(gd::api->godot_string_substr(&_godot_string, from, len));
}

float string::to_float() const {
	return gd::api->godot_string_to_float(&_godot_string);
}

int64_t string::to_int() const {
	return gd::api->godot_string_to_int(&_godot_string);
}

string string::to_lower() const {
	return string(gd::api->godot_string_to_lower(&_godot_string));
}

string string::to_upper() const {
	return string(gd::api->godot_string_to_upper(&_godot_string));
}

string string::xml_escape() const {
	return string(gd::api->godot_string_xml_escape(&_godot_string));
}

string string::xml_unescape() const {
	return string(gd::api->godot_string_xml_unescape(&_godot_string));
}

signed char string::casecmp_to(string p_str) const {
	return gd::api->godot_string_casecmp_to(&_godot_string, &p_str._godot_string);
}

signed char string::nocasecmp_to(string p_str) const {
	return gd::api->godot_string_nocasecmp_to(&_godot_string, &p_str._godot_string);
}

signed char string::naturalnocasecmp_to(string p_str) const {
	return gd::api->godot_string_naturalnocasecmp_to(&_godot_string, &p_str._godot_string);
}

string string::dedent() const {
	godot_string s = gd::core_1_1_api->godot_string_dedent(&_godot_string);
	return string(s);
}

pool_string_array string::rsplit(const string &divisor, const bool allow_empty, const int maxsplit) const {
	godot_pool_string_array arr =
			gd::core_1_1_api->godot_string_rsplit(&_godot_string, &divisor._godot_string, allow_empty, maxsplit);
	return pool_string_array(arr);
}

string string::rstrip(const string &chars) const {
	godot_string s = gd::core_1_1_api->godot_string_rstrip(&_godot_string, &chars._godot_string);
	return string(s);
}

string string::trim_prefix(const string &prefix) const {
	godot_string s = gd::core_1_1_api->godot_string_trim_prefix(&_godot_string, &prefix._godot_string);
	return string(s);
}

string string::trim_suffix(const string &suffix) const {
	godot_string s = gd::core_1_1_api->godot_string_trim_suffix(&_godot_string, &suffix._godot_string);
	return string(s);
}

} // namespace gd
