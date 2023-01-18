/*************************************************************************/
/*  rid.cpp                                                              */
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

#include "rid.hpp"

#include <gdnative/rid.h>

#include "godot_global.hpp"

namespace gd {

rid::rid() {
	gd::api->godot_rid_new(&_godot_rid);
}

rid::rid(object *p) {
	gd::api->godot_rid_new_with_resource(&_godot_rid, (const godot_object *)p);
}

godot_rid rid::_get_godot_rid() const {
	return _godot_rid;
}

int32_t rid::get_id() const {
	return gd::api->godot_rid_get_id(&_godot_rid);
}

bool rid::operator==(const rid &p_other) const {
	return gd::api->godot_rid_operator_equal(&_godot_rid, &p_other._godot_rid);
}

bool rid::operator!=(const rid &p_other) const {
	return !(*this == p_other);
}

bool rid::operator<(const rid &p_other) const {
	return gd::api->godot_rid_operator_less(&_godot_rid, &p_other._godot_rid);
}

bool rid::operator>(const rid &p_other) const {
	return !(*this < p_other) && *this != p_other;
}

bool rid::operator<=(const rid &p_other) const {
	return (*this < p_other) || *this == p_other;
}

bool rid::operator>=(const rid &p_other) const {
	return !(*this < p_other);
}

} // namespace gd
