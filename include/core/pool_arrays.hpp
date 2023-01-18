/*************************************************************************/
/*  pool_arrays.hpp                                                       */
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

#ifndef POOLARRAYS_H
#define POOLARRAYS_H

#include "defs.hpp"

#include "color.hpp"
#include "godot_global.hpp"
#include "string.hpp"
#include "vector2.hpp"
#include "vector3.hpp"

#include <gdnative/pool_arrays.h>

namespace gd {

class array;

class pool_byte_array {
	godot_pool_byte_array _godot_array;

	friend class string;
	friend class variant;
	inline explicit pool_byte_array(godot_pool_byte_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_byte_array;
		godot_pool_byte_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_byte_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_byte_array_read_access_destroy(_read_access);
		}

		inline const uint8_t *ptr() const {
			return gd::api->godot_pool_byte_array_read_access_ptr(_read_access);
		}

		inline const uint8_t &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_byte_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_byte_array;
		godot_pool_byte_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_byte_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_byte_array_write_access_destroy(_write_access);
		}

		inline uint8_t *ptr() const {
			return gd::api->godot_pool_byte_array_write_access_ptr(_write_access);
		}

		inline uint8_t &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_byte_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_byte_array();
	pool_byte_array(const pool_byte_array &p_other);
	pool_byte_array &operator=(const pool_byte_array &p_other);

	pool_byte_array(const array &array_);

	read read_() const;

	write write_();

	void append(const uint8_t data);

	void append_array(const pool_byte_array &array_);

	int insert(const int idx, const uint8_t data);

	void invert();

	void push_back(const uint8_t data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const uint8_t data);

	uint8_t operator[](const int idx);

	int size() const;

	~pool_byte_array();
};

class pool_int_array {
	godot_pool_int_array _godot_array;

	friend class variant;
	explicit inline pool_int_array(godot_pool_int_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_int_array;
		godot_pool_int_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_int_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_int_array_read_access_destroy(_read_access);
		}

		inline const int *ptr() const {
			return gd::api->godot_pool_int_array_read_access_ptr(_read_access);
		}

		inline const int &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_int_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_int_array;
		godot_pool_int_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_int_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_int_array_write_access_destroy(_write_access);
		}

		inline int *ptr() const {
			return gd::api->godot_pool_int_array_write_access_ptr(_write_access);
		}

		inline int &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_int_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_int_array();
	pool_int_array(const pool_int_array &p_other);
	pool_int_array &operator=(const pool_int_array &p_other);

	pool_int_array(const array &array_);

	read read_() const;

	write write_();

	void append(const int data);

	void append_array(const pool_int_array &array_);

	int insert(const int idx, const int data);

	void invert();

	void push_back(const int data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const int data);

	int operator[](const int idx);

	int size() const;

	~pool_int_array();
};

class pool_real_array {
	godot_pool_real_array _godot_array;

	friend class variant;
	explicit inline pool_real_array(godot_pool_real_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_real_array;
		godot_pool_real_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_real_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_real_array_read_access_destroy(_read_access);
		}

		inline const real_t *ptr() const {
			return gd::api->godot_pool_real_array_read_access_ptr(_read_access);
		}

		inline const real_t &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_real_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_real_array;
		godot_pool_real_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_real_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_real_array_write_access_destroy(_write_access);
		}

		inline real_t *ptr() const {
			return gd::api->godot_pool_real_array_write_access_ptr(_write_access);
		}

		inline real_t &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_real_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_real_array();
	pool_real_array(const pool_real_array &p_other);
	pool_real_array &operator=(const pool_real_array &p_other);

	pool_real_array(const array &array_);

	read read_() const;

	write write_();

	void append(const real_t data);

	void append_array(const pool_real_array &array_);

	int insert(const int idx, const real_t data);

	void invert();

	void push_back(const real_t data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const real_t data);

	real_t operator[](const int idx);

	int size() const;

	~pool_real_array();
};

class pool_string_array {
	godot_pool_string_array _godot_array;

	friend class string;
	friend class variant;
	explicit inline pool_string_array(godot_pool_string_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_string_array;
		godot_pool_string_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_string_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_string_array_read_access_destroy(_read_access);
		}

		inline const string *ptr() const {
			return (const string *)gd::api->godot_pool_string_array_read_access_ptr(_read_access);
		}

		inline const string &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_string_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_string_array;
		godot_pool_string_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_string_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_string_array_write_access_destroy(_write_access);
		}

		inline string *ptr() const {
			return (string *)gd::api->godot_pool_string_array_write_access_ptr(_write_access);
		}

		inline string &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_string_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_string_array();
	pool_string_array(const pool_string_array &p_other);
	pool_string_array &operator=(const pool_string_array &p_other);

	pool_string_array(const array &array_);

	read read_() const;

	write write_();

	void append(const string &data);

	void append_array(const pool_string_array &array_);

	int insert(const int idx, const string &data);

	void invert();

	void push_back(const string &data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const string &data);

	const string operator[](const int idx);

	int size() const;

	~pool_string_array();
};

