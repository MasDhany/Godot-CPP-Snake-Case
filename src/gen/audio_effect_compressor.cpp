#include "audio_effect_compressor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


audio_effect_compressor::___method_bindings audio_effect_compressor::___mb = {};

void *audio_effect_compressor::_detail_class_tag = nullptr;

void audio_effect_compressor::___init_method_bindings() {
	___mb.mb_get_attack_us = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_attack_us");
	___mb.mb_get_gain = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_gain");
	___mb.mb_get_mix = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_mix");
	___mb.mb_get_ratio = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_ratio");
	___mb.mb_get_release_ms = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_release_ms");
	___mb.mb_get_sidechain = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_sidechain");
	___mb.mb_get_threshold = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "get_threshold");
	___mb.mb_set_attack_us = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_attack_us");
	___mb.mb_set_gain = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_gain");
	___mb.mb_set_mix = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_mix");
	___mb.mb_set_ratio = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_ratio");
	___mb.mb_set_release_ms = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_release_ms");
	___mb.mb_set_sidechain = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_sidechain");
	___mb.mb_set_threshold = gd::api->godot_method_bind_get_method("AudioEffectCompressor", "set_threshold");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioEffectCompressor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_effect_compressor *audio_effect_compressor::_new()
{
	return (audio_effect_compressor *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioEffectCompressor")());
}
real_t audio_effect_compressor::get_attack_us() const {
	return ___godot_icall_float(___mb.mb_get_attack_us, (const object *) this);
}

real_t audio_effect_compressor::get_gain() const {
	return ___godot_icall_float(___mb.mb_get_gain, (const object *) this);
}

real_t audio_effect_compressor::get_mix() const {
	return ___godot_icall_float(___mb.mb_get_mix, (const object *) this);
}

real_t audio_effect_compressor::get_ratio() const {
	return ___godot_icall_float(___mb.mb_get_ratio, (const object *) this);
}

real_t audio_effect_compressor::get_release_ms() const {
	return ___godot_icall_float(___mb.mb_get_release_ms, (const object *) this);
}

string audio_effect_compressor::get_sidechain() const {
	return ___godot_icall_String(___mb.mb_get_sidechain, (const object *) this);
}

real_t audio_effect_compressor::get_threshold() const {
	return ___godot_icall_float(___mb.mb_get_threshold, (const object *) this);
}

void audio_effect_compressor::set_attack_us(const real_t attack_us) {
	___godot_icall_void_float(___mb.mb_set_attack_us, (const object *) this, attack_us);
}

void audio_effect_compressor::set_gain(const real_t gain) {
	___godot_icall_void_float(___mb.mb_set_gain, (const object *) this, gain);
}

void audio_effect_compressor::set_mix(const real_t mix) {
	___godot_icall_void_float(___mb.mb_set_mix, (const object *) this, mix);
}

void audio_effect_compressor::set_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_ratio, (const object *) this, ratio);
}

void audio_effect_compressor::set_release_ms(const real_t release_ms) {
	___godot_icall_void_float(___mb.mb_set_release_ms, (const object *) this, release_ms);
}

void audio_effect_compressor::set_sidechain(const string sidechain) {
	___godot_icall_void_String(___mb.mb_set_sidechain, (const object *) this, sidechain);
}

void audio_effect_compressor::set_threshold(const real_t threshold) {
	___godot_icall_void_float(___mb.mb_set_threshold, (const object *) this, threshold);
}

}