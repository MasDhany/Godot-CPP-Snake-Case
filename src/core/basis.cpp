/*************************************************************************/
/*  basis.cpp                                                            */
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

#include "basis.hpp"
#include "defs.hpp"
#include "quat.hpp"
#include "vector3.hpp"

#include <algorithm>

namespace gd {

const basis basis::IDENTITY = basis();
const basis basis::FLIP_X = basis(-1, 0, 0, 0, 1, 0, 0, 0, 1);
const basis basis::FLIP_Y = basis(1, 0, 0, 0, -1, 0, 0, 0, 1);
const basis basis::FLIP_Z = basis(1, 0, 0, 0, 1, 0, 0, 0, -1);

basis::basis(const vector3 &row0, const vector3 &row1, const vector3 &row2) {
	elements[0] = row0;
	elements[1] = row1;
	elements[2] = row2;
}

basis::basis(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz) {
	set(xx, xy, xz, yx, yy, yz, zx, zy, zz);
}

basis::basis() {
	elements[0][0] = 1;
	elements[0][1] = 0;
	elements[0][2] = 0;
	elements[1][0] = 0;
	elements[1][1] = 1;
	elements[1][2] = 0;
	elements[2][0] = 0;
	elements[2][1] = 0;
	elements[2][2] = 1;
}

#define cofac(row1, col1, row2, col2) \
	(elements[row1][col1] * elements[row2][col2] - elements[row1][col2] * elements[row2][col1])

void basis::invert() {
	real_t co[3] = {
		cofac(1, 1, 2, 2), cofac(1, 2, 2, 0), cofac(1, 0, 2, 1)
	};
	real_t det = elements[0][0] * co[0] +
				 elements[0][1] * co[1] +
				 elements[0][2] * co[2];

	ERR_FAIL_COND(det == 0);

	real_t s = 1.0 / det;

	set(co[0] * s, cofac(0, 2, 2, 1) * s, cofac(0, 1, 1, 2) * s,
			co[1] * s, cofac(0, 0, 2, 2) * s, cofac(0, 2, 1, 0) * s,
			co[2] * s, cofac(0, 1, 2, 0) * s, cofac(0, 0, 1, 1) * s);
}
#undef cofac

bool basis::isequal_approx(const basis &a, const basis &b) const {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((::fabs(a.elements[i][j] - b.elements[i][j]) < CMP_EPSILON) == false)
				return false;
		}
	}

	return true;
}

bool basis::is_orthogonal() const {
	basis id;
	basis m = (*this) * transposed();

	return isequal_approx(id, m);
}

bool basis::is_rotation() const {
	return ::fabs(determinant() - 1) < CMP_EPSILON && is_orthogonal();
}

void basis::transpose() {
	std::swap(elements[0][1], elements[1][0]);
	std::swap(elements[0][2], elements[2][0]);
	std::swap(elements[1][2], elements[2][1]);
}

basis basis::inverse() const {
	basis b = *this;
	b.invert();
	return b;
}

basis basis::transposed() const {
	basis b = *this;
	b.transpose();
	return b;
}

real_t basis::determinant() const {
	return elements[0][0] * (elements[1][1] * elements[2][2] - elements[2][1] * elements[1][2]) -
		   elements[1][0] * (elements[0][1] * elements[2][2] - elements[2][1] * elements[0][2]) +
		   elements[2][0] * (elements[0][1] * elements[1][2] - elements[1][1] * elements[0][2]);
}

vector3 basis::get_axis(int p_axis) const {
	// get actual basis_ axis (elements is transposed for performance_)
	return vector3(elements[0][p_axis], elements[1][p_axis], elements[2][p_axis]);
}
void basis::set_axis(int p_axis, const vector3 &p_value) {
	// get actual basis_ axis (elements is transposed for performance_)
	elements[0][p_axis] = p_value.x;
	elements[1][p_axis] = p_value.y;
	elements[2][p_axis] = p_value.z;
}

void basis::rotate(const vector3 &p_axis, real_t p_phi) {
	*this = rotated(p_axis, p_phi);
}

basis basis::rotated(const vector3 &p_axis, real_t p_phi) const {
	return basis(p_axis, p_phi) * (*this);
}

