#include "control.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "font.hpp"
#include "input_event.hpp"
#include "shader.hpp"
#include "style_box.hpp"
#include "texture.hpp"
#include "theme.hpp"


namespace gd {


control::___method_bindings control::___mb = {};

void *control::_detail_class_tag = nullptr;

void control::___init_method_bindings() {
	___mb.mb__clips_input = gd::api->godot_method_bind_get_method("Control", "_clips_input");
	___mb.mb__get_minimum_size = gd::api->godot_method_bind_get_method("Control", "_get_minimum_size");
	___mb.mb__get_tooltip = gd::api->godot_method_bind_get_method("Control", "_get_tooltip");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("Control", "_gui_input");
	___mb.mb__make_custom_tooltip = gd::api->godot_method_bind_get_method("Control", "_make_custom_tooltip");
	___mb.mb__override_changed = gd::api->godot_method_bind_get_method("Control", "_override_changed");
	___mb.mb__set_anchor = gd::api->godot_method_bind_get_method("Control", "_set_anchor");
	___mb.mb__set_global_position = gd::api->godot_method_bind_get_method("Control", "_set_global_position");
	___mb.mb__set_position = gd::api->godot_method_bind_get_method("Control", "_set_position");
	___mb.mb__set_size = gd::api->godot_method_bind_get_method("Control", "_set_size");
	___mb.mb__size_changed = gd::api->godot_method_bind_get_method("Control", "_size_changed");
	___mb.mb__theme_changed = gd::api->godot_method_bind_get_method("Control", "_theme_changed");
	___mb.mb__update_minimum_size = gd::api->godot_method_bind_get_method("Control", "_update_minimum_size");
	___mb.mb_accept_event = gd::api->godot_method_bind_get_method("Control", "accept_event");
	___mb.mb_add_color_override = gd::api->godot_method_bind_get_method("Control", "add_color_override");
	___mb.mb_add_constant_override = gd::api->godot_method_bind_get_method("Control", "add_constant_override");
	___mb.mb_add_font_override = gd::api->godot_method_bind_get_method("Control", "add_font_override");
	___mb.mb_add_icon_override = gd::api->godot_method_bind_get_method("Control", "add_icon_override");
	___mb.mb_add_shader_override = gd::api->godot_method_bind_get_method("Control", "add_shader_override");
	___mb.mb_add_stylebox_override = gd::api->godot_method_bind_get_method("Control", "add_stylebox_override");
	___mb.mb_can_drop_data = gd::api->godot_method_bind_get_method("Control", "can_drop_data");
	___mb.mb_drop_data = gd::api->godot_method_bind_get_method("Control", "drop_data");
	___mb.mb_find_next_valid_focus = gd::api->godot_method_bind_get_method("Control", "find_next_valid_focus");
	___mb.mb_find_prev_valid_focus = gd::api->godot_method_bind_get_method("Control", "find_prev_valid_focus");
	___mb.mb_force_drag = gd::api->godot_method_bind_get_method("Control", "force_drag");
	___mb.mb_get_anchor = gd::api->godot_method_bind_get_method("Control", "get_anchor");
	___mb.mb_get_begin = gd::api->godot_method_bind_get_method("Control", "get_begin");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Control", "get_color");
	___mb.mb_get_combined_minimum_size = gd::api->godot_method_bind_get_method("Control", "get_combined_minimum_size");
	___mb.mb_get_constant = gd::api->godot_method_bind_get_method("Control", "get_constant");
	___mb.mb_get_cursor_shape = gd::api->godot_method_bind_get_method("Control", "get_cursor_shape");
	___mb.mb_get_custom_minimum_size = gd::api->godot_method_bind_get_method("Control", "get_custom_minimum_size");
	___mb.mb_get_default_cursor_shape = gd::api->godot_method_bind_get_method("Control", "get_default_cursor_shape");
	___mb.mb_get_drag_data = gd::api->godot_method_bind_get_method("Control", "get_drag_data");
	___mb.mb_get_end = gd::api->godot_method_bind_get_method("Control", "get_end");
	___mb.mb_get_focus_mode = gd::api->godot_method_bind_get_method("Control", "get_focus_mode");
	___mb.mb_get_focus_neighbour = gd::api->godot_method_bind_get_method("Control", "get_focus_neighbour");
	___mb.mb_get_focus_next = gd::api->godot_method_bind_get_method("Control", "get_focus_next");
	___mb.mb_get_focus_owner = gd::api->godot_method_bind_get_method("Control", "get_focus_owner");
	___mb.mb_get_focus_previous = gd::api->godot_method_bind_get_method("Control", "get_focus_previous");
	___mb.mb_get_font = gd::api->godot_method_bind_get_method("Control", "get_font");
	___mb.mb_get_global_position = gd::api->godot_method_bind_get_method("Control", "get_global_position");
	___mb.mb_get_global_rect = gd::api->godot_method_bind_get_method("Control", "get_global_rect");
	___mb.mb_get_h_grow_direction = gd::api->godot_method_bind_get_method("Control", "get_h_grow_direction");
	___mb.mb_get_h_size_flags = gd::api->godot_method_bind_get_method("Control", "get_h_size_flags");
	___mb.mb_get_icon = gd::api->godot_method_bind_get_method("Control", "get_icon");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("Control", "get_margin");
	___mb.mb_get_minimum_size = gd::api->godot_method_bind_get_method("Control", "get_minimum_size");
	___mb.mb_get_mouse_filter = gd::api->godot_method_bind_get_method("Control", "get_mouse_filter");
	___mb.mb_get_parent_area_size = gd::api->godot_method_bind_get_method("Control", "get_parent_area_size");
	___mb.mb_get_parent_control = gd::api->godot_method_bind_get_method("Control", "get_parent_control");
	___mb.mb_get_pass_on_modal_close_click = gd::api->godot_method_bind_get_method("Control", "get_pass_on_modal_close_click");
	___mb.mb_get_pivot_offset = gd::api->godot_method_bind_get_method("Control", "get_pivot_offset");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("Control", "get_position");
	___mb.mb_get_rect = gd::api->godot_method_bind_get_method("Control", "get_rect");
	___mb.mb_get_rotation = gd::api->godot_method_bind_get_method("Control", "get_rotation");
	___mb.mb_get_rotation_degrees = gd::api->godot_method_bind_get_method("Control", "get_rotation_degrees");
	___mb.mb_get_scale = gd::api->godot_method_bind_get_method("Control", "get_scale");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("Control", "get_size");
	___mb.mb_get_stretch_ratio = gd::api->godot_method_bind_get_method("Control", "get_stretch_ratio");
	___mb.mb_get_stylebox = gd::api->godot_method_bind_get_method("Control", "get_stylebox");
	___mb.mb_get_theme = gd::api->godot_method_bind_get_method("Control", "get_theme");
	___mb.mb_get_theme_default_font = gd::api->godot_method_bind_get_method("Control", "get_theme_default_font");
	___mb.mb_get_theme_type_variation = gd::api->godot_method_bind_get_method("Control", "get_theme_type_variation");
	___mb.mb_get_tooltip = gd::api->godot_method_bind_get_method("Control", "get_tooltip");
	___mb.mb_get_v_grow_direction = gd::api->godot_method_bind_get_method("Control", "get_v_grow_direction");
	___mb.mb_get_v_size_flags = gd::api->godot_method_bind_get_method("Control", "get_v_size_flags");
	___mb.mb_grab_click_focus = gd::api->godot_method_bind_get_method("Control", "grab_click_focus");
	___mb.mb_grab_focus = gd::api->godot_method_bind_get_method("Control", "grab_focus");
	___mb.mb_has_color = gd::api->godot_method_bind_get_method("Control", "has_color");
	___mb.mb_has_color_override = gd::api->godot_method_bind_get_method("Control", "has_color_override");
	___mb.mb_has_constant = gd::api->godot_method_bind_get_method("Control", "has_constant");
	___mb.mb_has_constant_override = gd::api->godot_method_bind_get_method("Control", "has_constant_override");
	___mb.mb_has_focus = gd::api->godot_method_bind_get_method("Control", "has_focus");
	___mb.mb_has_font = gd::api->godot_method_bind_get_method("Control", "has_font");
	___mb.mb_has_font_override = gd::api->godot_method_bind_get_method("Control", "has_font_override");
	___mb.mb_has_icon = gd::api->godot_method_bind_get_method("Control", "has_icon");
	___mb.mb_has_icon_override = gd::api->godot_method_bind_get_method("Control", "has_icon_override");
	___mb.mb_has_point = gd::api->godot_method_bind_get_method("Control", "has_point");
	___mb.mb_has_shader_override = gd::api->godot_method_bind_get_method("Control", "has_shader_override");
	___mb.mb_has_stylebox = gd::api->godot_method_bind_get_method("Control", "has_stylebox");
	___mb.mb_has_stylebox_override = gd::api->godot_method_bind_get_method("Control", "has_stylebox_override");
	___mb.mb_is_clipping_contents = gd::api->godot_method_bind_get_method("Control", "is_clipping_contents");
	___mb.mb_is_drag_successful = gd::api->godot_method_bind_get_method("Control", "is_drag_successful");
	___mb.mb_minimum_size_changed = gd::api->godot_method_bind_get_method("Control", "minimum_size_changed");
	___mb.mb_release_focus = gd::api->godot_method_bind_get_method("Control", "release_focus");
	___mb.mb_remove_color_override = gd::api->godot_method_bind_get_method("Control", "remove_color_override");
	___mb.mb_remove_constant_override = gd::api->godot_method_bind_get_method("Control", "remove_constant_override");
	___mb.mb_remove_font_override = gd::api->godot_method_bind_get_method("Control", "remove_font_override");
	___mb.mb_remove_icon_override = gd::api->godot_method_bind_get_method("Control", "remove_icon_override");
	___mb.mb_remove_shader_override = gd::api->godot_method_bind_get_method("Control", "remove_shader_override");
	___mb.mb_remove_stylebox_override = gd::api->godot_method_bind_get_method("Control", "remove_stylebox_override");
	___mb.mb_set_anchor = gd::api->godot_method_bind_get_method("Control", "set_anchor");
	___mb.mb_set_anchor_and_margin = gd::api->godot_method_bind_get_method("Control", "set_anchor_and_margin");
	___mb.mb_set_anchors_and_margins_preset = gd::api->godot_method_bind_get_method("Control", "set_anchors_and_margins_preset");
	___mb.mb_set_anchors_preset = gd::api->godot_method_bind_get_method("Control", "set_anchors_preset");
	___mb.mb_set_begin = gd::api->godot_method_bind_get_method("Control", "set_begin");
	___mb.mb_set_clip_contents = gd::api->godot_method_bind_get_method("Control", "set_clip_contents");
	___mb.mb_set_custom_minimum_size = gd::api->godot_method_bind_get_method("Control", "set_custom_minimum_size");
	___mb.mb_set_default_cursor_shape = gd::api->godot_method_bind_get_method("Control", "set_default_cursor_shape");
	___mb.mb_set_drag_forwarding = gd::api->godot_method_bind_get_method("Control", "set_drag_forwarding");
	___mb.mb_set_drag_preview = gd::api->godot_method_bind_get_method("Control", "set_drag_preview");
	___mb.mb_set_end = gd::api->godot_method_bind_get_method("Control", "set_end");
	___mb.mb_set_focus_mode = gd::api->godot_method_bind_get_method("Control", "set_focus_mode");
	___mb.mb_set_focus_neighbour = gd::api->godot_method_bind_get_method("Control", "set_focus_neighbour");
	___mb.mb_set_focus_next = gd::api->godot_method_bind_get_method("Control", "set_focus_next");
	___mb.mb_set_focus_previous = gd::api->godot_method_bind_get_method("Control", "set_focus_previous");
	___mb.mb_set_global_position = gd::api->godot_method_bind_get_method("Control", "set_global_position");
	___mb.mb_set_h_grow_direction = gd::api->godot_method_bind_get_method("Control", "set_h_grow_direction");
	___mb.mb_set_h_size_flags = gd::api->godot_method_bind_get_method("Control", "set_h_size_flags");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("Control", "set_margin");
	___mb.mb_set_margins_preset = gd::api->godot_method_bind_get_method("Control", "set_margins_preset");
	___mb.mb_set_mouse_filter = gd::api->godot_method_bind_get_method("Control", "set_mouse_filter");
	___mb.mb_set_pass_on_modal_close_click = gd::api->godot_method_bind_get_method("Control", "set_pass_on_modal_close_click");
	___mb.mb_set_pivot_offset = gd::api->godot_method_bind_get_method("Control", "set_pivot_offset");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("Control", "set_position");
	___mb.mb_set_rotation = gd::api->godot_method_bind_get_method("Control", "set_rotation");
	___mb.mb_set_rotation_degrees = gd::api->godot_method_bind_get_method("Control", "set_rotation_degrees");
	___mb.mb_set_scale = gd::api->godot_method_bind_get_method("Control", "set_scale");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("Control", "set_size");
	___mb.mb_set_stretch_ratio = gd::api->godot_method_bind_get_method("Control", "set_stretch_ratio");
	___mb.mb_set_theme = gd::api->godot_method_bind_get_method("Control", "set_theme");
	___mb.mb_set_theme_type_variation = gd::api->godot_method_bind_get_method("Control", "set_theme_type_variation");
	___mb.mb_set_tooltip = gd::api->godot_method_bind_get_method("Control", "set_tooltip");
	___mb.mb_set_v_grow_direction = gd::api->godot_method_bind_get_method("Control", "set_v_grow_direction");
	___mb.mb_set_v_size_flags = gd::api->godot_method_bind_get_method("Control", "set_v_size_flags");
	___mb.mb_show_modal = gd::api->godot_method_bind_get_method("Control", "show_modal");
	___mb.mb_warp_mouse = gd::api->godot_method_bind_get_method("Control", "warp_mouse");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Control");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

control *control::_new()
{
	return (control *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Control")());
}
bool control::_clips_input() {
	return ___godot_icall_bool(___mb.mb__clips_input, (const object *) this);
}

vector2 control::_get_minimum_size() {
	return ___godot_icall_Vector2(___mb.mb__get_minimum_size, (const object *) this);
}

string control::_get_tooltip() const {
	return ___godot_icall_String(___mb.mb__get_tooltip, (const object *) this);
}

void control::_gui_input(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, event.ptr());
}

control *control::_make_custom_tooltip(const string for_text) {
	return (control *) ___godot_icall_Object_String(___mb.mb__make_custom_tooltip, (const object *) this, for_text);
}

void control::_override_changed() {
	___godot_icall_void(___mb.mb__override_changed, (const object *) this);
}

void control::_set_anchor(const int64_t margin, const real_t anchor) {
	___godot_icall_void_int_float(___mb.mb__set_anchor, (const object *) this, margin, anchor);
}

void control::_set_global_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb__set_global_position, (const object *) this, position);
}

