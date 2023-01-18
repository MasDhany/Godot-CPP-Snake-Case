#ifndef GODOT_CPP_REGEX_HPP
#define GODOT_CPP_REGEX_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class reg_ex_match;

class reg_ex : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_clear;
		godot_method_bind *mb_compile;
		godot_method_bind *mb_get_group_count;
		godot_method_bind *mb_get_names;
		godot_method_bind *mb_get_pattern;
		godot_method_bind *mb_is_valid;
		godot_method_bind *mb_search;
		godot_method_bind *mb_search_all;
		godot_method_bind *mb_sub;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RegEx"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RegEx"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static reg_ex *_new();

	// methods
	void clear();
	error compile(const string pattern);
	int64_t get_group_count() const;
	array get_names() const;
	string get_pattern() const;
	bool is_valid() const;
	ref<reg_ex_match> search(const string subject, const int64_t offset = 0, const int64_t end = -1) const;
	array search_all(const string subject, const int64_t offset = 0, const int64_t end = -1) const;
	string sub(const string subject, const string replacement, const bool all = false, const int64_t offset = 0, const int64_t end = -1) const;

};

}

#endif