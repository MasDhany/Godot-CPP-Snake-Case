#include "camera2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "object.hpp"


namespace gd {


camera2d::___method_bindings camera2d::___mb = {};

void *camera2d::_detail_class_tag = nullptr;

void camera2d::___init_method_bindings() {
	___mb.mb__make_current = gd::api->godot_method_bind_get_method("Camera2D", "_make_current");
	___mb.mb__set_current = gd::api->godot_method_bind_get_method("Camera2D", "_set_current");
	___mb.mb__update_scroll = gd::api->godot_method_bind_get_method("Camera2D", "_update_scroll");
	___mb.mb_align = gd::api->godot_method_bind_get_method("Camera2D", "align");
	___mb.mb_clear_current = gd::api->godot_method_bind_get_method("Camera2D", "clear_current");
	___mb.mb_force_update_scroll = gd::api->godot_method_bind_get_method("Camera2D", "force_update_scroll");
	___mb.mb_get_anchor_mode = gd::api->godot_method_bind_get_method("Camera2D", "get_anchor_mode");
	___mb.mb_get_camera_position = gd::api->godot_method_bind_get_method("Camera2D", "get_camera_position");
	___mb.mb_get_camera_screen_center = gd::api->godot_method_bind_get_method("Camera2D", "get_camera_screen_center");
	___mb.mb_get_custom_viewport = gd::api->godot_method_bind_get_method("Camera2D", "get_custom_viewport");
	___mb.mb_get_drag_margin = gd::api->godot_method_bind_get_method("Camera2D", "get_drag_margin");
	___mb.mb_get_follow_smoothing = gd::api->godot_method_bind_get_method("Camera2D", "get_follow_smoothing");
	___mb.mb_get_h_offset = gd::api->godot_method_bind_get_method("Camera2D", "get_h_offset");
	___mb.mb_get_limit = gd::api->godot_method_bind_get_method("Camera2D", "get_limit");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("Camera2D", "get_offset");
	___mb.mb_get_process_mode = gd::api->godot_method_bind_get_method("Camera2D", "get_process_mode");
	___mb.mb_get_v_offset = gd::api->godot_method_bind_get_method("Camera2D", "get_v_offset");
	___mb.mb_get_zoom = gd::api->godot_method_bind_get_method("Camera2D", "get_zoom");
	___mb.mb_is_current = gd::api->godot_method_bind_get_method("Camera2D", "is_current");
	___mb.mb_is_follow_smoothing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_follow_smoothing_enabled");
	___mb.mb_is_h_drag_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_h_drag_enabled");
	___mb.mb_is_limit_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_limit_drawing_enabled");
	___mb.mb_is_limit_smoothing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_limit_smoothing_enabled");
	___mb.mb_is_margin_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_margin_drawing_enabled");
	___mb.mb_is_rotating = gd::api->godot_method_bind_get_method("Camera2D", "is_rotating");
	___mb.mb_is_screen_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_screen_drawing_enabled");
	___mb.mb_is_v_drag_enabled = gd::api->godot_method_bind_get_method("Camera2D", "is_v_drag_enabled");
	___mb.mb_make_current = gd::api->godot_method_bind_get_method("Camera2D", "make_current");
	___mb.mb_reset_smoothing = gd::api->godot_method_bind_get_method("Camera2D", "reset_smoothing");
	___mb.mb_set_anchor_mode = gd::api->godot_method_bind_get_method("Camera2D", "set_anchor_mode");
	___mb.mb_set_custom_viewport = gd::api->godot_method_bind_get_method("Camera2D", "set_custom_viewport");
	___mb.mb_set_drag_margin = gd::api->godot_method_bind_get_method("Camera2D", "set_drag_margin");
	___mb.mb_set_enable_follow_smoothing = gd::api->godot_method_bind_get_method("Camera2D", "set_enable_follow_smoothing");
	___mb.mb_set_follow_smoothing = gd::api->godot_method_bind_get_method("Camera2D", "set_follow_smoothing");
	___mb.mb_set_h_drag_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_h_drag_enabled");
	___mb.mb_set_h_offset = gd::api->godot_method_bind_get_method("Camera2D", "set_h_offset");
	___mb.mb_set_limit = gd::api->godot_method_bind_get_method("Camera2D", "set_limit");
	___mb.mb_set_limit_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_limit_drawing_enabled");
	___mb.mb_set_limit_smoothing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_limit_smoothing_enabled");
	___mb.mb_set_margin_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_margin_drawing_enabled");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("Camera2D", "set_offset");
	___mb.mb_set_process_mode = gd::api->godot_method_bind_get_method("Camera2D", "set_process_mode");
	___mb.mb_set_rotating = gd::api->godot_method_bind_get_method("Camera2D", "set_rotating");
	___mb.mb_set_screen_drawing_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_screen_drawing_enabled");
	___mb.mb_set_v_drag_enabled = gd::api->godot_method_bind_get_method("Camera2D", "set_v_drag_enabled");
	___mb.mb_set_v_offset = gd::api->godot_method_bind_get_method("Camera2D", "set_v_offset");
	___mb.mb_set_zoom = gd::api->godot_method_bind_get_method("Camera2D", "set_zoom");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Camera2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

camera2d *camera2d::_new()
{
	return (camera2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Camera2D")());
}
void camera2d::_make_current(const object *arg0) {
	___godot_icall_void_Object(___mb.mb__make_current, (const object *) this, arg0);
}

void camera2d::_set_current(const bool current) {
	___godot_icall_void_bool(___mb.mb__set_current, (const object *) this, current);
}

void camera2d::_update_scroll() {
	___godot_icall_void(___mb.mb__update_scroll, (const object *) this);
}

void camera2d::align() {
	___godot_icall_void(___mb.mb_align, (const object *) this);
}

void camera2d::clear_current() {
	___godot_icall_void(___mb.mb_clear_current, (const object *) this);
}

void camera2d::force_update_scroll() {
	___godot_icall_void(___mb.mb_force_update_scroll, (const object *) this);
}

camera2d::AnchorMode camera2d::get_anchor_mode() const {
	return (camera2d::AnchorMode) ___godot_icall_int(___mb.mb_get_anchor_mode, (const object *) this);
}

vector2 camera2d::get_camera_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_camera_position, (const object *) this);
}

vector2 camera2d::get_camera_screen_center() const {
	return ___godot_icall_Vector2(___mb.mb_get_camera_screen_center, (const object *) this);
}

node *camera2d::get_custom_viewport() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_custom_viewport, (const object *) this);
}

