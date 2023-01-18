#include "audio_effect_amplify.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_amplify::___method_bindings audio_effect_amplify::___mb = {};

void *audio_effect_amplify::_detail_class_tag = nullptr;

void audio_effect_amplify::___init_method_bindings() {
	___mb.mb_get_volume_db = gd::api->godot_method_bind_get_method("AudioEffectAmplify", "get_volume_db");
	___mb.mb_set_volume_db = gd::api->godot_method_bind_get_method("AudioEffectAmplify", "set_volume_db");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectAmplify");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_amplify *audio_effect_amplify::_new()
{
	return (audio_effect_amplify *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectAmplify")());
}
real_t audio_effect_amplify::get_volume_db() const {
	return ___godot_icall_float(___mb.mb_get_volume_db, (const object *) this);
}

void audio_effect_amplify::set_volume_db(const real_t volume) {
	___godot_icall_void_float(___mb.mb_set_volume_db, (const object *) this, volume);
}

}