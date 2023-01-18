#include "mesh_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"
#include "texture.hpp"


namespace gd {


mesh_texture::___method_bindings mesh_texture::___mb = {};

void *mesh_texture::_detail_class_tag = nullptr;

void mesh_texture::___init_method_bindings() {
	___mb.mb_get_base_texture = gd::api->godot_method_bind_get_method("MeshTexture", "get_base_texture");
	___mb.mb_get_image_size = gd::api->godot_method_bind_get_method("MeshTexture", "get_image_size");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("MeshTexture", "get_mesh");
	___mb.mb_set_base_texture = gd::api->godot_method_bind_get_method("MeshTexture", "set_base_texture");
	___mb.mb_set_image_size = gd::api->godot_method_bind_get_method("MeshTexture", "set_image_size");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("MeshTexture", "set_mesh");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MeshTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

mesh_texture *mesh_texture::_new()
{
	return (mesh_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MeshTexture")());
}
ref<texture> mesh_texture::get_base_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_base_texture, (const object *) this));
}

vector2 mesh_texture::get_image_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_image_size, (const object *) this);
}

ref<mesh> mesh_texture::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

void mesh_texture::set_base_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_base_texture, (const object *) this, texture_.ptr());
}

void mesh_texture::set_image_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_image_size, (const object *) this, size);
}

void mesh_texture::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

}