#ifndef GODOT_CPP_REFERENCE_HPP
#define GODOT_CPP_REFERENCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/tag_db.hpp>

#include "object.hpp"
namespace gd {


class reference : public object {
	struct ___method_bindings {
		godot_method_bind *mb_init_ref;
		godot_method_bind *mb_reference;
		godot_method_bind *mb_unreference;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Reference"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Reference"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static reference *_new();

	// methods
	bool init_ref();
	bool reference_();
	bool unreference();

};

}

#endif