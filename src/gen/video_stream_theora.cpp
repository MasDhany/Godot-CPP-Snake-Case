#include "video_stream_theora.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


video_stream_theora::___method_bindings video_stream_theora::___mb = {};

void *video_stream_theora::_detail_class_tag = nullptr;

void video_stream_theora::___init_method_bindings() {
	___mb.mb_get_file = gd::api->godot_method_bind_get_method("VideoStreamTheora", "get_file");
	___mb.mb_set_file = gd::api->godot_method_bind_get_method("VideoStreamTheora", "set_file");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VideoStreamTheora");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

video_stream_theora *video_stream_theora::_new()
{
	return (video_stream_theora *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VideoStreamTheora")());
}
string video_stream_theora::get_file() {
	return ___godot_icall_String(___mb.mb_get_file, (const object *) this);
}

void video_stream_theora::set_file(const string file_) {
	___godot_icall_void_String(___mb.mb_set_file, (const object *) this, file_);
}

}