void basis::scale(const vector3 &p_scale) {
	elements[0][0] *= p_scale.x;
	elements[0][1] *= p_scale.x;
	elements[0][2] *= p_scale.x;
	elements[1][0] *= p_scale.y;
	elements[1][1] *= p_scale.y;
	elements[1][2] *= p_scale.y;
	elements[2][0] *= p_scale.z;
	elements[2][1] *= p_scale.z;
	elements[2][2] *= p_scale.z;
}

basis basis::scaled(const vector3 &p_scale) const {
	basis b = *this;
	b.scale(p_scale);
	return b;
}

vector3 basis::get_scale() const {
	// We are assuming M = R.S, and performing a polar decomposition to extract R and S.
	// FIXME: We eventually need a proper polar decomposition.
	// As a cheap workaround until then, to ensure that R is a proper rotation matrix with determinant +1
	// (such that it can be represented by a quat or Euler angles), we absorb the sign flip into the scaling matrix.
	// As such, it works in conjuction with get_rotation().
	real_t det_sign = determinant() > 0 ? 1 : -1;
	return det_sign * vector3(
							  vector3(elements[0][0], elements[1][0], elements[2][0]).length(),
							  vector3(elements[0][1], elements[1][1], elements[2][1]).length(),
							  vector3(elements[0][2], elements[1][2], elements[2][2]).length());
}

// TODO: implement this directly without using quaternions to make it more efficient
basis basis::slerp(basis b, float t) const {
	ERR_FAIL_COND_V(!is_rotation(), basis());
	ERR_FAIL_COND_V(!b.is_rotation(), basis());
	quat from(*this);
	quat to(b);
	return basis(from.slerp(to, t));
}

// get_euler_xyz returns a vector containing the Euler angles in the format
// (a1,a2,a3), where a3 is the angle of the first rotation, and a1 is the last
// (following the convention they are commonly defined in the literature).
//
// The current implementation uses XYZ convention (Z is the first rotation),
// so euler.z is the angle of the (first) rotation around Z axis and so on,
//
// And thus, assuming the matrix is a rotation matrix, this function returns
// the angles in the decomposition R = X(a1).Y(a2).Z(a3) where Z(a) rotates
// around the z-axis by a and so on.
vector3 basis::get_euler_xyz() const {
	// Euler angles in XYZ convention.
	// See https://en.wikipedia.org/wiki/Euler_angles#Rotation_matrix
	//
	// rot =  cy*cz          -cy*sz           sy
	//        cz*sx*sy+cx*sz  cx*cz-sx*sy*sz -cy*sx
	//       -cx*cz*sy+sx*sz  cz*sx+cx*sy*sz  cx*cy

	vector3 euler;

	ERR_FAIL_COND_V(is_rotation() == false, euler);

	real_t sy = elements[0][2];
	if (sy < 1.0) {
		if (sy > -1.0) {
			// is this a pure Y rotation?
			if (elements[1][0] == 0.0 && elements[0][1] == 0.0 && elements[1][2] == 0 && elements[2][1] == 0 && elements[1][1] == 1) {
				// return the simplest form (human friendlier in editor and scripts)
				euler.x = 0;
				euler.y = atan2(elements[0][2], elements[0][0]);
				euler.z = 0;
			} else {
				euler.x = ::atan2(-elements[1][2], elements[2][2]);
				euler.y = ::asin(sy);
				euler.z = ::atan2(-elements[0][1], elements[0][0]);
			}
		} else {
			euler.x = -::atan2(elements[0][1], elements[1][1]);
			euler.y = -Math_PI / 2.0;
			euler.z = 0.0;
		}
	} else {
		euler.x = ::atan2(elements[0][1], elements[1][1]);
		euler.y = Math_PI / 2.0;
		euler.z = 0.0;
	}
	return euler;
}

// set_euler_xyz expects a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// The current implementation uses XYZ convention (Z is the first rotation).
void basis::set_euler_xyz(const vector3 &p_euler) {
	real_t c, s;

	c = ::cos(p_euler.x);
	s = ::sin(p_euler.x);
	basis xmat(1.0, 0.0, 0.0, 0.0, c, -s, 0.0, s, c);

	c = ::cos(p_euler.y);
	s = ::sin(p_euler.y);
	basis ymat(c, 0.0, s, 0.0, 1.0, 0.0, -s, 0.0, c);

	c = ::cos(p_euler.z);
	s = ::sin(p_euler.z);
	basis zmat(c, -s, 0.0, s, c, 0.0, 0.0, 0.0, 1.0);

	//optimizer will optimize away all this anyway
	*this = xmat * (ymat * zmat);
}

