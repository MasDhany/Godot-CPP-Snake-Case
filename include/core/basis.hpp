/*************************************************************************/
/*  basis.hpp                                                            */
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

#ifndef BASIS_H
#define BASIS_H

#include <gdnative/basis.h>

#include "defs.hpp"

#include "vector3.hpp"

namespace gd {

class quat;

class basis {
private:
	static const basis IDENTITY;
	static const basis FLIP_X;
	static const basis FLIP_Y;
	static const basis FLIP_Z;

	// This helper template is for mimicking the behavior difference between the engine_
	// and script_ interfaces that logically script_ sees matrices as column major, while
	// the engine_ stores them in row major to efficiently take advantage of SIMD
	// instructions in case of matrix-vector multiplications.
	// With this helper template native scripts see the data as if it was column major
	// without actually transposing the basis_ matrix at the script_-engine_ boundary.
	template <int column>
	class column_vector3 {
	private:
		template <int column1, int component>
		class column_vector_component {
		private:
			vector3 elements[3];

		protected:
			inline column_vector_component<column1, component> &operator=(const column_vector_component<column1, component> &p_value) {
				return *this = real_t(p_value);
			}

			inline column_vector_component(const column_vector_component<column1, component> &p_value) {
				*this = real_t(p_value);
			}

			inline column_vector_component<column1, component> &operator=(const real_t &p_value) {
				elements[component][column1] = p_value;
				return *this;
			}

			inline operator real_t() const {
				return elements[component][column1];
			}
		};

	public:
		enum Axis {
			AXIS_X,
			AXIS_Y,
			AXIS_Z,
		};

		union {
			column_vector_component<column, 0> x;
			column_vector_component<column, 1> y;
			column_vector_component<column, 2> z;

			vector3 elements[3]; // Not for direct access, use [] operator instead
		};

		inline column_vector3<column> &operator=(const column_vector3<column> &p_value) {
			return *this = vector3(p_value);
		}

		inline column_vector3(const column_vector3<column> &p_value) {
			*this = vector3(p_value);
		}

		inline column_vector3<column> &operator=(const vector3 &p_value) {
			elements[0][column] = p_value.x;
			elements[1][column] = p_value.y;
			elements[2][column] = p_value.z;
			return *this;
		}

		inline operator vector3() const {
			return vector3(elements[0][column], elements[1][column], elements[2][column]);
		}

		// Unfortunately, we also need to replicate the other interfaces of vector3 in
		// order for being able to directly operate on these "meta-Vector3" objects without
		// an explicit cast or an intermediate assignment to a real vector3 object_.

		inline const real_t &operator[](int p_axis) const {
			return elements[p_axis][column];
		}

		inline real_t &operator[](int p_axis) {
			return elements[p_axis][column];
		}

		inline column_vector3<column> &operator+=(const vector3 &p_v) {
			return *this = *this + p_v;
		}

		inline vector3 operator+(const vector3 &p_v) const {
			return vector3(*this) + p_v;
		}

		inline column_vector3<column> &operator-=(const vector3 &p_v) {
			return *this = *this - p_v;
		}

		inline vector3 operator-(const vector3 &p_v) const {
			return vector3(*this) - p_v;
		}

		inline column_vector3<column> &operator*=(const vector3 &p_v) {
			return *this = *this * p_v;
		}

		inline vector3 operator*(const vector3 &p_v) const {
			return vector3(*this) * p_v;
		}

		inline column_vector3<column> &operator/=(const vector3 &p_v) {
			return *this = *this / p_v;
		}

		inline vector3 operator/(const vector3 &p_v) const {
			return vector3(*this) / p_v;
		}

		inline column_vector3<column> &operator*=(real_t p_scalar) {
			return *this = *this * p_scalar;
		}

		inline vector3 operator*(real_t p_scalar) const {
			return vector3(*this) * p_scalar;
		}

		inline column_vector3<column> &operator/=(real_t p_scalar) {
			return *this = *this / p_scalar;
		}

		inline vector3 operator/(real_t p_scalar) const {
			return vector3(*this) / p_scalar;
		}

		inline vector3 operator-() const {
			return -vector3(*this);
		}

		inline bool operator==(const vector3 &p_v) const {
			return vector3(*this) == p_v;
		}

		inline bool operator!=(const vector3 &p_v) const {
			return vector3(*this) != p_v;
		}

		inline bool operator<(const vector3 &p_v) const {
			return vector3(*this) < p_v;
		}

		inline bool operator<=(const vector3 &p_v) const {
			return vector3(*this) <= p_v;
		}

		inline vector3 abs() const {
			return vector3(*this).abs();
		}

		inline vector3 ceil() const {
			return vector3(*this).ceil();
		}

		inline vector3 cross(const vector3 &b) const {
			return vector3(*this).cross(b);
		}

		inline vector3 linear_interpolate(const vector3 &p_b, real_t p_t) const {
			return vector3(*this).linear_interpolate(p_b, p_t);
		}

		inline vector3 cubic_interpolate(const vector3 &b, const vector3 &pre_a, const vector3 &post_b, const real_t t) const {
			return vector3(*this).cubic_interpolate(b, pre_a, post_b, t);
		}

		inline vector3 bounce(const vector3 &p_normal) const {
			return vector3(*this).bounce(p_normal);
		}

		inline real_t length() const {
			return vector3(*this).length();
		}

		inline real_t length_squared() const {
			return vector3(*this).length_squared();
		}

