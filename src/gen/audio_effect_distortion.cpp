#include "audio_effect_distortion.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_distortion::___method_bindings audio_effect_distortion::___mb = {};

void *audio_effect_distortion::_detail_class_tag = nullptr;

void audio_effect_distortion::___init_method_bindings() {
	___mb.mb_get_drive = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "get_drive");
	___mb.mb_get_keep_hf_hz = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "get_keep_hf_hz");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "get_mode");
	___mb.mb_get_post_gain = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "get_post_gain");
	___mb.mb_get_pre_gain = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "get_pre_gain");
	___mb.mb_set_drive = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "set_drive");
	___mb.mb_set_keep_hf_hz = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "set_keep_hf_hz");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "set_mode");
	___mb.mb_set_post_gain = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "set_post_gain");
	___mb.mb_set_pre_gain = gd::api->godot_method_bind_get_method("AudioEffectDistortion", "set_pre_gain");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectDistortion");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_distortion *audio_effect_distortion::_new()
{
	return (audio_effect_distortion *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectDistortion")());
}
real_t audio_effect_distortion::get_drive() const {
	return ___godot_icall_float(___mb.mb_get_drive, (const object *) this);
}

real_t audio_effect_distortion::get_keep_hf_hz() const {
	return ___godot_icall_float(___mb.mb_get_keep_hf_hz, (const object *) this);
}

audio_effect_distortion::Mode audio_effect_distortion::get_mode() const {
	return (audio_effect_distortion::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

real_t audio_effect_distortion::get_post_gain() const {
	return ___godot_icall_float(___mb.mb_get_post_gain, (const object *) this);
}

real_t audio_effect_distortion::get_pre_gain() const {
	return ___godot_icall_float(___mb.mb_get_pre_gain, (const object *) this);
}

void audio_effect_distortion::set_drive(const real_t drive) {
	___godot_icall_void_float(___mb.mb_set_drive, (const object *) this, drive);
}

void audio_effect_distortion::set_keep_hf_hz(const real_t keep_hf_hz) {
	___godot_icall_void_float(___mb.mb_set_keep_hf_hz, (const object *) this, keep_hf_hz);
}

void audio_effect_distortion::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void audio_effect_distortion::set_post_gain(const real_t post_gain) {
	___godot_icall_void_float(___mb.mb_set_post_gain, (const object *) this, post_gain);
}

void audio_effect_distortion::set_pre_gain(const real_t pre_gain) {
	___godot_icall_void_float(___mb.mb_set_pre_gain, (const object *) this, pre_gain);
}

}