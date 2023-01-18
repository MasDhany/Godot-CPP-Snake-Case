/*************************************************************************/
/*  aabb.cpp                                                             */
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

#include "aabb.hpp"
#include "plane.hpp"
#include "vector3.hpp"

#include <algorithm>

namespace gd {

bool aabb::intersects(const aabb &p_aabb) const {
	if (position.x >= (p_aabb.position.x + p_aabb.size.x))
		return false;
	if ((position.x + size.x) <= p_aabb.position.x)
		return false;
	if (position.y >= (p_aabb.position.y + p_aabb.size.y))
		return false;
	if ((position.y + size.y) <= p_aabb.position.y)
		return false;
	if (position.z >= (p_aabb.position.z + p_aabb.size.z))
		return false;
	if ((position.z + size.z) <= p_aabb.position.z)
		return false;

	return true;
}

bool aabb::intersects_inclusive(const aabb &p_aabb) const {
	if (position.x > (p_aabb.position.x + p_aabb.size.x))
		return false;
	if ((position.x + size.x) < p_aabb.position.x)
		return false;
	if (position.y > (p_aabb.position.y + p_aabb.size.y))
		return false;
	if ((position.y + size.y) < p_aabb.position.y)
		return false;
	if (position.z > (p_aabb.position.z + p_aabb.size.z))
		return false;
	if ((position.z + size.z) < p_aabb.position.z)
		return false;

	return true;
}

bool aabb::encloses(const aabb &p_aabb) const {
	vector3 src_min = position;
	vector3 src_max = position + size;
	vector3 dst_min = p_aabb.position;
	vector3 dst_max = p_aabb.position + p_aabb.size;

	return (
			(src_min.x <= dst_min.x) &&
			(src_max.x > dst_max.x) &&
			(src_min.y <= dst_min.y) &&
			(src_max.y > dst_max.y) &&
			(src_min.z <= dst_min.z) &&
			(src_max.z > dst_max.z));
}

vector3 aabb::get_support(const vector3 &p_normal) const {
	vector3 half_extents = size * 0.5;
	vector3 ofs = position + half_extents;

	return vector3(
				   (p_normal.x > 0) ? -half_extents.x : half_extents.x,
				   (p_normal.y > 0) ? -half_extents.y : half_extents.y,
				   (p_normal.z > 0) ? -half_extents.z : half_extents.z) +
		   ofs;
}

vector3 aabb::get_endpoint(int p_point) const {
	switch (p_point) {
		case 0:
			return vector3(position.x, position.y, position.z);
		case 1:
			return vector3(position.x, position.y, position.z + size.z);
		case 2:
			return vector3(position.x, position.y + size.y, position.z);
		case 3:
			return vector3(position.x, position.y + size.y, position.z + size.z);
		case 4:
			return vector3(position.x + size.x, position.y, position.z);
		case 5:
			return vector3(position.x + size.x, position.y, position.z + size.z);
		case 6:
			return vector3(position.x + size.x, position.y + size.y, position.z);
		case 7:
			return vector3(position.x + size.x, position.y + size.y, position.z + size.z);
	};

	ERR_FAIL_V(vector3());
}

bool aabb::intersects_convex_shape(const plane *p_planes, int p_plane_count) const {
	vector3 half_extents = size * 0.5;
	vector3 ofs = position + half_extents;

	for (int i = 0; i < p_plane_count; i++) {
		const plane &p = p_planes[i];
		vector3 point(
				(p.normal.x > 0) ? -half_extents.x : half_extents.x,
				(p.normal.y > 0) ? -half_extents.y : half_extents.y,
				(p.normal.z > 0) ? -half_extents.z : half_extents.z);
		point += ofs;
		if (p.is_point_over(point))
			return false;
	}

	return true;
}

bool aabb::has_point(const vector3 &p_point) const {
	if (p_point.x < position.x)
		return false;
	if (p_point.y < position.y)
		return false;
	if (p_point.z < position.z)
		return false;
	if (p_point.x > position.x + size.x)
		return false;
	if (p_point.y > position.y + size.y)
		return false;
	if (p_point.z > position.z + size.z)
		return false;

	return true;
}

void aabb::expand_to(const vector3 &p_vector) {
	vector3 begin = position;
	vector3 end = position + size;

	if (p_vector.x < begin.x)
		begin.x = p_vector.x;
	if (p_vector.y < begin.y)
		begin.y = p_vector.y;
	if (p_vector.z < begin.z)
		begin.z = p_vector.z;

	if (p_vector.x > end.x)
		end.x = p_vector.x;
	if (p_vector.y > end.y)
		end.y = p_vector.y;
	if (p_vector.z > end.z)
		end.z = p_vector.z;

	position = begin;
	size = end - begin;
}

void aabb::project_range_in_plane(const plane &p_plane, real_t &r_min, real_t &r_max) const {
	vector3 half_extents(size.x * 0.5, size.y * 0.5, size.z * 0.5);
	vector3 center(position.x + half_extents.x, position.y + half_extents.y, position.z + half_extents.z);

	real_t length = p_plane.normal.abs().dot(half_extents);
	real_t distance = p_plane.distance_to(center);
	r_min = distance - length;
	r_max = distance + length;
}

real_t aabb::get_longest_axis_size() const {
	real_t max_size = size.x;

	if (size.y > max_size) {
		max_size = size.y;
	}

	if (size.z > max_size) {
		max_size = size.z;
	}

	return max_size;
}

real_t aabb::get_shortest_axis_size() const {
	real_t max_size = size.x;

	if (size.y < max_size) {
		max_size = size.y;
	}

	if (size.z < max_size) {
		max_size = size.z;
	}

	return max_size;
}

bool aabb::smits_intersect_ray(const vector3 &from, const vector3 &dir, real_t t0, real_t t1) const {
	real_t divx = 1.0 / dir.x;
	real_t divy = 1.0 / dir.y;
	real_t divz = 1.0 / dir.z;

	vector3 upbound = position + size;
	real_t tmin, tmax, tymin, tymax, tzmin, tzmax;
	if (dir.x >= 0) {
		tmin = (position.x - from.x) * divx;
		tmax = (upbound.x - from.x) * divx;
	} else {
		tmin = (upbound.x - from.x) * divx;
		tmax = (position.x - from.x) * divx;
	}
	if (dir.y >= 0) {
		tymin = (position.y - from.y) * divy;
		tymax = (upbound.y - from.y) * divy;
	} else {
		tymin = (upbound.y - from.y) * divy;
		tymax = (position.y - from.y) * divy;
	}
	if ((tmin > tymax) || (tymin > tmax))
		return false;
	if (tymin > tmin)
		tmin = tymin;
	if (tymax < tmax)
		tmax = tymax;
	if (dir.z >= 0) {
		tzmin = (position.z - from.z) * divz;
		tzmax = (upbound.z - from.z) * divz;
	} else {
		tzmin = (upbound.z - from.z) * divz;
		tzmax = (position.z - from.z) * divz;
	}
	if ((tmin > tzmax) || (tzmin > tmax))
		return false;
	if (tzmin > tmin)
		tmin = tzmin;
	if (tzmax < tmax)
		tmax = tzmax;
	return ((tmin < t1) && (tmax > t0));
}

void aabb::grow_by(real_t p_amount) {
	position.x -= p_amount;
	position.y -= p_amount;
	position.z -= p_amount;
	size.x += 2.0 * p_amount;
	size.y += 2.0 * p_amount;
	size.z += 2.0 * p_amount;
}

real_t aabb::get_area() const {
	return size.x * size.y * size.z;
}

bool aabb::operator==(const aabb &p_rval) const {
	return ((position == p_rval.position) && (size == p_rval.size));
}
bool aabb::operator!=(const aabb &p_rval) const {
	return ((position != p_rval.position) || (size != p_rval.size));
}

void aabb::merge_with(const aabb &p_aabb) {
	vector3 beg_1, beg_2;
	vector3 end_1, end_2;
	vector3 min, max;

	beg_1 = position;
	beg_2 = p_aabb.position;
	end_1 = vector3(size.x, size.y, size.z) + beg_1;
	end_2 = vector3(p_aabb.size.x, p_aabb.size.y, p_aabb.size.z) + beg_2;

	min.x = (beg_1.x < beg_2.x) ? beg_1.x : beg_2.x;
	min.y = (beg_1.y < beg_2.y) ? beg_1.y : beg_2.y;
	min.z = (beg_1.z < beg_2.z) ? beg_1.z : beg_2.z;

	max.x = (end_1.x > end_2.x) ? end_1.x : end_2.x;
	max.y = (end_1.y > end_2.y) ? end_1.y : end_2.y;
	max.z = (end_1.z > end_2.z) ? end_1.z : end_2.z;

	position = min;
	size = max - min;
}

aabb aabb::intersection(const aabb &p_aabb) const {
	vector3 src_min = position;
	vector3 src_max = position + size;
	vector3 dst_min = p_aabb.position;
	vector3 dst_max = p_aabb.position + p_aabb.size;

	vector3 min, max;

	if (src_min.x > dst_max.x || src_max.x < dst_min.x)
		return aabb();
	else {
		min.x = (src_min.x > dst_min.x) ? src_min.x : dst_min.x;
		max.x = (src_max.x < dst_max.x) ? src_max.x : dst_max.x;
	}

	if (src_min.y > dst_max.y || src_max.y < dst_min.y)
		return aabb();
	else {
		min.y = (src_min.y > dst_min.y) ? src_min.y : dst_min.y;
		max.y = (src_max.y < dst_max.y) ? src_max.y : dst_max.y;
	}

	if (src_min.z > dst_max.z || src_max.z < dst_min.z)
		return aabb();
	else {
		min.z = (src_min.z > dst_min.z) ? src_min.z : dst_min.z;
		max.z = (src_max.z < dst_max.z) ? src_max.z : dst_max.z;
	}

	return aabb(min, max - min);
}

bool aabb::intersects_ray(const vector3 &p_from, const vector3 &p_dir, vector3 *r_clip, vector3 *r_normal) const {
	vector3 c1, c2;
	vector3 end = position + size;
	real_t near = -1e20;
	real_t far = 1e20;
	int axis = 0;

	for (int i = 0; i < 3; i++) {
		if (p_dir[i] == 0) {
			if ((p_from[i] < position[i]) || (p_from[i] > end[i])) {
				return false;
			}
		} else { // ray not parallel to planes in this direction
			c1[i] = (position[i] - p_from[i]) / p_dir[i];
			c2[i] = (end[i] - p_from[i]) / p_dir[i];

			if (c1[i] > c2[i]) {
				std::swap(c1, c2);
			}
			if (c1[i] > near) {
				near = c1[i];
				axis = i;
			}
			if (c2[i] < far) {
				far = c2[i];
			}
			if ((near > far) || (far < 0)) {
				return false;
			}
		}
	}

	if (r_clip)
		*r_clip = c1;
	if (r_normal) {
		*r_normal = vector3();
		(*r_normal)[axis] = p_dir[axis] ? -1 : 1;
	}

	return true;
}

bool aabb::intersects_segment(const vector3 &p_from, const vector3 &p_to, vector3 *r_clip, vector3 *r_normal) const {
	real_t min = 0, max = 1;
	int axis = 0;
	real_t sign = 0;

	for (int i = 0; i < 3; i++) {
		real_t seg_from = p_from[i];
		real_t seg_to = p_to[i];
		real_t box_begin = position[i];
		real_t box_end = box_begin + size[i];
		real_t cmin, cmax;
		real_t csign;

		if (seg_from < seg_to) {
			if (seg_from > box_end || seg_to < box_begin)
				return false;
			real_t length = seg_to - seg_from;
			cmin = (seg_from < box_begin) ? ((box_begin - seg_from) / length) : 0;
			cmax = (seg_to > box_end) ? ((box_end - seg_from) / length) : 1;
			csign = -1.0;

		} else {
			if (seg_to > box_end || seg_from < box_begin)
				return false;
			real_t length = seg_to - seg_from;
			cmin = (seg_from > box_end) ? (box_end - seg_from) / length : 0;
			cmax = (seg_to < box_begin) ? (box_begin - seg_from) / length : 1;
			csign = 1.0;
		}

		if (cmin > min) {
			min = cmin;
			axis = i;
			sign = csign;
		}
		if (cmax < max)
			max = cmax;
		if (max < min)
			return false;
	}

	vector3 rel = p_to - p_from;

	if (r_normal) {
		vector3 normal;
		normal[axis] = sign;
		*r_normal = normal;
	}

	if (r_clip)
		*r_clip = p_from + rel * min;

	return true;
}

bool aabb::intersects_plane(const plane &p_plane) const {
	vector3 points[8] = {
		vector3(position.x, position.y, position.z),
		vector3(position.x, position.y, position.z + size.z),
		vector3(position.x, position.y + size.y, position.z),
		vector3(position.x, position.y + size.y, position.z + size.z),
		vector3(position.x + size.x, position.y, position.z),
		vector3(position.x + size.x, position.y, position.z + size.z),
		vector3(position.x + size.x, position.y + size.y, position.z),
		vector3(position.x + size.x, position.y + size.y, position.z + size.z),
	};

	bool over = false;
	bool under = false;

	for (int i = 0; i < 8; i++) {
		if (p_plane.distance_to(points[i]) > 0)
			over = true;
		else
			under = true;
	}

	return under && over;
}

vector3 aabb::get_longest_axis() const {
	vector3 axis(1, 0, 0);
	real_t max_size = size.x;

	if (size.y > max_size) {
		axis = vector3(0, 1, 0);
		max_size = size.y;
	}

	if (size.z > max_size) {
		axis = vector3(0, 0, 1);
		max_size = size.z;
	}

	return axis;
}
int aabb::get_longest_axis_index() const {
	int axis = 0;
	real_t max_size = size.x;

	if (size.y > max_size) {
		axis = 1;
		max_size = size.y;
	}

	if (size.z > max_size) {
		axis = 2;
		max_size = size.z;
	}

	return axis;
}

vector3 aabb::get_shortest_axis() const {
	vector3 axis(1, 0, 0);
	real_t max_size = size.x;

	if (size.y < max_size) {
		axis = vector3(0, 1, 0);
		max_size = size.y;
	}

	if (size.z < max_size) {
		axis = vector3(0, 0, 1);
		max_size = size.z;
	}

	return axis;
}
int aabb::get_shortest_axis_index() const {
	int axis = 0;
	real_t max_size = size.x;

	if (size.y < max_size) {
		axis = 1;
		max_size = size.y;
	}

	if (size.z < max_size) {
		axis = 2;
		max_size = size.z;
	}

	return axis;
}

aabb aabb::merge(const aabb &p_with) const {
	aabb aabb_ = *this;
	aabb_.merge_with(p_with);
	return aabb_;
}
aabb aabb::expand(const vector3 &p_vector) const {
	aabb aabb_ = *this;
	aabb_.expand_to(p_vector);
	return aabb_;
}
aabb aabb::grow(real_t p_by) const {
	aabb aabb_ = *this;
	aabb_.grow_by(p_by);
	return aabb_;
}

void aabb::get_edge(int p_edge, vector3 &r_from, vector3 &r_to) const {
	ERR_FAIL_INDEX(p_edge, 12);
	switch (p_edge) {
		case 0: {
			r_from = vector3(position.x + size.x, position.y, position.z);
			r_to = vector3(position.x, position.y, position.z);
		} break;
		case 1: {
			r_from = vector3(position.x + size.x, position.y, position.z + size.z);
			r_to = vector3(position.x + size.x, position.y, position.z);
		} break;
		case 2: {
			r_from = vector3(position.x, position.y, position.z + size.z);
			r_to = vector3(position.x + size.x, position.y, position.z + size.z);

		} break;
		case 3: {
			r_from = vector3(position.x, position.y, position.z);
			r_to = vector3(position.x, position.y, position.z + size.z);

		} break;
		case 4: {
			r_from = vector3(position.x, position.y + size.y, position.z);
			r_to = vector3(position.x + size.x, position.y + size.y, position.z);
		} break;
		case 5: {
			r_from = vector3(position.x + size.x, position.y + size.y, position.z);
			r_to = vector3(position.x + size.x, position.y + size.y, position.z + size.z);
		} break;
		case 6: {
			r_from = vector3(position.x + size.x, position.y + size.y, position.z + size.z);
			r_to = vector3(position.x, position.y + size.y, position.z + size.z);

		} break;
		case 7: {
			r_from = vector3(position.x, position.y + size.y, position.z + size.z);
			r_to = vector3(position.x, position.y + size.y, position.z);

		} break;
		case 8: {
			r_from = vector3(position.x, position.y, position.z + size.z);
			r_to = vector3(position.x, position.y + size.y, position.z + size.z);

		} break;
		case 9: {
			r_from = vector3(position.x, position.y, position.z);
			r_to = vector3(position.x, position.y + size.y, position.z);

		} break;
		case 10: {
			r_from = vector3(position.x + size.x, position.y, position.z);
			r_to = vector3(position.x + size.x, position.y + size.y, position.z);

		} break;
		case 11: {
			r_from = vector3(position.x + size.x, position.y, position.z + size.z);
			r_to = vector3(position.x + size.x, position.y + size.y, position.z + size.z);

		} break;
	}
}

aabb::operator string() const {
	return string() + position + " - " + size;
}

} // namespace gd
