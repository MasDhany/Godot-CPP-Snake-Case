/*************************************************************************/
/*  dictionary.cpp                                                       */
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

#include "dictionary.hpp"
#include "array.hpp"
#include "godot_global.hpp"
#include "variant.hpp"

namespace gd {

dictionary::dictionary() {
	gd::api->godot_dictionary_new(&_godot_dictionary);
}

dictionary::dictionary(const dictionary &other) {
	gd::api->godot_dictionary_new_copy(&_godot_dictionary, &other._godot_dictionary);
}

dictionary &dictionary::operator=(const dictionary &other) {
	gd::api->godot_dictionary_destroy(&_godot_dictionary);
	gd::api->godot_dictionary_new_copy(&_godot_dictionary, &other._godot_dictionary);
	return *this;
}

void dictionary::clear() {
	gd::api->godot_dictionary_clear(&_godot_dictionary);
}

bool dictionary::empty() const {
	return gd::api->godot_dictionary_empty(&_godot_dictionary);
}

void dictionary::erase(const variant &key) {
	gd::api->godot_dictionary_erase(&_godot_dictionary, (godot_variant *)&key);
}

bool dictionary::has(const variant &key) const {
	return gd::api->godot_dictionary_has(&_godot_dictionary, (godot_variant *)&key);
}

bool dictionary::has_all(const array &keys) const {
	return gd::api->godot_dictionary_has_all(&_godot_dictionary, (godot_array *)&keys);
}

uint32_t dictionary::hash() const {
	return gd::api->godot_dictionary_hash(&_godot_dictionary);
}

array dictionary::keys() const {
	godot_array a = gd::api->godot_dictionary_keys(&_godot_dictionary);
	return array(a);
}

variant &dictionary::operator[](const variant &key) {
	godot_variant *v = gd::api->godot_dictionary_operator_index(&_godot_dictionary, (godot_variant *)&key);
	return *reinterpret_cast<variant *>(v);
}

const variant &dictionary::operator[](const variant &key) const {
	// oops I did it again
	godot_variant *v = gd::api->godot_dictionary_operator_index((godot_dictionary *)&_godot_dictionary, (godot_variant *)&key);
	return *reinterpret_cast<variant *>(v);
}

int dictionary::size() const {
	return gd::api->godot_dictionary_size(&_godot_dictionary);
}

string dictionary::to_json() const {
	godot_string s = gd::api->godot_dictionary_to_json(&_godot_dictionary);
	return string(s);
}

array dictionary::values() const {
	godot_array a = gd::api->godot_dictionary_values(&_godot_dictionary);
	return array(a);
}

dictionary::~dictionary() {
	gd::api->godot_dictionary_destroy(&_godot_dictionary);
}

} // namespace gd