class pool_vector2_array {
	godot_pool_vector2_array _godot_array;

	friend class variant;
	explicit inline pool_vector2_array(godot_pool_vector2_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_vector2_array;
		godot_pool_vector2_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_vector2_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_vector2_array_read_access_destroy(_read_access);
		}

		inline const vector2 *ptr() const {
			return (const vector2 *)gd::api->godot_pool_vector2_array_read_access_ptr(_read_access);
		}

		inline const vector2 &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_vector2_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_vector2_array;
		godot_pool_vector2_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_vector2_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_vector2_array_write_access_destroy(_write_access);
		}

		inline vector2 *ptr() const {
			return (vector2 *)gd::api->godot_pool_vector2_array_write_access_ptr(_write_access);
		}

		inline vector2 &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_vector2_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_vector2_array();
	pool_vector2_array(const pool_vector2_array &p_other);
	pool_vector2_array &operator=(const pool_vector2_array &p_other);

	pool_vector2_array(const array &array_);

	read read_() const;

	write write_();

	void append(const vector2 &data);

	void append_array(const pool_vector2_array &array_);

	int insert(const int idx, const vector2 &data);

	void invert();

	void push_back(const vector2 &data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const vector2 &data);

	const vector2 operator[](const int idx);

	int size() const;

	~pool_vector2_array();
};

class pool_vector3_array {
	godot_pool_vector3_array _godot_array;

	friend class variant;
	explicit inline pool_vector3_array(godot_pool_vector3_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_vector3_array;
		godot_pool_vector3_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_vector3_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_vector3_array_read_access_destroy(_read_access);
		}

		inline const vector3 *ptr() const {
			return (const vector3 *)gd::api->godot_pool_vector3_array_read_access_ptr(_read_access);
		}

		inline const vector3 &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_vector3_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_vector3_array;
		godot_pool_vector3_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_vector3_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_vector3_array_write_access_destroy(_write_access);
		}

		inline vector3 *ptr() const {
			return (vector3 *)gd::api->godot_pool_vector3_array_write_access_ptr(_write_access);
		}

		inline vector3 &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_vector3_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_vector3_array();
	pool_vector3_array(const pool_vector3_array &p_other);
	pool_vector3_array &operator=(const pool_vector3_array &p_other);

	pool_vector3_array(const array &array_);

	read read_() const;

	write write_();

	void append(const vector3 &data);

	void append_array(const pool_vector3_array &array_);

	int insert(const int idx, const vector3 &data);

	void invert();

	void push_back(const vector3 &data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const vector3 &data);

	const vector3 operator[](const int idx);

	int size() const;

	~pool_vector3_array();
};

class pool_color_array {
	godot_pool_color_array _godot_array;

	friend class variant;
	explicit inline pool_color_array(godot_pool_color_array a) {
		_godot_array = a;
	}

public:
	class read {
		friend class pool_color_array;
		godot_pool_color_array_read_access *_read_access;

	public:
		inline read() {
			_read_access = nullptr;
		}

		inline read(const read &p_other) {
			_read_access = gd::api->godot_pool_color_array_read_access_copy(p_other._read_access);
		}

		inline ~read() {
			gd::api->godot_pool_color_array_read_access_destroy(_read_access);
		}

		inline const color *ptr() const {
			return (const color *)gd::api->godot_pool_color_array_read_access_ptr(_read_access);
		}

		inline const color &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const read &p_other) {
			gd::api->godot_pool_color_array_read_access_operator_assign(_read_access, p_other._read_access);
		}
	};

	class write {
		friend class pool_color_array;
		godot_pool_color_array_write_access *_write_access;

	public:
		inline write() {
			_write_access = nullptr;
		}

		inline write(const write &p_other) {
			_write_access = gd::api->godot_pool_color_array_write_access_copy(p_other._write_access);
		}

		inline ~write() {
			gd::api->godot_pool_color_array_write_access_destroy(_write_access);
		}

		inline color *ptr() const {
			return (color *)gd::api->godot_pool_color_array_write_access_ptr(_write_access);
		}

		inline color &operator[](int p_idx) const {
			return ptr()[p_idx];
		}

		inline void operator=(const write &p_other) {
			gd::api->godot_pool_color_array_write_access_operator_assign(_write_access, p_other._write_access);
		}
	};

	pool_color_array();
	pool_color_array(const pool_color_array &p_other);
	pool_color_array &operator=(const pool_color_array &p_other);

	pool_color_array(const array &array_);

	read read_() const;

	write write_();

	void append(const color &data);

	void append_array(const pool_color_array &array_);

	int insert(const int idx, const color &data);

	void invert();

	void push_back(const color &data);

	void remove(const int idx);

	void resize(const int size);

	void set(const int idx, const color &data);

	const color operator[](const int idx);

	int size() const;

	~pool_color_array();
};

} // namespace gd

#endif // POOLARRAYS_H
