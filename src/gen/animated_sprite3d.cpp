#include "animated_sprite3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "sprite_frames.hpp"


namespace gd {


animated_sprite3d::___method_bindings animated_sprite3d::___mb = {};

void *animated_sprite3d::_detail_class_tag = nullptr;

void animated_sprite3d::___init_method_bindings() {
	___mb.mb__is_playing = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "_is_playing");
	___mb.mb__res_changed = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "_res_changed");
	___mb.mb__set_playing = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "_set_playing");
	___mb.mb_get_animation = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "get_animation");
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "get_frame");
	___mb.mb_get_sprite_frames = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "get_sprite_frames");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "is_playing");
	___mb.mb_play = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "play");
	___mb.mb_set_animation = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "set_animation");
	___mb.mb_set_frame = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "set_frame");
	___mb.mb_set_sprite_frames = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "set_sprite_frames");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AnimatedSprite3D", "stop");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimatedSprite3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animated_sprite3d *animated_sprite3d::_new()
{
	return (animated_sprite3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimatedSprite3D")());
}
bool animated_sprite3d::_is_playing() const {
	return ___godot_icall_bool(___mb.mb__is_playing, (const object *) this);
}

void animated_sprite3d::_res_changed() {
	___godot_icall_void(___mb.mb__res_changed, (const object *) this);
}

void animated_sprite3d::_set_playing(const bool playing) {
	___godot_icall_void_bool(___mb.mb__set_playing, (const object *) this, playing);
}

string animated_sprite3d::get_animation() const {
	return ___godot_icall_String(___mb.mb_get_animation, (const object *) this);
}

int64_t animated_sprite3d::get_frame() const {
	return ___godot_icall_int(___mb.mb_get_frame, (const object *) this);
}

ref<sprite_frames> animated_sprite3d::get_sprite_frames() const {
	return ref<sprite_frames>::__internal_constructor(___godot_icall_Object(___mb.mb_get_sprite_frames, (const object *) this));
}

bool animated_sprite3d::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void animated_sprite3d::play(const string anim) {
	___godot_icall_void_String(___mb.mb_play, (const object *) this, anim);
}

void animated_sprite3d::set_animation(const string animation_) {
	___godot_icall_void_String(___mb.mb_set_animation, (const object *) this, animation_);
}

void animated_sprite3d::set_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_frame, (const object *) this, frame);
}

void animated_sprite3d::set_sprite_frames(const ref<sprite_frames> sprite_frames_) {
	___godot_icall_void_Object(___mb.mb_set_sprite_frames, (const object *) this, sprite_frames_.ptr());
}

void animated_sprite3d::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

}