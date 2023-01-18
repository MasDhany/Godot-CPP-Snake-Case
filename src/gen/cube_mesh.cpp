#include "cube_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


cube_mesh::___method_bindings cube_mesh::___mb = {};

void *cube_mesh::_detail_class_tag = nullptr;

void cube_mesh::___init_method_bindings() {
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("CubeMesh", "get_size");
	___mb.mb_get_subdivide_depth = gd::api->godot_method_bind_get_method("CubeMesh", "get_subdivide_depth");
	___mb.mb_get_subdivide_height = gd::api->godot_method_bind_get_method("CubeMesh", "get_subdivide_height");
	___mb.mb_get_subdivide_width = gd::api->godot_method_bind_get_method("CubeMesh", "get_subdivide_width");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("CubeMesh", "set_size");
	___mb.mb_set_subdivide_depth = gd::api->godot_method_bind_get_method("CubeMesh", "set_subdivide_depth");
	___mb.mb_set_subdivide_height = gd::api->godot_method_bind_get_method("CubeMesh", "set_subdivide_height");
	___mb.mb_set_subdivide_width = gd::api->godot_method_bind_get_method("CubeMesh", "set_subdivide_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CubeMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cube_mesh *cube_mesh::_new()
{
	return (cube_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CubeMesh")());
}
vector3 cube_mesh::get_size() const {
	return ___godot_icall_Vector3(___mb.mb_get_size, (const object *) this);
}

int64_t cube_mesh::get_subdivide_depth() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_depth, (const object *) this);
}

int64_t cube_mesh::get_subdivide_height() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_height, (const object *) this);
}

int64_t cube_mesh::get_subdivide_width() const {
	return ___godot_icall_int(___mb.mb_get_subdivide_width, (const object *) this);
}

void cube_mesh::set_size(const vector3 size) {
	___godot_icall_void_Vector3(___mb.mb_set_size, (const object *) this, size);
}

void cube_mesh::set_subdivide_depth(const int64_t divisions) {
	___godot_icall_void_int(___mb.mb_set_subdivide_depth, (const object *) this, divisions);
}

void cube_mesh::set_subdivide_height(const int64_t divisions) {
	___godot_icall_void_int(___mb.mb_set_subdivide_height, (const object *) this, divisions);
}

void cube_mesh::set_subdivide_width(const int64_t subdivide) {
	___godot_icall_void_int(___mb.mb_set_subdivide_width, (const object *) this, subdivide);
}

}