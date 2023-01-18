#include "style_box_flat.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


style_box_flat::___method_bindings style_box_flat::___mb = {};

void *style_box_flat::_detail_class_tag = nullptr;

void style_box_flat::___init_method_bindings() {
	___mb.mb_get_aa_size = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_aa_size");
	___mb.mb_get_bg_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_bg_color");
	___mb.mb_get_border_blend = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_border_blend");
	___mb.mb_get_border_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_border_color");
	___mb.mb_get_border_width = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_border_width");
	___mb.mb_get_border_width_min = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_border_width_min");
	___mb.mb_get_corner_detail = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_corner_detail");
	___mb.mb_get_corner_radius = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_corner_radius");
	___mb.mb_get_expand_margin = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_expand_margin");
	___mb.mb_get_shadow_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_shadow_color");
	___mb.mb_get_shadow_offset = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_shadow_offset");
	___mb.mb_get_shadow_size = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_shadow_size");
	___mb.mb_get_skew = gd::api->godot_method_bind_get_method("StyleBoxFlat", "get_skew");
	___mb.mb_is_anti_aliased = gd::api->godot_method_bind_get_method("StyleBoxFlat", "is_anti_aliased");
	___mb.mb_is_draw_center_enabled = gd::api->godot_method_bind_get_method("StyleBoxFlat", "is_draw_center_enabled");
	___mb.mb_set_aa_size = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_aa_size");
	___mb.mb_set_anti_aliased = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_anti_aliased");
	___mb.mb_set_bg_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_bg_color");
	___mb.mb_set_border_blend = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_border_blend");
	___mb.mb_set_border_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_border_color");
	___mb.mb_set_border_width = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_border_width");
	___mb.mb_set_border_width_all = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_border_width_all");
	___mb.mb_set_corner_detail = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_corner_detail");
	___mb.mb_set_corner_radius = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_corner_radius");
	___mb.mb_set_corner_radius_all = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_corner_radius_all");
	___mb.mb_set_corner_radius_individual = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_corner_radius_individual");
	___mb.mb_set_draw_center = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_draw_center");
	___mb.mb_set_expand_margin = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_expand_margin");
	___mb.mb_set_expand_margin_all = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_expand_margin_all");
	___mb.mb_set_expand_margin_individual = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_expand_margin_individual");
	___mb.mb_set_shadow_color = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_shadow_color");
	___mb.mb_set_shadow_offset = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_shadow_offset");
	___mb.mb_set_shadow_size = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_shadow_size");
	___mb.mb_set_skew = gd::api->godot_method_bind_get_method("StyleBoxFlat", "set_skew");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StyleBoxFlat");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

style_box_flat *style_box_flat::_new()
{
	return (style_box_flat *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StyleBoxFlat")());
}
real_t style_box_flat::get_aa_size() const {
	return ___godot_icall_float(___mb.mb_get_aa_size, (const object *) this);
}

color style_box_flat::get_bg_color() const {
	return ___godot_icall_Color(___mb.mb_get_bg_color, (const object *) this);
}

bool style_box_flat::get_border_blend() const {
	return ___godot_icall_bool(___mb.mb_get_border_blend, (const object *) this);
}

color style_box_flat::get_border_color() const {
	return ___godot_icall_Color(___mb.mb_get_border_color, (const object *) this);
}

int64_t style_box_flat::get_border_width(const int64_t margin) const {
	return ___godot_icall_int_int(___mb.mb_get_border_width, (const object *) this, margin);
}

int64_t style_box_flat::get_border_width_min() const {
	return ___godot_icall_int(___mb.mb_get_border_width_min, (const object *) this);
}

int64_t style_box_flat::get_corner_detail() const {
	return ___godot_icall_int(___mb.mb_get_corner_detail, (const object *) this);
}

int64_t style_box_flat::get_corner_radius(const int64_t corner) const {
	return ___godot_icall_int_int(___mb.mb_get_corner_radius, (const object *) this, corner);
}

real_t style_box_flat::get_expand_margin(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_expand_margin, (const object *) this, margin);
}

color style_box_flat::get_shadow_color() const {
	return ___godot_icall_Color(___mb.mb_get_shadow_color, (const object *) this);
}

vector2 style_box_flat::get_shadow_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_shadow_offset, (const object *) this);
}

