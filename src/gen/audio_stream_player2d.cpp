#include "audio_stream_player2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "audio_stream.hpp"
#include "audio_stream_playback.hpp"


namespace gd {


audio_stream_player2d::___method_bindings audio_stream_player2d::___mb = {};

void *audio_stream_player2d::_detail_class_tag = nullptr;

void audio_stream_player2d::___init_method_bindings() {
	___mb.mb__bus_layout_changed = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "_bus_layout_changed");
	___mb.mb__is_active = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "_is_active");
	___mb.mb__set_playing = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "_set_playing");
	___mb.mb_get_area_mask = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_area_mask");
	___mb.mb_get_attenuation = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_attenuation");
	___mb.mb_get_bus = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_bus");
	___mb.mb_get_max_distance = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_max_distance");
	___mb.mb_get_pitch_scale = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_pitch_scale");
	___mb.mb_get_playback_position = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_playback_position");
	___mb.mb_get_stream = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_stream");
	___mb.mb_get_stream_paused = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_stream_paused");
	___mb.mb_get_stream_playback = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_stream_playback");
	___mb.mb_get_volume_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "get_volume_db");
	___mb.mb_is_autoplay_enabled = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "is_autoplay_enabled");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "is_playing");
	___mb.mb_play = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "play");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "seek");
	___mb.mb_set_area_mask = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_area_mask");
	___mb.mb_set_attenuation = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_attenuation");
	___mb.mb_set_autoplay = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_autoplay");
	___mb.mb_set_bus = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_bus");
	___mb.mb_set_max_distance = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_max_distance");
	___mb.mb_set_pitch_scale = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_pitch_scale");
	___mb.mb_set_stream = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_stream");
	___mb.mb_set_stream_paused = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_stream_paused");
	___mb.mb_set_volume_db = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "set_volume_db");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AudioStreamPlayer2D", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AudioStreamPlayer2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

audio_stream_player2d *audio_stream_player2d::_new()
{
	return (audio_stream_player2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AudioStreamPlayer2D")());
}
void audio_stream_player2d::_bus_layout_changed() {
	___godot_icall_void(___mb.mb__bus_layout_changed, (const object *) this);
}

bool audio_stream_player2d::_is_active() const {
	return ___godot_icall_bool(___mb.mb__is_active, (const object *) this);
}

void audio_stream_player2d::_set_playing(const bool enable) {
	___godot_icall_void_bool(___mb.mb__set_playing, (const object *) this, enable);
}

int64_t audio_stream_player2d::get_area_mask() const {
	return ___godot_icall_int(___mb.mb_get_area_mask, (const object *) this);
}

real_t audio_stream_player2d::get_attenuation() const {
	return ___godot_icall_float(___mb.mb_get_attenuation, (const object *) this);
}

string audio_stream_player2d::get_bus() const {
	return ___godot_icall_String(___mb.mb_get_bus, (const object *) this);
}

real_t audio_stream_player2d::get_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_max_distance, (const object *) this);
}

real_t audio_stream_player2d::get_pitch_scale() const {
	return ___godot_icall_float(___mb.mb_get_pitch_scale, (const object *) this);
}

real_t audio_stream_player2d::get_playback_position() {
	return ___godot_icall_float(___mb.mb_get_playback_position, (const object *) this);
}

ref<audio_stream> audio_stream_player2d::get_stream() const {
	return ref<audio_stream>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream, (const object *) this));
}

bool audio_stream_player2d::get_stream_paused() const {
	return ___godot_icall_bool(___mb.mb_get_stream_paused, (const object *) this);
}

ref<audio_stream_playback> audio_stream_player2d::get_stream_playback() {
	return ref<audio_stream_playback>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream_playback, (const object *) this));
}

real_t audio_stream_player2d::get_volume_db() const {
	return ___godot_icall_float(___mb.mb_get_volume_db, (const object *) this);
}

bool audio_stream_player2d::is_autoplay_enabled() {
	return ___godot_icall_bool(___mb.mb_is_autoplay_enabled, (const object *) this);
}

bool audio_stream_player2d::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void audio_stream_player2d::play(const real_t from_position) {
	___godot_icall_void_float(___mb.mb_play, (const object *) this, from_position);
}

void audio_stream_player2d::seek(const real_t to_position) {
	___godot_icall_void_float(___mb.mb_seek, (const object *) this, to_position);
}

void audio_stream_player2d::set_area_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_area_mask, (const object *) this, mask);
}

void audio_stream_player2d::set_attenuation(const real_t curve_) {
	___godot_icall_void_float(___mb.mb_set_attenuation, (const object *) this, curve_);
}

void audio_stream_player2d::set_autoplay(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_autoplay, (const object *) this, enable);
}

void audio_stream_player2d::set_bus(const string bus) {
	___godot_icall_void_String(___mb.mb_set_bus, (const object *) this, bus);
}

void audio_stream_player2d::set_max_distance(const real_t pixels) {
	___godot_icall_void_float(___mb.mb_set_max_distance, (const object *) this, pixels);
}

void audio_stream_player2d::set_pitch_scale(const real_t pitch_scale) {
	___godot_icall_void_float(___mb.mb_set_pitch_scale, (const object *) this, pitch_scale);
}

void audio_stream_player2d::set_stream(const ref<audio_stream> stream) {
	___godot_icall_void_Object(___mb.mb_set_stream, (const object *) this, stream.ptr());
}

void audio_stream_player2d::set_stream_paused(const bool pause) {
	___godot_icall_void_bool(___mb.mb_set_stream_paused, (const object *) this, pause);
}

void audio_stream_player2d::set_volume_db(const real_t volume_db) {
	___godot_icall_void_float(___mb.mb_set_volume_db, (const object *) this, volume_db);
}

void audio_stream_player2d::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}