void control::_set_position(const vector2 margin) {
	___godot_icall_void_Vector2(___mb.mb__set_position, (const object *) this, margin);
}

void control::_set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb__set_size, (const object *) this, size);
}

void control::_size_changed() {
	___godot_icall_void(___mb.mb__size_changed, (const object *) this);
}

void control::_theme_changed() {
	___godot_icall_void(___mb.mb__theme_changed, (const object *) this);
}

void control::_update_minimum_size() {
	___godot_icall_void(___mb.mb__update_minimum_size, (const object *) this);
}

void control::accept_event() {
	___godot_icall_void(___mb.mb_accept_event, (const object *) this);
}

void control::add_color_override(const string name, const color color_) {
	___godot_icall_void_String_Color(___mb.mb_add_color_override, (const object *) this, name, color_);
}

void control::add_constant_override(const string name, const int64_t constant) {
	___godot_icall_void_String_int(___mb.mb_add_constant_override, (const object *) this, name, constant);
}

void control::add_font_override(const string name, const ref<font> font_) {
	___godot_icall_void_String_Object(___mb.mb_add_font_override, (const object *) this, name, font_.ptr());
}

void control::add_icon_override(const string name, const ref<texture> texture_) {
	___godot_icall_void_String_Object(___mb.mb_add_icon_override, (const object *) this, name, texture_.ptr());
}

