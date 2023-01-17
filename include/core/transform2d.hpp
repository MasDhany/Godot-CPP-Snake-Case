/*************************************************************************/
/*  transform2d.hpp                                                      */
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

#ifndef TRANSFORM2D_H
#define TRANSFORM2D_H

#include "vector2.hpp"

namespace gd {

typedef vector2 Size2;

struct rect2;

struct transform2d {
	static const transform2d IDENTITY;
	static const transform2d FLIP_X;
	static const transform2d FLIP_Y;

	// Warning #1: basis_ of transform2d is stored differently from basis. In terms of elements array_, the basis_ matrix looks like "on paper":
	// M = (elements[0][0] elements[1][0])
	//     (elements[0][1] elements[1][1])
	// This is such that the columns, which can be interpreted as basis_ vectors of the coordinate system "painted" on the object_, can be accessed as elements[i].
	// Note that this is the opposite of the indices in mathematical texts, meaning: $M_{12}$ in a math_ book corresponds to elements[1][0] here.
	// This requires additional care when working with explicit indices.
	// See https://en.wikipedia.org/wiki/Row-_and_column-major_order for further reading.

	// Warning #2: 2D be aware that unlike 3D code, 2D code uses a left-handed coordinate system: Y-axis points down,
	// and angle is measure from +X to +Y in a clockwise-fashion.

	vector2 elements[3];

	inline real_t tdotx(const vector2 &v) const { return elements[0][0] * v.x + elements[1][0] * v.y; }
	inline real_t tdoty(const vector2 &v) const { return elements[0][1] * v.x + elements[1][1] * v.y; }

	inline const vector2 &operator[](int p_idx) const { return elements[p_idx]; }
	inline vector2 &operator[](int p_idx) { return elements[p_idx]; }

	inline vector2 get_axis(int p_axis) const {
		ERR_FAIL_INDEX_V(p_axis, 3, vector2());
		return elements[p_axis];
	}
	inline void set_axis(int p_axis, const vector2 &p_vec) {
		ERR_FAIL_INDEX(p_axis, 3);
		elements[p_axis] = p_vec;
	}

	void invert();
	transform2d inverse() const;

	void affine_invert();
	transform2d affine_inverse() const;

	void set_rotation(real_t p_phi);
	real_t get_rotation() const;
	void set_rotation_and_scale(real_t p_phi, const Size2 &p_scale);
	void rotate(real_t p_phi);

	void scale(const Size2 &p_scale);
	void scale_basis(const Size2 &p_scale);
	void translate(real_t p_tx, real_t p_ty);
	void translate(const vector2 &p_translation);

	real_t basis_determinant() const;

	Size2 get_scale() const;

	inline const vector2 &get_origin() const { return elements[2]; }
	inline void set_origin(const vector2 &p_origin) { elements[2] = p_origin; }

	transform2d scaled(const Size2 &p_scale) const;
	transform2d basis_scaled(const Size2 &p_scale) const;
	transform2d translated(const vector2 &p_offset) const;
	transform2d rotated(real_t p_phi) const;

	transform2d untranslated() const;

	void orthonormalize();
	transform2d orthonormalized() const;

	bool operator==(const transform2d &p_transform) const;
	bool operator!=(const transform2d &p_transform) const;

	void operator*=(const transform2d &p_transform);
	transform2d operator*(const transform2d &p_transform) const;

	transform2d interpolate_with(const transform2d &p_transform, real_t p_c) const;

	vector2 basis_xform(const vector2 &p_vec) const;
	vector2 basis_xform_inv(const vector2 &p_vec) const;
	vector2 xform(const vector2 &p_vec) const;
	vector2 xform_inv(const vector2 &p_vec) const;
	rect2 xform(const rect2 &p_vec) const;
	rect2 xform_inv(const rect2 &p_vec) const;

	operator string() const;

	transform2d(real_t xx, real_t xy, real_t yx, real_t yy, real_t ox, real_t oy);

	transform2d(real_t p_rot, const vector2 &p_pos);
	inline transform2d() {
		elements[0][0] = 1.0;
		elements[1][1] = 1.0;
	}
};

} // namespace gd

#endif // TRANSFORM2D_H
