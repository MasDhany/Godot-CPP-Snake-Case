#include "sprite_frames.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


sprite_frames::___method_bindings sprite_frames::___mb = {};

void *sprite_frames::_detail_class_tag = nullptr;

void sprite_frames::___init_method_bindings() {
	___mb.mb__get_animations = gd::api->godot_method_bind_get_method("SpriteFrames", "_get_animations");
	___mb.mb__get_frames = gd::api->godot_method_bind_get_method("SpriteFrames", "_get_frames");
	___mb.mb__set_animations = gd::api->godot_method_bind_get_method("SpriteFrames", "_set_animations");
	___mb.mb__set_frames = gd::api->godot_method_bind_get_method("SpriteFrames", "_set_frames");
	___mb.mb_add_animation = gd::api->godot_method_bind_get_method("SpriteFrames", "add_animation");
	___mb.mb_add_frame = gd::api->godot_method_bind_get_method("SpriteFrames", "add_frame");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("SpriteFrames", "clear");
	___mb.mb_clear_all = gd::api->godot_method_bind_get_method("SpriteFrames", "clear_all");
	___mb.mb_get_animation_loop = gd::api->godot_method_bind_get_method("SpriteFrames", "get_animation_loop");
	___mb.mb_get_animation_names = gd::api->godot_method_bind_get_method("SpriteFrames", "get_animation_names");
	___mb.mb_get_animation_speed = gd::api->godot_method_bind_get_method("SpriteFrames", "get_animation_speed");
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("SpriteFrames", "get_frame");
	___mb.mb_get_frame_count = gd::api->godot_method_bind_get_method("SpriteFrames", "get_frame_count");
	___mb.mb_has_animation = gd::api->godot_method_bind_get_method("SpriteFrames", "has_animation");
	___mb.mb_remove_animation = gd::api->godot_method_bind_get_method("SpriteFrames", "remove_animation");
	___mb.mb_remove_frame = gd::api->godot_method_bind_get_method("SpriteFrames", "remove_frame");
	___mb.mb_rename_animation = gd::api->godot_method_bind_get_method("SpriteFrames", "rename_animation");
	___mb.mb_set_animation_loop = gd::api->godot_method_bind_get_method("SpriteFrames", "set_animation_loop");
	___mb.mb_set_animation_speed = gd::api->godot_method_bind_get_method("SpriteFrames", "set_animation_speed");
	___mb.mb_set_frame = gd::api->godot_method_bind_get_method("SpriteFrames", "set_frame");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpriteFrames");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sprite_frames *sprite_frames::_new()
{
	return (sprite_frames *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SpriteFrames")());
}
array sprite_frames::_get_animations() const {
	return ___godot_icall_Array(___mb.mb__get_animations, (const object *) this);
}

array sprite_frames::_get_frames() const {
	return ___godot_icall_Array(___mb.mb__get_frames, (const object *) this);
}

void sprite_frames::_set_animations(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_animations, (const object *) this, arg0);
}

void sprite_frames::_set_frames(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_frames, (const object *) this, arg0);
}

void sprite_frames::add_animation(const string anim) {
	___godot_icall_void_String(___mb.mb_add_animation, (const object *) this, anim);
}

void sprite_frames::add_frame(const string anim, const ref<texture> frame, const int64_t at_position) {
	___godot_icall_void_String_Object_int(___mb.mb_add_frame, (const object *) this, anim, frame.ptr(), at_position);
}

void sprite_frames::clear(const string anim) {
	___godot_icall_void_String(___mb.mb_clear, (const object *) this, anim);
}

void sprite_frames::clear_all() {
	___godot_icall_void(___mb.mb_clear_all, (const object *) this);
}

bool sprite_frames::get_animation_loop(const string anim) const {
	return ___godot_icall_bool_String(___mb.mb_get_animation_loop, (const object *) this, anim);
}

pool_string_array sprite_frames::get_animation_names() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_animation_names, (const object *) this);
}

real_t sprite_frames::get_animation_speed(const string anim) const {
	return ___godot_icall_float_String(___mb.mb_get_animation_speed, (const object *) this, anim);
}

ref<texture> sprite_frames::get_frame(const string anim, const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_String_int(___mb.mb_get_frame, (const object *) this, anim, idx));
}

int64_t sprite_frames::get_frame_count(const string anim) const {
	return ___godot_icall_int_String(___mb.mb_get_frame_count, (const object *) this, anim);
}

bool sprite_frames::has_animation(const string anim) const {
	return ___godot_icall_bool_String(___mb.mb_has_animation, (const object *) this, anim);
}

void sprite_frames::remove_animation(const string anim) {
	___godot_icall_void_String(___mb.mb_remove_animation, (const object *) this, anim);
}

void sprite_frames::remove_frame(const string anim, const int64_t idx) {
	___godot_icall_void_String_int(___mb.mb_remove_frame, (const object *) this, anim, idx);
}

void sprite_frames::rename_animation(const string anim, const string newname) {
	___godot_icall_void_String_String(___mb.mb_rename_animation, (const object *) this, anim, newname);
}

void sprite_frames::set_animation_loop(const string anim, const bool loop) {
	___godot_icall_void_String_bool(___mb.mb_set_animation_loop, (const object *) this, anim, loop);
}

void sprite_frames::set_animation_speed(const string anim, const real_t speed) {
	___godot_icall_void_String_float(___mb.mb_set_animation_speed, (const object *) this, anim, speed);
}

void sprite_frames::set_frame(const string anim, const int64_t idx, const ref<texture> txt) {
	___godot_icall_void_String_int_Object(___mb.mb_set_frame, (const object *) this, anim, idx, txt.ptr());
}

}