// get_euler_yxz returns a vector containing the Euler angles in the YXZ convention,
// as in first-Z, then-X, last-Y. The angles for X, Y, and Z rotations are returned
// as the x, y, and z components of a vector3 respectively.
vector3 basis::get_euler_yxz() const {
	// Euler angles in YXZ convention.
	// See https://en.wikipedia.org/wiki/Euler_angles#Rotation_matrix
	//
	// rot =  cy*cz+sy*sx*sz    cz*sy*sx-cy*sz        cx*sy
	//        cx*sz             cx*cz                 -sx
	//        cy*sx*sz-cz*sy    cy*cz*sx+sy*sz        cy*cx

	vector3 euler;

	ERR_FAIL_COND_V(is_rotation() == false, euler);

	real_t m12 = elements[1][2];

	if (m12 < 1) {
		if (m12 > -1) {
			// is this a pure X rotation?
			if (elements[1][0] == 0 && elements[0][1] == 0 && elements[0][2] == 0 && elements[2][0] == 0 && elements[0][0] == 1) {
				// return the simplest form (human friendlier in editor and scripts)
				euler.x = atan2(-m12, elements[1][1]);
				euler.y = 0;
				euler.z = 0;
			} else {
				euler.x = asin(-m12);
				euler.y = atan2(elements[0][2], elements[2][2]);
				euler.z = atan2(elements[1][0], elements[1][1]);
			}
		} else { // m12 == -1
			euler.x = Math_PI * 0.5;
			euler.y = -atan2(-elements[0][1], elements[0][0]);
			euler.z = 0;
		}
	} else { // m12 == 1
		euler.x = -Math_PI * 0.5;
		euler.y = -atan2(-elements[0][1], elements[0][0]);
		euler.z = 0;
	}

	return euler;
}

// set_euler_yxz expects a vector containing the Euler angles in the format
// (ax,ay,az), where ax is the angle of rotation around x axis,
// and similar for other axes.
// The current implementation uses YXZ convention (Z is the first rotation).
void basis::set_euler_yxz(const vector3 &p_euler) {
	real_t c, s;

	c = ::cos(p_euler.x);
	s = ::sin(p_euler.x);
	basis xmat(1.0, 0.0, 0.0, 0.0, c, -s, 0.0, s, c);

	c = ::cos(p_euler.y);
	s = ::sin(p_euler.y);
	basis ymat(c, 0.0, s, 0.0, 1.0, 0.0, -s, 0.0, c);

	c = ::cos(p_euler.z);
	s = ::sin(p_euler.z);
	basis zmat(c, -s, 0.0, s, c, 0.0, 0.0, 0.0, 1.0);

	//optimizer will optimize away all this anyway
	*this = ymat * xmat * zmat;
}

// transposed dot products
real_t basis::tdotx(const vector3 &v) const {
	return elements[0][0] * v[0] + elements[1][0] * v[1] + elements[2][0] * v[2];
}
real_t basis::tdoty(const vector3 &v) const {
	return elements[0][1] * v[0] + elements[1][1] * v[1] + elements[2][1] * v[2];
}
real_t basis::tdotz(const vector3 &v) const {
	return elements[0][2] * v[0] + elements[1][2] * v[1] + elements[2][2] * v[2];
}

bool basis::operator==(const basis &p_matrix) const {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (elements[i][j] != p_matrix.elements[i][j])
				return false;
		}
	}

	return true;
}

bool basis::operator!=(const basis &p_matrix) const {
	return (!(*this == p_matrix));
}

vector3 basis::xform(const vector3 &p_vector) const {
	return vector3(
			elements[0].dot(p_vector),
			elements[1].dot(p_vector),
			elements[2].dot(p_vector));
}

vector3 basis::xform_inv(const vector3 &p_vector) const {
	return vector3(
			(elements[0][0] * p_vector.x) + (elements[1][0] * p_vector.y) + (elements[2][0] * p_vector.z),
			(elements[0][1] * p_vector.x) + (elements[1][1] * p_vector.y) + (elements[2][1] * p_vector.z),
			(elements[0][2] * p_vector.x) + (elements[1][2] * p_vector.y) + (elements[2][2] * p_vector.z));
}
void basis::operator*=(const basis &p_matrix) {
	set(
			p_matrix.tdotx(elements[0]), p_matrix.tdoty(elements[0]), p_matrix.tdotz(elements[0]),
			p_matrix.tdotx(elements[1]), p_matrix.tdoty(elements[1]), p_matrix.tdotz(elements[1]),
			p_matrix.tdotx(elements[2]), p_matrix.tdoty(elements[2]), p_matrix.tdotz(elements[2]));
}

