#include "audio_stream_sample.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_stream_sample::___method_bindings audio_stream_sample::___mb = {};

void *audio_stream_sample::_detail_class_tag = nullptr;

void audio_stream_sample::___init_method_bindings() {
	___mb.mb_get_data = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_data");
	___mb.mb_get_format = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_format");
	___mb.mb_get_loop_begin = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_loop_begin");
	___mb.mb_get_loop_end = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_loop_end");
	___mb.mb_get_loop_mode = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_loop_mode");
	___mb.mb_get_mix_rate = gd::api->godot_method_bind_get_method("AudioStreamSample", "get_mix_rate");
	___mb.mb_is_stereo = gd::api->godot_method_bind_get_method("AudioStreamSample", "is_stereo");
	___mb.mb_save_to_wav = gd::api->godot_method_bind_get_method("AudioStreamSample", "save_to_wav");
	___mb.mb_set_data = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_data");
	___mb.mb_set_format = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_format");
	___mb.mb_set_loop_begin = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_loop_begin");
	___mb.mb_set_loop_end = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_loop_end");
	___mb.mb_set_loop_mode = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_loop_mode");
	___mb.mb_set_mix_rate = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_mix_rate");
	___mb.mb_set_stereo = gd::api->godot_method_bind_get_method("AudioStreamSample", "set_stereo");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamSample");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_sample *audio_stream_sample::_new()
{
	return (audio_stream_sample *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamSample")());
}
pool_byte_array audio_stream_sample::get_data() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_data, (const object *) this);
}

audio_stream_sample::Format audio_stream_sample::get_format() const {
	return (audio_stream_sample::Format) ___godot_icall_int(___mb.mb_get_format, (const object *) this);
}

int64_t audio_stream_sample::get_loop_begin() const {
	return ___godot_icall_int(___mb.mb_get_loop_begin, (const object *) this);
}

int64_t audio_stream_sample::get_loop_end() const {
	return ___godot_icall_int(___mb.mb_get_loop_end, (const object *) this);
}

audio_stream_sample::LoopMode audio_stream_sample::get_loop_mode() const {
	return (audio_stream_sample::LoopMode) ___godot_icall_int(___mb.mb_get_loop_mode, (const object *) this);
}

int64_t audio_stream_sample::get_mix_rate() const {
	return ___godot_icall_int(___mb.mb_get_mix_rate, (const object *) this);
}

bool audio_stream_sample::is_stereo() const {
	return ___godot_icall_bool(___mb.mb_is_stereo, (const object *) this);
}

error audio_stream_sample::save_to_wav(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_save_to_wav, (const object *) this, path_);
}

void audio_stream_sample::set_data(const pool_byte_array data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_data, (const object *) this, data);
}

void audio_stream_sample::set_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_format, (const object *) this, format);
}

void audio_stream_sample::set_loop_begin(const int64_t loop_begin) {
	___godot_icall_void_int(___mb.mb_set_loop_begin, (const object *) this, loop_begin);
}

void audio_stream_sample::set_loop_end(const int64_t loop_end) {
	___godot_icall_void_int(___mb.mb_set_loop_end, (const object *) this, loop_end);
}

void audio_stream_sample::set_loop_mode(const int64_t loop_mode) {
	___godot_icall_void_int(___mb.mb_set_loop_mode, (const object *) this, loop_mode);
}

void audio_stream_sample::set_mix_rate(const int64_t mix_rate) {
	___godot_icall_void_int(___mb.mb_set_mix_rate, (const object *) this, mix_rate);
}

void audio_stream_sample::set_stereo(const bool stereo) {
	___godot_icall_void_bool(___mb.mb_set_stereo, (const object *) this, stereo);
}

}