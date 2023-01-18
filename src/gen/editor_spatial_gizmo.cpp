#include "editor_spatial_gizmo.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "camera.hpp"
#include "editor_spatial_gizmo_plugin.hpp"
#include "material.hpp"
#include "mesh.hpp"
#include "node.hpp"
#include "skin_reference.hpp"
#include "spatial.hpp"
#include "triangle_mesh.hpp"


namespace gd {


editor_spatial_gizmo::___method_bindings editor_spatial_gizmo::___mb = {};

void *editor_spatial_gizmo::_detail_class_tag = nullptr;

void editor_spatial_gizmo::___init_method_bindings() {
	___mb.mb_add_collision_segments = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_collision_segments");
	___mb.mb_add_collision_triangles = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_collision_triangles");
	___mb.mb_add_handles = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_handles");
	___mb.mb_add_lines = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_lines");
	___mb.mb_add_mesh = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_mesh");
	___mb.mb_add_unscaled_billboard = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_unscaled_billboard");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "clear");
	___mb.mb_commit_handle = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "commit_handle");
	___mb.mb_get_handle_name = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_handle_name");
	___mb.mb_get_handle_value = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_handle_value");
	___mb.mb_get_plugin = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_plugin");
	___mb.mb_get_spatial_node = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_spatial_node");
	___mb.mb_is_handle_highlighted = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "is_handle_highlighted");
	___mb.mb_redraw = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "redraw");
	___mb.mb_set_handle = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_handle");
	___mb.mb_set_hidden = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_hidden");
	___mb.mb_set_spatial_node = gd::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_spatial_node");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSpatialGizmo");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_spatial_gizmo::add_collision_segments(const pool_vector3_array segments) {
	___godot_icall_void_PoolVector3Array(___mb.mb_add_collision_segments, (const object *) this, segments);
}

void editor_spatial_gizmo::add_collision_triangles(const ref<triangle_mesh> triangles) {
	___godot_icall_void_Object(___mb.mb_add_collision_triangles, (const object *) this, triangles.ptr());
}

void editor_spatial_gizmo::add_handles(const pool_vector3_array handles, const ref<material> material_, const bool billboard, const bool secondary) {
	___godot_icall_void_PoolVector3Array_Object_bool_bool(___mb.mb_add_handles, (const object *) this, handles, material_.ptr(), billboard, secondary);
}

void editor_spatial_gizmo::add_lines(const pool_vector3_array lines, const ref<material> material_, const bool billboard, const color modulate) {
	___godot_icall_void_PoolVector3Array_Object_bool_Color(___mb.mb_add_lines, (const object *) this, lines, material_.ptr(), billboard, modulate);
}

void editor_spatial_gizmo::add_mesh(const ref<mesh> mesh_, const bool billboard, const ref<skin_reference> skeleton_, const ref<material> material_) {
	___godot_icall_void_Object_bool_Object_Object(___mb.mb_add_mesh, (const object *) this, mesh_.ptr(), billboard, skeleton_.ptr(), material_.ptr());
}

void editor_spatial_gizmo::add_unscaled_billboard(const ref<material> material_, const real_t default_scale, const color modulate) {
	___godot_icall_void_Object_float_Color(___mb.mb_add_unscaled_billboard, (const object *) this, material_.ptr(), default_scale, modulate);
}

void editor_spatial_gizmo::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void editor_spatial_gizmo::commit_handle(const int64_t index, const variant restore, const bool cancel) {
	___godot_icall_void_int_Variant_bool(___mb.mb_commit_handle, (const object *) this, index, restore, cancel);
}

string editor_spatial_gizmo::get_handle_name(const int64_t index) {
	return ___godot_icall_String_int(___mb.mb_get_handle_name, (const object *) this, index);
}

variant editor_spatial_gizmo::get_handle_value(const int64_t index) {
	return ___godot_icall_Variant_int(___mb.mb_get_handle_value, (const object *) this, index);
}

ref<editor_spatial_gizmo_plugin> editor_spatial_gizmo::get_plugin() const {
	return ref<editor_spatial_gizmo_plugin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_plugin, (const object *) this));
}

spatial *editor_spatial_gizmo::get_spatial_node() const {
	return (spatial *) ___godot_icall_Object(___mb.mb_get_spatial_node, (const object *) this);
}

bool editor_spatial_gizmo::is_handle_highlighted(const int64_t index) {
	return ___godot_icall_bool_int(___mb.mb_is_handle_highlighted, (const object *) this, index);
}

void editor_spatial_gizmo::redraw() {
	___godot_icall_void(___mb.mb_redraw, (const object *) this);
}

void editor_spatial_gizmo::set_handle(const int64_t index, const camera *camera_, const vector2 point) {
	___godot_icall_void_int_Object_Vector2(___mb.mb_set_handle, (const object *) this, index, camera_, point);
}

void editor_spatial_gizmo::set_hidden(const bool hidden) {
	___godot_icall_void_bool(___mb.mb_set_hidden, (const object *) this, hidden);
}

void editor_spatial_gizmo::set_spatial_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_set_spatial_node, (const object *) this, node_);
}

}