void control::add_shader_override(const string name, const ref<shader> shader_) {
	___godot_icall_void_String_Object(___mb.mb_add_shader_override, (const object *) this, name, shader_.ptr());
}

void control::add_stylebox_override(const string name, const ref<style_box> stylebox) {
	___godot_icall_void_String_Object(___mb.mb_add_stylebox_override, (const object *) this, name, stylebox.ptr());
}

bool control::can_drop_data(const vector2 position, const variant data) {
	return ___godot_icall_bool_Vector2_Variant(___mb.mb_can_drop_data, (const object *) this, position, data);
}

void control::drop_data(const vector2 position, const variant data) {
	___godot_icall_void_Vector2_Variant(___mb.mb_drop_data, (const object *) this, position, data);
}

control *control::find_next_valid_focus() const {
	return (control *) ___godot_icall_Object(___mb.mb_find_next_valid_focus, (const object *) this);
}

control *control::find_prev_valid_focus() const {
	return (control *) ___godot_icall_Object(___mb.mb_find_prev_valid_focus, (const object *) this);
}

void control::force_drag(const variant data, const control *preview) {
	___godot_icall_void_Variant_Object(___mb.mb_force_drag, (const object *) this, data, preview);
}

real_t control::get_anchor(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_anchor, (const object *) this, margin);
}

