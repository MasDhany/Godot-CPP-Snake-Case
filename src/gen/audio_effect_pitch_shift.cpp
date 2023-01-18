#include "audio_effect_pitch_shift.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_pitch_shift::___method_bindings audio_effect_pitch_shift::___mb = {};

void *audio_effect_pitch_shift::_detail_class_tag = nullptr;

void audio_effect_pitch_shift::___init_method_bindings() {
	___mb.mb_get_fft_size = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "get_fft_size");
	___mb.mb_get_oversampling = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "get_oversampling");
	___mb.mb_get_pitch_scale = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "get_pitch_scale");
	___mb.mb_set_fft_size = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "set_fft_size");
	___mb.mb_set_oversampling = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "set_oversampling");
	___mb.mb_set_pitch_scale = gd::api->godot_method_bind_get_method("AudioEffectPitchShift", "set_pitch_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectPitchShift");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_pitch_shift *audio_effect_pitch_shift::_new()
{
	return (audio_effect_pitch_shift *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectPitchShift")());
}
audio_effect_pitch_shift::FFT_Size audio_effect_pitch_shift::get_fft_size() const {
	return (audio_effect_pitch_shift::FFT_Size) ___godot_icall_int(___mb.mb_get_fft_size, (const object *) this);
}

int64_t audio_effect_pitch_shift::get_oversampling() const {
	return ___godot_icall_int(___mb.mb_get_oversampling, (const object *) this);
}

real_t audio_effect_pitch_shift::get_pitch_scale() const {
	return ___godot_icall_float(___mb.mb_get_pitch_scale, (const object *) this);
}

void audio_effect_pitch_shift::set_fft_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_fft_size, (const object *) this, size);
}

void audio_effect_pitch_shift::set_oversampling(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_oversampling, (const object *) this, amount);
}

void audio_effect_pitch_shift::set_pitch_scale(const real_t rate) {
	___godot_icall_void_float(___mb.mb_set_pitch_scale, (const object *) this, rate);
}

}