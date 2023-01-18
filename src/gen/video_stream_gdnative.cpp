#include "video_stream_gdnative.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


video_stream_gdnative::___method_bindings video_stream_gdnative::___mb = {};

void *video_stream_gdnative::_detail_class_tag = nullptr;

void video_stream_gdnative::___init_method_bindings() {
	___mb.mb_get_file = gd::api->godot_method_bind_get_method("VideoStreamGDNative", "get_file");
	___mb.mb_set_file = gd::api->godot_method_bind_get_method("VideoStreamGDNative", "set_file");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VideoStreamGDNative");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

video_stream_gdnative *video_stream_gdnative::_new()
{
	return (video_stream_gdnative *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VideoStreamGDNative")());
}
string video_stream_gdnative::get_file() {
	return ___godot_icall_String(___mb.mb_get_file, (const object *) this);
}

void video_stream_gdnative::set_file(const string file_) {
	___godot_icall_void_String(___mb.mb_set_file, (const object *) this, file_);
}

}