		inline real_t distance_squared_to(const vector3 &b) const {
			return vector3(*this).distance_squared_to(b);
		}

		inline real_t distance_to(const vector3 &b) const {
			return vector3(*this).distance_to(b);
		}

		inline real_t dot(const vector3 &b) const {
			return vector3(*this).dot(b);
		}

		inline real_t angle_to(const vector3 &b) const {
			return vector3(*this).angle_to(b);
		}

		inline vector3 floor() const {
			return vector3(*this).floor();
		}

		inline vector3 inverse() const {
			return vector3(*this).inverse();
		}

		inline bool is_normalized() const {
			return vector3(*this).is_normalized();
		}

		inline basis outer(const vector3 &b) const {
			return vector3(*this).outer(b);
		}

		inline int max_axis() const {
			return vector3(*this).max_axis();
		}

		inline int min_axis() const {
			return vector3(*this).min_axis();
		}

		inline void normalize() {
			vector3 v = *this;
			v.normalize();
			*this = v;
		}

		inline vector3 normalized() const {
			return vector3(*this).normalized();
		}

		inline vector3 reflect(const vector3 &by) const {
			return vector3(*this).reflect(by);
		}

		inline vector3 rotated(const vector3 &axis, const real_t phi) const {
			return vector3(*this).rotated(axis, phi);
		}

		inline void rotate(const vector3 &p_axis, real_t p_phi) {
			vector3 v = *this;
			v.rotate(p_axis, p_phi);
			*this = v;
		}

		inline vector3 slide(const vector3 &by) const {
			return vector3(*this).slide(by);
		}

		inline void snap(real_t p_val) {
			vector3 v = *this;
			v.snap(p_val);
			*this = v;
		}

		inline vector3 snapped(const float by) {
			return vector3(*this).snapped(by);
		}

		inline operator string() const {
			return string(vector3(*this));
		}
	};

public:
	union {
		column_vector3<0> x;
		column_vector3<1> y;
		column_vector3<2> z;

		vector3 elements[3]; // Not for direct access, use [] operator instead
	};

	inline basis(const basis &p_basis) {
		elements[0] = p_basis.elements[0];
		elements[1] = p_basis.elements[1];
		elements[2] = p_basis.elements[2];
	}

	inline basis &operator=(const basis &p_basis) {
		elements[0] = p_basis.elements[0];
		elements[1] = p_basis.elements[1];
		elements[2] = p_basis.elements[2];
		return *this;
	}

	basis(const quat &p_quat); // euler
	basis(const vector3 &p_euler); // euler
	basis(const vector3 &p_axis, real_t p_phi);

	basis(const vector3 &row0, const vector3 &row1, const vector3 &row2);

	basis(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz);

	basis();

	const vector3 operator[](int axis) const {
		return get_axis(axis);
	}

	column_vector3<0> &operator[](int axis) {
		// We need to do a little pointer magic to get this to work, because the
		// column_vector3 template takes the axis as a template parameter.
		// Don't touch this unless you're sure what you're doing!
		return (reinterpret_cast<basis *>(reinterpret_cast<real_t *>(this) + axis))->x;
	}

	void invert();

	bool isequal_approx(const basis &a, const basis &b) const;

	bool is_orthogonal() const;

	bool is_rotation() const;

	void transpose();

	basis inverse() const;

	basis transposed() const;

	real_t determinant() const;

	vector3 get_axis(int p_axis) const;

	void set_axis(int p_axis, const vector3 &p_value);

	void rotate(const vector3 &p_axis, real_t p_phi);

	basis rotated(const vector3 &p_axis, real_t p_phi) const;

	void scale(const vector3 &p_scale);

	basis scaled(const vector3 &p_scale) const;

	vector3 get_scale() const;

	basis slerp(basis b, float t) const;

	vector3 get_euler_xyz() const;
	void set_euler_xyz(const vector3 &p_euler);
	vector3 get_euler_yxz() const;
	void set_euler_yxz(const vector3 &p_euler);

	inline vector3 get_euler() const { return get_euler_yxz(); }
	inline void set_euler(const vector3 &p_euler) { set_euler_yxz(p_euler); }

	// transposed dot products
	real_t tdotx(const vector3 &v) const;
	real_t tdoty(const vector3 &v) const;
	real_t tdotz(const vector3 &v) const;

	bool operator==(const basis &p_matrix) const;

	bool operator!=(const basis &p_matrix) const;

	vector3 xform(const vector3 &p_vector) const;

	vector3 xform_inv(const vector3 &p_vector) const;
	void operator*=(const basis &p_matrix);

	basis operator*(const basis &p_matrix) const;

	void operator+=(const basis &p_matrix);

	basis operator+(const basis &p_matrix) const;

	void operator-=(const basis &p_matrix);

	basis operator-(const basis &p_matrix) const;

	void operator*=(real_t p_val);

	basis operator*(real_t p_val) const;

	int get_orthogonal_index() const; // down below

	void set_orthogonal_index(int p_index); // down below

	operator string() const;

	void get_axis_and_angle(vector3 &r_axis, real_t &r_angle) const;

	/* create / set */

	void set(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz);

	vector3 get_column(int i) const;

	vector3 get_row(int i) const;
	vector3 get_main_diagonal() const;

	void set_row(int i, const vector3 &p_row);

	basis transpose_xform(const basis &m) const;

	void orthonormalize();

	basis orthonormalized() const;

	bool is_symmetric() const;

	basis diagonalize();

	operator quat() const;
};

} // namespace gd

#endif // BASIS_H
