/*************************************************************************/
/*  transform2d.cpp                                                      */
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

#include "transform2d.hpp"
#include "rect2.hpp"
#include "string.hpp"
#include "vector2.hpp"

#include <algorithm>

namespace gd {

const transform2d transform2d::IDENTITY;
const transform2d transform2d::FLIP_X = transform2d(-1, 0, 0, 1, 0, 0);
const transform2d transform2d::FLIP_Y = transform2d(1, 0, 0, -1, 0, 0);

transform2d::transform2d(real_t xx, real_t xy, real_t yx, real_t yy, real_t ox, real_t oy) {
	elements[0][0] = xx;
	elements[0][1] = xy;
	elements[1][0] = yx;
	elements[1][1] = yy;
	elements[2][0] = ox;
	elements[2][1] = oy;
}

vector2 transform2d::basis_xform(const vector2 &v) const {
	return vector2(
			tdotx(v),
			tdoty(v));
}

vector2 transform2d::basis_xform_inv(const vector2 &v) const {
	return vector2(
			elements[0].dot(v),
			elements[1].dot(v));
}

vector2 transform2d::xform(const vector2 &v) const {
	return vector2(
				   tdotx(v),
				   tdoty(v)) +
		   elements[2];
}
vector2 transform2d::xform_inv(const vector2 &p_vec) const {
	vector2 v = p_vec - elements[2];

	return vector2(
			elements[0].dot(v),
			elements[1].dot(v));
}
rect2 transform2d::xform(const rect2 &p_rect) const {
	vector2 x = elements[0] * p_rect.size.x;
	vector2 y = elements[1] * p_rect.size.y;
	vector2 position = xform(p_rect.position);

	rect2 new_rect;
	new_rect.position = position;
	new_rect.expand_to(position + x);
	new_rect.expand_to(position + y);
	new_rect.expand_to(position + x + y);
	return new_rect;
}

void transform2d::set_rotation_and_scale(real_t p_rot, const Size2 &p_scale) {
	elements[0][0] = ::cos(p_rot) * p_scale.x;
	elements[1][1] = ::cos(p_rot) * p_scale.y;
	elements[1][0] = -::sin(p_rot) * p_scale.y;
	elements[0][1] = ::sin(p_rot) * p_scale.x;
}

rect2 transform2d::xform_inv(const rect2 &p_rect) const {
	vector2 ends[4] = {
		xform_inv(p_rect.position),
		xform_inv(vector2(p_rect.position.x, p_rect.position.y + p_rect.size.y)),
		xform_inv(vector2(p_rect.position.x + p_rect.size.x, p_rect.position.y + p_rect.size.y)),
		xform_inv(vector2(p_rect.position.x + p_rect.size.x, p_rect.position.y))
	};

	rect2 new_rect;
	new_rect.position = ends[0];
	new_rect.expand_to(ends[1]);
	new_rect.expand_to(ends[2]);
	new_rect.expand_to(ends[3]);

	return new_rect;
}

void transform2d::invert() {
	// FIXME: this function assumes the basis_ is a rotation matrix, with no scaling.
	// transform2d::affine_inverse can handle matrices with scaling, so gdscript should eventually use that.
	std::swap(elements[0][1], elements[1][0]);
	elements[2] = basis_xform(-elements[2]);
}

transform2d transform2d::inverse() const {
	transform2d inv = *this;
	inv.invert();
	return inv;
}

void transform2d::affine_invert() {
	real_t det = basis_determinant();
	ERR_FAIL_COND(det == 0);
	real_t idet = 1.0 / det;

	std::swap(elements[0][0], elements[1][1]);
	elements[0] *= vector2(idet, -idet);
	elements[1] *= vector2(-idet, idet);

	elements[2] = basis_xform(-elements[2]);
}

transform2d transform2d::affine_inverse() const {
	transform2d inv = *this;
	inv.affine_invert();
	return inv;
}

void transform2d::rotate(real_t p_phi) {
	*this = transform2d(p_phi, vector2()) * (*this);
}

real_t transform2d::get_rotation() const {
	real_t det = basis_determinant();
	transform2d m = orthonormalized();
	if (det < 0) {
		m.scale_basis(Size2(-1, -1));
	}
	return ::atan2(m[0].y, m[0].x);
}

void transform2d::set_rotation(real_t p_rot) {
	real_t cr = ::cos(p_rot);
	real_t sr = ::sin(p_rot);
	elements[0][0] = cr;
	elements[0][1] = sr;
	elements[1][0] = -sr;
	elements[1][1] = cr;
}

transform2d::transform2d(real_t p_rot, const vector2 &p_position) {
	real_t cr = ::cos(p_rot);
	real_t sr = ::sin(p_rot);
	elements[0][0] = cr;
	elements[0][1] = sr;
	elements[1][0] = -sr;
	elements[1][1] = cr;
	elements[2] = p_position;
}

Size2 transform2d::get_scale() const {
	real_t det_sign = basis_determinant() > 0 ? 1 : -1;
	return det_sign * Size2(elements[0].length(), elements[1].length());
}

void transform2d::scale(const Size2 &p_scale) {
	scale_basis(p_scale);
	elements[2] *= p_scale;
}
void transform2d::scale_basis(const Size2 &p_scale) {
	elements[0][0] *= p_scale.x;
	elements[0][1] *= p_scale.y;
	elements[1][0] *= p_scale.x;
	elements[1][1] *= p_scale.y;
}
void transform2d::translate(real_t p_tx, real_t p_ty) {
	translate(vector2(p_tx, p_ty));
}
void transform2d::translate(const vector2 &p_translation) {
	elements[2] += basis_xform(p_translation);
}

void transform2d::orthonormalize() {
	// Gram-Schmidt Process

	vector2 x = elements[0];
	vector2 y = elements[1];

	x.normalize();
	y = (y - x * (x.dot(y)));
	y.normalize();

	elements[0] = x;
	elements[1] = y;
}
transform2d transform2d::orthonormalized() const {
	transform2d on = *this;
	on.orthonormalize();
	return on;
}

bool transform2d::operator==(const transform2d &p_transform) const {
	for (int i = 0; i < 3; i++) {
		if (elements[i] != p_transform.elements[i])
			return false;
	}

	return true;
}

bool transform2d::operator!=(const transform2d &p_transform) const {
	for (int i = 0; i < 3; i++) {
		if (elements[i] != p_transform.elements[i])
			return true;
	}

	return false;
}

void transform2d::operator*=(const transform2d &p_transform) {
	elements[2] = xform(p_transform.elements[2]);

	real_t x0, x1, y0, y1;

	x0 = tdotx(p_transform.elements[0]);
	x1 = tdoty(p_transform.elements[0]);
	y0 = tdotx(p_transform.elements[1]);
	y1 = tdoty(p_transform.elements[1]);

	elements[0][0] = x0;
	elements[0][1] = x1;
	elements[1][0] = y0;
	elements[1][1] = y1;
}

transform2d transform2d::operator*(const transform2d &p_transform) const {
	transform2d t = *this;
	t *= p_transform;
	return t;
}

transform2d transform2d::scaled(const Size2 &p_scale) const {
	transform2d copy = *this;
	copy.scale(p_scale);
	return copy;
}

transform2d transform2d::basis_scaled(const Size2 &p_scale) const {
	transform2d copy = *this;
	copy.scale_basis(p_scale);
	return copy;
}

transform2d transform2d::untranslated() const {
	transform2d copy = *this;
	copy.elements[2] = vector2();
	return copy;
}

transform2d transform2d::translated(const vector2 &p_offset) const {
	transform2d copy = *this;
	copy.translate(p_offset);
	return copy;
}

transform2d transform2d::rotated(real_t p_phi) const {
	transform2d copy = *this;
	copy.rotate(p_phi);
	return copy;
}

real_t transform2d::basis_determinant() const {
	return elements[0].x * elements[1].y - elements[0].y * elements[1].x;
}

transform2d transform2d::interpolate_with(const transform2d &p_transform, real_t p_c) const {
	//extract parameters
	vector2 p1 = get_origin();
	vector2 p2 = p_transform.get_origin();

	real_t r1 = get_rotation();
	real_t r2 = p_transform.get_rotation();

	Size2 s1 = get_scale();
	Size2 s2 = p_transform.get_scale();

	//slerp rotation
	vector2 v1(::cos(r1), ::sin(r1));
	vector2 v2(::cos(r2), ::sin(r2));

	real_t dot = v1.dot(v2);

	dot = (dot < -1.0) ? -1.0 : ((dot > 1.0) ? 1.0 : dot); //clamp dot to [-1,1]

	vector2 v;

	if (dot > 0.9995) {
		v = vector2::linear_interpolate(v1, v2, p_c).normalized(); //linearly interpolate to avoid numerical precision issues
	} else {
		real_t angle = p_c * ::acos(dot);
		vector2 v3 = (v2 - v1 * dot).normalized();
		v = v1 * ::cos(angle) + v3 * ::sin(angle);
	}

	//construct matrix
	transform2d res(::atan2(v.y, v.x), vector2::linear_interpolate(p1, p2, p_c));
	res.scale_basis(vector2::linear_interpolate(s1, s2, p_c));
	return res;
}

transform2d::operator string() const {
	return string(string() + elements[0] + ", " + elements[1] + ", " + elements[2]);
}

} // namespace gd