real_t camera2d::get_drag_margin(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_drag_margin, (const object *) this, margin);
}

real_t camera2d::get_follow_smoothing() const {
	return ___godot_icall_float(___mb.mb_get_follow_smoothing, (const object *) this);
}

real_t camera2d::get_h_offset() const {
	return ___godot_icall_float(___mb.mb_get_h_offset, (const object *) this);
}

int64_t camera2d::get_limit(const int64_t margin) const {
	return ___godot_icall_int_int(___mb.mb_get_limit, (const object *) this, margin);
}

vector2 camera2d::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

camera2d::Camera2DProcessMode camera2d::get_process_mode() const {
	return (camera2d::Camera2DProcessMode) ___godot_icall_int(___mb.mb_get_process_mode, (const object *) this);
}

real_t camera2d::get_v_offset() const {
	return ___godot_icall_float(___mb.mb_get_v_offset, (const object *) this);
}

vector2 camera2d::get_zoom() const {
	return ___godot_icall_Vector2(___mb.mb_get_zoom, (const object *) this);
}

bool camera2d::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const object *) this);
}

bool camera2d::is_follow_smoothing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_follow_smoothing_enabled, (const object *) this);
}

bool camera2d::is_h_drag_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_h_drag_enabled, (const object *) this);
}

bool camera2d::is_limit_drawing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_limit_drawing_enabled, (const object *) this);
}

