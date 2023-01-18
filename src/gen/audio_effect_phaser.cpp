#include "audio_effect_phaser.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_phaser::___method_bindings audio_effect_phaser::___mb = {};

void *audio_effect_phaser::_detail_class_tag = nullptr;

void audio_effect_phaser::___init_method_bindings() {
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "get_depth");
	___mb.mb_get_feedback = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "get_feedback");
	___mb.mb_get_range_max_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "get_range_max_hz");
	___mb.mb_get_range_min_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "get_range_min_hz");
	___mb.mb_get_rate_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "get_rate_hz");
	___mb.mb_set_depth = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "set_depth");
	___mb.mb_set_feedback = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "set_feedback");
	___mb.mb_set_range_max_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "set_range_max_hz");
	___mb.mb_set_range_min_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "set_range_min_hz");
	___mb.mb_set_rate_hz = gd::api->godot_method_bind_get_method("AudioEffectPhaser", "set_rate_hz");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectPhaser");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_phaser *audio_effect_phaser::_new()
{
	return (audio_effect_phaser *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectPhaser")());
}
real_t audio_effect_phaser::get_depth() const {
	return ___godot_icall_float(___mb.mb_get_depth, (const object *) this);
}

real_t audio_effect_phaser::get_feedback() const {
	return ___godot_icall_float(___mb.mb_get_feedback, (const object *) this);
}

real_t audio_effect_phaser::get_range_max_hz() const {
	return ___godot_icall_float(___mb.mb_get_range_max_hz, (const object *) this);
}

real_t audio_effect_phaser::get_range_min_hz() const {
	return ___godot_icall_float(___mb.mb_get_range_min_hz, (const object *) this);
}

real_t audio_effect_phaser::get_rate_hz() const {
	return ___godot_icall_float(___mb.mb_get_rate_hz, (const object *) this);
}

void audio_effect_phaser::set_depth(const real_t depth) {
	___godot_icall_void_float(___mb.mb_set_depth, (const object *) this, depth);
}

void audio_effect_phaser::set_feedback(const real_t fbk) {
	___godot_icall_void_float(___mb.mb_set_feedback, (const object *) this, fbk);
}

void audio_effect_phaser::set_range_max_hz(const real_t hz) {
	___godot_icall_void_float(___mb.mb_set_range_max_hz, (const object *) this, hz);
}

void audio_effect_phaser::set_range_min_hz(const real_t hz) {
	___godot_icall_void_float(___mb.mb_set_range_min_hz, (const object *) this, hz);
}

void audio_effect_phaser::set_rate_hz(const real_t hz) {
	___godot_icall_void_float(___mb.mb_set_rate_hz, (const object *) this, hz);
}

}