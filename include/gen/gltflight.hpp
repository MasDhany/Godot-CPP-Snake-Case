#ifndef GODOT_CPP_GLTFLIGHT_HPP
#define GODOT_CPP_GLTFLIGHT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class gltflight : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_inner_cone_angle;
		godot_method_bind *mb_get_intensity;
		godot_method_bind *mb_get_outer_cone_angle;
		godot_method_bind *mb_get_range;
		godot_method_bind *mb_get_type;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_inner_cone_angle;
		godot_method_bind *mb_set_intensity;
		godot_method_bind *mb_set_outer_cone_angle;
		godot_method_bind *mb_set_range;
		godot_method_bind *mb_set_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFLight"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFLight"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gltflight *_new();

	// methods
	color get_color();
	real_t get_inner_cone_angle();
	real_t get_intensity();
	real_t get_outer_cone_angle();
	real_t get_range();
	string get_type();
	void set_color(const color color_);
	void set_inner_cone_angle(const real_t inner_cone_angle);
	void set_intensity(const real_t intensity);
	void set_outer_cone_angle(const real_t outer_cone_angle);
	void set_range(const real_t range_);
	void set_type(const string type);

};

}

#endif