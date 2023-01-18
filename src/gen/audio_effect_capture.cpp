#include "audio_effect_capture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_capture::___method_bindings audio_effect_capture::___mb = {};

void *audio_effect_capture::_detail_class_tag = nullptr;

void audio_effect_capture::___init_method_bindings() {
	___mb.mb_can_get_buffer = gd::api->godot_method_bind_get_method("AudioEffectCapture", "can_get_buffer");
	___mb.mb_clear_buffer = gd::api->godot_method_bind_get_method("AudioEffectCapture", "clear_buffer");
	___mb.mb_get_buffer = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer");
	___mb.mb_get_buffer_length = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer_length");
	___mb.mb_get_buffer_length_frames = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer_length_frames");
	___mb.mb_get_discarded_frames = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_discarded_frames");
	___mb.mb_get_frames_available = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_frames_available");
	___mb.mb_get_pushed_frames = gd::api->godot_method_bind_get_method("AudioEffectCapture", "get_pushed_frames");
	___mb.mb_set_buffer_length = gd::api->godot_method_bind_get_method("AudioEffectCapture", "set_buffer_length");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectCapture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_capture *audio_effect_capture::_new()
{
	return (audio_effect_capture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectCapture")());
}
bool audio_effect_capture::can_get_buffer(const int64_t frames) const {
	return ___godot_icall_bool_int(___mb.mb_can_get_buffer, (const object *) this, frames);
}

void audio_effect_capture::clear_buffer() {
	___godot_icall_void(___mb.mb_clear_buffer, (const object *) this);
}

pool_vector2_array audio_effect_capture::get_buffer(const int64_t frames) {
	return ___godot_icall_PoolVector2Array_int(___mb.mb_get_buffer, (const object *) this, frames);
}

real_t audio_effect_capture::get_buffer_length() {
	return ___godot_icall_float(___mb.mb_get_buffer_length, (const object *) this);
}

int64_t audio_effect_capture::get_buffer_length_frames() const {
	return ___godot_icall_int(___mb.mb_get_buffer_length_frames, (const object *) this);
}

int64_t audio_effect_capture::get_discarded_frames() const {
	return ___godot_icall_int(___mb.mb_get_discarded_frames, (const object *) this);
}

int64_t audio_effect_capture::get_frames_available() const {
	return ___godot_icall_int(___mb.mb_get_frames_available, (const object *) this);
}

int64_t audio_effect_capture::get_pushed_frames() const {
	return ___godot_icall_int(___mb.mb_get_pushed_frames, (const object *) this);
}

void audio_effect_capture::set_buffer_length(const real_t buffer_length_seconds) {
	___godot_icall_void_float(___mb.mb_set_buffer_length, (const object *) this, buffer_length_seconds);
}

}