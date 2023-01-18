#include "sprite_base3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "triangle_mesh.hpp"


namespace gd {


sprite_base3d::___method_bindings sprite_base3d::___mb = {};

void *sprite_base3d::_detail_class_tag = nullptr;

void sprite_base3d::___init_method_bindings() {
	___mb.mb__im_update = gd::api->godot_method_bind_get_method("SpriteBase3D", "_im_update");
	___mb.mb__queue_update = gd::api->godot_method_bind_get_method("SpriteBase3D", "_queue_update");
	___mb.mb_generate_triangle_mesh = gd::api->godot_method_bind_get_method("SpriteBase3D", "generate_triangle_mesh");
	___mb.mb_get_alpha_cut_mode = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_alpha_cut_mode");
	___mb.mb_get_axis = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_axis");
	___mb.mb_get_billboard_mode = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_billboard_mode");
	___mb.mb_get_draw_flag = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_draw_flag");
	___mb.mb_get_item_rect = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_item_rect");
	___mb.mb_get_modulate = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_modulate");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_offset");
	___mb.mb_get_opacity = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_opacity");
	___mb.mb_get_pixel_size = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_pixel_size");
	___mb.mb_get_render_priority = gd::api->godot_method_bind_get_method("SpriteBase3D", "get_render_priority");
	___mb.mb_is_centered = gd::api->godot_method_bind_get_method("SpriteBase3D", "is_centered");
	___mb.mb_is_flipped_h = gd::api->godot_method_bind_get_method("SpriteBase3D", "is_flipped_h");
	___mb.mb_is_flipped_v = gd::api->godot_method_bind_get_method("SpriteBase3D", "is_flipped_v");
	___mb.mb_set_alpha_cut_mode = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_alpha_cut_mode");
	___mb.mb_set_axis = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_axis");
	___mb.mb_set_billboard_mode = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_billboard_mode");
	___mb.mb_set_centered = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_centered");
	___mb.mb_set_draw_flag = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_draw_flag");
	___mb.mb_set_flip_h = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_flip_h");
	___mb.mb_set_flip_v = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_flip_v");
	___mb.mb_set_modulate = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_modulate");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_offset");
	___mb.mb_set_opacity = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_opacity");
	___mb.mb_set_pixel_size = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_pixel_size");
	___mb.mb_set_render_priority = gd::api->godot_method_bind_get_method("SpriteBase3D", "set_render_priority");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpriteBase3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void sprite_base3d::_im_update() {
	___godot_icall_void(___mb.mb__im_update, (const object *) this);
}

void sprite_base3d::_queue_update() {
	___godot_icall_void(___mb.mb__queue_update, (const object *) this);
}

ref<triangle_mesh> sprite_base3d::generate_triangle_mesh() const {
	return ref<triangle_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_generate_triangle_mesh, (const object *) this));
}

sprite_base3d::AlphaCutMode sprite_base3d::get_alpha_cut_mode() const {
	return (sprite_base3d::AlphaCutMode) ___godot_icall_int(___mb.mb_get_alpha_cut_mode, (const object *) this);
}

vector3::Axis sprite_base3d::get_axis() const {
	return (vector3::Axis) ___godot_icall_int(___mb.mb_get_axis, (const object *) this);
}

spatial_material::BillboardMode sprite_base3d::get_billboard_mode() const {
	return (spatial_material::BillboardMode) ___godot_icall_int(___mb.mb_get_billboard_mode, (const object *) this);
}

bool sprite_base3d::get_draw_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_draw_flag, (const object *) this, flag);
}

rect2 sprite_base3d::get_item_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_item_rect, (const object *) this);
}

color sprite_base3d::get_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_modulate, (const object *) this);
}

vector2 sprite_base3d::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

real_t sprite_base3d::get_opacity() const {
	return ___godot_icall_float(___mb.mb_get_opacity, (const object *) this);
}

real_t sprite_base3d::get_pixel_size() const {
	return ___godot_icall_float(___mb.mb_get_pixel_size, (const object *) this);
}

int64_t sprite_base3d::get_render_priority() const {
	return ___godot_icall_int(___mb.mb_get_render_priority, (const object *) this);
}

bool sprite_base3d::is_centered() const {
	return ___godot_icall_bool(___mb.mb_is_centered, (const object *) this);
}

bool sprite_base3d::is_flipped_h() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_h, (const object *) this);
}

bool sprite_base3d::is_flipped_v() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_v, (const object *) this);
}

void sprite_base3d::set_alpha_cut_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_alpha_cut_mode, (const object *) this, mode);
}

void sprite_base3d::set_axis(const int64_t axis) {
	___godot_icall_void_int(___mb.mb_set_axis, (const object *) this, axis);
}

void sprite_base3d::set_billboard_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_billboard_mode, (const object *) this, mode);
}

void sprite_base3d::set_centered(const bool centered) {
	___godot_icall_void_bool(___mb.mb_set_centered, (const object *) this, centered);
}

void sprite_base3d::set_draw_flag(const int64_t flag, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_draw_flag, (const object *) this, flag, enabled);
}

void sprite_base3d::set_flip_h(const bool flip_h) {
	___godot_icall_void_bool(___mb.mb_set_flip_h, (const object *) this, flip_h);
}

void sprite_base3d::set_flip_v(const bool flip_v) {
	___godot_icall_void_bool(___mb.mb_set_flip_v, (const object *) this, flip_v);
}

void sprite_base3d::set_modulate(const color modulate) {
	___godot_icall_void_Color(___mb.mb_set_modulate, (const object *) this, modulate);
}

void sprite_base3d::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void sprite_base3d::set_opacity(const real_t opacity) {
	___godot_icall_void_float(___mb.mb_set_opacity, (const object *) this, opacity);
}

void sprite_base3d::set_pixel_size(const real_t pixel_size) {
	___godot_icall_void_float(___mb.mb_set_pixel_size, (const object *) this, pixel_size);
}

void sprite_base3d::set_render_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_render_priority, (const object *) this, priority);
}

}