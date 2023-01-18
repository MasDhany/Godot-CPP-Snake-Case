#ifndef GODOT_CPP_IMMEDIATEGEOMETRY_HPP
#define GODOT_CPP_IMMEDIATEGEOMETRY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "geometry_instance.hpp"
namespace gd {

class texture;

class immediate_geometry : public geometry_instance {
	struct ___method_bindings {
		godot_method_bind *mb_add_sphere;
		godot_method_bind *mb_add_vertex;
		godot_method_bind *mb_begin;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_end;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_normal;
		godot_method_bind *mb_set_tangent;
		godot_method_bind *mb_set_uv;
		godot_method_bind *mb_set_uv2;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ImmediateGeometry"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ImmediateGeometry"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static immediate_geometry *_new();

	// methods
	void add_sphere(const int64_t lats, const int64_t lons, const real_t radius, const bool add_uv = true);
	void add_vertex(const vector3 position);
	void begin(const int64_t primitive, const ref<texture> texture_ = nullptr);
	void clear();
	void end();
	void set_color(const color color_);
	void set_normal(const vector3 normal);
	void set_tangent(const plane tangent);
	void set_uv(const vector2 uv);
	void set_uv2(const vector2 uv);

};

}

#endif