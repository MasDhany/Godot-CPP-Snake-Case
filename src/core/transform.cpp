/*************************************************************************/
/*  transform.cpp                                                        */
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

#include "transform.hpp"

#include "basis.hpp"

#include "aabb.hpp"
#include "plane.hpp"

#include "quat.hpp"

namespace gd {

const transform transform::IDENTITY = transform();
const transform transform::FLIP_X = transform(-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0);
const transform transform::FLIP_Y = transform(1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0);
const transform transform::FLIP_Z = transform(1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0);

transform transform::inverse_xform(const transform &t) const {
	vector3 v = t.origin - origin;
	return transform(basis_.transpose_xform(t.basis_),
			basis_.xform(v));
}

void transform::set(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz, real_t tx, real_t ty, real_t tz) {
	basis_.elements[0][0] = xx;
	basis_.elements[0][1] = xy;
	basis_.elements[0][2] = xz;
	basis_.elements[1][0] = yx;
	basis_.elements[1][1] = yy;
	basis_.elements[1][2] = yz;
	basis_.elements[2][0] = zx;
	basis_.elements[2][1] = zy;
	basis_.elements[2][2] = zz;
	origin.x = tx;
	origin.y = ty;
	origin.z = tz;
}

vector3 transform::xform(const vector3 &p_vector) const {
	return vector3(
			basis_.elements[0].dot(p_vector) + origin.x,
			basis_.elements[1].dot(p_vector) + origin.y,
			basis_.elements[2].dot(p_vector) + origin.z);
}
vector3 transform::xform_inv(const vector3 &p_vector) const {
	vector3 v = p_vector - origin;

	return vector3(
			(basis_.elements[0][0] * v.x) + (basis_.elements[1][0] * v.y) + (basis_.elements[2][0] * v.z),
			(basis_.elements[0][1] * v.x) + (basis_.elements[1][1] * v.y) + (basis_.elements[2][1] * v.z),
			(basis_.elements[0][2] * v.x) + (basis_.elements[1][2] * v.y) + (basis_.elements[2][2] * v.z));
}

plane transform::xform(const plane &p_plane) const {
	vector3 point = p_plane.normal * p_plane.d;
	vector3 point_dir = point + p_plane.normal;
	point = xform(point);
	point_dir = xform(point_dir);

	vector3 normal = point_dir - point;
	normal.normalize();
	real_t d = normal.dot(point);

	return plane(normal, d);
}
plane transform::xform_inv(const plane &p_plane) const {
	vector3 point = p_plane.normal * p_plane.d;
	vector3 point_dir = point + p_plane.normal;
	point = xform_inv(point);
	point_dir = xform_inv(point_dir);

	vector3 normal = point_dir - point;
	normal.normalize();
	real_t d = normal.dot(point);

	return plane(normal, d);
}

aabb transform::xform(const aabb &p_aabb) const {
	/* define vertices */
	vector3 x = basis_.get_axis(0) * p_aabb.size.x;
	vector3 y = basis_.get_axis(1) * p_aabb.size.y;
	vector3 z = basis_.get_axis(2) * p_aabb.size.z;
	vector3 pos = xform(p_aabb.position);
	//could be even further optimized
	aabb new_aabb;
	new_aabb.position = pos;
	new_aabb.expand_to(pos + x);
	new_aabb.expand_to(pos + y);
	new_aabb.expand_to(pos + z);
	new_aabb.expand_to(pos + x + y);
	new_aabb.expand_to(pos + x + z);
	new_aabb.expand_to(pos + y + z);
	new_aabb.expand_to(pos + x + y + z);
	return new_aabb;
}
aabb transform::xform_inv(const aabb &p_aabb) const {
	/* define vertices */
	vector3 vertices[8] = {
		vector3(p_aabb.position.x + p_aabb.size.x, p_aabb.position.y + p_aabb.size.y, p_aabb.position.z + p_aabb.size.z),
		vector3(p_aabb.position.x + p_aabb.size.x, p_aabb.position.y + p_aabb.size.y, p_aabb.position.z),
		vector3(p_aabb.position.x + p_aabb.size.x, p_aabb.position.y, p_aabb.position.z + p_aabb.size.z),
		vector3(p_aabb.position.x + p_aabb.size.x, p_aabb.position.y, p_aabb.position.z),
		vector3(p_aabb.position.x, p_aabb.position.y + p_aabb.size.y, p_aabb.position.z + p_aabb.size.z),
		vector3(p_aabb.position.x, p_aabb.position.y + p_aabb.size.y, p_aabb.position.z),
		vector3(p_aabb.position.x, p_aabb.position.y, p_aabb.position.z + p_aabb.size.z),
		vector3(p_aabb.position.x, p_aabb.position.y, p_aabb.position.z)
	};

	aabb ret;

	ret.position = xform_inv(vertices[0]);

	for (int i = 1; i < 8; i++) {
		ret.expand_to(xform_inv(vertices[i]));
	}

	return ret;
}

void transform::affine_invert() {
	basis_.invert();
	origin = basis_.xform(-origin);
}

transform transform::affine_inverse() const {
	transform ret = *this;
	ret.affine_invert();
	return ret;
}

void transform::invert() {
	basis_.transpose();
	origin = basis_.xform(-origin);
}

transform transform::inverse() const {
	// FIXME: this function assumes the basis_ is a rotation matrix, with no scaling.
	// transform::affine_inverse can handle matrices with scaling, so gdscript should eventually use that.
	transform ret = *this;
	ret.invert();
	return ret;
}

void transform::rotate(const vector3 &p_axis, real_t p_phi) {
	*this = rotated(p_axis, p_phi);
}

transform transform::rotated(const vector3 &p_axis, real_t p_phi) const {
	return transform(basis(p_axis, p_phi), vector3()) * (*this);
}

void transform::rotate_basis(const vector3 &p_axis, real_t p_phi) {
	basis_.rotate(p_axis, p_phi);
}

transform transform::looking_at(const vector3 &p_target, const vector3 &p_up) const {
	transform t = *this;
	t.set_look_at(origin, p_target, p_up);
	return t;
}

void transform::set_look_at(const vector3 &p_eye, const vector3 &p_target, const vector3 &p_up) {
	// reference: MESA source code
	vector3 v_x, v_y, v_z;

	/* Make rotation matrix */

	/* Z vector */
	v_z = p_eye - p_target;

	v_z.normalize();

	v_y = p_up;

	v_x = v_y.cross(v_z);

	/* Recompute Y = Z cross X */
	v_y = v_z.cross(v_x);

	v_x.normalize();
	v_y.normalize();

	basis_.set_axis(0, v_x);
	basis_.set_axis(1, v_y);
	basis_.set_axis(2, v_z);
	origin = p_eye;
}

transform transform::interpolate_with(const transform &p_transform, real_t p_c) const {
	/* not sure if very "efficient" but good enough? */

	vector3 src_scale = basis_.get_scale();
	quat src_rot = basis_;
	vector3 src_loc = origin;

	vector3 dst_scale = p_transform.basis_.get_scale();
	quat dst_rot = p_transform.basis_;
	vector3 dst_loc = p_transform.origin;

	transform dst;
	dst.basis_ = src_rot.slerp(dst_rot, p_c);
	dst.basis_.scale(src_scale.linear_interpolate(dst_scale, p_c));
	dst.origin = src_loc.linear_interpolate(dst_loc, p_c);

	return dst;
}

void transform::scale(const vector3 &p_scale) {
	basis_.scale(p_scale);
	origin *= p_scale;
}

transform transform::scaled(const vector3 &p_scale) const {
	transform t = *this;
	t.scale(p_scale);
	return t;
}

void transform::scale_basis(const vector3 &p_scale) {
	basis_.scale(p_scale);
}

void transform::translate(real_t p_tx, real_t p_ty, real_t p_tz) {
	translate(vector3(p_tx, p_ty, p_tz));
}
void transform::translate(const vector3 &p_translation) {
	for (int i = 0; i < 3; i++) {
		origin[i] += basis_.elements[i].dot(p_translation);
	}
}

transform transform::translated(const vector3 &p_translation) const {
	transform t = *this;
	t.translate(p_translation);
	return t;
}

void transform::orthonormalize() {
	basis_.orthonormalize();
}

transform transform::orthonormalized() const {
	transform _copy = *this;
	_copy.orthonormalize();
	return _copy;
}

bool transform::operator==(const transform &p_transform) const {
	return (basis_ == p_transform.basis_ && origin == p_transform.origin);
}
bool transform::operator!=(const transform &p_transform) const {
	return (basis_ != p_transform.basis_ || origin != p_transform.origin);
}

void transform::operator*=(const transform &p_transform) {
	origin = xform(p_transform.origin);
	basis_ *= p_transform.basis_;
}

transform transform::operator*(const transform &p_transform) const {
	transform t = *this;
	t *= p_transform;
	return t;
}

transform::operator string() const {
	return basis_.operator string() + " - " + origin.operator string();
}

transform::transform(const basis &p_basis, const vector3 &p_origin) {
	basis_ = p_basis;
	origin = p_origin;
}

} // namespace gd
