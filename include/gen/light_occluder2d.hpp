#ifndef GODOT_CPP_LIGHTOCCLUDER2D_HPP
#define GODOT_CPP_LIGHTOCCLUDER2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class occluder_polygon2d;

class light_occluder2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__poly_changed;
		godot_method_bind *mb_get_occluder_light_mask;
		godot_method_bind *mb_get_occluder_polygon;
		godot_method_bind *mb_set_occluder_light_mask;
		godot_method_bind *mb_set_occluder_polygon;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "LightOccluder2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "LightOccluder2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static light_occluder2d *_new();

	// methods
	void _poly_changed();
	int64_t get_occluder_light_mask() const;
	ref<occluder_polygon2d> get_occluder_polygon() const;
	void set_occluder_light_mask(const int64_t mask);
	void set_occluder_polygon(const ref<occluder_polygon2d> polygon);

};

}

#endif