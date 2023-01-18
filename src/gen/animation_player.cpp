#include "animation_player.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation.hpp"
#include "node.hpp"


namespace gd {


animation_player::___method_bindings animation_player::___mb = {};

void *animation_player::_detail_class_tag = nullptr;

void animation_player::___init_method_bindings() {
	___mb.mb__animation_changed = gd::api->godot_method_bind_get_method("AnimationPlayer", "_animation_changed");
	___mb.mb__node_removed = gd::api->godot_method_bind_get_method("AnimationPlayer", "_node_removed");
	___mb.mb_add_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "add_animation");
	___mb.mb_advance = gd::api->godot_method_bind_get_method("AnimationPlayer", "advance");
	___mb.mb_animation_get_next = gd::api->godot_method_bind_get_method("AnimationPlayer", "animation_get_next");
	___mb.mb_animation_set_next = gd::api->godot_method_bind_get_method("AnimationPlayer", "animation_set_next");
	___mb.mb_clear_caches = gd::api->godot_method_bind_get_method("AnimationPlayer", "clear_caches");
	___mb.mb_clear_queue = gd::api->godot_method_bind_get_method("AnimationPlayer", "clear_queue");
	___mb.mb_find_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "find_animation");
	___mb.mb_get_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_animation");
	___mb.mb_get_animation_list = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_animation_list");
	___mb.mb_get_animation_process_mode = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_animation_process_mode");
	___mb.mb_get_assigned_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_assigned_animation");
	___mb.mb_get_autoplay = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_autoplay");
	___mb.mb_get_blend_time = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_blend_time");
	___mb.mb_get_current_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_current_animation");
	___mb.mb_get_current_animation_length = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_current_animation_length");
	___mb.mb_get_current_animation_position = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_current_animation_position");
	___mb.mb_get_default_blend_time = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_default_blend_time");
	___mb.mb_get_method_call_mode = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_method_call_mode");
	___mb.mb_get_playing_speed = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_playing_speed");
	___mb.mb_get_queue = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_queue");
	___mb.mb_get_root = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_root");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("AnimationPlayer", "get_speed_scale");
	___mb.mb_has_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "has_animation");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("AnimationPlayer", "is_active");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AnimationPlayer", "is_playing");
	___mb.mb_is_reset_on_save_enabled = gd::api->godot_method_bind_get_method("AnimationPlayer", "is_reset_on_save_enabled");
	___mb.mb_play = gd::api->godot_method_bind_get_method("AnimationPlayer", "play");
	___mb.mb_play_backwards = gd::api->godot_method_bind_get_method("AnimationPlayer", "play_backwards");
	___mb.mb_queue = gd::api->godot_method_bind_get_method("AnimationPlayer", "queue");
	___mb.mb_remove_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "remove_animation");
	___mb.mb_rename_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "rename_animation");
	___mb.mb_seek = gd::api->godot_method_bind_get_method("AnimationPlayer", "seek");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_active");
	___mb.mb_set_animation_process_mode = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_animation_process_mode");
	___mb.mb_set_assigned_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_assigned_animation");
	___mb.mb_set_autoplay = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_autoplay");
	___mb.mb_set_blend_time = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_blend_time");
	___mb.mb_set_current_animation = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_current_animation");
	___mb.mb_set_default_blend_time = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_default_blend_time");
	___mb.mb_set_method_call_mode = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_method_call_mode");
	___mb.mb_set_reset_on_save_enabled = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_reset_on_save_enabled");
	___mb.mb_set_root = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_root");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("AnimationPlayer", "set_speed_scale");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AnimationPlayer", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationPlayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_player *animation_player::_new()
{
	return (animation_player *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationPlayer")());
}
void animation_player::_animation_changed() {
	___godot_icall_void(___mb.mb__animation_changed, (const object *) this);
}

void animation_player::_node_removed(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const object *) this, arg0);
}

error animation_player::add_animation(const string name, const ref<animation> animation_) {
	return (error) ___godot_icall_int_String_Object(___mb.mb_add_animation, (const object *) this, name, animation_.ptr());
}

void animation_player::advance(const real_t delta) {
	___godot_icall_void_float(___mb.mb_advance, (const object *) this, delta);
}

string animation_player::animation_get_next(const string anim_from) const {
	return ___godot_icall_String_String(___mb.mb_animation_get_next, (const object *) this, anim_from);
}

void animation_player::animation_set_next(const string anim_from, const string anim_to) {
	___godot_icall_void_String_String(___mb.mb_animation_set_next, (const object *) this, anim_from, anim_to);
}

void animation_player::clear_caches() {
	___godot_icall_void(___mb.mb_clear_caches, (const object *) this);
}

void animation_player::clear_queue() {
	___godot_icall_void(___mb.mb_clear_queue, (const object *) this);
}

