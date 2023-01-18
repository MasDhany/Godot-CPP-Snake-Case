#include "animated_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


animated_texture::___method_bindings animated_texture::___mb = {};

void *animated_texture::_detail_class_tag = nullptr;

void animated_texture::___init_method_bindings() {
	___mb.mb__update_proxy = gd::api->godot_method_bind_get_method("AnimatedTexture", "_update_proxy");
	___mb.mb_get_current_frame = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_current_frame");
	___mb.mb_get_fps = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_fps");
	___mb.mb_get_frame_delay = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_delay");
	___mb.mb_get_frame_texture = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_texture");
	___mb.mb_get_frames = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_frames");
	___mb.mb_get_oneshot = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_oneshot");
	___mb.mb_get_pause = gd::api->godot_method_bind_get_method("AnimatedTexture", "get_pause");
	___mb.mb_set_current_frame = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_current_frame");
	___mb.mb_set_fps = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_fps");
	___mb.mb_set_frame_delay = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_delay");
	___mb.mb_set_frame_texture = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_texture");
	___mb.mb_set_frames = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_frames");
	___mb.mb_set_oneshot = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_oneshot");
	___mb.mb_set_pause = gd::api->godot_method_bind_get_method("AnimatedTexture", "set_pause");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimatedTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animated_texture *animated_texture::_new()
{
	return (animated_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimatedTexture")());
}
void animated_texture::_update_proxy() {
	___godot_icall_void(___mb.mb__update_proxy, (const object *) this);
}

int64_t animated_texture::get_current_frame() const {
	return ___godot_icall_int(___mb.mb_get_current_frame, (const object *) this);
}

real_t animated_texture::get_fps() const {
	return ___godot_icall_float(___mb.mb_get_fps, (const object *) this);
}

real_t animated_texture::get_frame_delay(const int64_t frame) const {
	return ___godot_icall_float_int(___mb.mb_get_frame_delay, (const object *) this, frame);
}

ref<texture> animated_texture::get_frame_texture(const int64_t frame) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_frame_texture, (const object *) this, frame));
}

int64_t animated_texture::get_frames() const {
	return ___godot_icall_int(___mb.mb_get_frames, (const object *) this);
}

bool animated_texture::get_oneshot() const {
	return ___godot_icall_bool(___mb.mb_get_oneshot, (const object *) this);
}

bool animated_texture::get_pause() const {
	return ___godot_icall_bool(___mb.mb_get_pause, (const object *) this);
}

void animated_texture::set_current_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_current_frame, (const object *) this, frame);
}

void animated_texture::set_fps(const real_t fps) {
	___godot_icall_void_float(___mb.mb_set_fps, (const object *) this, fps);
}

void animated_texture::set_frame_delay(const int64_t frame, const real_t delay) {
	___godot_icall_void_int_float(___mb.mb_set_frame_delay, (const object *) this, frame, delay);
}

void animated_texture::set_frame_texture(const int64_t frame, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_frame_texture, (const object *) this, frame, texture_.ptr());
}

void animated_texture::set_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_frames, (const object *) this, frames);
}

void animated_texture::set_oneshot(const bool oneshot) {
	___godot_icall_void_bool(___mb.mb_set_oneshot, (const object *) this, oneshot);
}

void animated_texture::set_pause(const bool pause) {
	___godot_icall_void_bool(___mb.mb_set_pause, (const object *) this, pause);
}

}