vector2 control::get_begin() const {
	return ___godot_icall_Vector2(___mb.mb_get_begin, (const object *) this);
}

color control::get_color(const string name, const string theme_type) const {
	return ___godot_icall_Color_String_String(___mb.mb_get_color, (const object *) this, name, theme_type);
}

vector2 control::get_combined_minimum_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_combined_minimum_size, (const object *) this);
}

int64_t control::get_constant(const string name, const string theme_type) const {
	return ___godot_icall_int_String_String(___mb.mb_get_constant, (const object *) this, name, theme_type);
}

control::CursorShape control::get_cursor_shape(const vector2 position) const {
	return (control::CursorShape) ___godot_icall_int_Vector2(___mb.mb_get_cursor_shape, (const object *) this, position);
}

vector2 control::get_custom_minimum_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_custom_minimum_size, (const object *) this);
}

control::CursorShape control::get_default_cursor_shape() const {
	return (control::CursorShape) ___godot_icall_int(___mb.mb_get_default_cursor_shape, (const object *) this);
}

variant control::get_drag_data(const vector2 position) {
	return ___godot_icall_Variant_Vector2(___mb.mb_get_drag_data, (const object *) this, position);
}

vector2 control::get_end() const {
	return ___godot_icall_Vector2(___mb.mb_get_end, (const object *) this);
}

