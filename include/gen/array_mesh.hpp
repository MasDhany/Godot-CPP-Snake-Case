#ifndef GODOT_CPP_ARRAYMESH_HPP
#define GODOT_CPP_ARRAYMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "mesh.hpp"

#include "mesh.hpp"
namespace gd {


class array_mesh : public mesh {
	struct ___method_bindings {
		godot_method_bind *mb_add_blend_shape;
		godot_method_bind *mb_add_surface_from_arrays;
		godot_method_bind *mb_clear_blend_shapes;
		godot_method_bind *mb_clear_surfaces;
		godot_method_bind *mb_get_blend_shape_count;
		godot_method_bind *mb_get_blend_shape_mode;
		godot_method_bind *mb_get_blend_shape_name;
		godot_method_bind *mb_get_custom_aabb;
		godot_method_bind *mb_lightmap_unwrap;
		godot_method_bind *mb_regen_normalmaps;
		godot_method_bind *mb_set_blend_shape_mode;
		godot_method_bind *mb_set_blend_shape_name;
		godot_method_bind *mb_set_custom_aabb;
		godot_method_bind *mb_surface_find_by_name;
		godot_method_bind *mb_surface_get_array_index_len;
		godot_method_bind *mb_surface_get_array_len;
		godot_method_bind *mb_surface_get_format;
		godot_method_bind *mb_surface_get_name;
		godot_method_bind *mb_surface_get_primitive_type;
		godot_method_bind *mb_surface_remove;
		godot_method_bind *mb_surface_set_name;
		godot_method_bind *mb_surface_update_region;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ArrayMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ArrayMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ArrayFormat {
		ARRAY_FORMAT_VERTEX = 1,
		ARRAY_FORMAT_NORMAL = 2,
		ARRAY_FORMAT_TANGENT = 4,
		ARRAY_FORMAT_COLOR = 8,
		ARRAY_FORMAT_TEX_UV = 16,
		ARRAY_FORMAT_TEX_UV2 = 32,
		ARRAY_FORMAT_BONES = 64,
		ARRAY_FORMAT_WEIGHTS = 128,
		ARRAY_FORMAT_INDEX = 256,
	};
	enum ArrayType {
		ARRAY_VERTEX = 0,
		ARRAY_NORMAL = 1,
		ARRAY_TANGENT = 2,
		ARRAY_COLOR = 3,
		ARRAY_TEX_UV = 4,
		ARRAY_TEX_UV2 = 5,
		ARRAY_BONES = 6,
		ARRAY_WEIGHTS = 7,
		ARRAY_INDEX = 8,
		ARRAY_MAX = 9,
	};

	// constants
	const static int ARRAY_WEIGHTS_SIZE = 4;
	const static int NO_INDEX_ARRAY = -1;


	static array_mesh *_new();

	// methods
	void add_blend_shape(const string name);
	void add_surface_from_arrays(const int64_t primitive, const array arrays, const array blend_shapes = array(), const int64_t compress_flags = 2194432);
	void clear_blend_shapes();
	void clear_surfaces();
	int64_t get_blend_shape_count() const;
	mesh::BlendShapeMode get_blend_shape_mode() const;
	string get_blend_shape_name(const int64_t index) const;
	aabb get_custom_aabb() const;
	error lightmap_unwrap(const transform transform_, const real_t texel_size);
	void regen_normalmaps();
	void set_blend_shape_mode(const int64_t mode);
	void set_blend_shape_name(const int64_t index, const string name);
	void set_custom_aabb(const aabb aabb_);
	int64_t surface_find_by_name(const string name) const;
	int64_t surface_get_array_index_len(const int64_t surf_idx) const;
	int64_t surface_get_array_len(const int64_t surf_idx) const;
	int64_t surface_get_format(const int64_t surf_idx) const;
	string surface_get_name(const int64_t surf_idx) const;
	mesh::PrimitiveType surface_get_primitive_type(const int64_t surf_idx) const;
	void surface_remove(const int64_t surf_idx);
	void surface_set_name(const int64_t surf_idx, const string name);
	void surface_update_region(const int64_t surf_idx, const int64_t offset, const pool_byte_array data);

};

}

#endif