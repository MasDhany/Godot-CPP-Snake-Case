#ifndef GODOT_CPP_GDSCRIPT_HPP
#define GODOT_CPP_GDSCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "script.hpp"
namespace gd {


class gdscript : public script {
	struct ___method_bindings {
		godot_method_bind *mb_get_as_byte_code;
		godot_method_bind *mb_new;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GDScript"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GDScript"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gdscript *_new();

	// methods
	pool_byte_array get_as_byte_code() const;
	variant new_(const array& __var_args = array());
	template <class... Args> variant new_(Args... args){
		return new_(array::make(args...));
	}

};

}

#endif