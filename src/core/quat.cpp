/*************************************************************************/
/*  quat.cpp                                                             */
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

#include "quat.hpp"
#include "basis.hpp"
#include "defs.hpp"
#include "vector3.hpp"

#include <cmath>

namespace gd {

const quat quat::IDENTITY = quat();

// set_euler_xyz expects a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// This implementation uses XYZ convention (Z is the first rotation).
void quat::set_euler_xyz(const vector3 &p_euler) {
	real_t half_a1 = p_euler.x * 0.5;
	real_t half_a2 = p_euler.y * 0.5;
	real_t half_a3 = p_euler.z * 0.5;

	// R = X(a1).Y(a2).Z(a3) convention for Euler angles.
	// Conversion to quaternion as listed in https://ntrs.nasa.gov/archive/nasa/casi.ntrs.nasa.gov/19770024290.pdf (page A-2)
	// a3 is the angle of the first rotation, following the notation in this reference_.

	real_t cos_a1 = ::cos(half_a1);
	real_t sin_a1 = ::sin(half_a1);
	real_t cos_a2 = ::cos(half_a2);
	real_t sin_a2 = ::sin(half_a2);
	real_t cos_a3 = ::cos(half_a3);
	real_t sin_a3 = ::sin(half_a3);

	set(sin_a1 * cos_a2 * cos_a3 + sin_a2 * sin_a3 * cos_a1,
			-sin_a1 * sin_a3 * cos_a2 + sin_a2 * cos_a1 * cos_a3,
			sin_a1 * sin_a2 * cos_a3 + sin_a3 * cos_a1 * cos_a2,
			-sin_a1 * sin_a2 * sin_a3 + cos_a1 * cos_a2 * cos_a3);
}

// get_euler_xyz returns a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// This implementation uses XYZ convention (Z is the first rotation).
vector3 quat::get_euler_xyz() const {
	basis m(*this);
	return m.get_euler_xyz();
}

// set_euler_yxz expects a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// This implementation uses YXZ convention (Z is the first rotation).
void quat::set_euler_yxz(const vector3 &p_euler) {
	real_t half_a1 = p_euler.y * 0.5;
	real_t half_a2 = p_euler.x * 0.5;
	real_t half_a3 = p_euler.z * 0.5;

	// R = Y(a1).X(a2).Z(a3) convention for Euler angles.
	// Conversion to quaternion as listed in https://ntrs.nasa.gov/archive/nasa/casi.ntrs.nasa.gov/19770024290.pdf (page A-6)
	// a3 is the angle of the first rotation, following the notation in this reference_.

	real_t cos_a1 = ::cos(half_a1);
	real_t sin_a1 = ::sin(half_a1);
	real_t cos_a2 = ::cos(half_a2);
	real_t sin_a2 = ::sin(half_a2);
	real_t cos_a3 = ::cos(half_a3);
	real_t sin_a3 = ::sin(half_a3);

	set(sin_a1 * cos_a2 * sin_a3 + cos_a1 * sin_a2 * cos_a3,
			sin_a1 * cos_a2 * cos_a3 - cos_a1 * sin_a2 * sin_a3,
			-sin_a1 * sin_a2 * cos_a3 + cos_a1 * sin_a2 * sin_a3,
			sin_a1 * sin_a2 * sin_a3 + cos_a1 * cos_a2 * cos_a3);
}

// get_euler_yxz returns a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// This implementation uses YXZ convention (Z is the first rotation).
vector3 quat::get_euler_yxz() const {
	basis m(*this);
	return m.get_euler_yxz();
}

real_t quat::length() const {
	return ::sqrt(length_squared());
}

void quat::normalize() {
	*this /= length();
}

quat quat::normalized() const {
	return *this / length();
}

bool quat::is_normalized() const {
	return std::abs(length_squared() - 1.0) < 0.00001;
}

quat quat::inverse() const {
	return quat(-x, -y, -z, w);
}

quat quat::slerp(const quat &q, const real_t &t) const {
	quat to1;
	real_t omega, cosom, sinom, scale0, scale1;

	// calc cosine
	cosom = dot(q);

	// adjust signs (if necessary)
	if (cosom < 0.0) {
		cosom = -cosom;
		to1.x = -q.x;
		to1.y = -q.y;
		to1.z = -q.z;
		to1.w = -q.w;
	} else {
		to1.x = q.x;
		to1.y = q.y;
		to1.z = q.z;
		to1.w = q.w;
	}

	// calculate coefficients

	if ((1.0 - cosom) > CMP_EPSILON) {
		// standard case (slerp)
		omega = ::acos(cosom);
		sinom = ::sin(omega);
		scale0 = ::sin((1.0 - t) * omega) / sinom;
		scale1 = ::sin(t * omega) / sinom;
	} else {
		// "from" and "to" quaternions are very close
		//  ... so we can do a linear interpolation
		scale0 = 1.0 - t;
		scale1 = t;
	}
	// calculate final values
	return quat(
			scale0 * x + scale1 * to1.x,
			scale0 * y + scale1 * to1.y,
			scale0 * z + scale1 * to1.z,
			scale0 * w + scale1 * to1.w);
}

quat quat::slerpni(const quat &q, const real_t &t) const {
	const quat &from = *this;

	real_t dot = from.dot(q);

	if (::fabs(dot) > 0.9999)
		return from;

	real_t theta = ::acos(dot),
		   sinT = 1.0 / ::sin(theta),
		   newFactor = ::sin(t * theta) * sinT,
		   invFactor = ::sin((1.0 - t) * theta) * sinT;

	return quat(invFactor * from.x + newFactor * q.x,
			invFactor * from.y + newFactor * q.y,
			invFactor * from.z + newFactor * q.z,
			invFactor * from.w + newFactor * q.w);
}

quat quat::cubic_slerp(const quat &q, const quat &prep, const quat &postq, const real_t &t) const {
	//the only way to do slerp :|
	real_t t2 = (1.0 - t) * t * 2;
	quat sp = this->slerp(q, t);
	quat sq = prep.slerpni(postq, t);
	return sp.slerpni(sq, t2);
}

void quat::get_axis_and_angle(vector3 &r_axis, real_t &r_angle) const {
	r_angle = 2 * ::acos(w);
	r_axis.x = x / ::sqrt(1 - w * w);
	r_axis.y = y / ::sqrt(1 - w * w);
	r_axis.z = z / ::sqrt(1 - w * w);
}

void quat::set_axis_angle(const vector3 &axis, const float angle) {
	ERR_FAIL_COND(!axis.is_normalized());

	real_t d = axis.length();
	if (d == 0)
		set(0, 0, 0, 0);
	else {
		real_t sin_angle = ::sin(angle * 0.5);
		real_t cos_angle = ::cos(angle * 0.5);
		real_t s = sin_angle / d;
		set(axis.x * s, axis.y * s, axis.z * s,
				cos_angle);
	}
}

quat quat::operator*(const vector3 &v) const {
	return quat(w * v.x + y * v.z - z * v.y,
			w * v.y + z * v.x - x * v.z,
			w * v.z + x * v.y - y * v.x,
			-x * v.x - y * v.y - z * v.z);
}

vector3 quat::xform(const vector3 &v) const {
	quat q = *this * v;
	q *= this->inverse();
	return vector3(q.x, q.y, q.z);
}

quat::operator string() const {
	return string(); // @Todo
}

quat::quat(const vector3 &axis, const real_t &angle) {
	real_t d = axis.length();
	if (d == 0)
		set(0, 0, 0, 0);
	else {
		real_t sin_angle = ::sin(angle * 0.5);
		real_t cos_angle = ::cos(angle * 0.5);
		real_t s = sin_angle / d;
		set(axis.x * s, axis.y * s, axis.z * s,
				cos_angle);
	}
}

quat::quat(const vector3 &v0, const vector3 &v1) // shortest arc
{
	vector3 c = v0.cross(v1);
	real_t d = v0.dot(v1);

	if (d < -1.0 + CMP_EPSILON) {
		x = 0;
		y = 1;
		z = 0;
		w = 0;
	} else {
		real_t s = ::sqrt((1.0 + d) * 2.0);
		real_t rs = 1.0 / s;

		x = c.x * rs;
		y = c.y * rs;
		z = c.z * rs;
		w = s * 0.5;
	}
}

real_t quat::dot(const quat &q) const {
	return x * q.x + y * q.y + z * q.z + w * q.w;
}

real_t quat::length_squared() const {
	return dot(*this);
}

void quat::operator+=(const quat &q) {
	x += q.x;
	y += q.y;
	z += q.z;
	w += q.w;
}

void quat::operator-=(const quat &q) {
	x -= q.x;
	y -= q.y;
	z -= q.z;
	w -= q.w;
}

void quat::operator*=(const quat &q) {
	set(w * q.x + x * q.w + y * q.z - z * q.y,
			w * q.y + y * q.w + z * q.x - x * q.z,
			w * q.z + z * q.w + x * q.y - y * q.x,
			w * q.w - x * q.x - y * q.y - z * q.z);
}

void quat::operator*=(const real_t &s) {
	x *= s;
	y *= s;
	z *= s;
	w *= s;
}

void quat::operator/=(const real_t &s) {
	*this *= 1.0 / s;
}

quat quat::operator+(const quat &q2) const {
	const quat &q1 = *this;
	return quat(q1.x + q2.x, q1.y + q2.y, q1.z + q2.z, q1.w + q2.w);
}

quat quat::operator-(const quat &q2) const {
	const quat &q1 = *this;
	return quat(q1.x - q2.x, q1.y - q2.y, q1.z - q2.z, q1.w - q2.w);
}

quat quat::operator*(const quat &q2) const {
	quat q1 = *this;
	q1 *= q2;
	return q1;
}

quat quat::operator-() const {
	const quat &q2 = *this;
	return quat(-q2.x, -q2.y, -q2.z, -q2.w);
}

quat quat::operator*(const real_t &s) const {
	return quat(x * s, y * s, z * s, w * s);
}

quat quat::operator/(const real_t &s) const {
	return *this * (1.0 / s);
}

bool quat::operator==(const quat &p_quat) const {
	return x == p_quat.x && y == p_quat.y && z == p_quat.z && w == p_quat.w;
}

bool quat::operator!=(const quat &p_quat) const {
	return x != p_quat.x || y != p_quat.y || z != p_quat.z || w != p_quat.w;
}

} // namespace gd
