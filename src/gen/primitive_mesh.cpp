#include "primitive_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


primitive_mesh::___method_bindings primitive_mesh::___mb = {};

void *primitive_mesh::_detail_class_tag = nullptr;

void primitive_mesh::___init_method_bindings() {
	___mb.mb__request_update = gd::api->godot_method_bind_get_method("PrimitiveMesh", "_request_update");
	___mb.mb__update = gd::api->godot_method_bind_get_method("PrimitiveMesh", "_update");
	___mb.mb_get_custom_aabb = gd::api->godot_method_bind_get_method("PrimitiveMesh", "get_custom_aabb");
	___mb.mb_get_flip_faces = gd::api->godot_method_bind_get_method("PrimitiveMesh", "get_flip_faces");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("PrimitiveMesh", "get_material");
	___mb.mb_get_mesh_arrays = gd::api->godot_method_bind_get_method("PrimitiveMesh", "get_mesh_arrays");
	___mb.mb_set_custom_aabb = gd::api->godot_method_bind_get_method("PrimitiveMesh", "set_custom_aabb");
	___mb.mb_set_flip_faces = gd::api->godot_method_bind_get_method("PrimitiveMesh", "set_flip_faces");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("PrimitiveMesh", "set_material");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PrimitiveMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void primitive_mesh::_request_update() {
	___godot_icall_void(___mb.mb__request_update, (const object *) this);
}

void primitive_mesh::_update() const {
	___godot_icall_void(___mb.mb__update, (const object *) this);
}

aabb primitive_mesh::get_custom_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_custom_aabb, (const object *) this);
}

bool primitive_mesh::get_flip_faces() const {
	return ___godot_icall_bool(___mb.mb_get_flip_faces, (const object *) this);
}

ref<material> primitive_mesh::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

array primitive_mesh::get_mesh_arrays() const {
	return ___godot_icall_Array(___mb.mb_get_mesh_arrays, (const object *) this);
}

void primitive_mesh::set_custom_aabb(const aabb aabb_) {
	___godot_icall_void_AABB(___mb.mb_set_custom_aabb, (const object *) this, aabb_);
}

void primitive_mesh::set_flip_faces(const bool flip_faces) {
	___godot_icall_void_bool(___mb.mb_set_flip_faces, (const object *) this, flip_faces);
}

void primitive_mesh::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

}