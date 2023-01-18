/*************************************************************************/
/*  vector3.cpp                                                          */
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

#include "vector3.hpp"

#include "string.hpp"

#include <stdlib.h>

#include "basis.hpp"

namespace gd {

const vector3 vector3::ZERO = vector3();
const vector3 vector3::ONE = vector3(1, 1, 1);
const vector3 vector3::INF = vector3(INFINITY, INFINITY, INFINITY);

const vector3 vector3::LEFT = vector3(-1, 0, 0);
const vector3 vector3::RIGHT = vector3(1, 0, 0);
const vector3 vector3::UP = vector3(0, 1, 0);
const vector3 vector3::DOWN = vector3(0, -1, 0);
const vector3 vector3::FORWARD = vector3(0, 0, -1);
const vector3 vector3::BACK = vector3(0, 0, 1);

bool vector3::operator<(const vector3 &p_v) const {
	if (x == p_v.x) {
		if (y == p_v.y)
			return z < p_v.z;
		else
			return y < p_v.y;
	} else {
		return x < p_v.x;
	}
}

bool vector3::operator<=(const vector3 &p_v) const {
	if (x == p_v.x) {
		if (y == p_v.y)
			return z <= p_v.z;
		else
			return y < p_v.y;
	} else {
		return x < p_v.x;
	}
}

vector3 vector3::cubic_interpolate(const vector3 &b, const vector3 &pre_a, const vector3 &post_b, const real_t t) const {
	vector3 p0 = pre_a;
	vector3 p1 = *this;
	vector3 p2 = b;
	vector3 p3 = post_b;

	real_t t2 = t * t;
	real_t t3 = t2 * t;

	vector3 out;
	out = ((p1 * 2.0) +
				  (-p0 + p2) * t +
				  (p0 * 2.0 - p1 * 5.0 + p2 * 4 - p3) * t2 +
				  (-p0 + p1 * 3.0 - p2 * 3.0 + p3) * t3) *
		  0.5;
	return out;
}

basis vector3::outer(const vector3 &b) const {
	vector3 row0(x * b.x, x * b.y, x * b.z);
	vector3 row1(y * b.x, y * b.y, y * b.z);
	vector3 row2(z * b.x, z * b.y, z * b.z);
	return basis(row0, row1, row2);
}

int vector3::max_axis() const {
	return x < y ? (y < z ? 2 : 1) : (x < z ? 2 : 0);
}

int vector3::min_axis() const {
	return x < y ? (x < z ? 0 : 2) : (y < z ? 1 : 2);
}

void vector3::rotate(const vector3 &p_axis, real_t p_phi) {
	*this = basis(p_axis, p_phi).xform(*this);
}

void vector3::snap(real_t p_val) {
	x = math::stepify(x, p_val);
	y = math::stepify(y, p_val);
	z = math::stepify(z, p_val);
}

vector3::operator string() const {
	return string::num(x) + ", " + string::num(y) + ", " + string::num(z);
}

} // namespace gd
