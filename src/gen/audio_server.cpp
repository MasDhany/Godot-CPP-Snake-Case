#include "audio_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "audio_bus_layout.hpp"
#include "audio_effect.hpp"
#include "audio_effect_instance.hpp"


namespace gd {


audio_server *audio_server::_singleton = NULL;


audio_server::audio_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "AudioServer");
}


audio_server::___method_bindings audio_server::___mb = {};

void *audio_server::_detail_class_tag = nullptr;

void audio_server::___init_method_bindings() {
	___mb.mb_add_bus = gd::api->godot_method_bind_get_method("AudioServer", "add_bus");
	___mb.mb_add_bus_effect = gd::api->godot_method_bind_get_method("AudioServer", "add_bus_effect");
	___mb.mb_capture_get_device = gd::api->godot_method_bind_get_method("AudioServer", "capture_get_device");
	___mb.mb_capture_get_device_list = gd::api->godot_method_bind_get_method("AudioServer", "capture_get_device_list");
	___mb.mb_capture_set_device = gd::api->godot_method_bind_get_method("AudioServer", "capture_set_device");
	___mb.mb_generate_bus_layout = gd::api->godot_method_bind_get_method("AudioServer", "generate_bus_layout");
	___mb.mb_get_bus_channels = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_channels");
	___mb.mb_get_bus_count = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_count");
	___mb.mb_get_bus_effect = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_effect");
	___mb.mb_get_bus_effect_count = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_effect_count");
	___mb.mb_get_bus_effect_instance = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_effect_instance");
	___mb.mb_get_bus_index = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_index");
	___mb.mb_get_bus_name = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_name");
	___mb.mb_get_bus_peak_volume_left_db = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_peak_volume_left_db");
	___mb.mb_get_bus_peak_volume_right_db = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_peak_volume_right_db");
	___mb.mb_get_bus_send = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_send");
	___mb.mb_get_bus_volume_db = gd::api->godot_method_bind_get_method("AudioServer", "get_bus_volume_db");
	___mb.mb_get_device = gd::api->godot_method_bind_get_method("AudioServer", "get_device");
	___mb.mb_get_device_list = gd::api->godot_method_bind_get_method("AudioServer", "get_device_list");
	___mb.mb_get_global_rate_scale = gd::api->godot_method_bind_get_method("AudioServer", "get_global_rate_scale");
	___mb.mb_get_mix_rate = gd::api->godot_method_bind_get_method("AudioServer", "get_mix_rate");
	___mb.mb_get_output_latency = gd::api->godot_method_bind_get_method("AudioServer", "get_output_latency");
	___mb.mb_get_speaker_mode = gd::api->godot_method_bind_get_method("AudioServer", "get_speaker_mode");
	___mb.mb_get_time_since_last_mix = gd::api->godot_method_bind_get_method("AudioServer", "get_time_since_last_mix");
	___mb.mb_get_time_to_next_mix = gd::api->godot_method_bind_get_method("AudioServer", "get_time_to_next_mix");
	___mb.mb_is_bus_bypassing_effects = gd::api->godot_method_bind_get_method("AudioServer", "is_bus_bypassing_effects");
	___mb.mb_is_bus_effect_enabled = gd::api->godot_method_bind_get_method("AudioServer", "is_bus_effect_enabled");
	___mb.mb_is_bus_mute = gd::api->godot_method_bind_get_method("AudioServer", "is_bus_mute");
	___mb.mb_is_bus_solo = gd::api->godot_method_bind_get_method("AudioServer", "is_bus_solo");
	___mb.mb_lock = gd::api->godot_method_bind_get_method("AudioServer", "lock");
	___mb.mb_move_bus = gd::api->godot_method_bind_get_method("AudioServer", "move_bus");
	___mb.mb_remove_bus = gd::api->godot_method_bind_get_method("AudioServer", "remove_bus");
	___mb.mb_remove_bus_effect = gd::api->godot_method_bind_get_method("AudioServer", "remove_bus_effect");
	___mb.mb_set_bus_bypass_effects = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_bypass_effects");
	___mb.mb_set_bus_count = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_count");
	___mb.mb_set_bus_effect_enabled = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_effect_enabled");
	___mb.mb_set_bus_layout = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_layout");
	___mb.mb_set_bus_mute = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_mute");
	___mb.mb_set_bus_name = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_name");
	___mb.mb_set_bus_send = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_send");
	___mb.mb_set_bus_solo = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_solo");
	___mb.mb_set_bus_volume_db = gd::api->godot_method_bind_get_method("AudioServer", "set_bus_volume_db");
	___mb.mb_set_device = gd::api->godot_method_bind_get_method("AudioServer", "set_device");
	___mb.mb_set_global_rate_scale = gd::api->godot_method_bind_get_method("AudioServer", "set_global_rate_scale");
	___mb.mb_swap_bus_effects = gd::api->godot_method_bind_get_method("AudioServer", "swap_bus_effects");
	___mb.mb_unlock = gd::api->godot_method_bind_get_method("AudioServer", "unlock");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void audio_server::add_bus(const int64_t at_position) {
	___godot_icall_void_int(___mb.mb_add_bus, (const object *) this, at_position);
}

void audio_server::add_bus_effect(const int64_t bus_idx, const ref<audio_effect> effect, const int64_t at_position) {
	___godot_icall_void_int_Object_int(___mb.mb_add_bus_effect, (const object *) this, bus_idx, effect.ptr(), at_position);
}

string audio_server::capture_get_device() {
	return ___godot_icall_String(___mb.mb_capture_get_device, (const object *) this);
}

array audio_server::capture_get_device_list() {
	return ___godot_icall_Array(___mb.mb_capture_get_device_list, (const object *) this);
}

void audio_server::capture_set_device(const string name) {
	___godot_icall_void_String(___mb.mb_capture_set_device, (const object *) this, name);
}

ref<audio_bus_layout> audio_server::generate_bus_layout() const {
	return ref<audio_bus_layout>::__internal_constructor(___godot_icall_Object(___mb.mb_generate_bus_layout, (const object *) this));
}

int64_t audio_server::get_bus_channels(const int64_t bus_idx) const {
	return ___godot_icall_int_int(___mb.mb_get_bus_channels, (const object *) this, bus_idx);
}

int64_t audio_server::get_bus_count() const {
	return ___godot_icall_int(___mb.mb_get_bus_count, (const object *) this);
}

ref<audio_effect> audio_server::get_bus_effect(const int64_t bus_idx, const int64_t effect_idx) {
	return ref<audio_effect>::__internal_constructor(___godot_icall_Object_int_int(___mb.mb_get_bus_effect, (const object *) this, bus_idx, effect_idx));
}

int64_t audio_server::get_bus_effect_count(const int64_t bus_idx) {
	return ___godot_icall_int_int(___mb.mb_get_bus_effect_count, (const object *) this, bus_idx);
}

ref<audio_effect_instance> audio_server::get_bus_effect_instance(const int64_t bus_idx, const int64_t effect_idx, const int64_t channel) {
	return ref<audio_effect_instance>::__internal_constructor(___godot_icall_Object_int_int_int(___mb.mb_get_bus_effect_instance, (const object *) this, bus_idx, effect_idx, channel));
}

int64_t audio_server::get_bus_index(const string bus_name) const {
	return ___godot_icall_int_String(___mb.mb_get_bus_index, (const object *) this, bus_name);
}

string audio_server::get_bus_name(const int64_t bus_idx) const {
	return ___godot_icall_String_int(___mb.mb_get_bus_name, (const object *) this, bus_idx);
}

real_t audio_server::get_bus_peak_volume_left_db(const int64_t bus_idx, const int64_t channel) const {
	return ___godot_icall_float_int_int(___mb.mb_get_bus_peak_volume_left_db, (const object *) this, bus_idx, channel);
}

real_t audio_server::get_bus_peak_volume_right_db(const int64_t bus_idx, const int64_t channel) const {
	return ___godot_icall_float_int_int(___mb.mb_get_bus_peak_volume_right_db, (const object *) this, bus_idx, channel);
}

string audio_server::get_bus_send(const int64_t bus_idx) const {
	return ___godot_icall_String_int(___mb.mb_get_bus_send, (const object *) this, bus_idx);
}

real_t audio_server::get_bus_volume_db(const int64_t bus_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_bus_volume_db, (const object *) this, bus_idx);
}