control::FocusMode control::get_focus_mode() const {
	return (control::FocusMode) ___godot_icall_int(___mb.mb_get_focus_mode, (const object *) this);
}

node_path control::get_focus_neighbour(const int64_t margin) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_focus_neighbour, (const object *) this, margin);
}

node_path control::get_focus_next() const {
	return ___godot_icall_NodePath(___mb.mb_get_focus_next, (const object *) this);
}

control *control::get_focus_owner() const {
	return (control *) ___godot_icall_Object(___mb.mb_get_focus_owner, (const object *) this);
}

node_path control::get_focus_previous() const {
	return ___godot_icall_NodePath(___mb.mb_get_focus_previous, (const object *) this);
}

ref<font> control::get_font(const string name, const string theme_type) const {
	return ref<font>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_font, (const object *) this, name, theme_type));
}

vector2 control::get_global_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_global_position, (const object *) this);
}

rect2 control::get_global_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_global_rect, (const object *) this);
}

control::GrowDirection control::get_h_grow_direction() const {
	return (control::GrowDirection) ___godot_icall_int(___mb.mb_get_h_grow_direction, (const object *) this);
}

int64_t control::get_h_size_flags() const {
	return ___godot_icall_int(___mb.mb_get_h_size_flags, (const object *) this);
}

ref<texture> control::get_icon(const string name, const string theme_type) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_icon, (const object *) this, name, theme_type));
}

real_t control::get_margin(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_margin, (const object *) this, margin);
}

vector2 control::get_minimum_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_minimum_size, (const object *) this);
}

control::MouseFilter control::get_mouse_filter() const {
	return (control::MouseFilter) ___godot_icall_int(___mb.mb_get_mouse_filter, (const object *) this);
}

vector2 control::get_parent_area_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_parent_area_size, (const object *) this);
}

control *control::get_parent_control() const {
	return (control *) ___godot_icall_Object(___mb.mb_get_parent_control, (const object *) this);
}

bool control::get_pass_on_modal_close_click() const {
	return ___godot_icall_bool(___mb.mb_get_pass_on_modal_close_click, (const object *) this);
}

vector2 control::get_pivot_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_pivot_offset, (const object *) this);
}

vector2 control::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

rect2 control::get_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_rect, (const object *) this);
}

real_t control::get_rotation() const {
	return ___godot_icall_float(___mb.mb_get_rotation, (const object *) this);
}

real_t control::get_rotation_degrees() const {
	return ___godot_icall_float(___mb.mb_get_rotation_degrees, (const object *) this);
}

vector2 control::get_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_scale, (const object *) this);
}

vector2 control::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

real_t control::get_stretch_ratio() const {
	return ___godot_icall_float(___mb.mb_get_stretch_ratio, (const object *) this);
}

