/*************************************************************************/
/*  quat.hpp                                                             */
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

#ifndef QUAT_H
#define QUAT_H

#include <cmath>

#include "vector3.hpp"

// #include "Basis.h"

namespace gd {

class quat {
public:
	static const quat IDENTITY;

	real_t x, y, z, w;

	real_t length_squared() const;
	real_t length() const;

	void normalize();

	quat normalized() const;

	bool is_normalized() const;

	quat inverse() const;

	void set_euler_xyz(const vector3 &p_euler);
	vector3 get_euler_xyz() const;
	void set_euler_yxz(const vector3 &p_euler);
	vector3 get_euler_yxz() const;

	inline void set_euler(const vector3 &p_euler) { set_euler_yxz(p_euler); }
	inline vector3 get_euler() const { return get_euler_yxz(); }

	real_t dot(const quat &q) const;

	quat slerp(const quat &q, const real_t &t) const;

	quat slerpni(const quat &q, const real_t &t) const;

	quat cubic_slerp(const quat &q, const quat &prep, const quat &postq, const real_t &t) const;

	void get_axis_and_angle(vector3 &r_axis, real_t &r_angle) const;

	void set_axis_angle(const vector3 &axis, const float angle);

	void operator*=(const quat &q);
	quat operator*(const quat &q) const;

	quat operator*(const vector3 &v) const;

	vector3 xform(const vector3 &v) const;

	void operator+=(const quat &q);
	void operator-=(const quat &q);
	void operator*=(const real_t &s);
	void operator/=(const real_t &s);
	quat operator+(const quat &q2) const;
	quat operator-(const quat &q2) const;
	quat operator-() const;
	quat operator*(const real_t &s) const;
	quat operator/(const real_t &s) const;

	bool operator==(const quat &p_quat) const;
	bool operator!=(const quat &p_quat) const;

	operator string() const;

	inline void set(real_t p_x, real_t p_y, real_t p_z, real_t p_w) {
		x = p_x;
		y = p_y;
		z = p_z;
		w = p_w;
	}
	inline quat(real_t p_x, real_t p_y, real_t p_z, real_t p_w) {
		x = p_x;
		y = p_y;
		z = p_z;
		w = p_w;
	}
	quat(const vector3 &axis, const real_t &angle);

	quat(const vector3 &v0, const vector3 &v1);

	inline quat() {
		x = y = z = 0;
		w = 1;
	}
};

} // namespace gd

#endif // QUAT_H
