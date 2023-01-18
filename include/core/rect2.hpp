/*************************************************************************/
/*  rect2.hpp                                                            */
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

#ifndef RECT2_H
#define RECT2_H

#include "vector2.hpp"

#include <cmath>

#include <cstdlib>

namespace gd {

class string;

typedef vector2 Size2;
typedef vector2 Point2;

struct transform2d;

struct rect2 {
	Point2 position;
	Size2 size;

	inline const vector2 &get_position() const { return position; }
	inline void set_position(const vector2 &p_position) { position = p_position; }
	inline const vector2 &get_size() const { return size; }
	inline void set_size(const vector2 &p_size) { size = p_size; }

	inline real_t get_area() const { return size.width * size.height; }

	inline bool intersects(const rect2 &p_rect) const {
		if (position.x >= (p_rect.position.x + p_rect.size.width))
			return false;
		if ((position.x + size.width) <= p_rect.position.x)
			return false;
		if (position.y >= (p_rect.position.y + p_rect.size.height))
			return false;
		if ((position.y + size.height) <= p_rect.position.y)
			return false;

		return true;
	}

	real_t distance_to(const vector2 &p_point) const;

	bool intersects_transformed(const transform2d &p_xform, const rect2 &p_rect) const;

	bool intersects_segment(const Point2 &p_from, const Point2 &p_to, Point2 *r_position = nullptr, Point2 *r_normal = nullptr) const;

	inline bool encloses(const rect2 &p_rect) const {
		return (p_rect.position.x >= position.x) && (p_rect.position.y >= position.y) &&
			   ((p_rect.position.x + p_rect.size.x) < (position.x + size.x)) &&
			   ((p_rect.position.y + p_rect.size.y) < (position.y + size.y));
	}

	inline bool has_no_area() const {
		return (size.x <= 0 || size.y <= 0);
	}
	rect2 clip(const rect2 &p_rect) const;

	rect2 merge(const rect2 &p_rect) const;

	inline bool has_point(const Point2 &p_point) const {
		if (p_point.x < position.x)
			return false;
		if (p_point.y < position.y)
			return false;

		if (p_point.x >= (position.x + size.x))
			return false;
		if (p_point.y >= (position.y + size.y))
			return false;

		return true;
	}

	inline bool no_area() const { return (size.width <= 0 || size.height <= 0); }

	inline bool operator==(const rect2 &p_rect) const { return position == p_rect.position && size == p_rect.size; }
	inline bool operator!=(const rect2 &p_rect) const { return position != p_rect.position || size != p_rect.size; }

	inline rect2 grow(real_t p_by) const {
		rect2 g = *this;
		g.position.x -= p_by;
		g.position.y -= p_by;
		g.size.width += p_by * 2;
		g.size.height += p_by * 2;
		return g;
	}

	inline rect2 expand(const vector2 &p_vector) const {
		rect2 r = *this;
		r.expand_to(p_vector);
		return r;
	}

	inline void expand_to(const vector2 &p_vector) { //in place function for speed

		vector2 begin = position;
		vector2 end = position + size;

		if (p_vector.x < begin.x)
			begin.x = p_vector.x;
		if (p_vector.y < begin.y)
			begin.y = p_vector.y;

		if (p_vector.x > end.x)
			end.x = p_vector.x;
		if (p_vector.y > end.y)
			end.y = p_vector.y;

		position = begin;
		size = end - begin;
	}

	operator string() const;

	inline rect2() {}
	inline rect2(real_t p_x, real_t p_y, real_t p_width, real_t p_height) {
		position = Point2(p_x, p_y);
		size = Size2(p_width, p_height);
	}
	inline rect2(const Point2 &p_position, const Size2 &p_size) {
		position = p_position;
		size = p_size;
	}
};

} // namespace gd

#endif // RECT2_H
