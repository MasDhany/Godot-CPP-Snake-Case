#include "audio_effect_chorus.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_chorus::___method_bindings audio_effect_chorus::___mb = {};

void *audio_effect_chorus::_detail_class_tag = nullptr;

void audio_effect_chorus::___init_method_bindings() {
	___mb.mb_get_dry = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_dry");
	___mb.mb_get_voice_count = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_count");
	___mb.mb_get_voice_cutoff_hz = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_cutoff_hz");
	___mb.mb_get_voice_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_delay_ms");
	___mb.mb_get_voice_depth_ms = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_depth_ms");
	___mb.mb_get_voice_level_db = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_level_db");
	___mb.mb_get_voice_pan = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_pan");
	___mb.mb_get_voice_rate_hz = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_voice_rate_hz");
	___mb.mb_get_wet = gd::api->godot_method_bind_get_method("AudioEffectChorus", "get_wet");
	___mb.mb_set_dry = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_dry");
	___mb.mb_set_voice_count = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_count");
	___mb.mb_set_voice_cutoff_hz = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_cutoff_hz");
	___mb.mb_set_voice_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_delay_ms");
	___mb.mb_set_voice_depth_ms = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_depth_ms");
	___mb.mb_set_voice_level_db = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_level_db");
	___mb.mb_set_voice_pan = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_pan");
	___mb.mb_set_voice_rate_hz = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_voice_rate_hz");
	___mb.mb_set_wet = gd::api->godot_method_bind_get_method("AudioEffectChorus", "set_wet");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectChorus");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_chorus *audio_effect_chorus::_new()
{
	return (audio_effect_chorus *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectChorus")());
}
real_t audio_effect_chorus::get_dry() const {
	return ___godot_icall_float(___mb.mb_get_dry, (const object *) this);
}

int64_t audio_effect_chorus::get_voice_count() const {
	return ___godot_icall_int(___mb.mb_get_voice_count, (const object *) this);
}

real_t audio_effect_chorus::get_voice_cutoff_hz(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_cutoff_hz, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_voice_delay_ms(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_delay_ms, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_voice_depth_ms(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_depth_ms, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_voice_level_db(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_level_db, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_voice_pan(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_pan, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_voice_rate_hz(const int64_t voice_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_voice_rate_hz, (const object *) this, voice_idx);
}

real_t audio_effect_chorus::get_wet() const {
	return ___godot_icall_float(___mb.mb_get_wet, (const object *) this);
}

void audio_effect_chorus::set_dry(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_dry, (const object *) this, amount);
}

void audio_effect_chorus::set_voice_count(const int64_t voices) {
	___godot_icall_void_int(___mb.mb_set_voice_count, (const object *) this, voices);
}

void audio_effect_chorus::set_voice_cutoff_hz(const int64_t voice_idx, const real_t cutoff_hz) {
	___godot_icall_void_int_float(___mb.mb_set_voice_cutoff_hz, (const object *) this, voice_idx, cutoff_hz);
}

void audio_effect_chorus::set_voice_delay_ms(const int64_t voice_idx, const real_t delay_ms) {
	___godot_icall_void_int_float(___mb.mb_set_voice_delay_ms, (const object *) this, voice_idx, delay_ms);
}

void audio_effect_chorus::set_voice_depth_ms(const int64_t voice_idx, const real_t depth_ms) {
	___godot_icall_void_int_float(___mb.mb_set_voice_depth_ms, (const object *) this, voice_idx, depth_ms);
}

void audio_effect_chorus::set_voice_level_db(const int64_t voice_idx, const real_t level_db) {
	___godot_icall_void_int_float(___mb.mb_set_voice_level_db, (const object *) this, voice_idx, level_db);
}

void audio_effect_chorus::set_voice_pan(const int64_t voice_idx, const real_t pan) {
	___godot_icall_void_int_float(___mb.mb_set_voice_pan, (const object *) this, voice_idx, pan);
}

void audio_effect_chorus::set_voice_rate_hz(const int64_t voice_idx, const real_t rate_hz) {
	___godot_icall_void_int_float(___mb.mb_set_voice_rate_hz, (const object *) this, voice_idx, rate_hz);
}

void audio_effect_chorus::set_wet(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_wet, (const object *) this, amount);
}

}