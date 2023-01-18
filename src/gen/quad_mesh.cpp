#include "quad_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


quad_mesh::___method_bindings quad_mesh::___mb = {};

void *quad_mesh::_detail_class_tag = nullptr;

void quad_mesh::___init_method_bindings() {
	___mb.mb_get_center_offset = gd::api->godot_method_bind_get_method("QuadMesh", "get_center_offset");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("QuadMesh", "get_size");
	___mb.mb_set_center_offset = gd::api->godot_method_bind_get_method("QuadMesh", "set_center_offset");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("QuadMesh", "set_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "QuadMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

quad_mesh *quad_mesh::_new()
{
	return (quad_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"QuadMesh")());
}
vector3 quad_mesh::get_center_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_center_offset, (const object *) this);
}

vector2 quad_mesh::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

void quad_mesh::set_center_offset(const vector3 center_offset) {
	___godot_icall_void_Vector3(___mb.mb_set_center_offset, (const object *) this, center_offset);
}

void quad_mesh::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

}