basis basis::operator*(const basis &p_matrix) const {
	return basis(
			p_matrix.tdotx(elements[0]), p_matrix.tdoty(elements[0]), p_matrix.tdotz(elements[0]),
			p_matrix.tdotx(elements[1]), p_matrix.tdoty(elements[1]), p_matrix.tdotz(elements[1]),
			p_matrix.tdotx(elements[2]), p_matrix.tdoty(elements[2]), p_matrix.tdotz(elements[2]));
}

void basis::operator+=(const basis &p_matrix) {
	elements[0] += p_matrix.elements[0];
	elements[1] += p_matrix.elements[1];
	elements[2] += p_matrix.elements[2];
}

basis basis::operator+(const basis &p_matrix) const {
	basis ret(*this);
	ret += p_matrix;
	return ret;
}

void basis::operator-=(const basis &p_matrix) {
	elements[0] -= p_matrix.elements[0];
	elements[1] -= p_matrix.elements[1];
	elements[2] -= p_matrix.elements[2];
}

basis basis::operator-(const basis &p_matrix) const {
	basis ret(*this);
	ret -= p_matrix;
	return ret;
}

void basis::operator*=(real_t p_val) {
	elements[0] *= p_val;
	elements[1] *= p_val;
	elements[2] *= p_val;
}

basis basis::operator*(real_t p_val) const {
	basis ret(*this);
	ret *= p_val;
	return ret;
}

basis::operator string() const {
	string s;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != 0 || j != 0)
				s += ", ";

			s += string::num(elements[i][j]);
		}
	}
	return s;
}

/* create / set */

void basis::set(real_t xx, real_t xy, real_t xz, real_t yx, real_t yy, real_t yz, real_t zx, real_t zy, real_t zz) {
	elements[0][0] = xx;
	elements[0][1] = xy;
	elements[0][2] = xz;
	elements[1][0] = yx;
	elements[1][1] = yy;
	elements[1][2] = yz;
	elements[2][0] = zx;
	elements[2][1] = zy;
	elements[2][2] = zz;
}
vector3 basis::get_column(int i) const {
	return vector3(elements[0][i], elements[1][i], elements[2][i]);
}

vector3 basis::get_row(int i) const {
	return vector3(elements[i][0], elements[i][1], elements[i][2]);
}
vector3 basis::get_main_diagonal() const {
	return vector3(elements[0][0], elements[1][1], elements[2][2]);
}

void basis::set_row(int i, const vector3 &p_row) {
	elements[i][0] = p_row.x;
	elements[i][1] = p_row.y;
	elements[i][2] = p_row.z;
}

basis basis::transpose_xform(const basis &m) const {
	return basis(
			elements[0].x * m[0].x + elements[1].x * m[1].x + elements[2].x * m[2].x,
			elements[0].x * m[0].y + elements[1].x * m[1].y + elements[2].x * m[2].y,
			elements[0].x * m[0].z + elements[1].x * m[1].z + elements[2].x * m[2].z,
			elements[0].y * m[0].x + elements[1].y * m[1].x + elements[2].y * m[2].x,
			elements[0].y * m[0].y + elements[1].y * m[1].y + elements[2].y * m[2].y,
			elements[0].y * m[0].z + elements[1].y * m[1].z + elements[2].y * m[2].z,
			elements[0].z * m[0].x + elements[1].z * m[1].x + elements[2].z * m[2].x,
			elements[0].z * m[0].y + elements[1].z * m[1].y + elements[2].z * m[2].y,
			elements[0].z * m[0].z + elements[1].z * m[1].z + elements[2].z * m[2].z);
}

void basis::orthonormalize() {
	ERR_FAIL_COND(determinant() == 0);

	// Gram-Schmidt Process

	vector3 x = get_axis(0);
	vector3 y = get_axis(1);
	vector3 z = get_axis(2);

	x.normalize();
	y = (y - x * (x.dot(y)));
	y.normalize();
	z = (z - x * (x.dot(z)) - y * (y.dot(z)));
	z.normalize();

	set_axis(0, x);
	set_axis(1, y);
	set_axis(2, z);
}

