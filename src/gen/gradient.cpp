#include "gradient.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gradient::___method_bindings gradient::___mb = {};

void *gradient::_detail_class_tag = nullptr;

void gradient::___init_method_bindings() {
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("Gradient", "add_point");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("Gradient", "get_color");
	___mb.mb_get_colors = gd::api->godot_method_bind_get_method("Gradient", "get_colors");
	___mb.mb_get_interpolation_mode = gd::api->godot_method_bind_get_method("Gradient", "get_interpolation_mode");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("Gradient", "get_offset");
	___mb.mb_get_offsets = gd::api->godot_method_bind_get_method("Gradient", "get_offsets");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("Gradient", "get_point_count");
	___mb.mb_interpolate = gd::api->godot_method_bind_get_method("Gradient", "interpolate");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("Gradient", "remove_point");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("Gradient", "set_color");
	___mb.mb_set_colors = gd::api->godot_method_bind_get_method("Gradient", "set_colors");
	___mb.mb_set_interpolation_mode = gd::api->godot_method_bind_get_method("Gradient", "set_interpolation_mode");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("Gradient", "set_offset");
	___mb.mb_set_offsets = gd::api->godot_method_bind_get_method("Gradient", "set_offsets");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Gradient");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gradient *gradient::_new()
{
	return (gradient *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Gradient")());
}
void gradient::add_point(const real_t offset, const color color_) {
	___godot_icall_void_float_Color(___mb.mb_add_point, (const object *) this, offset, color_);
}

color gradient::get_color(const int64_t point) {
	return ___godot_icall_Color_int(___mb.mb_get_color, (const object *) this, point);
}

pool_color_array gradient::get_colors() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_colors, (const object *) this);
}

gradient::InterpolationMode gradient::get_interpolation_mode() {
	return (gradient::InterpolationMode) ___godot_icall_int(___mb.mb_get_interpolation_mode, (const object *) this);
}

real_t gradient::get_offset(const int64_t point) {
	return ___godot_icall_float_int(___mb.mb_get_offset, (const object *) this, point);
}

pool_real_array gradient::get_offsets() const {
	return ___godot_icall_PoolRealArray(___mb.mb_get_offsets, (const object *) this);
}

int64_t gradient::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

color gradient::interpolate(const real_t offset) {
	return ___godot_icall_Color_float(___mb.mb_interpolate, (const object *) this, offset);
}

void gradient::remove_point(const int64_t point) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, point);
}

void gradient::set_color(const int64_t point, const color color_) {
	___godot_icall_void_int_Color(___mb.mb_set_color, (const object *) this, point, color_);
}

void gradient::set_colors(const pool_color_array colors) {
	___godot_icall_void_PoolColorArray(___mb.mb_set_colors, (const object *) this, colors);
}

void gradient::set_interpolation_mode(const int64_t interpolation_mode) {
	___godot_icall_void_int(___mb.mb_set_interpolation_mode, (const object *) this, interpolation_mode);
}

void gradient::set_offset(const int64_t point, const real_t offset) {
	___godot_icall_void_int_float(___mb.mb_set_offset, (const object *) this, point, offset);
}

void gradient::set_offsets(const pool_real_array offsets) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_offsets, (const object *) this, offsets);
}

}