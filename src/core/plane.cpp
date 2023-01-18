/*************************************************************************/
/*  plane.cpp                                                            */
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

#include "plane.hpp"
#include "vector3.hpp"

#include <cmath>

namespace gd {

void plane::set_normal(const vector3 &p_normal) {
	this->normal = p_normal;
}

vector3 plane::project(const vector3 &p_point) const {
	return p_point - normal * distance_to(p_point);
}

void plane::normalize() {
	real_t l = normal.length();
	if (l == 0) {
		*this = plane(0, 0, 0, 0);
		return;
	}
	normal /= l;
	d /= l;
}

plane plane::normalized() const {
	plane p = *this;
	p.normalize();
	return p;
}

vector3 plane::get_any_point() const {
	return get_normal() * d;
}

vector3 plane::get_any_perpendicular_normal() const {
	static const vector3 p1 = vector3(1, 0, 0);
	static const vector3 p2 = vector3(0, 1, 0);
	vector3 p;

	if (::fabs(normal.dot(p1)) > 0.99) // if too similar to p1
		p = p2; // use p2
	else
		p = p1; // use p1

	p -= normal * normal.dot(p);
	p.normalize();

	return p;
}

/* intersections */

bool plane::intersect_3(const plane &p_plane1, const plane &p_plane2, vector3 *r_result) const {
	const plane &p_plane0 = *this;
	vector3 normal0 = p_plane0.normal;
	vector3 normal1 = p_plane1.normal;
	vector3 normal2 = p_plane2.normal;

	real_t denom = vec3_cross(normal0, normal1).dot(normal2);

	if (::fabs(denom) <= CMP_EPSILON)
		return false;

	if (r_result) {
		*r_result = ((vec3_cross(normal1, normal2) * p_plane0.d) +
							(vec3_cross(normal2, normal0) * p_plane1.d) +
							(vec3_cross(normal0, normal1) * p_plane2.d)) /
					denom;
	}

	return true;
}

bool plane::intersects_ray(vector3 p_from, vector3 p_dir, vector3 *p_intersection) const {
	vector3 segment = p_dir;
	real_t den = normal.dot(segment);

	//printf("den is %i\n",den);
	if (::fabs(den) <= CMP_EPSILON) {
		return false;
	}

	real_t dist = (normal.dot(p_from) - d) / den;
	//printf("dist is %i\n",dist);

	if (dist > CMP_EPSILON) { //this is a ray, before the emiting pos (p_from) doesnt exist

		return false;
	}

	dist = -dist;
	*p_intersection = p_from + segment * dist;

	return true;
}

bool plane::intersects_segment(vector3 p_begin, vector3 p_end, vector3 *p_intersection) const {
	vector3 segment = p_begin - p_end;
	real_t den = normal.dot(segment);

	//printf("den is %i\n",den);
	if (::fabs(den) <= CMP_EPSILON) {
		return false;
	}

	real_t dist = (normal.dot(p_begin) - d) / den;
	//printf("dist is %i\n",dist);

	if (dist < -CMP_EPSILON || dist > (1.0 + CMP_EPSILON)) {
		return false;
	}

	dist = -dist;
	*p_intersection = p_begin + segment * dist;

	return true;
}

/* misc */

bool plane::is_almost_like(const plane &p_plane) const {
	return (normal.dot(p_plane.normal) > _PLANE_EQ_DOT_EPSILON && ::fabs(d - p_plane.d) < _PLANE_EQ_D_EPSILON);
}

plane::operator string() const {
	// return normal.operator string() + ", " + rtos(d);
	return string(); // @Todo
}

bool plane::is_point_over(const vector3 &p_point) const {
	return (normal.dot(p_point) > d);
}

real_t plane::distance_to(const vector3 &p_point) const {
	return (normal.dot(p_point) - d);
}

bool plane::has_point(const vector3 &p_point, real_t _epsilon) const {
	real_t dist = normal.dot(p_point) - d;
	dist = ::fabs(dist);
	return (dist <= _epsilon);
}

plane::plane(const vector3 &p_normal, real_t p_d) {
	normal = p_normal;
	d = p_d;
}

plane::plane(const vector3 &p_point, const vector3 &p_normal) {
	normal = p_normal;
	d = p_normal.dot(p_point);
}

plane::plane(const vector3 &p_point1, const vector3 &p_point2, const vector3 &p_point3, ClockDirection p_dir) {
	if (p_dir == CLOCKWISE)
		normal = (p_point1 - p_point3).cross(p_point1 - p_point2);
	else
		normal = (p_point1 - p_point2).cross(p_point1 - p_point3);

	normal.normalize();
	d = normal.dot(p_point1);
}

bool plane::operator==(const plane &p_plane) const {
	return normal == p_plane.normal && d == p_plane.d;
}

bool plane::operator!=(const plane &p_plane) const {
	return normal != p_plane.normal || d != p_plane.d;
}

} // namespace gd
