#include "multi_mesh_instance2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "multi_mesh.hpp"
#include "texture.hpp"


namespace gd {


multi_mesh_instance2d::___method_bindings multi_mesh_instance2d::___mb = {};

void *multi_mesh_instance2d::_detail_class_tag = nullptr;

void multi_mesh_instance2d::___init_method_bindings() {
	___mb.mb_get_multimesh = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "get_multimesh");
	___mb.mb_get_normal_map = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "get_normal_map");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "get_texture");
	___mb.mb_set_multimesh = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "set_multimesh");
	___mb.mb_set_normal_map = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "set_normal_map");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("MultiMeshInstance2D", "set_texture");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MultiMeshInstance2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

multi_mesh_instance2d *multi_mesh_instance2d::_new()
{
	return (multi_mesh_instance2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MultiMeshInstance2D")());
}
ref<multi_mesh> multi_mesh_instance2d::get_multimesh() const {
	return ref<multi_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_multimesh, (const object *) this));
}

ref<texture> multi_mesh_instance2d::get_normal_map() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_map, (const object *) this));
}

ref<texture> multi_mesh_instance2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

void multi_mesh_instance2d::set_multimesh(const ref<multi_mesh> multimesh) {
	___godot_icall_void_Object(___mb.mb_set_multimesh, (const object *) this, multimesh.ptr());
}

void multi_mesh_instance2d::set_normal_map(const ref<texture> normal_map) {
	___godot_icall_void_Object(___mb.mb_set_normal_map, (const object *) this, normal_map.ptr());
}

void multi_mesh_instance2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

}