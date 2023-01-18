#ifndef GODOT_CPP_MESHINSTANCE_HPP
#define GODOT_CPP_MESHINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "geometry_instance.hpp"
namespace gd {

class material;
class mesh;
class node;
class skin;

class mesh_instance : public geometry_instance {
	struct ___method_bindings {
		godot_method_bind *mb__mesh_changed;
		godot_method_bind *mb__update_skinning;
		godot_method_bind *mb_create_convex_collision;
		godot_method_bind *mb_create_debug_tangents;
		godot_method_bind *mb_create_multiple_convex_collisions;
		godot_method_bind *mb_create_trimesh_collision;
		godot_method_bind *mb_get_active_material;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_skeleton_path;
		godot_method_bind *mb_get_skin;
		godot_method_bind *mb_get_surface_material;
		godot_method_bind *mb_get_surface_material_count;
		godot_method_bind *mb_is_mergeable_with;
		godot_method_bind *mb_is_software_skinning_transform_normals_enabled;
		godot_method_bind *mb_merge_meshes;
		godot_method_bind *mb_set_mesh;
		godot_method_bind *mb_set_skeleton_path;
		godot_method_bind *mb_set_skin;
		godot_method_bind *mb_set_software_skinning_transform_normals;
		godot_method_bind *mb_set_surface_material;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MeshInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MeshInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static mesh_instance *_new();

	// methods
	void _mesh_changed();
	void _update_skinning();
	void create_convex_collision(const bool clean = true, const bool simplify = false);
	void create_debug_tangents();
	void create_multiple_convex_collisions();
	void create_trimesh_collision();
	ref<material> get_active_material(const int64_t surface) const;
	ref<mesh> get_mesh() const;
	node_path get_skeleton_path();
	ref<skin> get_skin() const;
	ref<material> get_surface_material(const int64_t surface) const;
	int64_t get_surface_material_count() const;
	bool is_mergeable_with(const node *other_mesh_instance) const;
	bool is_software_skinning_transform_normals_enabled() const;
	bool merge_meshes(const array mesh_instances = array(), const bool use_global_space = false, const bool check_compatibility = true);
	void set_mesh(const ref<mesh> mesh_);
	void set_skeleton_path(const node_path skeleton_path);
	void set_skin(const ref<skin> skin_);
	void set_software_skinning_transform_normals(const bool enabled);
	void set_surface_material(const int64_t surface, const ref<material> material_);

};

}

#endif