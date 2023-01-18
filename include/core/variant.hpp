/*************************************************************************/
/*  variant.hpp                                                          */
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

#ifndef VARIANT_H
#define VARIANT_H

#include <gdnative/variant.h>

#include "defs.hpp"

#include "aabb.hpp"
#include "basis.hpp"
#include "color.hpp"
#include "node_path.hpp"
#include "plane.hpp"
#include "pool_arrays.hpp"
#include "quat.hpp"
#include "rid.hpp"
#include "rect2.hpp"
#include "string.hpp"
#include "transform.hpp"
#include "transform2d.hpp"
#include "vector2.hpp"
#include "vector3.hpp"

namespace gd {

class dictionary;

class array;

class variant {
	godot_variant _godot_variant;

	friend class array;
	inline explicit variant(godot_variant v) {
		_godot_variant = v;
	}

public:
	enum Type {

		NIL,

		// atomic types
		BOOL,
		INT,
		REAL,
		STRING,

		// math_ types

		VECTOR2, // 5
		RECT2,
		VECTOR3,
		TRANSFORM2D,
		PLANE,
		QUAT, // 10
		RECT3, //sorry naming convention fail :( not like it's used often
		BASIS,
		TRANSFORM,

		// misc types
		COLOR,
		NODE_PATH, // 15
		_RID,
		OBJECT,
		DICTIONARY,
		ARRAY,

		// arrays
		POOL_BYTE_ARRAY, // 20
		POOL_INT_ARRAY,
		POOL_REAL_ARRAY,
		POOL_STRING_ARRAY,
		POOL_VECTOR2_ARRAY,
		POOL_VECTOR3_ARRAY, // 25
		POOL_COLOR_ARRAY,

		VARIANT_MAX

	};

	enum Operator {

		//comparation
		OP_EQUAL,
		OP_NOT_EQUAL,
		OP_LESS,
		OP_LESS_EQUAL,
		OP_GREATER,
		OP_GREATER_EQUAL,

		//mathematic
		OP_ADD,
		OP_SUBSTRACT,
		OP_MULTIPLY,
		OP_DIVIDE,
		OP_NEGATE,
		OP_POSITIVE,
		OP_MODULE,
		OP_STRING_CONCAT,

		//bitwise
		OP_SHIFT_LEFT,
		OP_SHIFT_RIGHT,
		OP_BIT_AND,
		OP_BIT_OR,
		OP_BIT_XOR,
		OP_BIT_NEGATE,

		//logic
		OP_AND,
		OP_OR,
		OP_XOR,
		OP_NOT,

		//containment
		OP_IN,
		OP_MAX

	};

	variant();

	variant(const variant &v);

	variant(bool p_bool);

	variant(signed int p_int);

	variant(unsigned int p_int);

	variant(signed short p_short);

	inline variant(unsigned short p_short) :
			variant((unsigned int)p_short) {}

	inline variant(signed char p_char) :
			variant((signed int)p_char) {}

	inline variant(unsigned char p_char) :
			variant((unsigned int)p_char) {}
	variant(int64_t p_char);

	variant(uint64_t p_char);

	variant(float p_float);

	variant(double p_double);

	variant(const string &p_string);

	variant(const char *const p_cstring);

	variant(const wchar_t *p_wstring);

	variant(const vector2 &p_vector2);

	variant(const rect2 &p_rect2);

	variant(const vector3 &p_vector3);

	variant(const plane &p_plane);

	variant(const aabb &p_aabb);

	variant(const quat &p_quat);

	variant(const basis &p_transform);

	variant(const transform2d &p_transform);

	variant(const transform &p_transform);

	variant(const color &p_color);

	variant(const node_path &p_path);

	variant(const rid &p_rid);

	variant(const object *p_object);

	variant(const dictionary &p_dictionary);

	variant(const array &p_array);

	variant(const pool_byte_array &p_raw_array);

	variant(const pool_int_array &p_int_array);

	variant(const pool_real_array &p_real_array);

	variant(const pool_string_array &p_string_array);

	variant(const pool_vector2_array &p_vector2_array);

	variant(const pool_vector3_array &p_vector3_array);

	variant(const pool_color_array &p_color_array);

	variant &operator=(const variant &v);

	operator bool() const;
	operator signed int() const;
	operator unsigned int() const;
	operator signed short() const;
	operator unsigned short() const;
	operator signed char() const;
	operator unsigned char() const;
	operator int64_t() const;
	operator uint64_t() const;

	operator wchar_t() const;

	operator float() const;

	operator double() const;
	operator string() const;
	operator vector2() const;
	operator rect2() const;
	operator vector3() const;
	operator plane() const;
	operator aabb() const;
	operator quat() const;
	operator basis() const;
	operator transform() const;
	operator transform2d() const;

	operator color() const;

	operator node_path() const;
	operator rid() const;
	operator godot_object *() const;

	template <typename T>
	operator T *() const { return static_cast<T *>(T::___get_from_variant(*this)); }

	operator dictionary() const;
	operator array() const;

	operator pool_byte_array() const;
	operator pool_int_array() const;
	operator pool_real_array() const;
	operator pool_string_array() const;
	operator pool_vector2_array() const;
	operator pool_vector3_array() const;
	operator pool_color_array() const;

	Type get_type() const;

	variant call(const string &method, const variant **args, const int arg_count);

	bool has_method(const string &method);

	bool operator==(const variant &b) const;

	bool operator!=(const variant &b) const;

	bool operator<(const variant &b) const;

	bool operator<=(const variant &b) const;

	bool operator>(const variant &b) const;

	bool operator>=(const variant &b) const;

	bool hash_compare(const variant &b) const;

	bool booleanize() const;

	~variant();
};

} // namespace gd

#endif // VARIANT_H
