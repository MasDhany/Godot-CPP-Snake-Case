#include "mesh_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"
#include "mesh.hpp"
#include "node.hpp"
#include "skin.hpp"


namespace gd {


mesh_instance::___method_bindings mesh_instance::___mb = {};

void *mesh_instance::_detail_class_tag = nullptr;

void mesh_instance::___init_method_bindings() {
	___mb.mb__mesh_changed = gd::api->godot_method_bind_get_method("MeshInstance", "_mesh_changed");
	___mb.mb__update_skinning = gd::api->godot_method_bind_get_method("MeshInstance", "_update_skinning");
	___mb.mb_create_convex_collision = gd::api->godot_method_bind_get_method("MeshInstance", "create_convex_collision");
	___mb.mb_create_debug_tangents = gd::api->godot_method_bind_get_method("MeshInstance", "create_debug_tangents");
	___mb.mb_create_multiple_convex_collisions = gd::api->godot_method_bind_get_method("MeshInstance", "create_multiple_convex_collisions");
	___mb.mb_create_trimesh_collision = gd::api->godot_method_bind_get_method("MeshInstance", "create_trimesh_collision");
	___mb.mb_get_active_material = gd::api->godot_method_bind_get_method("MeshInstance", "get_active_material");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("MeshInstance", "get_mesh");
	___mb.mb_get_skeleton_path = gd::api->godot_method_bind_get_method("MeshInstance", "get_skeleton_path");
	___mb.mb_get_skin = gd::api->godot_method_bind_get_method("MeshInstance", "get_skin");
	___mb.mb_get_surface_material = gd::api->godot_method_bind_get_method("MeshInstance", "get_surface_material");
	___mb.mb_get_surface_material_count = gd::api->godot_method_bind_get_method("MeshInstance", "get_surface_material_count");
	___mb.mb_is_mergeable_with = gd::api->godot_method_bind_get_method("MeshInstance", "is_mergeable_with");
	___mb.mb_is_software_skinning_transform_normals_enabled = gd::api->godot_method_bind_get_method("MeshInstance", "is_software_skinning_transform_normals_enabled");
	___mb.mb_merge_meshes = gd::api->godot_method_bind_get_method("MeshInstance", "merge_meshes");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("MeshInstance", "set_mesh");
	___mb.mb_set_skeleton_path = gd::api->godot_method_bind_get_method("MeshInstance", "set_skeleton_path");
	___mb.mb_set_skin = gd::api->godot_method_bind_get_method("MeshInstance", "set_skin");
	___mb.mb_set_software_skinning_transform_normals = gd::api->godot_method_bind_get_method("MeshInstance", "set_software_skinning_transform_normals");
	___mb.mb_set_surface_material = gd::api->godot_method_bind_get_method("MeshInstance", "set_surface_material");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MeshInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mesh_instance *mesh_instance::_new()
{
	return (mesh_instance *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MeshInstance")());
}
void mesh_instance::_mesh_changed() {
	___godot_icall_void(___mb.mb__mesh_changed, (const object *) this);
}

void mesh_instance::_update_skinning() {
	___godot_icall_void(___mb.mb__update_skinning, (const object *) this);
}

void mesh_instance::create_convex_collision(const bool clean, const bool simplify) {
	___godot_icall_void_bool_bool(___mb.mb_create_convex_collision, (const object *) this, clean, simplify);
}

void mesh_instance::create_debug_tangents() {
	___godot_icall_void(___mb.mb_create_debug_tangents, (const object *) this);
}

void mesh_instance::create_multiple_convex_collisions() {
	___godot_icall_void(___mb.mb_create_multiple_convex_collisions, (const object *) this);
}

void mesh_instance::create_trimesh_collision() {
	___godot_icall_void(___mb.mb_create_trimesh_collision, (const object *) this);
}

ref<material> mesh_instance::get_active_material(const int64_t surface) const {
	return ref<material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_active_material, (const object *) this, surface));
}

ref<mesh> mesh_instance::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

node_path mesh_instance::get_skeleton_path() {
	return ___godot_icall_NodePath(___mb.mb_get_skeleton_path, (const object *) this);
}

ref<skin> mesh_instance::get_skin() const {
	return ref<skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_skin, (const object *) this));
}

ref<material> mesh_instance::get_surface_material(const int64_t surface) const {
	return ref<material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_surface_material, (const object *) this, surface));
}

int64_t mesh_instance::get_surface_material_count() const {
	return ___godot_icall_int(___mb.mb_get_surface_material_count, (const object *) this);
}

bool mesh_instance::is_mergeable_with(const node *other_mesh_instance) const {
	return ___godot_icall_bool_Object(___mb.mb_is_mergeable_with, (const object *) this, other_mesh_instance);
}

bool mesh_instance::is_software_skinning_transform_normals_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_software_skinning_transform_normals_enabled, (const object *) this);
}

bool mesh_instance::merge_meshes(const array mesh_instances, const bool use_global_space, const bool check_compatibility) {
	return ___godot_icall_bool_Array_bool_bool(___mb.mb_merge_meshes, (const object *) this, mesh_instances, use_global_space, check_compatibility);
}

void mesh_instance::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

void mesh_instance::set_skeleton_path(const node_path skeleton_path) {
	___godot_icall_void_NodePath(___mb.mb_set_skeleton_path, (const object *) this, skeleton_path);
}

void mesh_instance::set_skin(const ref<skin> skin_) {
	___godot_icall_void_Object(___mb.mb_set_skin, (const object *) this, skin_.ptr());
}

void mesh_instance::set_software_skinning_transform_normals(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_software_skinning_transform_normals, (const object *) this, enabled);
}

void mesh_instance::set_surface_material(const int64_t surface, const ref<material> material_) {
	___godot_icall_void_int_Object(___mb.mb_set_surface_material, (const object *) this, surface, material_.ptr());
}

}