#include "mesh_data_tool.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "array_mesh.hpp"
#include "material.hpp"


namespace gd {


mesh_data_tool::___method_bindings mesh_data_tool::___mb = {};

void *mesh_data_tool::_detail_class_tag = nullptr;

void mesh_data_tool::___init_method_bindings() {
	___mb.mb_clear = gd::api->godot_method_bind_get_method("MeshDataTool", "clear");
	___mb.mb_commit_to_surface = gd::api->godot_method_bind_get_method("MeshDataTool", "commit_to_surface");
	___mb.mb_create_from_surface = gd::api->godot_method_bind_get_method("MeshDataTool", "create_from_surface");
	___mb.mb_get_edge_count = gd::api->godot_method_bind_get_method("MeshDataTool", "get_edge_count");
	___mb.mb_get_edge_faces = gd::api->godot_method_bind_get_method("MeshDataTool", "get_edge_faces");
	___mb.mb_get_edge_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "get_edge_meta");
	___mb.mb_get_edge_vertex = gd::api->godot_method_bind_get_method("MeshDataTool", "get_edge_vertex");
	___mb.mb_get_face_count = gd::api->godot_method_bind_get_method("MeshDataTool", "get_face_count");
	___mb.mb_get_face_edge = gd::api->godot_method_bind_get_method("MeshDataTool", "get_face_edge");
	___mb.mb_get_face_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "get_face_meta");
	___mb.mb_get_face_normal = gd::api->godot_method_bind_get_method("MeshDataTool", "get_face_normal");
	___mb.mb_get_face_vertex = gd::api->godot_method_bind_get_method("MeshDataTool", "get_face_vertex");
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("MeshDataTool", "get_format");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("MeshDataTool", "get_material");
	___mb.mb_get_vertex = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex");
	___mb.mb_get_vertex_bones = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_bones");
	___mb.mb_get_vertex_color = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_color");
	___mb.mb_get_vertex_count = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_count");
	___mb.mb_get_vertex_edges = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_edges");
	___mb.mb_get_vertex_faces = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_faces");
	___mb.mb_get_vertex_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_meta");
	___mb.mb_get_vertex_normal = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_normal");
	___mb.mb_get_vertex_tangent = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_tangent");
	___mb.mb_get_vertex_uv = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_uv");
	___mb.mb_get_vertex_uv2 = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_uv2");
	___mb.mb_get_vertex_weights = gd::api->godot_method_bind_get_method("MeshDataTool", "get_vertex_weights");
	___mb.mb_set_edge_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "set_edge_meta");
	___mb.mb_set_face_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "set_face_meta");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("MeshDataTool", "set_material");
	___mb.mb_set_vertex = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex");
	___mb.mb_set_vertex_bones = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_bones");
	___mb.mb_set_vertex_color = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_color");
	___mb.mb_set_vertex_meta = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_meta");
	___mb.mb_set_vertex_normal = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_normal");
	___mb.mb_set_vertex_tangent = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_tangent");
	___mb.mb_set_vertex_uv = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_uv");
	___mb.mb_set_vertex_uv2 = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_uv2");
	___mb.mb_set_vertex_weights = gd::api->godot_method_bind_get_method("MeshDataTool", "set_vertex_weights");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MeshDataTool");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mesh_data_tool *mesh_data_tool::_new()
{
	return (mesh_data_tool *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MeshDataTool")());
}
void mesh_data_tool::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

error mesh_data_tool::commit_to_surface(const ref<array_mesh> mesh_) {
	return (error) ___godot_icall_int_Object(___mb.mb_commit_to_surface, (const object *) this, mesh_.ptr());
}

error mesh_data_tool::create_from_surface(const ref<array_mesh> mesh_, const int64_t surface) {
	return (error) ___godot_icall_int_Object_int(___mb.mb_create_from_surface, (const object *) this, mesh_.ptr(), surface);
}

int64_t mesh_data_tool::get_edge_count() const {
	return ___godot_icall_int(___mb.mb_get_edge_count, (const object *) this);
}

pool_int_array mesh_data_tool::get_edge_faces(const int64_t idx) const {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_edge_faces, (const object *) this, idx);
}

variant mesh_data_tool::get_edge_meta(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_edge_meta, (const object *) this, idx);
}

int64_t mesh_data_tool::get_edge_vertex(const int64_t idx, const int64_t vertex) const {
	return ___godot_icall_int_int_int(___mb.mb_get_edge_vertex, (const object *) this, idx, vertex);
}

int64_t mesh_data_tool::get_face_count() const {
	return ___godot_icall_int(___mb.mb_get_face_count, (const object *) this);
}

