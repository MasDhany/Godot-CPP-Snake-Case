#include "audio_effect_filter.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_filter::___method_bindings audio_effect_filter::___mb = {};

void *audio_effect_filter::_detail_class_tag = nullptr;

void audio_effect_filter::___init_method_bindings() {
	___mb.mb_get_cutoff = gd::api->godot_method_bind_get_method("AudioEffectFilter", "get_cutoff");
	___mb.mb_get_db = gd::api->godot_method_bind_get_method("AudioEffectFilter", "get_db");
	___mb.mb_get_gain = gd::api->godot_method_bind_get_method("AudioEffectFilter", "get_gain");
	___mb.mb_get_resonance = gd::api->godot_method_bind_get_method("AudioEffectFilter", "get_resonance");
	___mb.mb_set_cutoff = gd::api->godot_method_bind_get_method("AudioEffectFilter", "set_cutoff");
	___mb.mb_set_db = gd::api->godot_method_bind_get_method("AudioEffectFilter", "set_db");
	___mb.mb_set_gain = gd::api->godot_method_bind_get_method("AudioEffectFilter", "set_gain");
	___mb.mb_set_resonance = gd::api->godot_method_bind_get_method("AudioEffectFilter", "set_resonance");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectFilter");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_filter *audio_effect_filter::_new()
{
	return (audio_effect_filter *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectFilter")());
}
real_t audio_effect_filter::get_cutoff() const {
	return ___godot_icall_float(___mb.mb_get_cutoff, (const object *) this);
}

audio_effect_filter::FilterDB audio_effect_filter::get_db() const {
	return (audio_effect_filter::FilterDB) ___godot_icall_int(___mb.mb_get_db, (const object *) this);
}

real_t audio_effect_filter::get_gain() const {
	return ___godot_icall_float(___mb.mb_get_gain, (const object *) this);
}

real_t audio_effect_filter::get_resonance() const {
	return ___godot_icall_float(___mb.mb_get_resonance, (const object *) this);
}

void audio_effect_filter::set_cutoff(const real_t freq) {
	___godot_icall_void_float(___mb.mb_set_cutoff, (const object *) this, freq);
}

void audio_effect_filter::set_db(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_db, (const object *) this, amount);
}

void audio_effect_filter::set_gain(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_gain, (const object *) this, amount);
}

void audio_effect_filter::set_resonance(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_resonance, (const object *) this, amount);
}

}