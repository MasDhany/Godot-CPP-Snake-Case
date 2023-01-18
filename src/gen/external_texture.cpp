#include "external_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


external_texture::___method_bindings external_texture::___mb = {};

void *external_texture::_detail_class_tag = nullptr;

void external_texture::___init_method_bindings() {
	___mb.mb_get_external_texture_id = gd::api->godot_method_bind_get_method("ExternalTexture", "get_external_texture_id");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("ExternalTexture", "set_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ExternalTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

external_texture *external_texture::_new()
{
	return (external_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ExternalTexture")());
}
int64_t external_texture::get_external_texture_id() {
	return ___godot_icall_int(___mb.mb_get_external_texture_id, (const object *) this);
}

void external_texture::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

}