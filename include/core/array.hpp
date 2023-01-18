/*************************************************************************/
/*  array.hpp                                                            */
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

#ifndef ARRAY_H
#define ARRAY_H

#include <gdnative/array.h>

#include "string.hpp"

namespace gd {

namespace helpers {
template <typename T, typename ValueT>
T append_all(T appendable, ValueT value) {
	appendable.append(value);
	return appendable;
}

template <typename T, typename ValueT, typename... Args>
T append_all(T appendable, ValueT value, Args... args) {
	appendable.append(value);
	return append_all(appendable, args...);
}

template <typename T>
T append_all(T appendable) {
	return appendable;
}

template <typename KV, typename KeyT, typename ValueT>
KV add_all(KV kv, KeyT key, ValueT value) {
	kv[key] = value;
	return kv;
}

template <typename KV, typename KeyT, typename ValueT, typename... Args>
KV add_all(KV kv, KeyT key, ValueT value, Args... args) {
	kv[key] = value;
	return add_all(kv, args...);
}

template <typename KV>
KV add_all(KV kv) {
	return kv;
}
} // namespace helpers

class variant;
class pool_byte_array;
class pool_int_array;
class pool_real_array;
class pool_string_array;
class pool_vector2_array;
class pool_vector3_array;
class pool_color_array;

class object;

class array {
	godot_array _godot_array;

	friend class variant;
	friend class dictionary;
	friend class string;
	inline explicit array(const godot_array &other) {
		_godot_array = other;
	}

public:
	array();
	array(const array &other);
	array &operator=(const array &other);

	array(const pool_byte_array &a);

	array(const pool_int_array &a);

	array(const pool_real_array &a);

	array(const pool_string_array &a);

	array(const pool_vector2_array &a);

	array(const pool_vector3_array &a);

	array(const pool_color_array &a);

	template <class... Args>
	static array make(Args... args) {
		return helpers::append_all(array(), args...);
	}

	variant &operator[](const int idx);

	const variant &operator[](const int idx) const;

	void append(const variant &v);

	void clear();

	int count(const variant &v);

	bool empty() const;

	void erase(const variant &v);

	variant front() const;

	variant back() const;

	int find(const variant &what, const int from = 0) const;

	int find_last(const variant &what) const;

	bool has(const variant &what) const;

	uint32_t hash() const;

	void insert(const int pos, const variant &value);

	void invert();

	bool is_shared() const;

	variant pop_back();

	variant pop_front();

	void push_back(const variant &v);

	void push_front(const variant &v);

	void remove(const int idx);

	int size() const;

	void resize(const int size);

	int rfind(const variant &what, const int from = -1) const;

	void sort();

	void sort_custom(object *obj, const string &func);

	int bsearch(const variant &value, const bool before = true);

	int bsearch_custom(const variant &value, const object *obj,
			const string &func, const bool before = true);

	array duplicate(const bool deep = false) const;

	variant max() const;

	variant min() const;

	void shuffle();

	~array();
};

} // namespace gd

#endif // ARRAY_H