basis basis::orthonormalized() const {
	basis b = *this;
	b.orthonormalize();
	return b;
}

bool basis::is_symmetric() const {
	if (::fabs(elements[0][1] - elements[1][0]) > CMP_EPSILON)
		return false;
	if (::fabs(elements[0][2] - elements[2][0]) > CMP_EPSILON)
		return false;
	if (::fabs(elements[1][2] - elements[2][1]) > CMP_EPSILON)
		return false;

	return true;
}

basis basis::diagonalize() {
	// I love copy paste

	if (!is_symmetric())
		return basis();

	const int ite_max = 1024;

	real_t off_matrix_norm_2 = elements[0][1] * elements[0][1] + elements[0][2] * elements[0][2] + elements[1][2] * elements[1][2];

	int ite = 0;
	basis acc_rot;
	while (off_matrix_norm_2 > CMP_EPSILON2 && ite++ < ite_max) {
		real_t el01_2 = elements[0][1] * elements[0][1];
		real_t el02_2 = elements[0][2] * elements[0][2];
		real_t el12_2 = elements[1][2] * elements[1][2];
		// Find the pivot element
		int i, j;
		if (el01_2 > el02_2) {
			if (el12_2 > el01_2) {
				i = 1;
				j = 2;
			} else {
				i = 0;
				j = 1;
			}
		} else {
			if (el12_2 > el02_2) {
				i = 1;
				j = 2;
			} else {
				i = 0;
				j = 2;
			}
		}

		// Compute the rotation angle
		real_t angle;
		if (::fabs(elements[j][j] - elements[i][i]) < CMP_EPSILON) {
			angle = Math_PI / 4;
		} else {
			angle = 0.5 * ::atan(2 * elements[i][j] / (elements[j][j] - elements[i][i]));
		}

		// Compute the rotation matrix
		basis rot;
		rot.elements[i][i] = rot.elements[j][j] = ::cos(angle);
		rot.elements[i][j] = -(rot.elements[j][i] = ::sin(angle));

		// Update the off matrix norm
		off_matrix_norm_2 -= elements[i][j] * elements[i][j];

		// Apply the rotation
		*this = rot * *this * rot.transposed();
		acc_rot = rot * acc_rot;
	}

	return acc_rot;
}

static const basis _ortho_bases[24] = {
	basis(1, 0, 0, 0, 1, 0, 0, 0, 1),
	basis(0, -1, 0, 1, 0, 0, 0, 0, 1),
	basis(-1, 0, 0, 0, -1, 0, 0, 0, 1),
	basis(0, 1, 0, -1, 0, 0, 0, 0, 1),
	basis(1, 0, 0, 0, 0, -1, 0, 1, 0),
	basis(0, 0, 1, 1, 0, 0, 0, 1, 0),
	basis(-1, 0, 0, 0, 0, 1, 0, 1, 0),
	basis(0, 0, -1, -1, 0, 0, 0, 1, 0),
	basis(1, 0, 0, 0, -1, 0, 0, 0, -1),
	basis(0, 1, 0, 1, 0, 0, 0, 0, -1),
	basis(-1, 0, 0, 0, 1, 0, 0, 0, -1),
	basis(0, -1, 0, -1, 0, 0, 0, 0, -1),
	basis(1, 0, 0, 0, 0, 1, 0, -1, 0),
	basis(0, 0, -1, 1, 0, 0, 0, -1, 0),
	basis(-1, 0, 0, 0, 0, -1, 0, -1, 0),
	basis(0, 0, 1, -1, 0, 0, 0, -1, 0),
	basis(0, 0, 1, 0, 1, 0, -1, 0, 0),
	basis(0, -1, 0, 0, 0, 1, -1, 0, 0),
	basis(0, 0, -1, 0, -1, 0, -1, 0, 0),
	basis(0, 1, 0, 0, 0, -1, -1, 0, 0),
	basis(0, 0, 1, 0, -1, 0, 1, 0, 0),
	basis(0, 1, 0, 0, 0, 1, 1, 0, 0),
	basis(0, 0, -1, 0, 1, 0, 1, 0, 0),
	basis(0, -1, 0, 0, 0, -1, 1, 0, 0)
};

