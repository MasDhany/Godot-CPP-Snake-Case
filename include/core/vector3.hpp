/*************************************************************************/
/*  vector3.hpp                                                          */
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

#ifndef VECTOR3_H
#define VECTOR3_H

#include <gdnative/vector3.h>

#include "defs.hpp"

#include "string.hpp"

#include <math.hpp>

namespace gd {

class basis;

struct vector3 {
	enum Axis {
		AXIS_X,
		AXIS_Y,
		AXIS_Z,
		AXIS_COUNT
	};

	static const vector3 ZERO;
	static const vector3 ONE;
	static const vector3 INF;

	// Coordinate system of the 3D engine_
	static const vector3 LEFT;
	static const vector3 RIGHT;
	static const vector3 UP;
	static const vector3 DOWN;
	static const vector3 FORWARD;
	static const vector3 BACK;

	union {
		struct {
			real_t x;
			real_t y;
			real_t z;
		};

		real_t coord[3]; // Not for direct access, use [] operator instead
	};

	inline vector3(real_t x, real_t y, real_t z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	inline vector3() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	inline const real_t &operator[](int p_axis) const {
		return coord[p_axis];
	}

	inline real_t &operator[](int p_axis) {
		return coord[p_axis];
	}

	inline vector3 &operator+=(const vector3 &p_v) {
		x += p_v.x;
		y += p_v.y;
		z += p_v.z;
		return *this;
	}

	inline vector3 operator+(const vector3 &p_v) const {
		vector3 v = *this;
		v += p_v;
		return v;
	}

	inline vector3 &operator-=(const vector3 &p_v) {
		x -= p_v.x;
		y -= p_v.y;
		z -= p_v.z;
		return *this;
	}

	inline vector3 operator-(const vector3 &p_v) const {
		vector3 v = *this;
		v -= p_v;
		return v;
	}

	inline vector3 &operator*=(const vector3 &p_v) {
		x *= p_v.x;
		y *= p_v.y;
		z *= p_v.z;
		return *this;
	}

	inline vector3 operator*(const vector3 &p_v) const {
		vector3 v = *this;
		v *= p_v;
		return v;
	}

	inline vector3 &operator/=(const vector3 &p_v) {
		x /= p_v.x;
		y /= p_v.y;
		z /= p_v.z;
		return *this;
	}

	inline vector3 operator/(const vector3 &p_v) const {
		vector3 v = *this;
		v /= p_v;
		return v;
	}

	inline vector3 &operator*=(real_t p_scalar) {
		*this *= vector3(p_scalar, p_scalar, p_scalar);
		return *this;
	}

	inline vector3 operator*(real_t p_scalar) const {
		vector3 v = *this;
		v *= p_scalar;
		return v;
	}

	inline vector3 &operator/=(real_t p_scalar) {
		*this /= vector3(p_scalar, p_scalar, p_scalar);
		return *this;
	}

	inline vector3 operator/(real_t p_scalar) const {
		vector3 v = *this;
		v /= p_scalar;
		return v;
	}

	inline vector3 operator-() const {
		return vector3(-x, -y, -z);
	}

	inline bool operator==(const vector3 &p_v) const {
		return (x == p_v.x && y == p_v.y && z == p_v.z);
	}

	inline bool operator!=(const vector3 &p_v) const {
		return (x != p_v.x || y != p_v.y || z != p_v.z);
	}

	bool operator<(const vector3 &p_v) const;

	bool operator<=(const vector3 &p_v) const;

	inline vector3 abs() const {
		return vector3(::fabs(x), ::fabs(y), ::fabs(z));
	}

	inline vector3 ceil() const {
		return vector3(::ceil(x), ::ceil(y), ::ceil(z));
	}

	inline vector3 cross(const vector3 &b) const {
		vector3 ret(
				(y * b.z) - (z * b.y),
				(z * b.x) - (x * b.z),
				(x * b.y) - (y * b.x));

		return ret;
	}

	inline vector3 linear_interpolate(const vector3 &p_b, real_t p_t) const {
		return vector3(
				x + (p_t * (p_b.x - x)),
				y + (p_t * (p_b.y - y)),
				z + (p_t * (p_b.z - z)));
	}

	inline vector3 slerp(const vector3 &p_b, real_t p_t) const {
		real_t theta = angle_to(p_b);
		return rotated(cross(p_b).normalized(), theta * p_t);
	}

	vector3 cubic_interpolate(const vector3 &b, const vector3 &pre_a, const vector3 &post_b, const real_t t) const;

	vector3 move_toward(const vector3 &p_to, const real_t p_delta) const {
		vector3 v = *this;
		vector3 vd = p_to - v;
		real_t len = vd.length();
		return len <= p_delta || len < CMP_EPSILON ? p_to : v + vd / len * p_delta;
	}

	vector3 bounce(const vector3 &p_normal) const {
		return -reflect(p_normal);
	}

	inline real_t length() const {
		real_t x2 = x * x;
		real_t y2 = y * y;
		real_t z2 = z * z;

		return ::sqrt(x2 + y2 + z2);
	}

	inline real_t length_squared() const {
		real_t x2 = x * x;
		real_t y2 = y * y;
		real_t z2 = z * z;

		return x2 + y2 + z2;
	}

	inline real_t distance_squared_to(const vector3 &b) const {
		return (b - *this).length_squared();
	}

	inline real_t distance_to(const vector3 &b) const {
		return (b - *this).length();
	}

	inline real_t dot(const vector3 &b) const {
		return x * b.x + y * b.y + z * b.z;
	}

	inline vector3 project(const vector3 &p_b) const {
		return p_b * (dot(p_b) / p_b.length_squared());
	}

	inline real_t angle_to(const vector3 &b) const {
		return std::atan2(cross(b).length(), dot(b));
	}

	inline vector3 direction_to(const vector3 &p_b) const {
		vector3 ret(p_b.x - x, p_b.y - y, p_b.z - z);
		ret.normalize();
		return ret;
	}

	inline vector3 floor() const {
		return vector3(::floor(x), ::floor(y), ::floor(z));
	}

	inline vector3 inverse() const {
		return vector3(1.f / x, 1.f / y, 1.f / z);
	}

	inline bool is_normalized() const {
		return std::abs(length_squared() - 1.f) < 0.00001f;
	}

	basis outer(const vector3 &b) const;

	int max_axis() const;

	int min_axis() const;

	inline void normalize() {
		real_t l = length();
		if (l == 0) {
			x = y = z = 0;
		} else {
			x /= l;
			y /= l;
			z /= l;
		}
	}

	inline vector3 normalized() const {
		vector3 v = *this;
		v.normalize();
		return v;
	}

	inline vector3 reflect(const vector3 &p_normal) const {
		return -(*this - p_normal * this->dot(p_normal) * 2.0);
	}

	inline vector3 rotated(const vector3 &axis, const real_t phi) const {
		vector3 v = *this;
		v.rotate(axis, phi);
		return v;
	}

	void rotate(const vector3 &p_axis, real_t p_phi);

	inline vector3 slide(const vector3 &by) const {
		return *this - by * this->dot(by);
	}

	void snap(real_t p_val);

	inline vector3 snapped(const float by) {
		vector3 v = *this;
		v.snap(by);
		return v;
	}

	operator string() const;
};

inline vector3 operator*(real_t p_scalar, const vector3 &p_vec) {
	return p_vec * p_scalar;
}

inline vector3 vec3_cross(const vector3 &p_a, const vector3 &p_b) {
	return p_a.cross(p_b);
}

} // namespace gd

#endif // VECTOR3_H
