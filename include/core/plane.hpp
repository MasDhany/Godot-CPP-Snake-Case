/*************************************************************************/
/*  plane.hpp                                                            */
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

#ifndef PLANE_H
#define PLANE_H

#include "vector3.hpp"

#include <cmath>

namespace gd {

enum ClockDirection {

	CLOCKWISE,
	COUNTERCLOCKWISE
};

class plane {
public:
	vector3 normal;
	real_t d;

	void set_normal(const vector3 &p_normal);

	inline vector3 get_normal() const { return normal; } ///Point is coplanar, CMP_EPSILON for precision

	void normalize();

	plane normalized() const;

	/* plane-Point operations */

	inline vector3 center() const { return normal * d; }
	vector3 get_any_point() const;
	vector3 get_any_perpendicular_normal() const;

	bool is_point_over(const vector3 &p_point) const; ///< Point is over plane_
	real_t distance_to(const vector3 &p_point) const;
	bool has_point(const vector3 &p_point, real_t _epsilon = CMP_EPSILON) const;

	/* intersections */

	bool intersect_3(const plane &p_plane1, const plane &p_plane2, vector3 *r_result = 0) const;
	bool intersects_ray(vector3 p_from, vector3 p_dir, vector3 *p_intersection) const;
	bool intersects_segment(vector3 p_begin, vector3 p_end, vector3 *p_intersection) const;

	vector3 project(const vector3 &p_point) const;

	/* misc */

	inline plane operator-() const { return plane(-normal, -d); }
	bool is_almost_like(const plane &p_plane) const;

	bool operator==(const plane &p_plane) const;
	bool operator!=(const plane &p_plane) const;
	operator string() const;

	inline plane() { d = 0; }
	inline plane(real_t p_a, real_t p_b, real_t p_c, real_t p_d) :
			normal(p_a, p_b, p_c),
			d(p_d) {}

	plane(const vector3 &p_normal, real_t p_d);
	plane(const vector3 &p_point, const vector3 &p_normal);
	plane(const vector3 &p_point1, const vector3 &p_point2, const vector3 &p_point3, ClockDirection p_dir = CLOCKWISE);
};

} // namespace gd

#endif // PLANE_H