int basis::get_orthogonal_index() const {
	//could be sped up if i come up with a way
	basis orth = *this;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			real_t v = orth[i][j];
			if (v > 0.5)
				v = 1.0;
			else if (v < -0.5)
				v = -1.0;
			else
				v = 0;

			orth[i][j] = v;
		}
	}

	for (int i = 0; i < 24; i++) {
		if (_ortho_bases[i] == orth)
			return i;
	}

	return 0;
}

void basis::set_orthogonal_index(int p_index) {
	//there only exist 24 orthogonal bases in r3
	ERR_FAIL_COND(p_index >= 24);

	*this = _ortho_bases[p_index];
}

basis::basis(const vector3 &p_euler) {
	set_euler(p_euler);
}

} // namespace gd

#include "quat.hpp"

namespace gd {

basis::basis(const quat &p_quat) {
	real_t d = p_quat.length_squared();
	real_t s = 2.0 / d;
	real_t xs = p_quat.x * s, ys = p_quat.y * s, zs = p_quat.z * s;
	real_t wx = p_quat.w * xs, wy = p_quat.w * ys, wz = p_quat.w * zs;
	real_t xx = p_quat.x * xs, xy = p_quat.x * ys, xz = p_quat.x * zs;
	real_t yy = p_quat.y * ys, yz = p_quat.y * zs, zz = p_quat.z * zs;
	set(1.0 - (yy + zz), xy - wz, xz + wy,
			xy + wz, 1.0 - (xx + zz), yz - wx,
			xz - wy, yz + wx, 1.0 - (xx + yy));
}

basis::basis(const vector3 &p_axis, real_t p_phi) {
	// Rotation matrix from axis and angle, see https://en.wikipedia.org/wiki/Rotation_matrix#Rotation_matrix_from_axis_and_angle

	vector3 axis_sq(p_axis.x * p_axis.x, p_axis.y * p_axis.y, p_axis.z * p_axis.z);

	real_t cosine = ::cos(p_phi);
	real_t sine = ::sin(p_phi);

	elements[0][0] = axis_sq.x + cosine * (1.0 - axis_sq.x);
	elements[0][1] = p_axis.x * p_axis.y * (1.0 - cosine) - p_axis.z * sine;
	elements[0][2] = p_axis.z * p_axis.x * (1.0 - cosine) + p_axis.y * sine;

	elements[1][0] = p_axis.x * p_axis.y * (1.0 - cosine) + p_axis.z * sine;
	elements[1][1] = axis_sq.y + cosine * (1.0 - axis_sq.y);
	elements[1][2] = p_axis.y * p_axis.z * (1.0 - cosine) - p_axis.x * sine;

	elements[2][0] = p_axis.z * p_axis.x * (1.0 - cosine) - p_axis.y * sine;
	elements[2][1] = p_axis.y * p_axis.z * (1.0 - cosine) + p_axis.x * sine;
	elements[2][2] = axis_sq.z + cosine * (1.0 - axis_sq.z);
}

basis::operator quat() const {
	//commenting this check because precision issues cause it to fail when it shouldn't
	//ERR_FAIL_COND_V(is_rotation() == false, quat());

	real_t trace = elements[0][0] + elements[1][1] + elements[2][2];
	real_t temp[4];

	if (trace > 0.0) {
		real_t s = ::sqrt(trace + 1.0);
		temp[3] = (s * 0.5);
		s = 0.5 / s;

		temp[0] = ((elements[2][1] - elements[1][2]) * s);
		temp[1] = ((elements[0][2] - elements[2][0]) * s);
		temp[2] = ((elements[1][0] - elements[0][1]) * s);
	} else {
		int i = elements[0][0] < elements[1][1] ?
						  (elements[1][1] < elements[2][2] ? 2 : 1) :
						  (elements[0][0] < elements[2][2] ? 2 : 0);
		int j = (i + 1) % 3;
		int k = (i + 2) % 3;

		real_t s = ::sqrt(elements[i][i] - elements[j][j] - elements[k][k] + 1.0);
		temp[i] = s * 0.5;
		s = 0.5 / s;

		temp[3] = (elements[k][j] - elements[j][k]) * s;
		temp[j] = (elements[j][i] + elements[i][j]) * s;
		temp[k] = (elements[k][i] + elements[i][k]) * s;
	}

	return quat(temp[0], temp[1], temp[2], temp[3]);
}

} // namespace gd
