#ifndef GODOT_CPP_EXPRESSION_HPP
#define GODOT_CPP_EXPRESSION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class object;

class expression : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_execute;
		godot_method_bind *mb_get_error_text;
		godot_method_bind *mb_has_execute_failed;
		godot_method_bind *mb_parse;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Expression"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Expression"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static expression *_new();

	// methods
	variant execute(const array inputs = array(), const object *base_instance = nullptr, const bool show_error = true);
	string get_error_text() const;
	bool has_execute_failed() const;
	error parse(const string expression_, const pool_string_array input_names = pool_string_array());

};

}

#endif