string animation_player::find_animation(const ref<animation> animation_) const {
	return ___godot_icall_String_Object(___mb.mb_find_animation, (const object *) this, animation_.ptr());
}

ref<animation> animation_player::get_animation(const string name) const {
	return ref<animation>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_animation, (const object *) this, name));
}

pool_string_array animation_player::get_animation_list() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_animation_list, (const object *) this);
}

animation_player::AnimationProcessMode animation_player::get_animation_process_mode() const {
	return (animation_player::AnimationProcessMode) ___godot_icall_int(___mb.mb_get_animation_process_mode, (const object *) this);
}

string animation_player::get_assigned_animation() const {
	return ___godot_icall_String(___mb.mb_get_assigned_animation, (const object *) this);
}

string animation_player::get_autoplay() const {
	return ___godot_icall_String(___mb.mb_get_autoplay, (const object *) this);
}

real_t animation_player::get_blend_time(const string anim_from, const string anim_to) const {
	return ___godot_icall_float_String_String(___mb.mb_get_blend_time, (const object *) this, anim_from, anim_to);
}

string animation_player::get_current_animation() const {
	return ___godot_icall_String(___mb.mb_get_current_animation, (const object *) this);
}

real_t animation_player::get_current_animation_length() const {
	return ___godot_icall_float(___mb.mb_get_current_animation_length, (const object *) this);
}

real_t animation_player::get_current_animation_position() const {
	return ___godot_icall_float(___mb.mb_get_current_animation_position, (const object *) this);
}

real_t animation_player::get_default_blend_time() const {
	return ___godot_icall_float(___mb.mb_get_default_blend_time, (const object *) this);
}

animation_player::AnimationMethodCallMode animation_player::get_method_call_mode() const {
	return (animation_player::AnimationMethodCallMode) ___godot_icall_int(___mb.mb_get_method_call_mode, (const object *) this);
}

real_t animation_player::get_playing_speed() const {
	return ___godot_icall_float(___mb.mb_get_playing_speed, (const object *) this);
}

pool_string_array animation_player::get_queue() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_queue, (const object *) this);
}

node_path animation_player::get_root() const {
	return ___godot_icall_NodePath(___mb.mb_get_root, (const object *) this);
}

real_t animation_player::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

bool animation_player::has_animation(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_animation, (const object *) this, name);
}

bool animation_player::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

bool animation_player::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

bool animation_player::is_reset_on_save_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_reset_on_save_enabled, (const object *) this);
}

void animation_player::play(const string name, const real_t custom_blend, const real_t custom_speed, const bool from_end) {
	___godot_icall_void_String_float_float_bool(___mb.mb_play, (const object *) this, name, custom_blend, custom_speed, from_end);
}

void animation_player::play_backwards(const string name, const real_t custom_blend) {
	___godot_icall_void_String_float(___mb.mb_play_backwards, (const object *) this, name, custom_blend);
}

void animation_player::queue(const string name) {
	___godot_icall_void_String(___mb.mb_queue, (const object *) this, name);
}

void animation_player::remove_animation(const string name) {
	___godot_icall_void_String(___mb.mb_remove_animation, (const object *) this, name);
}

void animation_player::rename_animation(const string name, const string newname) {
	___godot_icall_void_String_String(___mb.mb_rename_animation, (const object *) this, name, newname);
}

void animation_player::seek(const real_t seconds, const bool update) {
	___godot_icall_void_float_bool(___mb.mb_seek, (const object *) this, seconds, update);
}

void animation_player::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void animation_player::set_animation_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_animation_process_mode, (const object *) this, mode);
}

void animation_player::set_assigned_animation(const string anim) {
	___godot_icall_void_String(___mb.mb_set_assigned_animation, (const object *) this, anim);
}

void animation_player::set_autoplay(const string name) {
	___godot_icall_void_String(___mb.mb_set_autoplay, (const object *) this, name);
}

void animation_player::set_blend_time(const string anim_from, const string anim_to, const real_t sec) {
	___godot_icall_void_String_String_float(___mb.mb_set_blend_time, (const object *) this, anim_from, anim_to, sec);
}

void animation_player::set_current_animation(const string anim) {
	___godot_icall_void_String(___mb.mb_set_current_animation, (const object *) this, anim);
}

void animation_player::set_default_blend_time(const real_t sec) {
	___godot_icall_void_float(___mb.mb_set_default_blend_time, (const object *) this, sec);
}

void animation_player::set_method_call_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_method_call_mode, (const object *) this, mode);
}

void animation_player::set_reset_on_save_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_reset_on_save_enabled, (const object *) this, enabled);
}

void animation_player::set_root(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_root, (const object *) this, path_);
}

void animation_player::set_speed_scale(const real_t speed) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, speed);
}

void animation_player::stop(const bool reset) {
	___godot_icall_void_bool(___mb.mb_stop, (const object *) this, reset);
}

}