string audio_server::get_device() {
	return ___godot_icall_String(___mb.mb_get_device, (const object *) this);
}

array audio_server::get_device_list() {
	return ___godot_icall_Array(___mb.mb_get_device_list, (const object *) this);
}

real_t audio_server::get_global_rate_scale() const {
	return ___godot_icall_float(___mb.mb_get_global_rate_scale, (const object *) this);
}

real_t audio_server::get_mix_rate() const {
	return ___godot_icall_float(___mb.mb_get_mix_rate, (const object *) this);
}

real_t audio_server::get_output_latency() const {
	return ___godot_icall_float(___mb.mb_get_output_latency, (const object *) this);
}

audio_server::SpeakerMode audio_server::get_speaker_mode() const {
	return (audio_server::SpeakerMode) ___godot_icall_int(___mb.mb_get_speaker_mode, (const object *) this);
}

real_t audio_server::get_time_since_last_mix() const {
	return ___godot_icall_float(___mb.mb_get_time_since_last_mix, (const object *) this);
}

real_t audio_server::get_time_to_next_mix() const {
	return ___godot_icall_float(___mb.mb_get_time_to_next_mix, (const object *) this);
}

bool audio_server::is_bus_bypassing_effects(const int64_t bus_idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_bus_bypassing_effects, (const object *) this, bus_idx);
}

