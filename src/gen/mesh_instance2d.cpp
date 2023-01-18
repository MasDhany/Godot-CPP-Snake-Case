#include "mesh_instance2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"
#include "texture.hpp"


namespace gd {


mesh_instance2d::___method_bindings mesh_instance2d::___mb = {};

void *mesh_instance2d::_detail_class_tag = nullptr;

void mesh_instance2d::___init_method_bindings() {
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("MeshInstance2D", "get_mesh");
	___mb.mb_get_normal_map = gd::api->godot_method_bind_get_method("MeshInstance2D", "get_normal_map");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("MeshInstance2D", "get_texture");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("MeshInstance2D", "set_mesh");
	___mb.mb_set_normal_map = gd::api->godot_method_bind_get_method("MeshInstance2D", "set_normal_map");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("MeshInstance2D", "set_texture");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MeshInstance2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mesh_instance2d *mesh_instance2d::_new()
{
	return (mesh_instance2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MeshInstance2D")());
}
ref<mesh> mesh_instance2d::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

ref<texture> mesh_instance2d::get_normal_map() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_map, (const object *) this));
}

ref<texture> mesh_instance2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

void mesh_instance2d::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

void mesh_instance2d::set_normal_map(const ref<texture> normal_map) {
	___godot_icall_void_Object(___mb.mb_set_normal_map, (const object *) this, normal_map.ptr());
}

void mesh_instance2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

}