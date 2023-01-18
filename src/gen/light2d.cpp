#include "light2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


light2d::___method_bindings light2d::___mb = {};

void *light2d::_detail_class_tag = nullptr;

void light2d::___init_method_bindings() {
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Light2D", "get_color");
	___mb.mb_get_energy = gd::api->godot_method_bind_get_method("Light2D", "get_energy");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("Light2D", "get_height");
	___mb.mb_get_item_cull_mask = gd::api->godot_method_bind_get_method("Light2D", "get_item_cull_mask");
	___mb.mb_get_item_shadow_cull_mask = gd::api->godot_method_bind_get_method("Light2D", "get_item_shadow_cull_mask");
	___mb.mb_get_layer_range_max = gd::api->godot_method_bind_get_method("Light2D", "get_layer_range_max");
	___mb.mb_get_layer_range_min = gd::api->godot_method_bind_get_method("Light2D", "get_layer_range_min");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("Light2D", "get_mode");
	___mb.mb_get_shadow_buffer_size = gd::api->godot_method_bind_get_method("Light2D", "get_shadow_buffer_size");
	___mb.mb_get_shadow_color = gd::api->godot_method_bind_get_method("Light2D", "get_shadow_color");
	___mb.mb_get_shadow_filter = gd::api->godot_method_bind_get_method("Light2D", "get_shadow_filter");
	___mb.mb_get_shadow_gradient_length = gd::api->godot_method_bind_get_method("Light2D", "get_shadow_gradient_length");
	___mb.mb_get_shadow_smooth = gd::api->godot_method_bind_get_method("Light2D", "get_shadow_smooth");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Light2D", "get_texture");
	___mb.mb_get_texture_offset = gd::api->godot_method_bind_get_method("Light2D", "get_texture_offset");
	___mb.mb_get_texture_scale = gd::api->godot_method_bind_get_method("Light2D", "get_texture_scale");
	___mb.mb_get_z_range_max = gd::api->godot_method_bind_get_method("Light2D", "get_z_range_max");
	___mb.mb_get_z_range_min = gd::api->godot_method_bind_get_method("Light2D", "get_z_range_min");
	___mb.mb_is_editor_only = gd::api->godot_method_bind_get_method("Light2D", "is_editor_only");
	___mb.mb_is_enabled = gd::api->godot_method_bind_get_method("Light2D", "is_enabled");
	___mb.mb_is_shadow_enabled = gd::api->godot_method_bind_get_method("Light2D", "is_shadow_enabled");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("Light2D", "set_color");
	___mb.mb_set_editor_only = gd::api->godot_method_bind_get_method("Light2D", "set_editor_only");
	___mb.mb_set_enabled = gd::api->godot_method_bind_get_method("Light2D", "set_enabled");
	___mb.mb_set_energy = gd::api->godot_method_bind_get_method("Light2D", "set_energy");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("Light2D", "set_height");
	___mb.mb_set_item_cull_mask = gd::api->godot_method_bind_get_method("Light2D", "set_item_cull_mask");
	___mb.mb_set_item_shadow_cull_mask = gd::api->godot_method_bind_get_method("Light2D", "set_item_shadow_cull_mask");
	___mb.mb_set_layer_range_max = gd::api->godot_method_bind_get_method("Light2D", "set_layer_range_max");
	___mb.mb_set_layer_range_min = gd::api->godot_method_bind_get_method("Light2D", "set_layer_range_min");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("Light2D", "set_mode");
	___mb.mb_set_shadow_buffer_size = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_buffer_size");
	___mb.mb_set_shadow_color = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_color");
	___mb.mb_set_shadow_enabled = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_enabled");
	___mb.mb_set_shadow_filter = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_filter");
	___mb.mb_set_shadow_gradient_length = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_gradient_length");
	___mb.mb_set_shadow_smooth = gd::api->godot_method_bind_get_method("Light2D", "set_shadow_smooth");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Light2D", "set_texture");
	___mb.mb_set_texture_offset = gd::api->godot_method_bind_get_method("Light2D", "set_texture_offset");
	___mb.mb_set_texture_scale = gd::api->godot_method_bind_get_method("Light2D", "set_texture_scale");
	___mb.mb_set_z_range_max = gd::api->godot_method_bind_get_method("Light2D", "set_z_range_max");
	___mb.mb_set_z_range_min = gd::api->godot_method_bind_get_method("Light2D", "set_z_range_min");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Light2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

light2d *light2d::_new()
{
	return (light2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Light2D")());
}
color light2d::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

real_t light2d::get_energy() const {
	return ___godot_icall_float(___mb.mb_get_energy, (const object *) this);
}

real_t light2d::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

int64_t light2d::get_item_cull_mask() const {
	return ___godot_icall_int(___mb.mb_get_item_cull_mask, (const object *) this);
}

int64_t light2d::get_item_shadow_cull_mask() const {
	return ___godot_icall_int(___mb.mb_get_item_shadow_cull_mask, (const object *) this);
}

int64_t light2d::get_layer_range_max() const {
	return ___godot_icall_int(___mb.mb_get_layer_range_max, (const object *) this);
}

int64_t light2d::get_layer_range_min() const {
	return ___godot_icall_int(___mb.mb_get_layer_range_min, (const object *) this);
}

light2d::Mode light2d::get_mode() const {
	return (light2d::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

int64_t light2d::get_shadow_buffer_size() const {
	return ___godot_icall_int(___mb.mb_get_shadow_buffer_size, (const object *) this);
}

color light2d::get_shadow_color() const {
	return ___godot_icall_Color(___mb.mb_get_shadow_color, (const object *) this);
}

light2d::ShadowFilter light2d::get_shadow_filter() const {
	return (light2d::ShadowFilter) ___godot_icall_int(___mb.mb_get_shadow_filter, (const object *) this);
}

real_t light2d::get_shadow_gradient_length() const {
	return ___godot_icall_float(___mb.mb_get_shadow_gradient_length, (const object *) this);
}

real_t light2d::get_shadow_smooth() const {
	return ___godot_icall_float(___mb.mb_get_shadow_smooth, (const object *) this);
}

ref<texture> light2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

vector2 light2d::get_texture_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_texture_offset, (const object *) this);
}

real_t light2d::get_texture_scale() const {
	return ___godot_icall_float(___mb.mb_get_texture_scale, (const object *) this);
}

int64_t light2d::get_z_range_max() const {
	return ___godot_icall_int(___mb.mb_get_z_range_max, (const object *) this);
}

int64_t light2d::get_z_range_min() const {
	return ___godot_icall_int(___mb.mb_get_z_range_min, (const object *) this);
}

bool light2d::is_editor_only() const {
	return ___godot_icall_bool(___mb.mb_is_editor_only, (const object *) this);
}

bool light2d::is_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_enabled, (const object *) this);
}

