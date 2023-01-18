#ifndef GODOT_CPP_EDITORSPATIALGIZMO_HPP
#define GODOT_CPP_EDITORSPATIALGIZMO_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial_gizmo.hpp"
namespace gd {

class camera;
class editor_spatial_gizmo_plugin;
class material;
class mesh;
class node;
class skin_reference;
class spatial;
class triangle_mesh;

class editor_spatial_gizmo : public spatial_gizmo {
	struct ___method_bindings {
		godot_method_bind *mb_add_collision_segments;
		godot_method_bind *mb_add_collision_triangles;
		godot_method_bind *mb_add_handles;
		godot_method_bind *mb_add_lines;
		godot_method_bind *mb_add_mesh;
		godot_method_bind *mb_add_unscaled_billboard;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_commit_handle;
		godot_method_bind *mb_get_handle_name;
		godot_method_bind *mb_get_handle_value;
		godot_method_bind *mb_get_plugin;
		godot_method_bind *mb_get_spatial_node;
		godot_method_bind *mb_is_handle_highlighted;
		godot_method_bind *mb_redraw;
		godot_method_bind *mb_set_handle;
		godot_method_bind *mb_set_hidden;
		godot_method_bind *mb_set_spatial_node;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSpatialGizmo"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSpatialGizmo"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_collision_segments(const pool_vector3_array segments);
	void add_collision_triangles(const ref<triangle_mesh> triangles);
	void add_handles(const pool_vector3_array handles, const ref<material> material_, const bool billboard = false, const bool secondary = false);
	void add_lines(const pool_vector3_array lines, const ref<material> material_, const bool billboard = false, const color modulate = color(1,1,1,1));
	void add_mesh(const ref<mesh> mesh_, const bool billboard = false, const ref<skin_reference> skeleton_ = nullptr, const ref<material> material_ = nullptr);
	void add_unscaled_billboard(const ref<material> material_, const real_t default_scale = 1, const color modulate = color(1,1,1,1));
	void clear();
	void commit_handle(const int64_t index, const variant restore, const bool cancel);
	string get_handle_name(const int64_t index);
	variant get_handle_value(const int64_t index);
	ref<editor_spatial_gizmo_plugin> get_plugin() const;
	spatial *get_spatial_node() const;
	bool is_handle_highlighted(const int64_t index);
	void redraw();
	void set_handle(const int64_t index, const camera *camera_, const vector2 point);
	void set_hidden(const bool hidden);
	void set_spatial_node(const node *node_);

};

}

#endif