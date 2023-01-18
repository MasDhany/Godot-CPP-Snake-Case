#include "viewport_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


viewport_texture::___method_bindings viewport_texture::___mb = {};

void *viewport_texture::_detail_class_tag = nullptr;

void viewport_texture::___init_method_bindings() {
	___mb.mb_get_viewport_path_in_scene = gd::api->godot_method_bind_get_method("ViewportTexture", "get_viewport_path_in_scene");
	___mb.mb_set_viewport_path_in_scene = gd::api->godot_method_bind_get_method("ViewportTexture", "set_viewport_path_in_scene");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ViewportTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

viewport_texture *viewport_texture::_new()
{
	return (viewport_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ViewportTexture")());
}
node_path viewport_texture::get_viewport_path_in_scene() const {
	return ___godot_icall_NodePath(___mb.mb_get_viewport_path_in_scene, (const object *) this);
}

void viewport_texture::set_viewport_path_in_scene(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_viewport_path_in_scene, (const object *) this, path_);
}

}