bool light2d::is_shadow_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_shadow_enabled, (const object *) this);
}

void light2d::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void light2d::set_editor_only(const bool editor_only) {
	___godot_icall_void_bool(___mb.mb_set_editor_only, (const object *) this, editor_only);
}

void light2d::set_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_enabled, (const object *) this, enabled);
}

void light2d::set_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_energy, (const object *) this, energy);
}

void light2d::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void light2d::set_item_cull_mask(const int64_t item_cull_mask) {
	___godot_icall_void_int(___mb.mb_set_item_cull_mask, (const object *) this, item_cull_mask);
}

void light2d::set_item_shadow_cull_mask(const int64_t item_shadow_cull_mask) {
	___godot_icall_void_int(___mb.mb_set_item_shadow_cull_mask, (const object *) this, item_shadow_cull_mask);
}

void light2d::set_layer_range_max(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_layer_range_max, (const object *) this, layer);
}

void light2d::set_layer_range_min(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_layer_range_min, (const object *) this, layer);
}

void light2d::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void light2d::set_shadow_buffer_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_shadow_buffer_size, (const object *) this, size);
}

void light2d::set_shadow_color(const color shadow_color) {
	___godot_icall_void_Color(___mb.mb_set_shadow_color, (const object *) this, shadow_color);
}

void light2d::set_shadow_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_shadow_enabled, (const object *) this, enabled);
}

void light2d::set_shadow_filter(const int64_t filter) {
	___godot_icall_void_int(___mb.mb_set_shadow_filter, (const object *) this, filter);
}

void light2d::set_shadow_gradient_length(const real_t multiplier) {
	___godot_icall_void_float(___mb.mb_set_shadow_gradient_length, (const object *) this, multiplier);
}

void light2d::set_shadow_smooth(const real_t smooth) {
	___godot_icall_void_float(___mb.mb_set_shadow_smooth, (const object *) this, smooth);
}

void light2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void light2d::set_texture_offset(const vector2 texture_offset) {
	___godot_icall_void_Vector2(___mb.mb_set_texture_offset, (const object *) this, texture_offset);
}

void light2d::set_texture_scale(const real_t texture_scale) {
	___godot_icall_void_float(___mb.mb_set_texture_scale, (const object *) this, texture_scale);
}

void light2d::set_z_range_max(const int64_t z) {
	___godot_icall_void_int(___mb.mb_set_z_range_max, (const object *) this, z);
}

void light2d::set_z_range_min(const int64_t z) {
	___godot_icall_void_int(___mb.mb_set_z_range_min, (const object *) this, z);
}

}