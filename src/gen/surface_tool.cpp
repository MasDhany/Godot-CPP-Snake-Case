#include "surface_tool.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "array_mesh.hpp"
#include "material.hpp"
#include "mesh.hpp"


namespace gd {


surface_tool::___method_bindings surface_tool::___mb = {};

void *surface_tool::_detail_class_tag = nullptr;

void surface_tool::___init_method_bindings() {
	___mb.mb_add_bones = gd::api->godot_method_bind_get_method("SurfaceTool", "add_bones");
	___mb.mb_add_color = gd::api->godot_method_bind_get_method("SurfaceTool", "add_color");
	___mb.mb_add_index = gd::api->godot_method_bind_get_method("SurfaceTool", "add_index");
	___mb.mb_add_normal = gd::api->godot_method_bind_get_method("SurfaceTool", "add_normal");
	___mb.mb_add_smooth_group = gd::api->godot_method_bind_get_method("SurfaceTool", "add_smooth_group");
	___mb.mb_add_tangent = gd::api->godot_method_bind_get_method("SurfaceTool", "add_tangent");
	___mb.mb_add_triangle_fan = gd::api->godot_method_bind_get_method("SurfaceTool", "add_triangle_fan");
	___mb.mb_add_uv = gd::api->godot_method_bind_get_method("SurfaceTool", "add_uv");
	___mb.mb_add_uv2 = gd::api->godot_method_bind_get_method("SurfaceTool", "add_uv2");
	___mb.mb_add_vertex = gd::api->godot_method_bind_get_method("SurfaceTool", "add_vertex");
	___mb.mb_add_weights = gd::api->godot_method_bind_get_method("SurfaceTool", "add_weights");
	___mb.mb_append_from = gd::api->godot_method_bind_get_method("SurfaceTool", "append_from");
	___mb.mb_begin = gd::api->godot_method_bind_get_method("SurfaceTool", "begin");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("SurfaceTool", "clear");
	___mb.mb_commit = gd::api->godot_method_bind_get_method("SurfaceTool", "commit");
	___mb.mb_commit_to_arrays = gd::api->godot_method_bind_get_method("SurfaceTool", "commit_to_arrays");
	___mb.mb_create_from = gd::api->godot_method_bind_get_method("SurfaceTool", "create_from");
	___mb.mb_create_from_blend_shape = gd::api->godot_method_bind_get_method("SurfaceTool", "create_from_blend_shape");
	___mb.mb_deindex = gd::api->godot_method_bind_get_method("SurfaceTool", "deindex");
	___mb.mb_generate_normals = gd::api->godot_method_bind_get_method("SurfaceTool", "generate_normals");
	___mb.mb_generate_tangents = gd::api->godot_method_bind_get_method("SurfaceTool", "generate_tangents");
	___mb.mb_index = gd::api->godot_method_bind_get_method("SurfaceTool", "index");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("SurfaceTool", "set_material");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SurfaceTool");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

surface_tool *surface_tool::_new()
{
	return (surface_tool *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SurfaceTool")());
}
void surface_tool::add_bones(const pool_int_array bones) {
	___godot_icall_void_PoolIntArray(___mb.mb_add_bones, (const object *) this, bones);
}

void surface_tool::add_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_add_color, (const object *) this, color_);
}

void surface_tool::add_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_add_index, (const object *) this, index);
}

void surface_tool::add_normal(const vector3 normal) {
	___godot_icall_void_Vector3(___mb.mb_add_normal, (const object *) this, normal);
}

void surface_tool::add_smooth_group(const bool smooth) {
	___godot_icall_void_bool(___mb.mb_add_smooth_group, (const object *) this, smooth);
}

void surface_tool::add_tangent(const plane tangent) {
	___godot_icall_void_Plane(___mb.mb_add_tangent, (const object *) this, tangent);
}

void surface_tool::add_triangle_fan(const pool_vector3_array vertices, const pool_vector2_array uvs, const pool_color_array colors, const pool_vector2_array uv2s, const pool_vector3_array normals, const array tangents) {
	___godot_icall_void_PoolVector3Array_PoolVector2Array_PoolColorArray_PoolVector2Array_PoolVector3Array_Array(___mb.mb_add_triangle_fan, (const object *) this, vertices, uvs, colors, uv2s, normals, tangents);
}

void surface_tool::add_uv(const vector2 uv) {
	___godot_icall_void_Vector2(___mb.mb_add_uv, (const object *) this, uv);
}

void surface_tool::add_uv2(const vector2 uv2) {
	___godot_icall_void_Vector2(___mb.mb_add_uv2, (const object *) this, uv2);
}

void surface_tool::add_vertex(const vector3 vertex) {
	___godot_icall_void_Vector3(___mb.mb_add_vertex, (const object *) this, vertex);
}

void surface_tool::add_weights(const pool_real_array weights) {
	___godot_icall_void_PoolRealArray(___mb.mb_add_weights, (const object *) this, weights);
}

void surface_tool::append_from(const ref<mesh> existing, const int64_t surface, const transform transform_) {
	___godot_icall_void_Object_int_Transform(___mb.mb_append_from, (const object *) this, existing.ptr(), surface, transform_);
}

void surface_tool::begin(const int64_t primitive) {
	___godot_icall_void_int(___mb.mb_begin, (const object *) this, primitive);
}

void surface_tool::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

ref<array_mesh> surface_tool::commit(const ref<array_mesh> existing, const int64_t flags) {
	return ref<array_mesh>::__internal_constructor(___godot_icall_Object_Object_int(___mb.mb_commit, (const object *) this, existing.ptr(), flags));
}

array surface_tool::commit_to_arrays() {
	return ___godot_icall_Array(___mb.mb_commit_to_arrays, (const object *) this);
}

void surface_tool::create_from(const ref<mesh> existing, const int64_t surface) {
	___godot_icall_void_Object_int(___mb.mb_create_from, (const object *) this, existing.ptr(), surface);
}

void surface_tool::create_from_blend_shape(const ref<mesh> existing, const int64_t surface, const string blend_shape) {
	___godot_icall_void_Object_int_String(___mb.mb_create_from_blend_shape, (const object *) this, existing.ptr(), surface, blend_shape);
}

void surface_tool::deindex() {
	___godot_icall_void(___mb.mb_deindex, (const object *) this);
}

void surface_tool::generate_normals(const bool flip) {
	___godot_icall_void_bool(___mb.mb_generate_normals, (const object *) this, flip);
}

void surface_tool::generate_tangents() {
	___godot_icall_void(___mb.mb_generate_tangents, (const object *) this);
}

void surface_tool::index() {
	___godot_icall_void(___mb.mb_index, (const object *) this);
}

void surface_tool::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

}