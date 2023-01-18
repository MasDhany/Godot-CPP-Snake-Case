#ifndef GODOT_CPP_REGEXMATCH_HPP
#define GODOT_CPP_REGEXMATCH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class reg_ex_match : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_end;
		godot_method_bind *mb_get_group_count;
		godot_method_bind *mb_get_names;
		godot_method_bind *mb_get_start;
		godot_method_bind *mb_get_string;
		godot_method_bind *mb_get_strings;
		godot_method_bind *mb_get_subject;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RegExMatch"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RegExMatch"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static reg_ex_match *_new();

	// methods
	int64_t get_end(const variant name = 0) const;
	int64_t get_group_count() const;
	dictionary get_names() const;
	int64_t get_start(const variant name = 0) const;
	string get_string(const variant name = 0) const;
	array get_strings() const;
	string get_subject() const;

};

}

#endif