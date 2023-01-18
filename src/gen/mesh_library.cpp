#include "mesh_library.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"
#include "navigation_mesh.hpp"
#include "texture.hpp"


namespace gd {


mesh_library::___method_bindings mesh_library::___mb = {};

void *mesh_library::_detail_class_tag = nullptr;

void mesh_library::___init_method_bindings() {
	___mb.mb_clear = gd::api->godot_method_bind_get_method("MeshLibrary", "clear");
	___mb.mb_create_item = gd::api->godot_method_bind_get_method("MeshLibrary", "create_item");
	___mb.mb_find_item_by_name = gd::api->godot_method_bind_get_method("MeshLibrary", "find_item_by_name");
	___mb.mb_get_item_list = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_list");
	___mb.mb_get_item_mesh = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_mesh");
	___mb.mb_get_item_mesh_transform = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_mesh_transform");
	___mb.mb_get_item_name = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_name");
	___mb.mb_get_item_navmesh = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_navmesh");
	___mb.mb_get_item_navmesh_transform = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_navmesh_transform");
	___mb.mb_get_item_preview = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_preview");
	___mb.mb_get_item_shapes = gd::api->godot_method_bind_get_method("MeshLibrary", "get_item_shapes");
	___mb.mb_get_last_unused_item_id = gd::api->godot_method_bind_get_method("MeshLibrary", "get_last_unused_item_id");
	___mb.mb_remove_item = gd::api->godot_method_bind_get_method("MeshLibrary", "remove_item");
	___mb.mb_set_item_mesh = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_mesh");
	___mb.mb_set_item_mesh_transform = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_mesh_transform");
	___mb.mb_set_item_name = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_name");
	___mb.mb_set_item_navmesh = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_navmesh");
	___mb.mb_set_item_navmesh_transform = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_navmesh_transform");
	___mb.mb_set_item_preview = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_preview");
	___mb.mb_set_item_shapes = gd::api->godot_method_bind_get_method("MeshLibrary", "set_item_shapes");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MeshLibrary");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mesh_library *mesh_library::_new()
{
	return (mesh_library *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MeshLibrary")());
}
void mesh_library::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void mesh_library::create_item(const int64_t id) {
	___godot_icall_void_int(___mb.mb_create_item, (const object *) this, id);
}

int64_t mesh_library::find_item_by_name(const string name) const {
	return ___godot_icall_int_String(___mb.mb_find_item_by_name, (const object *) this, name);
}

pool_int_array mesh_library::get_item_list() const {
	return ___godot_icall_PoolIntArray(___mb.mb_get_item_list, (const object *) this);
}

ref<mesh> mesh_library::get_item_mesh(const int64_t id) const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_mesh, (const object *) this, id));
}

transform mesh_library::get_item_mesh_transform(const int64_t id) const {
	return ___godot_icall_Transform_int(___mb.mb_get_item_mesh_transform, (const object *) this, id);
}

string mesh_library::get_item_name(const int64_t id) const {
	return ___godot_icall_String_int(___mb.mb_get_item_name, (const object *) this, id);
}

ref<navigation_mesh> mesh_library::get_item_navmesh(const int64_t id) const {
	return ref<navigation_mesh>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_navmesh, (const object *) this, id));
}

transform mesh_library::get_item_navmesh_transform(const int64_t id) const {
	return ___godot_icall_Transform_int(___mb.mb_get_item_navmesh_transform, (const object *) this, id);
}

ref<texture> mesh_library::get_item_preview(const int64_t id) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_preview, (const object *) this, id));
}

array mesh_library::get_item_shapes(const int64_t id) const {
	return ___godot_icall_Array_int(___mb.mb_get_item_shapes, (const object *) this, id);
}

int64_t mesh_library::get_last_unused_item_id() const {
	return ___godot_icall_int(___mb.mb_get_last_unused_item_id, (const object *) this);
}

void mesh_library::remove_item(const int64_t id) {
	___godot_icall_void_int(___mb.mb_remove_item, (const object *) this, id);
}

void mesh_library::set_item_mesh(const int64_t id, const ref<mesh> mesh_) {
	___godot_icall_void_int_Object(___mb.mb_set_item_mesh, (const object *) this, id, mesh_.ptr());
}

void mesh_library::set_item_mesh_transform(const int64_t id, const transform mesh_transform) {
	___godot_icall_void_int_Transform(___mb.mb_set_item_mesh_transform, (const object *) this, id, mesh_transform);
}

void mesh_library::set_item_name(const int64_t id, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_item_name, (const object *) this, id, name);
}

void mesh_library::set_item_navmesh(const int64_t id, const ref<navigation_mesh> navmesh) {
	___godot_icall_void_int_Object(___mb.mb_set_item_navmesh, (const object *) this, id, navmesh.ptr());
}

void mesh_library::set_item_navmesh_transform(const int64_t id, const transform navmesh) {
	___godot_icall_void_int_Transform(___mb.mb_set_item_navmesh_transform, (const object *) this, id, navmesh);
}

void mesh_library::set_item_preview(const int64_t id, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_item_preview, (const object *) this, id, texture_.ptr());
}

void mesh_library::set_item_shapes(const int64_t id, const array shapes) {
	___godot_icall_void_int_Array(___mb.mb_set_item_shapes, (const object *) this, id, shapes);
}

}