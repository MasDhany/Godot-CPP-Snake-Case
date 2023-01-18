#ifndef GODOT_CPP_POLYGON2D_HPP
#define GODOT_CPP_POLYGON2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class texture;

class polygon2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__get_bones;
		godot_method_bind *mb__set_bones;
		godot_method_bind *mb__skeleton_bone_setup_changed;
		godot_method_bind *mb_add_bone;
		godot_method_bind *mb_clear_bones;
		godot_method_bind *mb_erase_bone;
		godot_method_bind *mb_get_antialiased;
		godot_method_bind *mb_get_bone_count;
		godot_method_bind *mb_get_bone_path;
		godot_method_bind *mb_get_bone_weights;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_internal_vertex_count;
		godot_method_bind *mb_get_invert;
		godot_method_bind *mb_get_invert_border;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_get_polygons;
		godot_method_bind *mb_get_skeleton;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_offset;
		godot_method_bind *mb_get_texture_rotation;
		godot_method_bind *mb_get_texture_rotation_degrees;
		godot_method_bind *mb_get_texture_scale;
		godot_method_bind *mb_get_uv;
		godot_method_bind *mb_get_vertex_colors;
		godot_method_bind *mb_set_antialiased;
		godot_method_bind *mb_set_bone_path;
		godot_method_bind *mb_set_bone_weights;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_internal_vertex_count;
		godot_method_bind *mb_set_invert;
		godot_method_bind *mb_set_invert_border;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_polygon;
		godot_method_bind *mb_set_polygons;
		godot_method_bind *mb_set_skeleton;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_texture_offset;
		godot_method_bind *mb_set_texture_rotation;
		godot_method_bind *mb_set_texture_rotation_degrees;
		godot_method_bind *mb_set_texture_scale;
		godot_method_bind *mb_set_uv;
		godot_method_bind *mb_set_vertex_colors;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Polygon2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Polygon2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static polygon2d *_new();

	// methods
	array _get_bones() const;
	void _set_bones(const array bones);
	void _skeleton_bone_setup_changed();
	void add_bone(const node_path path_, const pool_real_array weights);
	void clear_bones();
	void erase_bone(const int64_t index);
	bool get_antialiased() const;
	int64_t get_bone_count() const;
	node_path get_bone_path(const int64_t index) const;
	pool_real_array get_bone_weights(const int64_t index) const;
	color get_color() const;
	int64_t get_internal_vertex_count() const;
	bool get_invert() const;
	real_t get_invert_border() const;
	vector2 get_offset() const;
	pool_vector2_array get_polygon() const;
	array get_polygons() const;
	node_path get_skeleton() const;
	ref<texture> get_texture() const;
	vector2 get_texture_offset() const;
	real_t get_texture_rotation() const;
	real_t get_texture_rotation_degrees() const;
	vector2 get_texture_scale() const;
	pool_vector2_array get_uv() const;
	pool_color_array get_vertex_colors() const;
	void set_antialiased(const bool antialiased);
	void set_bone_path(const int64_t index, const node_path path_);
	void set_bone_weights(const int64_t index, const pool_real_array weights);
	void set_color(const color color_);
	void set_internal_vertex_count(const int64_t internal_vertex_count);
	void set_invert(const bool invert);
	void set_invert_border(const real_t invert_border);
	void set_offset(const vector2 offset);
	void set_polygon(const pool_vector2_array polygon);
	void set_polygons(const array polygons);
	void set_skeleton(const node_path skeleton_);
	void set_texture(const ref<texture> texture_);
	void set_texture_offset(const vector2 texture_offset);
	void set_texture_rotation(const real_t texture_rotation);
	void set_texture_rotation_degrees(const real_t texture_rotation);
	void set_texture_scale(const vector2 texture_scale);
	void set_uv(const pool_vector2_array uv);
	void set_vertex_colors(const pool_color_array vertex_colors);

};

}

#endif