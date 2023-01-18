/*************************************************************************/
/*  vector2.hpp                                                          */
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

#ifndef VECTOR2_H
#define VECTOR2_H

#include <gdnative/vector2.h>

#include "defs.hpp"

#include <math.hpp>

namespace gd {

class string;

struct vector2 {
	enum Axis {
		AXIS_X = 0,
		AXIS_Y,
		AXIS_COUNT
	};

	static const vector2 ZERO;
	static const vector2 ONE;
	static const vector2 INF;

	// Coordinate system of the 2D engine_
	static const vector2 LEFT;
	static const vector2 RIGHT;
	static const vector2 UP;
	static const vector2 DOWN;

	union {
		real_t x;
		real_t width;
	};
	union {
		real_t y;
		real_t height;
	};

	inline vector2(real_t p_x, real_t p_y) {
		x = p_x;
		y = p_y;
	}

	inline vector2() {
		x = 0;
		y = 0;
	}

	inline real_t &operator[](int p_idx) {
		return p_idx ? y : x;
	}

	inline const real_t &operator[](int p_idx) const {
		return p_idx ? y : x;
	}

	inline vector2 operator+(const vector2 &p_v) const {
		return vector2(x + p_v.x, y + p_v.y);
	}

	inline void operator+=(const vector2 &p_v) {
		x += p_v.x;
		y += p_v.y;
	}

	inline vector2 operator-(const vector2 &p_v) const {
		return vector2(x - p_v.x, y - p_v.y);
	}

	inline void operator-=(const vector2 &p_v) {
		x -= p_v.x;
		y -= p_v.y;
	}

	inline vector2 operator*(const vector2 &p_v1) const {
		return vector2(x * p_v1.x, y * p_v1.y);
	}

	inline vector2 operator*(const real_t &rvalue) const {
		return vector2(x * rvalue, y * rvalue);
	}

	inline void operator*=(const real_t &rvalue) {
		x *= rvalue;
		y *= rvalue;
	}

	inline void operator*=(const vector2 &rvalue) {
		*this = *this * rvalue;
	}

	inline vector2 operator/(const vector2 &p_v1) const {
		return vector2(x / p_v1.x, y / p_v1.y);
	}

	inline vector2 operator/(const real_t &rvalue) const {
		return vector2(x / rvalue, y / rvalue);
	}

	inline void operator/=(const real_t &rvalue) {
		x /= rvalue;
		y /= rvalue;
	}

	inline vector2 operator-() const {
		return vector2(-x, -y);
	}

	bool operator==(const vector2 &p_vec2) const;

	bool operator!=(const vector2 &p_vec2) const;

	inline bool operator<(const vector2 &p_vec2) const { return (x == p_vec2.x) ? (y < p_vec2.y) : (x < p_vec2.x); }
	inline bool operator<=(const vector2 &p_vec2) const { return (x == p_vec2.x) ? (y <= p_vec2.y) : (x <= p_vec2.x); }

	inline void normalize() {
		real_t l = x * x + y * y;
		if (l != 0) {
			l = sqrt(l);
			x /= l;
			y /= l;
		}
	}

	inline vector2 normalized() const {
		vector2 v = *this;
		v.normalize();
		return v;
	}

	inline real_t length() const {
		return sqrt(x * x + y * y);
	}

	inline real_t length_squared() const {
		return x * x + y * y;
	}

	inline real_t distance_to(const vector2 &p_vector2) const {
		return sqrt((x - p_vector2.x) * (x - p_vector2.x) + (y - p_vector2.y) * (y - p_vector2.y));
	}

	inline real_t distance_squared_to(const vector2 &p_vector2) const {
		return (x - p_vector2.x) * (x - p_vector2.x) + (y - p_vector2.y) * (y - p_vector2.y);
	}

	inline real_t angle_to(const vector2 &p_vector2) const {
		return atan2(cross(p_vector2), dot(p_vector2));
	}

	inline real_t angle_to_point(const vector2 &p_vector2) const {
		return atan2(y - p_vector2.y, x - p_vector2.x);
	}

	inline vector2 direction_to(const vector2 &p_b) const {
		vector2 ret(p_b.x - x, p_b.y - y);
		ret.normalize();
		return ret;
	}

	inline real_t dot(const vector2 &p_other) const {
		return x * p_other.x + y * p_other.y;
	}

	inline real_t cross(const vector2 &p_other) const {
		return x * p_other.y - y * p_other.x;
	}

	inline vector2 cross(real_t p_other) const {
		return vector2(p_other * y, -p_other * x);
	}

	vector2 project(const vector2 &p_vec) const;

	vector2 plane_project(real_t p_d, const vector2 &p_vec) const;

	vector2 clamped(real_t p_len) const;

	static inline vector2 linear_interpolate(const vector2 &p_a, const vector2 &p_b, real_t p_t) {
		vector2 res = p_a;
		res.x += (p_t * (p_b.x - p_a.x));
		res.y += (p_t * (p_b.y - p_a.y));
		return res;
	}

	inline vector2 linear_interpolate(const vector2 &p_b, real_t p_t) const {
		vector2 res = *this;
		res.x += (p_t * (p_b.x - x));
		res.y += (p_t * (p_b.y - y));
		return res;
	}

	vector2 cubic_interpolate(const vector2 &p_b, const vector2 &p_pre_a, const vector2 &p_post_b, real_t p_t) const;

	vector2 move_toward(const vector2 &p_to, const real_t p_delta) const {
		vector2 v = *this;
		vector2 vd = p_to - v;
		real_t len = vd.length();
		return len <= p_delta || len < CMP_EPSILON ? p_to : v + vd / len * p_delta;
	}

	inline vector2 slide(const vector2 &p_vec) const {
		return p_vec - *this * this->dot(p_vec);
	}

	inline vector2 bounce(const vector2 &p_normal) const {
		return -reflect(p_normal);
	}

	inline vector2 reflect(const vector2 &p_normal) const {
		return -(*this - p_normal * this->dot(p_normal) * 2.0);
	}

	inline real_t angle() const {
		return atan2(y, x);
	}

	inline void set_rotation(real_t p_radians) {
		x = cosf(p_radians);
		y = sinf(p_radians);
	}

	inline vector2 abs() const {
		return vector2(fabs(x), fabs(y));
	}

	inline vector2 rotated(real_t p_by) const {
		vector2 v;
		v.set_rotation(angle() + p_by);
		v *= length();
		return v;
	}

	inline vector2 tangent() const {
		return vector2(y, -x);
	}

	inline vector2 floor() const {
		return vector2(math::floor(x), math::floor(y));
	}

	inline vector2 snapped(const vector2 &p_by) const {
		return vector2(
				math::stepify(x, p_by.x),
				math::stepify(y, p_by.y));
	}

	inline real_t aspect() const { return width / height; }

	operator string() const;
};

inline vector2 operator*(real_t p_scalar, const vector2 &p_vec) {
	return p_vec * p_scalar;
}

namespace math {

// Convenience, since they exist in gdscript

inline vector2 cartesian2polar(vector2 v) {
	return vector2(math::sqrt(v.x * v.x + v.y * v.y), math::atan2(v.y, v.x));
}

inline vector2 polar2cartesian(vector2 v) {
	// x == radius
	// y == angle
	return vector2(v.x * math::cos(v.y), v.x * math::sin(v.y));
}

} // namespace math

} // namespace gd

#endif // VECTOR2_H
