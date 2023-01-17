/*************************************************************************/
/*  dictionary.hpp                                                       */
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

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "variant.hpp"

#include "array.hpp"

#include <gdnative/dictionary.h>

namespace gd {

class dictionary {
	godot_dictionary _godot_dictionary;

	friend variant::operator dictionary() const;
	inline explicit dictionary(const godot_dictionary &other) {
		_godot_dictionary = other;
	}

public:
	dictionary();
	dictionary(const dictionary &other);
	dictionary &operator=(const dictionary &other);

	template <class... Args>
	static dictionary make(Args... args) {
		return helpers::add_all(dictionary(), args...);
	}

	void clear();

	bool empty() const;

	void erase(const variant &key);

	bool has(const variant &key) const;

	bool has_all(const array &keys) const;

	uint32_t hash() const;

	array keys() const;

	variant &operator[](const variant &key);

	const variant &operator[](const variant &key) const;

	int size() const;

	string to_json() const;

	array values() const;

	~dictionary();
};

} // namespace gd

#endif // DICTIONARY_H
