#include "audio_effect_eq21.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_eq21::___method_bindings audio_effect_eq21::___mb = {};

void *audio_effect_eq21::_detail_class_tag = nullptr;

void audio_effect_eq21::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectEQ21");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_eq21 *audio_effect_eq21::_new()
{
	return (audio_effect_eq21 *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectEQ21")());
}
}