int64_t style_box_flat::get_shadow_size() const {
	return ___godot_icall_int(___mb.mb_get_shadow_size, (const object *) this);
}

vector2 style_box_flat::get_skew() const {
	return ___godot_icall_Vector2(___mb.mb_get_skew, (const object *) this);
}

bool style_box_flat::is_anti_aliased() const {
	return ___godot_icall_bool(___mb.mb_is_anti_aliased, (const object *) this);
}

bool style_box_flat::is_draw_center_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_draw_center_enabled, (const object *) this);
}

void style_box_flat::set_aa_size(const real_t size) {
	___godot_icall_void_float(___mb.mb_set_aa_size, (const object *) this, size);
}

void style_box_flat::set_anti_aliased(const bool anti_aliased) {
	___godot_icall_void_bool(___mb.mb_set_anti_aliased, (const object *) this, anti_aliased);
}

void style_box_flat::set_bg_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_bg_color, (const object *) this, color_);
}

void style_box_flat::set_border_blend(const bool blend) {
	___godot_icall_void_bool(___mb.mb_set_border_blend, (const object *) this, blend);
}

void style_box_flat::set_border_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_border_color, (const object *) this, color_);
}

void style_box_flat::set_border_width(const int64_t margin, const int64_t width) {
	___godot_icall_void_int_int(___mb.mb_set_border_width, (const object *) this, margin, width);
}

void style_box_flat::set_border_width_all(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_border_width_all, (const object *) this, width);
}

void style_box_flat::set_corner_detail(const int64_t detail) {
	___godot_icall_void_int(___mb.mb_set_corner_detail, (const object *) this, detail);
}

void style_box_flat::set_corner_radius(const int64_t corner, const int64_t radius) {
	___godot_icall_void_int_int(___mb.mb_set_corner_radius, (const object *) this, corner, radius);
}

void style_box_flat::set_corner_radius_all(const int64_t radius) {
	___godot_icall_void_int(___mb.mb_set_corner_radius_all, (const object *) this, radius);
}

void style_box_flat::set_corner_radius_individual(const int64_t radius_top_left, const int64_t radius_top_right, const int64_t radius_bottom_right, const int64_t radius_bottom_left) {
	___godot_icall_void_int_int_int_int(___mb.mb_set_corner_radius_individual, (const object *) this, radius_top_left, radius_top_right, radius_bottom_right, radius_bottom_left);
}

void style_box_flat::set_draw_center(const bool draw_center) {
	___godot_icall_void_bool(___mb.mb_set_draw_center, (const object *) this, draw_center);
}

void style_box_flat::set_expand_margin(const int64_t margin, const real_t size) {
	___godot_icall_void_int_float(___mb.mb_set_expand_margin, (const object *) this, margin, size);
}

void style_box_flat::set_expand_margin_all(const real_t size) {
	___godot_icall_void_float(___mb.mb_set_expand_margin_all, (const object *) this, size);
}

void style_box_flat::set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom) {
	___godot_icall_void_float_float_float_float(___mb.mb_set_expand_margin_individual, (const object *) this, size_left, size_top, size_right, size_bottom);
}

void style_box_flat::set_shadow_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_shadow_color, (const object *) this, color_);
}

void style_box_flat::set_shadow_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_shadow_offset, (const object *) this, offset);
}

void style_box_flat::set_shadow_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_shadow_size, (const object *) this, size);
}

void style_box_flat::set_skew(const vector2 skew) {
	___godot_icall_void_Vector2(___mb.mb_set_skew, (const object *) this, skew);
}

}