ref<style_box> control::get_stylebox(const string name, const string theme_type) const {
	return ref<style_box>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_stylebox, (const object *) this, name, theme_type));
}

ref<theme> control::get_theme() const {
	return ref<theme>::__internal_constructor(___godot_icall_Object(___mb.mb_get_theme, (const object *) this));
}

ref<font> control::get_theme_default_font() const {
	return ref<font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_theme_default_font, (const object *) this));
}

string control::get_theme_type_variation() const {
	return ___godot_icall_String(___mb.mb_get_theme_type_variation, (const object *) this);
}

string control::get_tooltip(const vector2 at_position) const {
	return ___godot_icall_String_Vector2(___mb.mb_get_tooltip, (const object *) this, at_position);
}

control::GrowDirection control::get_v_grow_direction() const {
	return (control::GrowDirection) ___godot_icall_int(___mb.mb_get_v_grow_direction, (const object *) this);
}

int64_t control::get_v_size_flags() const {
	return ___godot_icall_int(___mb.mb_get_v_size_flags, (const object *) this);
}

void control::grab_click_focus() {
	___godot_icall_void(___mb.mb_grab_click_focus, (const object *) this);
}

void control::grab_focus() {
	___godot_icall_void(___mb.mb_grab_focus, (const object *) this);
}

bool control::has_color(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_color, (const object *) this, name, theme_type);
}

bool control::has_color_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_color_override, (const object *) this, name);
}

bool control::has_constant(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_constant, (const object *) this, name, theme_type);
}

bool control::has_constant_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_constant_override, (const object *) this, name);
}

bool control::has_focus() const {
	return ___godot_icall_bool(___mb.mb_has_focus, (const object *) this);
}

bool control::has_font(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_font, (const object *) this, name, theme_type);
}

bool control::has_font_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_font_override, (const object *) this, name);
}

bool control::has_icon(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_icon, (const object *) this, name, theme_type);
}

bool control::has_icon_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_icon_override, (const object *) this, name);
}

bool control::has_point(const vector2 point) {
	return ___godot_icall_bool_Vector2(___mb.mb_has_point, (const object *) this, point);
}

bool control::has_shader_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_shader_override, (const object *) this, name);
}

bool control::has_stylebox(const string name, const string theme_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_stylebox, (const object *) this, name, theme_type);
}

bool control::has_stylebox_override(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_stylebox_override, (const object *) this, name);
}

bool control::is_clipping_contents() {
	return ___godot_icall_bool(___mb.mb_is_clipping_contents, (const object *) this);
}

bool control::is_drag_successful() const {
	return ___godot_icall_bool(___mb.mb_is_drag_successful, (const object *) this);
}

void control::minimum_size_changed() {
	___godot_icall_void(___mb.mb_minimum_size_changed, (const object *) this);
}

void control::release_focus() {
	___godot_icall_void(___mb.mb_release_focus, (const object *) this);
}

void control::remove_color_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_color_override, (const object *) this, name);
}

void control::remove_constant_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_constant_override, (const object *) this, name);
}

void control::remove_font_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_font_override, (const object *) this, name);
}

void control::remove_icon_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_icon_override, (const object *) this, name);
}

void control::remove_shader_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_shader_override, (const object *) this, name);
}

void control::remove_stylebox_override(const string name) {
	___godot_icall_void_String(___mb.mb_remove_stylebox_override, (const object *) this, name);
}

void control::set_anchor(const int64_t margin, const real_t anchor, const bool keep_margin, const bool push_opposite_anchor) {
	___godot_icall_void_int_float_bool_bool(___mb.mb_set_anchor, (const object *) this, margin, anchor, keep_margin, push_opposite_anchor);
}

void control::set_anchor_and_margin(const int64_t margin, const real_t anchor, const real_t offset, const bool push_opposite_anchor) {
	___godot_icall_void_int_float_float_bool(___mb.mb_set_anchor_and_margin, (const object *) this, margin, anchor, offset, push_opposite_anchor);
}

void control::set_anchors_and_margins_preset(const int64_t preset, const int64_t resize_mode, const int64_t margin) {
	___godot_icall_void_int_int_int(___mb.mb_set_anchors_and_margins_preset, (const object *) this, preset, resize_mode, margin);
}

void control::set_anchors_preset(const int64_t preset, const bool keep_margins) {
	___godot_icall_void_int_bool(___mb.mb_set_anchors_preset, (const object *) this, preset, keep_margins);
}

