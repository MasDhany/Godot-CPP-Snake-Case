#ifndef GODOT_CPP_SURFACETOOL_HPP
#define GODOT_CPP_SURFACETOOL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class array_mesh;
class material;
class mesh;

class surface_tool : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_add_bones;
		godot_method_bind *mb_add_color;
		godot_method_bind *mb_add_index;
		godot_method_bind *mb_add_normal;
		godot_method_bind *mb_add_smooth_group;
		godot_method_bind *mb_add_tangent;
		godot_method_bind *mb_add_triangle_fan;
		godot_method_bind *mb_add_uv;
		godot_method_bind *mb_add_uv2;
		godot_method_bind *mb_add_vertex;
		godot_method_bind *mb_add_weights;
		godot_method_bind *mb_append_from;
		godot_method_bind *mb_begin;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_commit;
		godot_method_bind *mb_commit_to_arrays;
		godot_method_bind *mb_create_from;
		godot_method_bind *mb_create_from_blend_shape;
		godot_method_bind *mb_deindex;
		godot_method_bind *mb_generate_normals;
		godot_method_bind *mb_generate_tangents;
		godot_method_bind *mb_index;
		godot_method_bind *mb_set_material;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SurfaceTool"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SurfaceTool"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static surface_tool *_new();

	// methods
	void add_bones(const pool_int_array bones);
	void add_color(const color color_);
	void add_index(const int64_t index);
	void add_normal(const vector3 normal);
	void add_smooth_group(const bool smooth);
	void add_tangent(const plane tangent);
	void add_triangle_fan(const pool_vector3_array vertices, const pool_vector2_array uvs = pool_vector2_array(), const pool_color_array colors = pool_color_array(), const pool_vector2_array uv2s = pool_vector2_array(), const pool_vector3_array normals = pool_vector3_array(), const array tangents = array());
	void add_uv(const vector2 uv);
	void add_uv2(const vector2 uv2);
	void add_vertex(const vector3 vertex);
	void add_weights(const pool_real_array weights);
	void append_from(const ref<mesh> existing, const int64_t surface, const transform transform_);
	void begin(const int64_t primitive);
	void clear();
	ref<array_mesh> commit(const ref<array_mesh> existing = nullptr, const int64_t flags = 2194432);
	array commit_to_arrays();
	void create_from(const ref<mesh> existing, const int64_t surface);
	void create_from_blend_shape(const ref<mesh> existing, const int64_t surface, const string blend_shape);
	void deindex();
	void generate_normals(const bool flip = false);
	void generate_tangents();
	void index();
	void set_material(const ref<material> material_);

};

}

#endif