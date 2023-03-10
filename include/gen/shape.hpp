#ifndef GODOT_CPP_SHAPE_HPP
#define GODOT_CPP_SHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class array_mesh;

class shape : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_debug_mesh;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_set_margin;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Shape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Shape"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	ref<array_mesh> get_debug_mesh();
	real_t get_margin() const;
	void set_margin(const real_t margin);

};

}

#endif