bool audio_server::is_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_bus_effect_enabled, (const object *) this, bus_idx, effect_idx);
}

bool audio_server::is_bus_mute(const int64_t bus_idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_bus_mute, (const object *) this, bus_idx);
}

bool audio_server::is_bus_solo(const int64_t bus_idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_bus_solo, (const object *) this, bus_idx);
}

void audio_server::lock() {
	___godot_icall_void(___mb.mb_lock, (const object *) this);
}

void audio_server::move_bus(const int64_t index, const int64_t to_index) {
	___godot_icall_void_int_int(___mb.mb_move_bus, (const object *) this, index, to_index);
}

void audio_server::remove_bus(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_bus, (const object *) this, index);
}

void audio_server::remove_bus_effect(const int64_t bus_idx, const int64_t effect_idx) {
	___godot_icall_void_int_int(___mb.mb_remove_bus_effect, (const object *) this, bus_idx, effect_idx);
}

void audio_server::set_bus_bypass_effects(const int64_t bus_idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_bus_bypass_effects, (const object *) this, bus_idx, enable);
}

void audio_server::set_bus_count(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_bus_count, (const object *) this, amount);
}

void audio_server::set_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx, const bool enabled) {
	___godot_icall_void_int_int_bool(___mb.mb_set_bus_effect_enabled, (const object *) this, bus_idx, effect_idx, enabled);
}

void audio_server::set_bus_layout(const ref<audio_bus_layout> bus_layout) {
	___godot_icall_void_Object(___mb.mb_set_bus_layout, (const object *) this, bus_layout.ptr());
}

void audio_server::set_bus_mute(const int64_t bus_idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_bus_mute, (const object *) this, bus_idx, enable);
}

void audio_server::set_bus_name(const int64_t bus_idx, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_bus_name, (const object *) this, bus_idx, name);
}

void audio_server::set_bus_send(const int64_t bus_idx, const string send) {
	___godot_icall_void_int_String(___mb.mb_set_bus_send, (const object *) this, bus_idx, send);
}

void audio_server::set_bus_solo(const int64_t bus_idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_bus_solo, (const object *) this, bus_idx, enable);
}

void audio_server::set_bus_volume_db(const int64_t bus_idx, const real_t volume_db) {
	___godot_icall_void_int_float(___mb.mb_set_bus_volume_db, (const object *) this, bus_idx, volume_db);
}

void audio_server::set_device(const string device) {
	___godot_icall_void_String(___mb.mb_set_device, (const object *) this, device);
}

void audio_server::set_global_rate_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_global_rate_scale, (const object *) this, scale);
}

void audio_server::swap_bus_effects(const int64_t bus_idx, const int64_t effect_idx, const int64_t by_effect_idx) {
	___godot_icall_void_int_int_int(___mb.mb_swap_bus_effects, (const object *) this, bus_idx, effect_idx, by_effect_idx);
}

void audio_server::unlock() {
	___godot_icall_void(___mb.mb_unlock, (const object *) this);
}

}