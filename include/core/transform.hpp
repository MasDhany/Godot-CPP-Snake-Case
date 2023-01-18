/*************************************************************************/
/*  transform.hpp                                                        */
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

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "basis.hpp"

#include "aabb.hpp"
#include "plane.hpp"

namespace gd {

class transform {
public:
	static const transform IDENTITY;
	static const transform FLIP_X;
	static const transform FLIP_Y;
	static const transform FLIP_Z;

	basis basis_;
	vector3 origin;

	void invert();
	transform inverse() const;

	void affine_invert();
	transform affine_inverse() const;

	transform rotated(const vector3 &p_axis, real_t p_phi) const;

	void rotate(const vector3 &p_axis, real_t p_phi);
	void rotate_basis(const vector3 &p_axis, real_t p_phi);

	void set_look_at(const vector3 &p_eye, const vector3 &p_target, const vector3 &p_up);
	transform looking_at(const vector3 &p_target, const vector3 &p_up) const;

	void scale(const vector3 &p_scale);
	transform scaled(const vector3 &p_scale) const;
	void scale_basis(const vector3 &p_scale);
	void translate(real_t p_tx, real_t p_ty, real_t p_tz);
	void translate(const vector3 &p_translation);
	transform translated(const vector3 &p_translation) const;

	inline const basis &get_basis() const { return basis_; }
	inline void set_basis(const basis &p_basis) { basis_ = p_basis; }

	inline const vector3 &get_origin() const { return origin; }
	inline void set_origin(const vector3 &p_origin) { origin = p_origin; }

	void orthonormalize();
	transform orthonormalized() const;

	bool operator==(const transform &p_transform) const;
	bool operator!=(const transform &p_transform) const;

	vector3 xform(const vector3 &p_vector) const;
	vector3 xform_inv(const vector3 &p_vector) const;

	plane xform(const plane &p_plane) const;
	plane xform_inv(const plane &p_plane) const;

	aabb xform(const aabb &p_aabb) const;
	aabb xform_inv(const aabb &p_aabb) const;

	void operator*=(const transform &p_transform);
	transform operator*(const transform &p_transform) const;

	inline vector3 operator*(const vector3 &p_vector) const {
		return vector3(
				basis_.elements[0].dot(p_vector) + origin.x,
				basis_.elements[1].dot(p_vector) + origin.y,
				basis_.elements[2].dot(p_vector) + origin.z);
	}

	transform interpolate_with(const transform &p_transform, real_t p_c) const;

	transform inverse_xform(const transform &t) const;

	void set(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz, real_t tx, real_t ty, real_t tz);

	operator string() const;

	inline transform(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz, real_t tx, real_t ty, real_t tz) {
		set(xx, xy, xz, yx, yy, yz, zx, zy, zz, tx, ty, tz);
	}

	transform(const basis &p_basis, const vector3 &p_origin = vector3());
	inline transform() {}
};

} // namespace gd

#endif // TRANSFORM_H