bool camera2d::is_limit_smoothing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_limit_smoothing_enabled, (const object *) this);
}

bool camera2d::is_margin_drawing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_margin_drawing_enabled, (const object *) this);
}

bool camera2d::is_rotating() const {
	return ___godot_icall_bool(___mb.mb_is_rotating, (const object *) this);
}

bool camera2d::is_screen_drawing_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_screen_drawing_enabled, (const object *) this);
}

bool camera2d::is_v_drag_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_v_drag_enabled, (const object *) this);
}

void camera2d::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const object *) this);
}

void camera2d::reset_smoothing() {
	___godot_icall_void(___mb.mb_reset_smoothing, (const object *) this);
}

void camera2d::set_anchor_mode(const int64_t anchor_mode) {
	___godot_icall_void_int(___mb.mb_set_anchor_mode, (const object *) this, anchor_mode);
}

void camera2d::set_custom_viewport(const node *viewport_) {
	___godot_icall_void_Object(___mb.mb_set_custom_viewport, (const object *) this, viewport_);
}

void camera2d::set_drag_margin(const int64_t margin, const real_t drag_margin) {
	___godot_icall_void_int_float(___mb.mb_set_drag_margin, (const object *) this, margin, drag_margin);
}

void camera2d::set_enable_follow_smoothing(const bool follow_smoothing) {
	___godot_icall_void_bool(___mb.mb_set_enable_follow_smoothing, (const object *) this, follow_smoothing);
}

void camera2d::set_follow_smoothing(const real_t follow_smoothing) {
	___godot_icall_void_float(___mb.mb_set_follow_smoothing, (const object *) this, follow_smoothing);
}

void camera2d::set_h_drag_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_h_drag_enabled, (const object *) this, enabled);
}

void camera2d::set_h_offset(const real_t ofs) {
	___godot_icall_void_float(___mb.mb_set_h_offset, (const object *) this, ofs);
}

void camera2d::set_limit(const int64_t margin, const int64_t limit) {
	___godot_icall_void_int_int(___mb.mb_set_limit, (const object *) this, margin, limit);
}

void camera2d::set_limit_drawing_enabled(const bool limit_drawing_enabled) {
	___godot_icall_void_bool(___mb.mb_set_limit_drawing_enabled, (const object *) this, limit_drawing_enabled);
}

void camera2d::set_limit_smoothing_enabled(const bool limit_smoothing_enabled) {
	___godot_icall_void_bool(___mb.mb_set_limit_smoothing_enabled, (const object *) this, limit_smoothing_enabled);
}

void camera2d::set_margin_drawing_enabled(const bool margin_drawing_enabled) {
	___godot_icall_void_bool(___mb.mb_set_margin_drawing_enabled, (const object *) this, margin_drawing_enabled);
}

void camera2d::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void camera2d::set_process_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_process_mode, (const object *) this, mode);
}

void camera2d::set_rotating(const bool rotating) {
	___godot_icall_void_bool(___mb.mb_set_rotating, (const object *) this, rotating);
}

void camera2d::set_screen_drawing_enabled(const bool screen_drawing_enabled) {
	___godot_icall_void_bool(___mb.mb_set_screen_drawing_enabled, (const object *) this, screen_drawing_enabled);
}

void camera2d::set_v_drag_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_v_drag_enabled, (const object *) this, enabled);
}

void camera2d::set_v_offset(const real_t ofs) {
	___godot_icall_void_float(___mb.mb_set_v_offset, (const object *) this, ofs);
}

void camera2d::set_zoom(const vector2 zoom) {
	___godot_icall_void_Vector2(___mb.mb_set_zoom, (const object *) this, zoom);
}

}