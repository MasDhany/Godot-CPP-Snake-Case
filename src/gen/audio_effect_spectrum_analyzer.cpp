#include "audio_effect_spectrum_analyzer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_spectrum_analyzer::___method_bindings audio_effect_spectrum_analyzer::___mb = {};

void *audio_effect_spectrum_analyzer::_detail_class_tag = nullptr;

void audio_effect_spectrum_analyzer::___init_method_bindings() {
	___mb.mb_get_buffer_length = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_buffer_length");
	___mb.mb_get_fft_size = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_fft_size");
	___mb.mb_get_tap_back_pos = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_tap_back_pos");
	___mb.mb_set_buffer_length = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_buffer_length");
	___mb.mb_set_fft_size = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_fft_size");
	___mb.mb_set_tap_back_pos = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_tap_back_pos");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_spectrum_analyzer *audio_effect_spectrum_analyzer::_new()
{
	return (audio_effect_spectrum_analyzer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectSpectrumAnalyzer")());
}
real_t audio_effect_spectrum_analyzer::get_buffer_length() const {
	return ___godot_icall_float(___mb.mb_get_buffer_length, (const object *) this);
}

audio_effect_spectrum_analyzer::FFT_Size audio_effect_spectrum_analyzer::get_fft_size() const {
	return (audio_effect_spectrum_analyzer::FFT_Size) ___godot_icall_int(___mb.mb_get_fft_size, (const object *) this);
}

real_t audio_effect_spectrum_analyzer::get_tap_back_pos() const {
	return ___godot_icall_float(___mb.mb_get_tap_back_pos, (const object *) this);
}

void audio_effect_spectrum_analyzer::set_buffer_length(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_buffer_length, (const object *) this, seconds);
}

void audio_effect_spectrum_analyzer::set_fft_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_fft_size, (const object *) this, size);
}

void audio_effect_spectrum_analyzer::set_tap_back_pos(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_tap_back_pos, (const object *) this, seconds);
}

}