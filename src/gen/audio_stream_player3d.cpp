#include "audio_stream_player3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "audio_stream.hpp"
#include "audio_stream_playback.hpp"


namespace gd {


audio_stream_player3d::___method_bindings audio_stream_player3d::___mb = {};

void *audio_stream_player3d::_detail_class_tag = nullptr;

void audio_stream_player3d::___init_method_bindings() {
	___mb.mb__bus_layout_changed = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "_bus_layout_changed");
	___mb.mb__is_active = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "_is_active");
	___mb.mb__set_playing = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "_set_playing");
	___mb.mb_get_area_mask = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_area_mask");
	___mb.mb_get_attenuation_filter_cutoff_hz = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_attenuation_filter_cutoff_hz");
	___mb.mb_get_attenuation_filter_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_attenuation_filter_db");
	___mb.mb_get_attenuation_model = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_attenuation_model");
	___mb.mb_get_bus = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_bus");
	___mb.mb_get_doppler_tracking = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_doppler_tracking");
	___mb.mb_get_emission_angle = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_emission_angle");
	___mb.mb_get_emission_angle_filter_attenuation_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_emission_angle_filter_attenuation_db");
	___mb.mb_get_max_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_max_db");
	___mb.mb_get_max_distance = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_max_distance");
	___mb.mb_get_out_of_range_mode = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_out_of_range_mode");
	___mb.mb_get_pitch_scale = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_pitch_scale");
	___mb.mb_get_playback_position = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_playback_position");
	___mb.mb_get_stream = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_stream");
	___mb.mb_get_stream_paused = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_stream_paused");
	___mb.mb_get_stream_playback = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_stream_playback");
	___mb.mb_get_unit_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_unit_db");
	___mb.mb_get_unit_size = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "get_unit_size");
	___mb.mb_is_autoplay_enabled = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "is_autoplay_enabled");
	___mb.mb_is_emission_angle_enabled = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "is_emission_angle_enabled");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "is_playing");
	___mb.mb_play = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "play");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "seek");
	___mb.mb_set_area_mask = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_area_mask");
	___mb.mb_set_attenuation_filter_cutoff_hz = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_attenuation_filter_cutoff_hz");
	___mb.mb_set_attenuation_filter_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_attenuation_filter_db");
	___mb.mb_set_attenuation_model = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_attenuation_model");
	___mb.mb_set_autoplay = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_autoplay");
	___mb.mb_set_bus = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_bus");
	___mb.mb_set_doppler_tracking = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_doppler_tracking");
	___mb.mb_set_emission_angle = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_emission_angle");
	___mb.mb_set_emission_angle_enabled = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_emission_angle_enabled");
	___mb.mb_set_emission_angle_filter_attenuation_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_emission_angle_filter_attenuation_db");
	___mb.mb_set_max_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_max_db");
	___mb.mb_set_max_distance = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_max_distance");
	___mb.mb_set_out_of_range_mode = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_out_of_range_mode");
	___mb.mb_set_pitch_scale = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_pitch_scale");
	___mb.mb_set_stream = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_stream");
	___mb.mb_set_stream_paused = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_stream_paused");
	___mb.mb_set_unit_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_unit_db");
	___mb.mb_set_unit_size = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "set_unit_size");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AudioStreamPlayer3D", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamPlayer3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_player3d *audio_stream_player3d::_new()
{
	return (audio_stream_player3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamPlayer3D")());
}
void audio_stream_player3d::_bus_layout_changed() {
	___godot_icall_void(___mb.mb__bus_layout_changed, (const object *) this);
}

bool audio_stream_player3d::_is_active() const {
	return ___godot_icall_bool(___mb.mb__is_active, (const object *) this);
}

void audio_stream_player3d::_set_playing(const bool enable) {
	___godot_icall_void_bool(___mb.mb__set_playing, (const object *) this, enable);
}

int64_t audio_stream_player3d::get_area_mask() const {
	return ___godot_icall_int(___mb.mb_get_area_mask, (const object *) this);
}

real_t audio_stream_player3d::get_attenuation_filter_cutoff_hz() const {
	return ___godot_icall_float(___mb.mb_get_attenuation_filter_cutoff_hz, (const object *) this);
}

real_t audio_stream_player3d::get_attenuation_filter_db() const {
	return ___godot_icall_float(___mb.mb_get_attenuation_filter_db, (const object *) this);
}

audio_stream_player3d::AttenuationModel audio_stream_player3d::get_attenuation_model() const {
	return (audio_stream_player3d::AttenuationModel) ___godot_icall_int(___mb.mb_get_attenuation_model, (const object *) this);
}

string audio_stream_player3d::get_bus() const {
	return ___godot_icall_String(___mb.mb_get_bus, (const object *) this);
}

audio_stream_player3d::DopplerTracking audio_stream_player3d::get_doppler_tracking() const {
	return (audio_stream_player3d::DopplerTracking) ___godot_icall_int(___mb.mb_get_doppler_tracking, (const object *) this);
}

real_t audio_stream_player3d::get_emission_angle() const {
	return ___godot_icall_float(___mb.mb_get_emission_angle, (const object *) this);
}

real_t audio_stream_player3d::get_emission_angle_filter_attenuation_db() const {
	return ___godot_icall_float(___mb.mb_get_emission_angle_filter_attenuation_db, (const object *) this);
}

real_t audio_stream_player3d::get_max_db() const {
	return ___godot_icall_float(___mb.mb_get_max_db, (const object *) this);
}

real_t audio_stream_player3d::get_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_max_distance, (const object *) this);
}

