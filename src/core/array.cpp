/*************************************************************************/
/*  array.cpp                                                            */
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

#include "array.hpp"
#include "godot_global.hpp"
#include "variant.hpp"

#include <cstdlib>

namespace gd {

class object;

array::array() {
	gd::api->godot_array_new(&_godot_array);
}

array::array(const array &other) {
	gd::api->godot_array_new_copy(&_godot_array, &other._godot_array);
}

array &array::operator=(const array &other) {
	gd::api->godot_array_destroy(&_godot_array);
	gd::api->godot_array_new_copy(&_godot_array, &other._godot_array);
	return *this;
}

array::array(const pool_byte_array &a) {
	gd::api->godot_array_new_pool_byte_array(&_godot_array, (godot_pool_byte_array *)&a);
}

array::array(const pool_int_array &a) {
	gd::api->godot_array_new_pool_int_array(&_godot_array, (godot_pool_int_array *)&a);
}

array::array(const pool_real_array &a) {
	gd::api->godot_array_new_pool_real_array(&_godot_array, (godot_pool_real_array *)&a);
}

array::array(const pool_string_array &a) {
	gd::api->godot_array_new_pool_string_array(&_godot_array, (godot_pool_string_array *)&a);
}

array::array(const pool_vector2_array &a) {
	gd::api->godot_array_new_pool_vector2_array(&_godot_array, (godot_pool_vector2_array *)&a);
}

array::array(const pool_vector3_array &a) {
	gd::api->godot_array_new_pool_vector3_array(&_godot_array, (godot_pool_vector3_array *)&a);
}

array::array(const pool_color_array &a) {
	gd::api->godot_array_new_pool_color_array(&_godot_array, (godot_pool_color_array *)&a);
}

variant &array::operator[](const int idx) {
	godot_variant *v = gd::api->godot_array_operator_index(&_godot_array, idx);
	// We assume it's ok to reinterpret because the value is a pointer whose data is already owned by the array_,
	// so can return a reference_ without constructing a variant
	return *reinterpret_cast<variant *>(v);
}

const variant &array::operator[](const int idx) const {
	// Yes, I'm casting away the const... you can hate me now.
	// since the result is
	godot_variant *v = gd::api->godot_array_operator_index((godot_array *)&_godot_array, idx);
	return *reinterpret_cast<const variant *>(v);
}

void array::append(const variant &v) {
	gd::api->godot_array_append(&_godot_array, (godot_variant *)&v);
}

void array::clear() {
	gd::api->godot_array_clear(&_godot_array);
}

int array::count(const variant &v) {
	return gd::api->godot_array_count(&_godot_array, (godot_variant *)&v);
}

bool array::empty() const {
	return gd::api->godot_array_empty(&_godot_array);
}

void array::erase(const variant &v) {
	gd::api->godot_array_erase(&_godot_array, (godot_variant *)&v);
}

variant array::front() const {
	godot_variant v = gd::api->godot_array_front(&_godot_array);
	return variant(v);
}

variant array::back() const {
	godot_variant v = gd::api->godot_array_back(&_godot_array);
	return variant(v);
}

int array::find(const variant &what, const int from) const {
	return gd::api->godot_array_find(&_godot_array, (godot_variant *)&what, from);
}

int array::find_last(const variant &what) const {
	return gd::api->godot_array_find_last(&_godot_array, (godot_variant *)&what);
}

bool array::has(const variant &what) const {
	return gd::api->godot_array_has(&_godot_array, (godot_variant *)&what);
}

uint32_t array::hash() const {
	return gd::api->godot_array_hash(&_godot_array);
}

void array::insert(const int pos, const variant &value) {
	gd::api->godot_array_insert(&_godot_array, pos, (godot_variant *)&value);
}

void array::invert() {
	gd::api->godot_array_invert(&_godot_array);
}

variant array::pop_back() {
	godot_variant v = gd::api->godot_array_pop_back(&_godot_array);
	return variant(v);
}

variant array::pop_front() {
	godot_variant v = gd::api->godot_array_pop_front(&_godot_array);
	return variant(v);
}

void array::push_back(const variant &v) {
	gd::api->godot_array_push_back(&_godot_array, (godot_variant *)&v);
}

void array::push_front(const variant &v) {
	gd::api->godot_array_push_front(&_godot_array, (godot_variant *)&v);
}

void array::remove(const int idx) {
	gd::api->godot_array_remove(&_godot_array, idx);
}

int array::size() const {
	return gd::api->godot_array_size(&_godot_array);
}

void array::resize(const int size) {
	gd::api->godot_array_resize(&_godot_array, size);
}

int array::rfind(const variant &what, const int from) const {
	return gd::api->godot_array_rfind(&_godot_array, (godot_variant *)&what, from);
}

void array::sort() {
	gd::api->godot_array_sort(&_godot_array);
}

void array::sort_custom(object *obj, const string &func) {
	gd::api->godot_array_sort_custom(&_godot_array, (godot_object *)obj, (godot_string *)&func);
}

int array::bsearch(const variant &value, const bool before) {
	return gd::api->godot_array_bsearch(&_godot_array, (godot_variant *)&value, before);
}

int array::bsearch_custom(const variant &value, const object *obj,
		const string &func, const bool before) {
	return gd::api->godot_array_bsearch_custom(&_godot_array, (godot_variant *)&value,
			(godot_object *)obj, (godot_string *)&func, before);
}

array array::duplicate(const bool deep) const {
	godot_array arr = gd::core_1_1_api->godot_array_duplicate(&_godot_array, deep);
	return array(arr);
}

variant array::max() const {
	godot_variant v = gd::core_1_1_api->godot_array_max(&_godot_array);
	return variant(v);
}

variant array::min() const {
	godot_variant v = gd::core_1_1_api->godot_array_min(&_godot_array);
	return variant(v);
}

void array::shuffle() {
	gd::core_1_1_api->godot_array_shuffle(&_godot_array);
}

array::~array() {
	gd::api->godot_array_destroy(&_godot_array);
}

} // namespace gd
