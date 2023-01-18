/*************************************************************************/
/*  variant.cpp                                                          */
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

#include "variant.hpp"

#include <gdnative/variant.h>

#include "core_types.hpp"
#include "defs.hpp"
#include "godot_global.hpp"
#include "object.hpp"

namespace gd {

variant::variant() {
	gd::api->godot_variant_new_nil(&_godot_variant);
}

variant::variant(const variant &v) {
	gd::api->godot_variant_new_copy(&_godot_variant, &v._godot_variant);
}

variant::variant(bool p_bool) {
	gd::api->godot_variant_new_bool(&_godot_variant, p_bool);
}

variant::variant(signed int p_int) // real one
{
	gd::api->godot_variant_new_int(&_godot_variant, p_int);
}

variant::variant(unsigned int p_int) {
	gd::api->godot_variant_new_uint(&_godot_variant, p_int);
}

variant::variant(signed short p_short) // real one
{
	gd::api->godot_variant_new_int(&_godot_variant, (int)p_short);
}

variant::variant(int64_t p_char) // real one
{
	gd::api->godot_variant_new_int(&_godot_variant, p_char);
}

variant::variant(uint64_t p_char) {
	gd::api->godot_variant_new_uint(&_godot_variant, p_char);
}

variant::variant(float p_float) {
	gd::api->godot_variant_new_real(&_godot_variant, p_float);
}

variant::variant(double p_double) {
	gd::api->godot_variant_new_real(&_godot_variant, p_double);
}

variant::variant(const string &p_string) {
	gd::api->godot_variant_new_string(&_godot_variant, (godot_string *)&p_string);
}

variant::variant(const char *const p_cstring) {
	string s = string(p_cstring);
	gd::api->godot_variant_new_string(&_godot_variant, (godot_string *)&s);
}

variant::variant(const wchar_t *p_wstring) {
	string s = p_wstring;
	gd::api->godot_variant_new_string(&_godot_variant, (godot_string *)&s);
}

variant::variant(const vector2 &p_vector2) {
	gd::api->godot_variant_new_vector2(&_godot_variant, (godot_vector2 *)&p_vector2);
}

variant::variant(const rect2 &p_rect2) {
	gd::api->godot_variant_new_rect2(&_godot_variant, (godot_rect2 *)&p_rect2);
}

variant::variant(const vector3 &p_vector3) {
	gd::api->godot_variant_new_vector3(&_godot_variant, (godot_vector3 *)&p_vector3);
}

variant::variant(const plane &p_plane) {
	gd::api->godot_variant_new_plane(&_godot_variant, (godot_plane *)&p_plane);
}

variant::variant(const aabb &p_aabb) {
	gd::api->godot_variant_new_aabb(&_godot_variant, (godot_aabb *)&p_aabb);
}

variant::variant(const quat &p_quat) {
	gd::api->godot_variant_new_quat(&_godot_variant, (godot_quat *)&p_quat);
}

variant::variant(const basis &p_transform) {
	gd::api->godot_variant_new_basis(&_godot_variant, (godot_basis *)&p_transform);
}

variant::variant(const transform2d &p_transform) {
	gd::api->godot_variant_new_transform2d(&_godot_variant, (godot_transform2d *)&p_transform);
}

variant::variant(const transform &p_transform) {
	gd::api->godot_variant_new_transform(&_godot_variant, (godot_transform *)&p_transform);
}

variant::variant(const color &p_color) {
	gd::api->godot_variant_new_color(&_godot_variant, (godot_color *)&p_color);
}

variant::variant(const node_path &p_path) {
	gd::api->godot_variant_new_node_path(&_godot_variant, (godot_node_path *)&p_path);
}

variant::variant(const rid &p_rid) {
	gd::api->godot_variant_new_rid(&_godot_variant, (godot_rid *)&p_rid);
}

variant::variant(const object *p_object) {
	if (p_object)
		gd::api->godot_variant_new_object(&_godot_variant, p_object->_owner);
	else
		gd::api->godot_variant_new_nil(&_godot_variant);
}

variant::variant(const dictionary &p_dictionary) {
	gd::api->godot_variant_new_dictionary(&_godot_variant, (godot_dictionary *)&p_dictionary);
}

variant::variant(const array &p_array) {
	gd::api->godot_variant_new_array(&_godot_variant, (godot_array *)&p_array);
}

variant::variant(const pool_byte_array &p_raw_array) {
	gd::api->godot_variant_new_pool_byte_array(&_godot_variant, (godot_pool_byte_array *)&p_raw_array);
}

variant::variant(const pool_int_array &p_int_array) {
	gd::api->godot_variant_new_pool_int_array(&_godot_variant, (godot_pool_int_array *)&p_int_array);
}

variant::variant(const pool_real_array &p_real_array) {
	gd::api->godot_variant_new_pool_real_array(&_godot_variant, (godot_pool_real_array *)&p_real_array);
}

variant::variant(const pool_string_array &p_string_array) {
	gd::api->godot_variant_new_pool_string_array(&_godot_variant, (godot_pool_string_array *)&p_string_array);
}

variant::variant(const pool_vector2_array &p_vector2_array) {
	gd::api->godot_variant_new_pool_vector2_array(&_godot_variant, (godot_pool_vector2_array *)&p_vector2_array);
}

variant::variant(const pool_vector3_array &p_vector3_array) {
	gd::api->godot_variant_new_pool_vector3_array(&_godot_variant, (godot_pool_vector3_array *)&p_vector3_array);
}

variant::variant(const pool_color_array &p_color_array) {
	gd::api->godot_variant_new_pool_color_array(&_godot_variant, (godot_pool_color_array *)&p_color_array);
}

variant &variant::operator=(const variant &v) {
	gd::api->godot_variant_destroy(&_godot_variant);
	gd::api->godot_variant_new_copy(&_godot_variant, &v._godot_variant);
	return *this;
}

variant::operator bool() const {
	return booleanize();
}
variant::operator signed int() const {
	return gd::api->godot_variant_as_int(&_godot_variant);
}
variant::operator unsigned int() const // this is the real one
{
	return gd::api->godot_variant_as_uint(&_godot_variant);
}
variant::operator signed short() const {
	return gd::api->godot_variant_as_int(&_godot_variant);
}
variant::operator unsigned short() const {
	return gd::api->godot_variant_as_uint(&_godot_variant);
}
variant::operator signed char() const {
	return gd::api->godot_variant_as_int(&_godot_variant);
}
variant::operator unsigned char() const {
	return gd::api->godot_variant_as_uint(&_godot_variant);
}
variant::operator int64_t() const {
	return gd::api->godot_variant_as_int(&_godot_variant);
}
variant::operator uint64_t() const {
	return gd::api->godot_variant_as_uint(&_godot_variant);
}

variant::operator wchar_t() const {
	return gd::api->godot_variant_as_int(&_godot_variant);
}

variant::operator float() const {
	return gd::api->godot_variant_as_real(&_godot_variant);
}

variant::operator double() const {
	return gd::api->godot_variant_as_real(&_godot_variant);
}
variant::operator string() const {
	godot_string s = gd::api->godot_variant_as_string(&_godot_variant);
	return string(s);
}
variant::operator vector2() const {
	godot_vector2 s = gd::api->godot_variant_as_vector2(&_godot_variant);
	return *(vector2 *)&s;
}
variant::operator rect2() const {
	godot_rect2 s = gd::api->godot_variant_as_rect2(&_godot_variant);
	return *(rect2 *)&s;
}
variant::operator vector3() const {
	godot_vector3 s = gd::api->godot_variant_as_vector3(&_godot_variant);
	return *(vector3 *)&s;
}
variant::operator plane() const {
	godot_plane s = gd::api->godot_variant_as_plane(&_godot_variant);
	return *(plane *)&s;
}
variant::operator aabb() const {
	godot_aabb s = gd::api->godot_variant_as_aabb(&_godot_variant);
	return *(aabb *)&s;
}
variant::operator quat() const {
	godot_quat s = gd::api->godot_variant_as_quat(&_godot_variant);
	return *(quat *)&s;
}
variant::operator basis() const {
	godot_basis s = gd::api->godot_variant_as_basis(&_godot_variant);
	return *(basis *)&s;
}
variant::operator transform() const {
	godot_transform s = gd::api->godot_variant_as_transform(&_godot_variant);
	return *(transform *)&s;
}
variant::operator transform2d() const {
	godot_transform2d s = gd::api->godot_variant_as_transform2d(&_godot_variant);
	return *(transform2d *)&s;
}

variant::operator color() const {
	godot_color s = gd::api->godot_variant_as_color(&_godot_variant);
	return *(color *)&s;
}
variant::operator node_path() const {
	godot_node_path ret = gd::api->godot_variant_as_node_path(&_godot_variant);
	return node_path(ret);
}
variant::operator rid() const {
	godot_rid s = gd::api->godot_variant_as_rid(&_godot_variant);
	return *(rid *)&s;
}

variant::operator dictionary() const {
	dictionary ret(gd::api->godot_variant_as_dictionary(&_godot_variant));
	return ret;
}

variant::operator array() const {
	array ret(gd::api->godot_variant_as_array(&_godot_variant));
	return ret;
}

variant::operator pool_byte_array() const {
	godot_pool_byte_array ret = gd::api->godot_variant_as_pool_byte_array(&_godot_variant);
	return pool_byte_array(ret);
}
variant::operator pool_int_array() const {
	godot_pool_int_array ret = gd::api->godot_variant_as_pool_int_array(&_godot_variant);
	return pool_int_array(ret);
}
variant::operator pool_real_array() const {
	godot_pool_real_array ret = gd::api->godot_variant_as_pool_real_array(&_godot_variant);
	return pool_real_array(ret);
}
variant::operator pool_string_array() const {
	godot_pool_string_array ret = gd::api->godot_variant_as_pool_string_array(&_godot_variant);
	return pool_string_array(ret);
}
variant::operator pool_vector2_array() const {
	godot_pool_vector2_array ret = gd::api->godot_variant_as_pool_vector2_array(&_godot_variant);
	return pool_vector2_array(ret);
}
variant::operator pool_vector3_array() const {
	godot_pool_vector3_array ret = gd::api->godot_variant_as_pool_vector3_array(&_godot_variant);
	return pool_vector3_array(ret);
}
variant::operator pool_color_array() const {
	godot_pool_color_array ret = gd::api->godot_variant_as_pool_color_array(&_godot_variant);
	return pool_color_array(ret);
}
variant::operator godot_object *() const {
	return gd::api->godot_variant_as_object(&_godot_variant);
}

variant::Type variant::get_type() const {
	return static_cast<Type>(gd::api->godot_variant_get_type(&_godot_variant));
}

variant variant::call(const string &method, const variant **args, const int arg_count) {
	godot_variant v = gd::api->godot_variant_call(
			&_godot_variant, (godot_string *)&method, (const godot_variant **)args, arg_count, nullptr);
	return variant(v);
}

bool variant::has_method(const string &method) {
	return gd::api->godot_variant_has_method(&_godot_variant, (godot_string *)&method);
}

bool variant::operator==(const variant &b) const {
	return gd::api->godot_variant_operator_equal(&_godot_variant, &b._godot_variant);
}

bool variant::operator!=(const variant &b) const {
	return !(*this == b);
}

bool variant::operator<(const variant &b) const {
	return gd::api->godot_variant_operator_less(&_godot_variant, &b._godot_variant);
}

bool variant::operator<=(const variant &b) const {
	return (*this < b) || (*this == b);
}

bool variant::operator>(const variant &b) const {
	return !(*this <= b);
}

bool variant::operator>=(const variant &b) const {
	return !(*this < b);
}

bool variant::hash_compare(const variant &b) const {
	return gd::api->godot_variant_hash_compare(&_godot_variant, &b._godot_variant);
}

bool variant::booleanize() const {
	return gd::api->godot_variant_booleanize(&_godot_variant);
}

variant::~variant() {
	gd::api->godot_variant_destroy(&_godot_variant);
}

} // namespace gd
