#include "audio_effect_spectrum_analyzer_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_spectrum_analyzer_instance::___method_bindings audio_effect_spectrum_analyzer_instance::___mb = {};

void *audio_effect_spectrum_analyzer_instance::_detail_class_tag = nullptr;

void audio_effect_spectrum_analyzer_instance::___init_method_bindings() {
	___mb.mb_get_magnitude_for_frequency_range = gd::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzerInstance", "get_magnitude_for_frequency_range");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzerInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

vector2 audio_effect_spectrum_analyzer_instance::get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode) const {
	return ___godot_icall_Vector2_float_float_int(___mb.mb_get_magnitude_for_frequency_range, (const object *) this, from_hz, to_hz, mode);
}

}