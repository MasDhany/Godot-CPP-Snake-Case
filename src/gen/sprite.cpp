#include "sprite.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


sprite::___method_bindings sprite::___mb = {};

void *sprite::_detail_class_tag = nullptr;

void sprite::___init_method_bindings() {
	___mb.mb__texture_changed = gd::api->godot_method_bind_get_method("Sprite", "_texture_changed");
	___mb.mb_get_frame = gd::api->godot_method_bind_get_method("Sprite", "get_frame");
	___mb.mb_get_frame_coords = gd::api->godot_method_bind_get_method("Sprite", "get_frame_coords");
	___mb.mb_get_hframes = gd::api->godot_method_bind_get_method("Sprite", "get_hframes");
	___mb.mb_get_normal_map = gd::api->godot_method_bind_get_method("Sprite", "get_normal_map");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("Sprite", "get_offset");
	___mb.mb_get_rect = gd::api->godot_method_bind_get_method("Sprite", "get_rect");
	___mb.mb_get_region_rect = gd::api->godot_method_bind_get_method("Sprite", "get_region_rect");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Sprite", "get_texture");
	___mb.mb_get_vframes = gd::api->godot_method_bind_get_method("Sprite", "get_vframes");
	___mb.mb_is_centered = gd::api->godot_method_bind_get_method("Sprite", "is_centered");
	___mb.mb_is_flipped_h = gd::api->godot_method_bind_get_method("Sprite", "is_flipped_h");
	___mb.mb_is_flipped_v = gd::api->godot_method_bind_get_method("Sprite", "is_flipped_v");
	___mb.mb_is_pixel_opaque = gd::api->godot_method_bind_get_method("Sprite", "is_pixel_opaque");
	___mb.mb_is_region = gd::api->godot_method_bind_get_method("Sprite", "is_region");
	___mb.mb_is_region_filter_clip_enabled = gd::api->godot_method_bind_get_method("Sprite", "is_region_filter_clip_enabled");
	___mb.mb_set_centered = gd::api->godot_method_bind_get_method("Sprite", "set_centered");
	___mb.mb_set_flip_h = gd::api->godot_method_bind_get_method("Sprite", "set_flip_h");
	___mb.mb_set_flip_v = gd::api->godot_method_bind_get_method("Sprite", "set_flip_v");
	___mb.mb_set_frame = gd::api->godot_method_bind_get_method("Sprite", "set_frame");
	___mb.mb_set_frame_coords = gd::api->godot_method_bind_get_method("Sprite", "set_frame_coords");
	___mb.mb_set_hframes = gd::api->godot_method_bind_get_method("Sprite", "set_hframes");
	___mb.mb_set_normal_map = gd::api->godot_method_bind_get_method("Sprite", "set_normal_map");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("Sprite", "set_offset");
	___mb.mb_set_region = gd::api->godot_method_bind_get_method("Sprite", "set_region");
	___mb.mb_set_region_filter_clip = gd::api->godot_method_bind_get_method("Sprite", "set_region_filter_clip");
	___mb.mb_set_region_rect = gd::api->godot_method_bind_get_method("Sprite", "set_region_rect");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Sprite", "set_texture");
	___mb.mb_set_vframes = gd::api->godot_method_bind_get_method("Sprite", "set_vframes");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Sprite");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sprite *sprite::_new()
{
	return (sprite *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Sprite")());
}
void sprite::_texture_changed() {
	___godot_icall_void(___mb.mb__texture_changed, (const object *) this);
}

int64_t sprite::get_frame() const {
	return ___godot_icall_int(___mb.mb_get_frame, (const object *) this);
}

vector2 sprite::get_frame_coords() const {
	return ___godot_icall_Vector2(___mb.mb_get_frame_coords, (const object *) this);
}

int64_t sprite::get_hframes() const {
	return ___godot_icall_int(___mb.mb_get_hframes, (const object *) this);
}

ref<texture> sprite::get_normal_map() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_map, (const object *) this));
}

vector2 sprite::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

rect2 sprite::get_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_rect, (const object *) this);
}

rect2 sprite::get_region_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_region_rect, (const object *) this);
}

ref<texture> sprite::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

int64_t sprite::get_vframes() const {
	return ___godot_icall_int(___mb.mb_get_vframes, (const object *) this);
}

bool sprite::is_centered() const {
	return ___godot_icall_bool(___mb.mb_is_centered, (const object *) this);
}

bool sprite::is_flipped_h() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_h, (const object *) this);
}

bool sprite::is_flipped_v() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_v, (const object *) this);
}

bool sprite::is_pixel_opaque(const vector2 pos) const {
	return ___godot_icall_bool_Vector2(___mb.mb_is_pixel_opaque, (const object *) this, pos);
}

bool sprite::is_region() const {
	return ___godot_icall_bool(___mb.mb_is_region, (const object *) this);
}

bool sprite::is_region_filter_clip_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_region_filter_clip_enabled, (const object *) this);
}

void sprite::set_centered(const bool centered) {
	___godot_icall_void_bool(___mb.mb_set_centered, (const object *) this, centered);
}

void sprite::set_flip_h(const bool flip_h) {
	___godot_icall_void_bool(___mb.mb_set_flip_h, (const object *) this, flip_h);
}

void sprite::set_flip_v(const bool flip_v) {
	___godot_icall_void_bool(___mb.mb_set_flip_v, (const object *) this, flip_v);
}

void sprite::set_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_frame, (const object *) this, frame);
}

void sprite::set_frame_coords(const vector2 coords) {
	___godot_icall_void_Vector2(___mb.mb_set_frame_coords, (const object *) this, coords);
}

void sprite::set_hframes(const int64_t hframes) {
	___godot_icall_void_int(___mb.mb_set_hframes, (const object *) this, hframes);
}

void sprite::set_normal_map(const ref<texture> normal_map) {
	___godot_icall_void_Object(___mb.mb_set_normal_map, (const object *) this, normal_map.ptr());
}

void sprite::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void sprite::set_region(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_region, (const object *) this, enabled);
}

void sprite::set_region_filter_clip(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_region_filter_clip, (const object *) this, enabled);
}

void sprite::set_region_rect(const rect2 rect) {
	___godot_icall_void_Rect2(___mb.mb_set_region_rect, (const object *) this, rect);
}

void sprite::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void sprite::set_vframes(const int64_t vframes) {
	___godot_icall_void_int(___mb.mb_set_vframes, (const object *) this, vframes);
}

}