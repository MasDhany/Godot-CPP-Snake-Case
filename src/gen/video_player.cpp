#include "video_player.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"
#include "video_stream.hpp"


namespace gd {


video_player::___method_bindings video_player::___mb = {};

void *video_player::_detail_class_tag = nullptr;

void video_player::___init_method_bindings() {
	___mb.mb_get_audio_track = gd::api->godot_method_bind_get_method("VideoPlayer", "get_audio_track");
	___mb.mb_get_buffering_msec = gd::api->godot_method_bind_get_method("VideoPlayer", "get_buffering_msec");
	___mb.mb_get_bus = gd::api->godot_method_bind_get_method("VideoPlayer", "get_bus");
	___mb.mb_get_stream = gd::api->godot_method_bind_get_method("VideoPlayer", "get_stream");
	___mb.mb_get_stream_name = gd::api->godot_method_bind_get_method("VideoPlayer", "get_stream_name");
	___mb.mb_get_stream_position = gd::api->godot_method_bind_get_method("VideoPlayer", "get_stream_position");
	___mb.mb_get_video_texture = gd::api->godot_method_bind_get_method("VideoPlayer", "get_video_texture");
	___mb.mb_get_volume = gd::api->godot_method_bind_get_method("VideoPlayer", "get_volume");
	___mb.mb_get_volume_db = gd::api->godot_method_bind_get_method("VideoPlayer", "get_volume_db");
	___mb.mb_has_autoplay = gd::api->godot_method_bind_get_method("VideoPlayer", "has_autoplay");
	___mb.mb_has_expand = gd::api->godot_method_bind_get_method("VideoPlayer", "has_expand");
	___mb.mb_is_paused = gd::api->godot_method_bind_get_method("VideoPlayer", "is_paused");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("VideoPlayer", "is_playing");
	___mb.mb_play = gd::api->godot_method_bind_get_method("VideoPlayer", "play");
	___mb.mb_set_audio_track = gd::api->godot_method_bind_get_method("VideoPlayer", "set_audio_track");
	___mb.mb_set_autoplay = gd::api->godot_method_bind_get_method("VideoPlayer", "set_autoplay");
	___mb.mb_set_buffering_msec = gd::api->godot_method_bind_get_method("VideoPlayer", "set_buffering_msec");
	___mb.mb_set_bus = gd::api->godot_method_bind_get_method("VideoPlayer", "set_bus");
	___mb.mb_set_expand = gd::api->godot_method_bind_get_method("VideoPlayer", "set_expand");
	___mb.mb_set_paused = gd::api->godot_method_bind_get_method("VideoPlayer", "set_paused");
	___mb.mb_set_stream = gd::api->godot_method_bind_get_method("VideoPlayer", "set_stream");
	___mb.mb_set_stream_position = gd::api->godot_method_bind_get_method("VideoPlayer", "set_stream_position");
	___mb.mb_set_volume = gd::api->godot_method_bind_get_method("VideoPlayer", "set_volume");
	___mb.mb_set_volume_db = gd::api->godot_method_bind_get_method("VideoPlayer", "set_volume_db");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("VideoPlayer", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VideoPlayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

video_player *video_player::_new()
{
	return (video_player *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VideoPlayer")());
}
int64_t video_player::get_audio_track() const {
	return ___godot_icall_int(___mb.mb_get_audio_track, (const object *) this);
}

int64_t video_player::get_buffering_msec() const {
	return ___godot_icall_int(___mb.mb_get_buffering_msec, (const object *) this);
}

string video_player::get_bus() const {
	return ___godot_icall_String(___mb.mb_get_bus, (const object *) this);
}

ref<video_stream> video_player::get_stream() const {
	return ref<video_stream>::__internal_constructor(___godot_icall_Object(___mb.mb_get_stream, (const object *) this));
}

string video_player::get_stream_name() const {
	return ___godot_icall_String(___mb.mb_get_stream_name, (const object *) this);
}

real_t video_player::get_stream_position() const {
	return ___godot_icall_float(___mb.mb_get_stream_position, (const object *) this);
}

ref<texture> video_player::get_video_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_video_texture, (const object *) this));
}

real_t video_player::get_volume() const {
	return ___godot_icall_float(___mb.mb_get_volume, (const object *) this);
}

real_t video_player::get_volume_db() const {
	return ___godot_icall_float(___mb.mb_get_volume_db, (const object *) this);
}

bool video_player::has_autoplay() const {
	return ___godot_icall_bool(___mb.mb_has_autoplay, (const object *) this);
}

bool video_player::has_expand() const {
	return ___godot_icall_bool(___mb.mb_has_expand, (const object *) this);
}

bool video_player::is_paused() const {
	return ___godot_icall_bool(___mb.mb_is_paused, (const object *) this);
}

bool video_player::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void video_player::play() {
	___godot_icall_void(___mb.mb_play, (const object *) this);
}

void video_player::set_audio_track(const int64_t track) {
	___godot_icall_void_int(___mb.mb_set_audio_track, (const object *) this, track);
}

void video_player::set_autoplay(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_autoplay, (const object *) this, enabled);
}

void video_player::set_buffering_msec(const int64_t msec) {
	___godot_icall_void_int(___mb.mb_set_buffering_msec, (const object *) this, msec);
}

void video_player::set_bus(const string bus) {
	___godot_icall_void_String(___mb.mb_set_bus, (const object *) this, bus);
}

void video_player::set_expand(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_expand, (const object *) this, enable);
}

void video_player::set_paused(const bool paused) {
	___godot_icall_void_bool(___mb.mb_set_paused, (const object *) this, paused);
}

void video_player::set_stream(const ref<video_stream> stream) {
	___godot_icall_void_Object(___mb.mb_set_stream, (const object *) this, stream.ptr());
}

void video_player::set_stream_position(const real_t position) {
	___godot_icall_void_float(___mb.mb_set_stream_position, (const object *) this, position);
}

void video_player::set_volume(const real_t volume) {
	___godot_icall_void_float(___mb.mb_set_volume, (const object *) this, volume);
}

void video_player::set_volume_db(const real_t db) {
	___godot_icall_void_float(___mb.mb_set_volume_db, (const object *) this, db);
}

void video_player::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}