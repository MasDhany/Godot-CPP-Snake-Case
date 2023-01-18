#include "audio_stream_oggvorbis.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream_oggvorbis::___method_bindings audio_stream_oggvorbis::___mb = {};

void *audio_stream_oggvorbis::_detail_class_tag = nullptr;

void audio_stream_oggvorbis::___init_method_bindings() {
	___mb.mb_get_data = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "get_data");
	___mb.mb_get_loop_offset = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "get_loop_offset");
	___mb.mb_has_loop = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "has_loop");
	___mb.mb_set_data = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "set_data");
	___mb.mb_set_loop = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "set_loop");
	___mb.mb_set_loop_offset = gd::api->godot_method_bind_get_method("AudioStreamOGGVorbis", "set_loop_offset");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamOGGVorbis");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_oggvorbis *audio_stream_oggvorbis::_new()
{
	return (audio_stream_oggvorbis *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamOGGVorbis")());
}
pool_byte_array audio_stream_oggvorbis::get_data() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_data, (const object *) this);
}

real_t audio_stream_oggvorbis::get_loop_offset() const {
	return ___godot_icall_float(___mb.mb_get_loop_offset, (const object *) this);
}

bool audio_stream_oggvorbis::has_loop() const {
	return ___godot_icall_bool(___mb.mb_has_loop, (const object *) this);
}

void audio_stream_oggvorbis::set_data(const pool_byte_array data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_data, (const object *) this, data);
}

void audio_stream_oggvorbis::set_loop(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const object *) this, enable);
}

void audio_stream_oggvorbis::set_loop_offset(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_loop_offset, (const object *) this, seconds);
}

}