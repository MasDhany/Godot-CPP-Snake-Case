#include "style_box_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


style_box_texture::___method_bindings style_box_texture::___mb = {};

void *style_box_texture::_detail_class_tag = nullptr;

void style_box_texture::___init_method_bindings() {
	___mb.mb_get_expand_margin_size = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_expand_margin_size");
	___mb.mb_get_h_axis_stretch_mode = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_h_axis_stretch_mode");
	___mb.mb_get_margin_size = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_margin_size");
	___mb.mb_get_modulate = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_modulate");
	___mb.mb_get_normal_map = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_normal_map");
	___mb.mb_get_region_rect = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_region_rect");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_texture");
	___mb.mb_get_v_axis_stretch_mode = gd::api->godot_method_bind_get_method("StyleBoxTexture", "get_v_axis_stretch_mode");
	___mb.mb_is_draw_center_enabled = gd::api->godot_method_bind_get_method("StyleBoxTexture", "is_draw_center_enabled");
	___mb.mb_set_draw_center = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_draw_center");
	___mb.mb_set_expand_margin_all = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_expand_margin_all");
	___mb.mb_set_expand_margin_individual = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_expand_margin_individual");
	___mb.mb_set_expand_margin_size = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_expand_margin_size");
	___mb.mb_set_h_axis_stretch_mode = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_h_axis_stretch_mode");
	___mb.mb_set_margin_size = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_margin_size");
	___mb.mb_set_modulate = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_modulate");
	___mb.mb_set_normal_map = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_normal_map");
	___mb.mb_set_region_rect = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_region_rect");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_texture");
	___mb.mb_set_v_axis_stretch_mode = gd::api->godot_method_bind_get_method("StyleBoxTexture", "set_v_axis_stretch_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StyleBoxTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

style_box_texture *style_box_texture::_new()
{
	return (style_box_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StyleBoxTexture")());
}
real_t style_box_texture::get_expand_margin_size(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_expand_margin_size, (const object *) this, margin);
}

style_box_texture::AxisStretchMode style_box_texture::get_h_axis_stretch_mode() const {
	return (style_box_texture::AxisStretchMode) ___godot_icall_int(___mb.mb_get_h_axis_stretch_mode, (const object *) this);
}

real_t style_box_texture::get_margin_size(const int64_t margin) const {
	return ___godot_icall_float_int(___mb.mb_get_margin_size, (const object *) this, margin);
}

color style_box_texture::get_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_modulate, (const object *) this);
}

ref<texture> style_box_texture::get_normal_map() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_map, (const object *) this));
}

rect2 style_box_texture::get_region_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_region_rect, (const object *) this);
}

ref<texture> style_box_texture::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

style_box_texture::AxisStretchMode style_box_texture::get_v_axis_stretch_mode() const {
	return (style_box_texture::AxisStretchMode) ___godot_icall_int(___mb.mb_get_v_axis_stretch_mode, (const object *) this);
}

bool style_box_texture::is_draw_center_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_draw_center_enabled, (const object *) this);
}

void style_box_texture::set_draw_center(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_draw_center, (const object *) this, enable);
}

void style_box_texture::set_expand_margin_all(const real_t size) {
	___godot_icall_void_float(___mb.mb_set_expand_margin_all, (const object *) this, size);
}

void style_box_texture::set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom) {
	___godot_icall_void_float_float_float_float(___mb.mb_set_expand_margin_individual, (const object *) this, size_left, size_top, size_right, size_bottom);
}

void style_box_texture::set_expand_margin_size(const int64_t margin, const real_t size) {
	___godot_icall_void_int_float(___mb.mb_set_expand_margin_size, (const object *) this, margin, size);
}

void style_box_texture::set_h_axis_stretch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_h_axis_stretch_mode, (const object *) this, mode);
}

void style_box_texture::set_margin_size(const int64_t margin, const real_t size) {
	___godot_icall_void_int_float(___mb.mb_set_margin_size, (const object *) this, margin, size);
}

void style_box_texture::set_modulate(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_modulate, (const object *) this, color_);
}

void style_box_texture::set_normal_map(const ref<texture> normal_map) {
	___godot_icall_void_Object(___mb.mb_set_normal_map, (const object *) this, normal_map.ptr());
}

void style_box_texture::set_region_rect(const rect2 region) {
	___godot_icall_void_Rect2(___mb.mb_set_region_rect, (const object *) this, region);
}

void style_box_texture::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void style_box_texture::set_v_axis_stretch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_v_axis_stretch_mode, (const object *) this, mode);
}

}