int64_t mesh_data_tool::get_face_edge(const int64_t idx, const int64_t edge) const {
	return ___godot_icall_int_int_int(___mb.mb_get_face_edge, (const object *) this, idx, edge);
}

variant mesh_data_tool::get_face_meta(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_face_meta, (const object *) this, idx);
}

vector3 mesh_data_tool::get_face_normal(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_face_normal, (const object *) this, idx);
}

int64_t mesh_data_tool::get_face_vertex(const int64_t idx, const int64_t vertex) const {
	return ___godot_icall_int_int_int(___mb.mb_get_face_vertex, (const object *) this, idx, vertex);
}

int64_t mesh_data_tool::get_format() const {
	return ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

ref<material> mesh_data_tool::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

vector3 mesh_data_tool::get_vertex(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_vertex, (const object *) this, idx);
}

pool_int_array mesh_data_tool::get_vertex_bones(const int64_t idx) const {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_vertex_bones, (const object *) this, idx);
}

color mesh_data_tool::get_vertex_color(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_vertex_color, (const object *) this, idx);
}

int64_t mesh_data_tool::get_vertex_count() const {
	return ___godot_icall_int(___mb.mb_get_vertex_count, (const object *) this);
}

pool_int_array mesh_data_tool::get_vertex_edges(const int64_t idx) const {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_vertex_edges, (const object *) this, idx);
}

pool_int_array mesh_data_tool::get_vertex_faces(const int64_t idx) const {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_vertex_faces, (const object *) this, idx);
}

variant mesh_data_tool::get_vertex_meta(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_vertex_meta, (const object *) this, idx);
}

vector3 mesh_data_tool::get_vertex_normal(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_vertex_normal, (const object *) this, idx);
}

plane mesh_data_tool::get_vertex_tangent(const int64_t idx) const {
	return ___godot_icall_Plane_int(___mb.mb_get_vertex_tangent, (const object *) this, idx);
}

vector2 mesh_data_tool::get_vertex_uv(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_vertex_uv, (const object *) this, idx);
}

vector2 mesh_data_tool::get_vertex_uv2(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_vertex_uv2, (const object *) this, idx);
}

pool_real_array mesh_data_tool::get_vertex_weights(const int64_t idx) const {
	return ___godot_icall_PoolRealArray_int(___mb.mb_get_vertex_weights, (const object *) this, idx);
}

void mesh_data_tool::set_edge_meta(const int64_t idx, const variant meta) {
	___godot_icall_void_int_Variant(___mb.mb_set_edge_meta, (const object *) this, idx, meta);
}

void mesh_data_tool::set_face_meta(const int64_t idx, const variant meta) {
	___godot_icall_void_int_Variant(___mb.mb_set_face_meta, (const object *) this, idx, meta);
}

void mesh_data_tool::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void mesh_data_tool::set_vertex(const int64_t idx, const vector3 vertex) {
	___godot_icall_void_int_Vector3(___mb.mb_set_vertex, (const object *) this, idx, vertex);
}

void mesh_data_tool::set_vertex_bones(const int64_t idx, const pool_int_array bones) {
	___godot_icall_void_int_PoolIntArray(___mb.mb_set_vertex_bones, (const object *) this, idx, bones);
}

void mesh_data_tool::set_vertex_color(const int64_t idx, const color color_) {
	___godot_icall_void_int_Color(___mb.mb_set_vertex_color, (const object *) this, idx, color_);
}

void mesh_data_tool::set_vertex_meta(const int64_t idx, const variant meta) {
	___godot_icall_void_int_Variant(___mb.mb_set_vertex_meta, (const object *) this, idx, meta);
}

void mesh_data_tool::set_vertex_normal(const int64_t idx, const vector3 normal) {
	___godot_icall_void_int_Vector3(___mb.mb_set_vertex_normal, (const object *) this, idx, normal);
}

void mesh_data_tool::set_vertex_tangent(const int64_t idx, const plane tangent) {
	___godot_icall_void_int_Plane(___mb.mb_set_vertex_tangent, (const object *) this, idx, tangent);
}

void mesh_data_tool::set_vertex_uv(const int64_t idx, const vector2 uv) {
	___godot_icall_void_int_Vector2(___mb.mb_set_vertex_uv, (const object *) this, idx, uv);
}

void mesh_data_tool::set_vertex_uv2(const int64_t idx, const vector2 uv2) {
	___godot_icall_void_int_Vector2(___mb.mb_set_vertex_uv2, (const object *) this, idx, uv2);
}

void mesh_data_tool::set_vertex_weights(const int64_t idx, const pool_real_array weights) {
	___godot_icall_void_int_PoolRealArray(___mb.mb_set_vertex_weights, (const object *) this, idx, weights);
}

}