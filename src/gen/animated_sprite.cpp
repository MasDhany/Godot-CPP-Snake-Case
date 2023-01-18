#include "animated_sprite.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "sprite_frames.hpp"


namespace gd {


animated_sprite::___method_bindings animated_sprite::___mb = {};

void *animated_sprite::_detail_class_tag = nullptr;

void animated_sprite::___init_method_bindings() {
	___mb.mb__res_changed = gd::api->godot_method_bind_get_method("AnimatedSprite", "_res_changed");
	___mb.mb_get_animation = gd::api->godot_method_bind_get_method("AnimatedSprite", "get_animation");
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("AnimatedSprite", "get_frame");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("AnimatedSprite", "get_offset");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("AnimatedSprite", "get_speed_scale");
	___mb.mb_get_sprite_frames = gd::api->godot_method_bind_get_method("AnimatedSprite", "get_sprite_frames");
	___mb.mb_is_centered = gd::api->godot_method_bind_get_method("AnimatedSprite", "is_centered");
	___mb.mb_is_flipped_h = gd::api->godot_method_bind_get_method("AnimatedSprite", "is_flipped_h");
	___mb.mb_is_flipped_v = gd::api->godot_method_bind_get_method("AnimatedSprite", "is_flipped_v");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AnimatedSprite", "is_playing");
	___mb.mb_play = gd::api->godot_method_bind_get_method("AnimatedSprite", "play");
	___mb.mb_set_animation = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_animation");
	___mb.mb_set_centered = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_centered");
	___mb.mb_set_flip_h = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_flip_h");
	___mb.mb_set_flip_v = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_flip_v");
	___mb.mb_set_frame = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_frame");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_offset");
	___mb.mb_set_playing = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_playing");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_speed_scale");
	___mb.mb_set_sprite_frames = gd::api->godot_method_bind_get_method("AnimatedSprite", "set_sprite_frames");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AnimatedSprite", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimatedSprite");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animated_sprite *animated_sprite::_new()
{
	return (animated_sprite *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimatedSprite")());
}
void animated_sprite::_res_changed() {
	___godot_icall_void(___mb.mb__res_changed, (const object *) this);
}

string animated_sprite::get_animation() const {
	return ___godot_icall_String(___mb.mb_get_animation, (const object *) this);
}

int64_t animated_sprite::get_frame() const {
	return ___godot_icall_int(___mb.mb_get_frame, (const object *) this);
}

vector2 animated_sprite::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

real_t animated_sprite::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

ref<sprite_frames> animated_sprite::get_sprite_frames() const {
	return ref<sprite_frames>::__internal_constructor(___godot_icall_Object(___mb.mb_get_sprite_frames, (const object *) this));
}

bool animated_sprite::is_centered() const {
	return ___godot_icall_bool(___mb.mb_is_centered, (const object *) this);
}

bool animated_sprite::is_flipped_h() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_h, (const object *) this);
}

bool animated_sprite::is_flipped_v() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_v, (const object *) this);
}

bool animated_sprite::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void animated_sprite::play(const string anim, const bool backwards) {
	___godot_icall_void_String_bool(___mb.mb_play, (const object *) this, anim, backwards);
}

void animated_sprite::set_animation(const string animation_) {
	___godot_icall_void_String(___mb.mb_set_animation, (const object *) this, animation_);
}

void animated_sprite::set_centered(const bool centered) {
	___godot_icall_void_bool(___mb.mb_set_centered, (const object *) this, centered);
}

void animated_sprite::set_flip_h(const bool flip_h) {
	___godot_icall_void_bool(___mb.mb_set_flip_h, (const object *) this, flip_h);
}

void animated_sprite::set_flip_v(const bool flip_v) {
	___godot_icall_void_bool(___mb.mb_set_flip_v, (const object *) this, flip_v);
}

void animated_sprite::set_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_frame, (const object *) this, frame);
}

void animated_sprite::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void animated_sprite::set_playing(const bool playing) {
	___godot_icall_void_bool(___mb.mb_set_playing, (const object *) this, playing);
}

void animated_sprite::set_speed_scale(const real_t speed_scale) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, speed_scale);
}

void animated_sprite::set_sprite_frames(const ref<sprite_frames> sprite_frames_) {
	___godot_icall_void_Object(___mb.mb_set_sprite_frames, (const object *) this, sprite_frames_.ptr());
}

void animated_sprite::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}