audio_stream_player3d::OutOfRangeMode audio_stream_player3d::get_out_of_range_mode() const {
	return (audio_stream_player3d::OutOfRangeMode) ___godot_icall_int(___mb.mb_get_out_of_range_mode, (const object *) this);
}

real_t audio_stream_player3d::get_pitch_scale() const {
	return ___godot_icall_float(___mb.mb_get_pitch_scale, (const object *) this);
}

real_t audio_stream_player3d::get_playback_position() {
	return ___godot_icall_float(___mb.mb_get_playback_position, (const object *) this);
}

ref<audio_stream> audio_stream_player3d::get_stream() const {
	return ref<audio_stream>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream, (const object *) this));
}

bool audio_stream_player3d::get_stream_paused() const {
	return ___godot_icall_bool(___mb.mb_get_stream_paused, (const object *) this);
}

ref<audio_stream_playback> audio_stream_player3d::get_stream_playback() {
	return ref<audio_stream_playback>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream_playback, (const object *) this));
}

real_t audio_stream_player3d::get_unit_db() const {
	return ___godot_icall_float(___mb.mb_get_unit_db, (const object *) this);
}

real_t audio_stream_player3d::get_unit_size() const {
	return ___godot_icall_float(___mb.mb_get_unit_size, (const object *) this);
}

bool audio_stream_player3d::is_autoplay_enabled() {
	return ___godot_icall_bool(___mb.mb_is_autoplay_enabled, (const object *) this);
}

bool audio_stream_player3d::is_emission_angle_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_emission_angle_enabled, (const object *) this);
}

bool audio_stream_player3d::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void audio_stream_player3d::play(const real_t from_position) {
	___godot_icall_void_float(___mb.mb_play, (const object *) this, from_position);
}

void audio_stream_player3d::seek(const real_t to_position) {
	___godot_icall_void_float(___mb.mb_seek, (const object *) this, to_position);
}

void audio_stream_player3d::set_area_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_area_mask, (const object *) this, mask);
}

void audio_stream_player3d::set_attenuation_filter_cutoff_hz(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_attenuation_filter_cutoff_hz, (const object *) this, degrees);
}

void audio_stream_player3d::set_attenuation_filter_db(const real_t db) {
	___godot_icall_void_float(___mb.mb_set_attenuation_filter_db, (const object *) this, db);
}

void audio_stream_player3d::set_attenuation_model(const int64_t model) {
	___godot_icall_void_int(___mb.mb_set_attenuation_model, (const object *) this, model);
}

void audio_stream_player3d::set_autoplay(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_autoplay, (const object *) this, enable);
}

void audio_stream_player3d::set_bus(const string bus) {
	___godot_icall_void_String(___mb.mb_set_bus, (const object *) this, bus);
}

void audio_stream_player3d::set_doppler_tracking(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_doppler_tracking, (const object *) this, mode);
}

void audio_stream_player3d::set_emission_angle(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_emission_angle, (const object *) this, degrees);
}

void audio_stream_player3d::set_emission_angle_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_emission_angle_enabled, (const object *) this, enabled);
}

void audio_stream_player3d::set_emission_angle_filter_attenuation_db(const real_t db) {
	___godot_icall_void_float(___mb.mb_set_emission_angle_filter_attenuation_db, (const object *) this, db);
}

void audio_stream_player3d::set_max_db(const real_t max_db) {
	___godot_icall_void_float(___mb.mb_set_max_db, (const object *) this, max_db);
}

void audio_stream_player3d::set_max_distance(const real_t metres) {
	___godot_icall_void_float(___mb.mb_set_max_distance, (const object *) this, metres);
}

void audio_stream_player3d::set_out_of_range_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_out_of_range_mode, (const object *) this, mode);
}

void audio_stream_player3d::set_pitch_scale(const real_t pitch_scale) {
	___godot_icall_void_float(___mb.mb_set_pitch_scale, (const object *) this, pitch_scale);
}

void audio_stream_player3d::set_stream(const ref<audio_stream> stream) {
	___godot_icall_void_Object(___mb.mb_set_stream, (const object *) this, stream.ptr());
}

void audio_stream_player3d::set_stream_paused(const bool pause) {
	___godot_icall_void_bool(___mb.mb_set_stream_paused, (const object *) this, pause);
}

void audio_stream_player3d::set_unit_db(const real_t unit_db) {
	___godot_icall_void_float(___mb.mb_set_unit_db, (const object *) this, unit_db);
}

void audio_stream_player3d::set_unit_size(const real_t unit_size) {
	___godot_icall_void_float(___mb.mb_set_unit_size, (const object *) this, unit_size);
}

void audio_stream_player3d::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}