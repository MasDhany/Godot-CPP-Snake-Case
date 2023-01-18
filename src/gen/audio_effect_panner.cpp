#include "audio_effect_panner.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_panner::___method_bindings audio_effect_panner::___mb = {};

void *audio_effect_panner::_detail_class_tag = nullptr;

void audio_effect_panner::___init_method_bindings() {
	___mb.mb_get_pan = gd::api->godot_method_bind_get_method("AudioEffectPanner", "get_pan");
	___mb.mb_set_pan = gd::api->godot_method_bind_get_method("AudioEffectPanner", "set_pan");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectPanner");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_panner *audio_effect_panner::_new()
{
	return (audio_effect_panner *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectPanner")());
}
real_t audio_effect_panner::get_pan() const {
	return ___godot_icall_float(___mb.mb_get_pan, (const object *) this);
}

void audio_effect_panner::set_pan(const real_t cpanume) {
	___godot_icall_void_float(___mb.mb_set_pan, (const object *) this, cpanume);
}

}