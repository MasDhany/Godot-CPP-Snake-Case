#include "audio_effect_eq.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_eq::___method_bindings audio_effect_eq::___mb = {};

void *audio_effect_eq::_detail_class_tag = nullptr;

void audio_effect_eq::___init_method_bindings() {
	___mb.mb_get_band_count = gd::api->godot_method_bind_get_method("AudioEffectEQ", "get_band_count");
	___mb.mb_get_band_gain_db = gd::api->godot_method_bind_get_method("AudioEffectEQ", "get_band_gain_db");
	___mb.mb_set_band_gain_db = gd::api->godot_method_bind_get_method("AudioEffectEQ", "set_band_gain_db");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectEQ");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_eq *audio_effect_eq::_new()
{
	return (audio_effect_eq *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectEQ")());
}
int64_t audio_effect_eq::get_band_count() const {
	return ___godot_icall_int(___mb.mb_get_band_count, (const object *) this);
}

real_t audio_effect_eq::get_band_gain_db(const int64_t band_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_band_gain_db, (const object *) this, band_idx);
}

void audio_effect_eq::set_band_gain_db(const int64_t band_idx, const real_t volume_db) {
	___godot_icall_void_int_float(___mb.mb_set_band_gain_db, (const object *) this, band_idx, volume_db);
}

}