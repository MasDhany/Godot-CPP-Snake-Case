#include "audio_effect_stereo_enhance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_stereo_enhance::___method_bindings audio_effect_stereo_enhance::___mb = {};

void *audio_effect_stereo_enhance::_detail_class_tag = nullptr;

void audio_effect_stereo_enhance::___init_method_bindings() {
	___mb.mb_get_pan_pullout = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "get_pan_pullout");
	___mb.mb_get_surround = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "get_surround");
	___mb.mb_get_time_pullout = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "get_time_pullout");
	___mb.mb_set_pan_pullout = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "set_pan_pullout");
	___mb.mb_set_surround = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "set_surround");
	___mb.mb_set_time_pullout = gd::api->godot_method_bind_get_method("AudioEffectStereoEnhance", "set_time_pullout");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectStereoEnhance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_stereo_enhance *audio_effect_stereo_enhance::_new()
{
	return (audio_effect_stereo_enhance *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectStereoEnhance")());
}
real_t audio_effect_stereo_enhance::get_pan_pullout() const {
	return ___godot_icall_float(___mb.mb_get_pan_pullout, (const object *) this);
}

real_t audio_effect_stereo_enhance::get_surround() const {
	return ___godot_icall_float(___mb.mb_get_surround, (const object *) this);
}

real_t audio_effect_stereo_enhance::get_time_pullout() const {
	return ___godot_icall_float(___mb.mb_get_time_pullout, (const object *) this);
}

void audio_effect_stereo_enhance::set_pan_pullout(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_pan_pullout, (const object *) this, amount);
}

void audio_effect_stereo_enhance::set_surround(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_surround, (const object *) this, amount);
}

void audio_effect_stereo_enhance::set_time_pullout(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_time_pullout, (const object *) this, amount);
}

}