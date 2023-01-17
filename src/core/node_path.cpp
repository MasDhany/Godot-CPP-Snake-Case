/*************************************************************************/
/*  node_path.cpp                                                         */
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

#include "node_path.hpp"
#include "godot_global.hpp"
#include "string.hpp"

#include <gdnative/node_path.h>

namespace gd {

node_path::node_path() {
	string from = "";
	gd::api->godot_node_path_new(&_node_path, (godot_string *)&from);
}

node_path::node_path(const node_path &other) {
	string from = other;
	gd::api->godot_node_path_new(&_node_path, (godot_string *)&from);
}

node_path::node_path(const string &from) {
	gd::api->godot_node_path_new(&_node_path, (godot_string *)&from);
}

node_path::node_path(const char *contents) {
	string from = contents;
	gd::api->godot_node_path_new(&_node_path, (godot_string *)&from);
}

string node_path::get_name(const int idx) const {
	godot_string str = gd::api->godot_node_path_get_name(&_node_path, idx);
	return string(str);
}

int node_path::get_name_count() const {
	return gd::api->godot_node_path_get_name_count(&_node_path);
}

string node_path::get_subname(const int idx) const {
	godot_string str = gd::api->godot_node_path_get_subname(&_node_path, idx);
	return string(str);
}

int node_path::get_subname_count() const {
	return gd::api->godot_node_path_get_subname_count(&_node_path);
}

bool node_path::is_absolute() const {
	return gd::api->godot_node_path_is_absolute(&_node_path);
}

bool node_path::is_empty() const {
	return gd::api->godot_node_path_is_empty(&_node_path);
}

node_path node_path::get_as_property_path() const {
	godot_node_path path_ = gd::core_1_1_api->godot_node_path_get_as_property_path(&_node_path);
	return node_path(path_);
}
string node_path::get_concatenated_subnames() const {
	godot_string str = gd::api->godot_node_path_get_concatenated_subnames(&_node_path);
	return string(str);
}

node_path::operator string() const {
	godot_string str = gd::api->godot_node_path_as_string(&_node_path);
	return string(str);
}

bool node_path::operator==(const node_path &other) {
	return gd::api->godot_node_path_operator_equal(&_node_path, &other._node_path);
}

void node_path::operator=(const node_path &other) {
	gd::api->godot_node_path_destroy(&_node_path);

	string other_string = (string)other;

	gd::api->godot_node_path_new(&_node_path, (godot_string *)&other_string);
}

node_path::~node_path() {
	gd::api->godot_node_path_destroy(&_node_path);
}

} // namespace gd
