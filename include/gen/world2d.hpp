#ifndef GODOT_CPP_WORLD2D_HPP
#define GODOT_CPP_WORLD2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class physics2_ddirect_space_state;

class world2d : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_canvas;
		godot_method_bind *mb_get_direct_space_state;
		godot_method_bind *mb_get_navigation_map;
		godot_method_bind *mb_get_space;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "World2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "World2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static world2d *_new();

	// methods
	rid get_canvas();
	physics2_ddirect_space_state *get_direct_space_state();
	rid get_navigation_map() const;
	rid get_space();

};

}

#endif