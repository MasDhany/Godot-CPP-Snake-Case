#include "audio_effect_delay.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_delay::___method_bindings audio_effect_delay::___mb = {};

void *audio_effect_delay::_detail_class_tag = nullptr;

void audio_effect_delay::___init_method_bindings() {
	___mb.mb_get_dry = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_dry");
	___mb.mb_get_feedback_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_feedback_delay_ms");
	___mb.mb_get_feedback_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_feedback_level_db");
	___mb.mb_get_feedback_lowpass = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_feedback_lowpass");
	___mb.mb_get_tap1_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap1_delay_ms");
	___mb.mb_get_tap1_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap1_level_db");
	___mb.mb_get_tap1_pan = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap1_pan");
	___mb.mb_get_tap2_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap2_delay_ms");
	___mb.mb_get_tap2_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap2_level_db");
	___mb.mb_get_tap2_pan = gd::api->godot_method_bind_get_method("AudioEffectDelay", "get_tap2_pan");
	___mb.mb_is_feedback_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "is_feedback_active");
	___mb.mb_is_tap1_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "is_tap1_active");
	___mb.mb_is_tap2_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "is_tap2_active");
	___mb.mb_set_dry = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_dry");
	___mb.mb_set_feedback_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_feedback_active");
	___mb.mb_set_feedback_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_feedback_delay_ms");
	___mb.mb_set_feedback_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_feedback_level_db");
	___mb.mb_set_feedback_lowpass = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_feedback_lowpass");
	___mb.mb_set_tap1_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap1_active");
	___mb.mb_set_tap1_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap1_delay_ms");
	___mb.mb_set_tap1_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap1_level_db");
	___mb.mb_set_tap1_pan = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap1_pan");
	___mb.mb_set_tap2_active = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap2_active");
	___mb.mb_set_tap2_delay_ms = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap2_delay_ms");
	___mb.mb_set_tap2_level_db = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap2_level_db");
	___mb.mb_set_tap2_pan = gd::api->godot_method_bind_get_method("AudioEffectDelay", "set_tap2_pan");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectDelay");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_delay *audio_effect_delay::_new()
{
	return (audio_effect_delay *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectDelay")());
}
real_t audio_effect_delay::get_dry() {
	return ___godot_icall_float(___mb.mb_get_dry, (const object *) this);
}

real_t audio_effect_delay::get_feedback_delay_ms() const {
	return ___godot_icall_float(___mb.mb_get_feedback_delay_ms, (const object *) this);
}

real_t audio_effect_delay::get_feedback_level_db() const {
	return ___godot_icall_float(___mb.mb_get_feedback_level_db, (const object *) this);
}

real_t audio_effect_delay::get_feedback_lowpass() const {
	return ___godot_icall_float(___mb.mb_get_feedback_lowpass, (const object *) this);
}

real_t audio_effect_delay::get_tap1_delay_ms() const {
	return ___godot_icall_float(___mb.mb_get_tap1_delay_ms, (const object *) this);
}

real_t audio_effect_delay::get_tap1_level_db() const {
	return ___godot_icall_float(___mb.mb_get_tap1_level_db, (const object *) this);
}

real_t audio_effect_delay::get_tap1_pan() const {
	return ___godot_icall_float(___mb.mb_get_tap1_pan, (const object *) this);
}

real_t audio_effect_delay::get_tap2_delay_ms() const {
	return ___godot_icall_float(___mb.mb_get_tap2_delay_ms, (const object *) this);
}

real_t audio_effect_delay::get_tap2_level_db() const {
	return ___godot_icall_float(___mb.mb_get_tap2_level_db, (const object *) this);
}

real_t audio_effect_delay::get_tap2_pan() const {
	return ___godot_icall_float(___mb.mb_get_tap2_pan, (const object *) this);
}

bool audio_effect_delay::is_feedback_active() const {
	return ___godot_icall_bool(___mb.mb_is_feedback_active, (const object *) this);
}

bool audio_effect_delay::is_tap1_active() const {
	return ___godot_icall_bool(___mb.mb_is_tap1_active, (const object *) this);
}

bool audio_effect_delay::is_tap2_active() const {
	return ___godot_icall_bool(___mb.mb_is_tap2_active, (const object *) this);
}

void audio_effect_delay::set_dry(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_dry, (const object *) this, amount);
}

void audio_effect_delay::set_feedback_active(const bool amount) {
	___godot_icall_void_bool(___mb.mb_set_feedback_active, (const object *) this, amount);
}

void audio_effect_delay::set_feedback_delay_ms(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_feedback_delay_ms, (const object *) this, amount);
}

void audio_effect_delay::set_feedback_level_db(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_feedback_level_db, (const object *) this, amount);
}

void audio_effect_delay::set_feedback_lowpass(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_feedback_lowpass, (const object *) this, amount);
}

void audio_effect_delay::set_tap1_active(const bool amount) {
	___godot_icall_void_bool(___mb.mb_set_tap1_active, (const object *) this, amount);
}

void audio_effect_delay::set_tap1_delay_ms(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap1_delay_ms, (const object *) this, amount);
}

void audio_effect_delay::set_tap1_level_db(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap1_level_db, (const object *) this, amount);
}

void audio_effect_delay::set_tap1_pan(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap1_pan, (const object *) this, amount);
}

void audio_effect_delay::set_tap2_active(const bool amount) {
	___godot_icall_void_bool(___mb.mb_set_tap2_active, (const object *) this, amount);
}

void audio_effect_delay::set_tap2_delay_ms(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap2_delay_ms, (const object *) this, amount);
}

void audio_effect_delay::set_tap2_level_db(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap2_level_db, (const object *) this, amount);
}

void audio_effect_delay::set_tap2_pan(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_tap2_pan, (const object *) this, amount);
}

}