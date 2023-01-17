/*************************************************************************/
/*  pool_arrays.cpp                                                       */
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

#include "pool_arrays.hpp"
#include "color.hpp"
#include "defs.hpp"
#include "godot_global.hpp"
#include "string.hpp"
#include "vector2.hpp"
#include "vector3.hpp"

#include <gdnative/pool_arrays.h>

namespace gd {

pool_byte_array::pool_byte_array() {
	gd::api->godot_pool_byte_array_new(&_godot_array);
}

pool_byte_array::pool_byte_array(const pool_byte_array &p_other) {
	gd::api->godot_pool_byte_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_byte_array &pool_byte_array::operator=(const pool_byte_array &p_other) {
	gd::api->godot_pool_byte_array_destroy(&_godot_array);
	gd::api->godot_pool_byte_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_byte_array::pool_byte_array(const array &array_) {
	gd::api->godot_pool_byte_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_byte_array::read pool_byte_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_byte_array_read(&_godot_array);
	return read_;
}

pool_byte_array::write pool_byte_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_byte_array_write(&_godot_array);
	return write_;
}

void pool_byte_array::append(const uint8_t data) {
	gd::api->godot_pool_byte_array_append(&_godot_array, data);
}

void pool_byte_array::append_array(const pool_byte_array &array_) {
	gd::api->godot_pool_byte_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_byte_array::insert(const int idx, const uint8_t data) {
	return gd::api->godot_pool_byte_array_insert(&_godot_array, idx, data);
}

void pool_byte_array::invert() {
	gd::api->godot_pool_byte_array_invert(&_godot_array);
}

void pool_byte_array::push_back(const uint8_t data) {
	gd::api->godot_pool_byte_array_push_back(&_godot_array, data);
}

void pool_byte_array::remove(const int idx) {
	gd::api->godot_pool_byte_array_remove(&_godot_array, idx);
}

void pool_byte_array::resize(const int size) {
	gd::api->godot_pool_byte_array_resize(&_godot_array, size);
}

void pool_byte_array::set(const int idx, const uint8_t data) {
	gd::api->godot_pool_byte_array_set(&_godot_array, idx, data);
}

uint8_t pool_byte_array::operator[](const int idx) {
	return gd::api->godot_pool_byte_array_get(&_godot_array, idx);
}

int pool_byte_array::size() const {
	return gd::api->godot_pool_byte_array_size(&_godot_array);
}

pool_byte_array::~pool_byte_array() {
	gd::api->godot_pool_byte_array_destroy(&_godot_array);
}

pool_int_array::pool_int_array() {
	gd::api->godot_pool_int_array_new(&_godot_array);
}

pool_int_array::pool_int_array(const pool_int_array &p_other) {
	gd::api->godot_pool_int_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_int_array &pool_int_array::operator=(const pool_int_array &p_other) {
	gd::api->godot_pool_int_array_destroy(&_godot_array);
	gd::api->godot_pool_int_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_int_array::pool_int_array(const array &array_) {
	gd::api->godot_pool_int_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_int_array::read pool_int_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_int_array_read(&_godot_array);
	return read_;
}

pool_int_array::write pool_int_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_int_array_write(&_godot_array);
	return write_;
}

void pool_int_array::append(const int data) {
	gd::api->godot_pool_int_array_append(&_godot_array, data);
}

void pool_int_array::append_array(const pool_int_array &array_) {
	gd::api->godot_pool_int_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_int_array::insert(const int idx, const int data) {
	return gd::api->godot_pool_int_array_insert(&_godot_array, idx, data);
}

void pool_int_array::invert() {
	gd::api->godot_pool_int_array_invert(&_godot_array);
}

void pool_int_array::push_back(const int data) {
	gd::api->godot_pool_int_array_push_back(&_godot_array, data);
}

void pool_int_array::remove(const int idx) {
	gd::api->godot_pool_int_array_remove(&_godot_array, idx);
}

void pool_int_array::resize(const int size) {
	gd::api->godot_pool_int_array_resize(&_godot_array, size);
}

void pool_int_array::set(const int idx, const int data) {
	gd::api->godot_pool_int_array_set(&_godot_array, idx, data);
}

int pool_int_array::operator[](const int idx) {
	return gd::api->godot_pool_int_array_get(&_godot_array, idx);
}

int pool_int_array::size() const {
	return gd::api->godot_pool_int_array_size(&_godot_array);
}

pool_int_array::~pool_int_array() {
	gd::api->godot_pool_int_array_destroy(&_godot_array);
}

pool_real_array::pool_real_array() {
	gd::api->godot_pool_real_array_new(&_godot_array);
}

pool_real_array::pool_real_array(const pool_real_array &p_other) {
	gd::api->godot_pool_real_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_real_array &pool_real_array::operator=(const pool_real_array &p_other) {
	gd::api->godot_pool_real_array_destroy(&_godot_array);
	gd::api->godot_pool_real_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_real_array::read pool_real_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_real_array_read(&_godot_array);
	return read_;
}

pool_real_array::write pool_real_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_real_array_write(&_godot_array);
	return write_;
}

pool_real_array::pool_real_array(const array &array_) {
	gd::api->godot_pool_real_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

void pool_real_array::append(const real_t data) {
	gd::api->godot_pool_real_array_append(&_godot_array, data);
}

void pool_real_array::append_array(const pool_real_array &array_) {
	gd::api->godot_pool_real_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_real_array::insert(const int idx, const real_t data) {
	return gd::api->godot_pool_real_array_insert(&_godot_array, idx, data);
}

void pool_real_array::invert() {
	gd::api->godot_pool_real_array_invert(&_godot_array);
}

void pool_real_array::push_back(const real_t data) {
	gd::api->godot_pool_real_array_push_back(&_godot_array, data);
}

void pool_real_array::remove(const int idx) {
	gd::api->godot_pool_real_array_remove(&_godot_array, idx);
}

void pool_real_array::resize(const int size) {
	gd::api->godot_pool_real_array_resize(&_godot_array, size);
}

void pool_real_array::set(const int idx, const real_t data) {
	gd::api->godot_pool_real_array_set(&_godot_array, idx, data);
}

real_t pool_real_array::operator[](const int idx) {
	return gd::api->godot_pool_real_array_get(&_godot_array, idx);
}

int pool_real_array::size() const {
	return gd::api->godot_pool_real_array_size(&_godot_array);
}

pool_real_array::~pool_real_array() {
	gd::api->godot_pool_real_array_destroy(&_godot_array);
}

pool_string_array::pool_string_array() {
	gd::api->godot_pool_string_array_new(&_godot_array);
}

pool_string_array::pool_string_array(const pool_string_array &p_other) {
	gd::api->godot_pool_string_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_string_array &pool_string_array::operator=(const pool_string_array &p_other) {
	gd::api->godot_pool_string_array_destroy(&_godot_array);
	gd::api->godot_pool_string_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_string_array::pool_string_array(const array &array_) {
	gd::api->godot_pool_string_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_string_array::read pool_string_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_string_array_read(&_godot_array);
	return read_;
}

pool_string_array::write pool_string_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_string_array_write(&_godot_array);
	return write_;
}

void pool_string_array::append(const string &data) {
	gd::api->godot_pool_string_array_append(&_godot_array, (godot_string *)&data);
}

void pool_string_array::append_array(const pool_string_array &array_) {
	gd::api->godot_pool_string_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_string_array::insert(const int idx, const string &data) {
	return gd::api->godot_pool_string_array_insert(&_godot_array, idx, (godot_string *)&data);
}

void pool_string_array::invert() {
	gd::api->godot_pool_string_array_invert(&_godot_array);
}

void pool_string_array::push_back(const string &data) {
	gd::api->godot_pool_string_array_push_back(&_godot_array, (godot_string *)&data);
}

void pool_string_array::remove(const int idx) {
	gd::api->godot_pool_string_array_remove(&_godot_array, idx);
}

void pool_string_array::resize(const int size) {
	gd::api->godot_pool_string_array_resize(&_godot_array, size);
}

void pool_string_array::set(const int idx, const string &data) {
	gd::api->godot_pool_string_array_set(&_godot_array, idx, (godot_string *)&data);
}

const string pool_string_array::operator[](const int idx) {
	string s;
	godot_string str = gd::api->godot_pool_string_array_get(&_godot_array, idx);
	gd::api->godot_string_new_copy((godot_string *)&s, &str);
	gd::api->godot_string_destroy(&str);
	return s;
}

int pool_string_array::size() const {
	return gd::api->godot_pool_string_array_size(&_godot_array);
}

pool_string_array::~pool_string_array() {
	gd::api->godot_pool_string_array_destroy(&_godot_array);
}

pool_vector2_array::pool_vector2_array() {
	gd::api->godot_pool_vector2_array_new(&_godot_array);
}

pool_vector2_array::pool_vector2_array(const pool_vector2_array &p_other) {
	gd::api->godot_pool_vector2_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_vector2_array &pool_vector2_array::operator=(const pool_vector2_array &p_other) {
	gd::api->godot_pool_vector2_array_destroy(&_godot_array);
	gd::api->godot_pool_vector2_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_vector2_array::pool_vector2_array(const array &array_) {
	gd::api->godot_pool_vector2_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_vector2_array::read pool_vector2_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_vector2_array_read(&_godot_array);
	return read_;
}

pool_vector2_array::write pool_vector2_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_vector2_array_write(&_godot_array);
	return write_;
}

void pool_vector2_array::append(const vector2 &data) {
	gd::api->godot_pool_vector2_array_append(&_godot_array, (godot_vector2 *)&data);
}

void pool_vector2_array::append_array(const pool_vector2_array &array_) {
	gd::api->godot_pool_vector2_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_vector2_array::insert(const int idx, const vector2 &data) {
	return gd::api->godot_pool_vector2_array_insert(&_godot_array, idx, (godot_vector2 *)&data);
}

void pool_vector2_array::invert() {
	gd::api->godot_pool_vector2_array_invert(&_godot_array);
}

void pool_vector2_array::push_back(const vector2 &data) {
	gd::api->godot_pool_vector2_array_push_back(&_godot_array, (godot_vector2 *)&data);
}

void pool_vector2_array::remove(const int idx) {
	gd::api->godot_pool_vector2_array_remove(&_godot_array, idx);
}

void pool_vector2_array::resize(const int size) {
	gd::api->godot_pool_vector2_array_resize(&_godot_array, size);
}

void pool_vector2_array::set(const int idx, const vector2 &data) {
	gd::api->godot_pool_vector2_array_set(&_godot_array, idx, (godot_vector2 *)&data);
}

const vector2 pool_vector2_array::operator[](const int idx) {
	vector2 v;
	*(godot_vector2 *)&v = gd::api->godot_pool_vector2_array_get(&_godot_array, idx);
	return v;
}

int pool_vector2_array::size() const {
	return gd::api->godot_pool_vector2_array_size(&_godot_array);
}

pool_vector2_array::~pool_vector2_array() {
	gd::api->godot_pool_vector2_array_destroy(&_godot_array);
}

pool_vector3_array::pool_vector3_array() {
	gd::api->godot_pool_vector3_array_new(&_godot_array);
}

pool_vector3_array::pool_vector3_array(const pool_vector3_array &p_other) {
	gd::api->godot_pool_vector3_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_vector3_array &pool_vector3_array::operator=(const pool_vector3_array &p_other) {
	gd::api->godot_pool_vector3_array_destroy(&_godot_array);
	gd::api->godot_pool_vector3_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_vector3_array::pool_vector3_array(const array &array_) {
	gd::api->godot_pool_vector3_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_vector3_array::read pool_vector3_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_vector3_array_read(&_godot_array);
	return read_;
}

pool_vector3_array::write pool_vector3_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_vector3_array_write(&_godot_array);
	return write_;
}

void pool_vector3_array::append(const vector3 &data) {
	gd::api->godot_pool_vector3_array_append(&_godot_array, (godot_vector3 *)&data);
}

void pool_vector3_array::append_array(const pool_vector3_array &array_) {
	gd::api->godot_pool_vector3_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_vector3_array::insert(const int idx, const vector3 &data) {
	return gd::api->godot_pool_vector3_array_insert(&_godot_array, idx, (godot_vector3 *)&data);
}

void pool_vector3_array::invert() {
	gd::api->godot_pool_vector3_array_invert(&_godot_array);
}

void pool_vector3_array::push_back(const vector3 &data) {
	gd::api->godot_pool_vector3_array_push_back(&_godot_array, (godot_vector3 *)&data);
}

void pool_vector3_array::remove(const int idx) {
	gd::api->godot_pool_vector3_array_remove(&_godot_array, idx);
}

void pool_vector3_array::resize(const int size) {
	gd::api->godot_pool_vector3_array_resize(&_godot_array, size);
}

void pool_vector3_array::set(const int idx, const vector3 &data) {
	gd::api->godot_pool_vector3_array_set(&_godot_array, idx, (godot_vector3 *)&data);
}

const vector3 pool_vector3_array::operator[](const int idx) {
	vector3 v;
	*(godot_vector3 *)&v = gd::api->godot_pool_vector3_array_get(&_godot_array, idx);
	return v;
}

int pool_vector3_array::size() const {
	return gd::api->godot_pool_vector3_array_size(&_godot_array);
}

pool_vector3_array::~pool_vector3_array() {
	gd::api->godot_pool_vector3_array_destroy(&_godot_array);
}

pool_color_array::pool_color_array() {
	gd::api->godot_pool_color_array_new(&_godot_array);
}

pool_color_array::pool_color_array(const pool_color_array &p_other) {
	gd::api->godot_pool_color_array_new_copy(&_godot_array, &p_other._godot_array);
}

pool_color_array &pool_color_array::operator=(const pool_color_array &p_other) {
	gd::api->godot_pool_color_array_destroy(&_godot_array);
	gd::api->godot_pool_color_array_new_copy(&_godot_array, &p_other._godot_array);
	return *this;
}

pool_color_array::pool_color_array(const array &array_) {
	gd::api->godot_pool_color_array_new_with_array(&_godot_array, (godot_array *)&array_);
}

pool_color_array::read pool_color_array::read_() const {
	read read_;
	read_._read_access = gd::api->godot_pool_color_array_read(&_godot_array);
	return read_;
}

pool_color_array::write pool_color_array::write_() {
	write write_;
	write_._write_access = gd::api->godot_pool_color_array_write(&_godot_array);
	return write_;
}

void pool_color_array::append(const color &data) {
	gd::api->godot_pool_color_array_append(&_godot_array, (godot_color *)&data);
}

void pool_color_array::append_array(const pool_color_array &array_) {
	gd::api->godot_pool_color_array_append_array(&_godot_array, &array_._godot_array);
}

int pool_color_array::insert(const int idx, const color &data) {
	return gd::api->godot_pool_color_array_insert(&_godot_array, idx, (godot_color *)&data);
}

void pool_color_array::invert() {
	gd::api->godot_pool_color_array_invert(&_godot_array);
}

void pool_color_array::push_back(const color &data) {
	gd::api->godot_pool_color_array_push_back(&_godot_array, (godot_color *)&data);
}

void pool_color_array::remove(const int idx) {
	gd::api->godot_pool_color_array_remove(&_godot_array, idx);
}

void pool_color_array::resize(const int size) {
	gd::api->godot_pool_color_array_resize(&_godot_array, size);
}

void pool_color_array::set(const int idx, const color &data) {
	gd::api->godot_pool_color_array_set(&_godot_array, idx, (godot_color *)&data);
}

const color pool_color_array::operator[](const int idx) {
	color v;
	*(godot_color *)&v = gd::api->godot_pool_color_array_get(&_godot_array, idx);
	return v;
}

int pool_color_array::size() const {
	return gd::api->godot_pool_color_array_size(&_godot_array);
}

pool_color_array::~pool_color_array() {
	gd::api->godot_pool_color_array_destroy(&_godot_array);
}

} // namespace gd
