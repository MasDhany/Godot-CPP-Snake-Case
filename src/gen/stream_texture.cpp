#include "stream_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


stream_texture::___method_bindings stream_texture::___mb = {};

void *stream_texture::_detail_class_tag = nullptr;

void stream_texture::___init_method_bindings() {
	___mb.mb_get_load_path = gd::api->godot_method_bind_get_method("StreamTexture", "get_load_path");
	___mb.mb_load = gd::api->godot_method_bind_get_method("StreamTexture", "load");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StreamTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

stream_texture *stream_texture::_new()
{
	return (stream_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StreamTexture")());
}
string stream_texture::get_load_path() const {
	return ___godot_icall_String(___mb.mb_get_load_path, (const object *) this);
}

error stream_texture::load(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load, (const object *) this, path_);
}

}