void control::set_begin(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_begin, (const object *) this, position);
}

void control::set_clip_contents(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clip_contents, (const object *) this, enable);
}

void control::set_custom_minimum_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_custom_minimum_size, (const object *) this, size);
}

void control::set_default_cursor_shape(const int64_t shape_) {
	___godot_icall_void_int(___mb.mb_set_default_cursor_shape, (const object *) this, shape_);
}

void control::set_drag_forwarding(const control *target) {
	___godot_icall_void_Object(___mb.mb_set_drag_forwarding, (const object *) this, target);
}

void control::set_drag_preview(const control *control_) {
	___godot_icall_void_Object(___mb.mb_set_drag_preview, (const object *) this, control_);
}

void control::set_end(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_end, (const object *) this, position);
}

void control::set_focus_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_focus_mode, (const object *) this, mode);
}

void control::set_focus_neighbour(const int64_t margin, const node_path neighbour) {
	___godot_icall_void_int_NodePath(___mb.mb_set_focus_neighbour, (const object *) this, margin, neighbour);
}

void control::set_focus_next(const node_path next) {
	___godot_icall_void_NodePath(___mb.mb_set_focus_next, (const object *) this, next);
}

void control::set_focus_previous(const node_path previous) {
	___godot_icall_void_NodePath(___mb.mb_set_focus_previous, (const object *) this, previous);
}

void control::set_global_position(const vector2 position, const bool keep_margins) {
	___godot_icall_void_Vector2_bool(___mb.mb_set_global_position, (const object *) this, position, keep_margins);
}

void control::set_h_grow_direction(const int64_t direction) {
	___godot_icall_void_int(___mb.mb_set_h_grow_direction, (const object *) this, direction);
}

void control::set_h_size_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_h_size_flags, (const object *) this, flags);
}

void control::set_margin(const int64_t margin, const real_t offset) {
	___godot_icall_void_int_float(___mb.mb_set_margin, (const object *) this, margin, offset);
}

void control::set_margins_preset(const int64_t preset, const int64_t resize_mode, const int64_t margin) {
	___godot_icall_void_int_int_int(___mb.mb_set_margins_preset, (const object *) this, preset, resize_mode, margin);
}

void control::set_mouse_filter(const int64_t filter) {
	___godot_icall_void_int(___mb.mb_set_mouse_filter, (const object *) this, filter);
}

void control::set_pass_on_modal_close_click(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_pass_on_modal_close_click, (const object *) this, enabled);
}

void control::set_pivot_offset(const vector2 pivot_offset) {
	___godot_icall_void_Vector2(___mb.mb_set_pivot_offset, (const object *) this, pivot_offset);
}

void control::set_position(const vector2 position, const bool keep_margins) {
	___godot_icall_void_Vector2_bool(___mb.mb_set_position, (const object *) this, position, keep_margins);
}

void control::set_rotation(const real_t radians) {
	___godot_icall_void_float(___mb.mb_set_rotation, (const object *) this, radians);
}

void control::set_rotation_degrees(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_rotation_degrees, (const object *) this, degrees);
}

void control::set_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_scale, (const object *) this, scale);
}

void control::set_size(const vector2 size, const bool keep_margins) {
	___godot_icall_void_Vector2_bool(___mb.mb_set_size, (const object *) this, size, keep_margins);
}

void control::set_stretch_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_stretch_ratio, (const object *) this, ratio);
}

void control::set_theme(const ref<theme> theme_) {
	___godot_icall_void_Object(___mb.mb_set_theme, (const object *) this, theme_.ptr());
}

void control::set_theme_type_variation(const string theme_type) {
	___godot_icall_void_String(___mb.mb_set_theme_type_variation, (const object *) this, theme_type);
}

void control::set_tooltip(const string tooltip) {
	___godot_icall_void_String(___mb.mb_set_tooltip, (const object *) this, tooltip);
}

void control::set_v_grow_direction(const int64_t direction) {
	___godot_icall_void_int(___mb.mb_set_v_grow_direction, (const object *) this, direction);
}

void control::set_v_size_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_v_size_flags, (const object *) this, flags);
}

void control::show_modal(const bool exclusive) {
	___godot_icall_void_bool(___mb.mb_show_modal, (const object *) this, exclusive);
}

void control::warp_mouse(const vector2 to_position) {
	___godot_icall_void_Vector2(___mb.mb_warp_mouse, (const object *) this, to_position);
}

}