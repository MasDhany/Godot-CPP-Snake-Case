#include "audio_effect_notch_filter.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_notch_filter::___method_bindings audio_effect_notch_filter::___mb = {};

void *audio_effect_notch_filter::_detail_class_tag = nullptr;

void audio_effect_notch_filter::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectNotchFilter");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_notch_filter *audio_effect_notch_filter::_new()
{
	return (audio_effect_notch_filter *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectNotchFilter")());
}
}