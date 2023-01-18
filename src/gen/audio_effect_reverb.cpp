#include "audio_effect_reverb.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_reverb::___method_bindings audio_effect_reverb::___mb = {};

void *audio_effect_reverb::_detail_class_tag = nullptr;

void audio_effect_reverb::___init_method_bindings() {
	___mb.mb_get_damping = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_damping");
	___mb.mb_get_dry = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_dry");
	___mb.mb_get_hpf = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_hpf");
	___mb.mb_get_predelay_feedback = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_predelay_feedback");
	___mb.mb_get_predelay_msec = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_predelay_msec");
	___mb.mb_get_room_size = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_room_size");
	___mb.mb_get_spread = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_spread");
	___mb.mb_get_wet = gd::api->godot_method_bind_get_method("AudioEffectReverb", "get_wet");
	___mb.mb_set_damping = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_damping");
	___mb.mb_set_dry = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_dry");
	___mb.mb_set_hpf = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_hpf");
	___mb.mb_set_predelay_feedback = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_predelay_feedback");
	___mb.mb_set_predelay_msec = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_predelay_msec");
	___mb.mb_set_room_size = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_room_size");
	___mb.mb_set_spread = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_spread");
	___mb.mb_set_wet = gd::api->godot_method_bind_get_method("AudioEffectReverb", "set_wet");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectReverb");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_reverb *audio_effect_reverb::_new()
{
	return (audio_effect_reverb *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectReverb")());
}
real_t audio_effect_reverb::get_damping() const {
	return ___godot_icall_float(___mb.mb_get_damping, (const object *) this);
}

real_t audio_effect_reverb::get_dry() const {
	return ___godot_icall_float(___mb.mb_get_dry, (const object *) this);
}

real_t audio_effect_reverb::get_hpf() const {
	return ___godot_icall_float(___mb.mb_get_hpf, (const object *) this);
}

real_t audio_effect_reverb::get_predelay_feedback() const {
	return ___godot_icall_float(___mb.mb_get_predelay_feedback, (const object *) this);
}

real_t audio_effect_reverb::get_predelay_msec() const {
	return ___godot_icall_float(___mb.mb_get_predelay_msec, (const object *) this);
}

real_t audio_effect_reverb::get_room_size() const {
	return ___godot_icall_float(___mb.mb_get_room_size, (const object *) this);
}

real_t audio_effect_reverb::get_spread() const {
	return ___godot_icall_float(___mb.mb_get_spread, (const object *) this);
}

real_t audio_effect_reverb::get_wet() const {
	return ___godot_icall_float(___mb.mb_get_wet, (const object *) this);
}

void audio_effect_reverb::set_damping(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_damping, (const object *) this, amount);
}

void audio_effect_reverb::set_dry(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_dry, (const object *) this, amount);
}

void audio_effect_reverb::set_hpf(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_hpf, (const object *) this, amount);
}

void audio_effect_reverb::set_predelay_feedback(const real_t feedback) {
	___godot_icall_void_float(___mb.mb_set_predelay_feedback, (const object *) this, feedback);
}

void audio_effect_reverb::set_predelay_msec(const real_t msec) {
	___godot_icall_void_float(___mb.mb_set_predelay_msec, (const object *) this, msec);
}

void audio_effect_reverb::set_room_size(const real_t size) {
	___godot_icall_void_float(___mb.mb_set_room_size, (const object *) this, size);
}

void audio_effect_reverb::set_spread(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_spread, (const object *) this, amount);
}

void audio_effect_reverb::set_wet(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_wet, (const object *) this, amount);
}

}