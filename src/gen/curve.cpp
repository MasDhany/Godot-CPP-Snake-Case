#include "curve.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


curve::___method_bindings curve::___mb = {};

void *curve::_detail_class_tag = nullptr;

void curve::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("Curve", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("Curve", "_set_data");
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("Curve", "add_point");
	___mb.mb_bake = gd::api->godot_method_bind_get_method("Curve", "bake");
	___mb.mb_clean_dupes = gd::api->godot_method_bind_get_method("Curve", "clean_dupes");
	___mb.mb_clear_points = gd::api->godot_method_bind_get_method("Curve", "clear_points");
	___mb.mb_get_bake_resolution = gd::api->godot_method_bind_get_method("Curve", "get_bake_resolution");
	___mb.mb_get_max_value = gd::api->godot_method_bind_get_method("Curve", "get_max_value");
	___mb.mb_get_min_value = gd::api->godot_method_bind_get_method("Curve", "get_min_value");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("Curve", "get_point_count");
	___mb.mb_get_point_left_mode = gd::api->godot_method_bind_get_method("Curve", "get_point_left_mode");
	___mb.mb_get_point_left_tangent = gd::api->godot_method_bind_get_method("Curve", "get_point_left_tangent");
	___mb.mb_get_point_position = gd::api->godot_method_bind_get_method("Curve", "get_point_position");
	___mb.mb_get_point_right_mode = gd::api->godot_method_bind_get_method("Curve", "get_point_right_mode");
	___mb.mb_get_point_right_tangent = gd::api->godot_method_bind_get_method("Curve", "get_point_right_tangent");
	___mb.mb_interpolate = gd::api->godot_method_bind_get_method("Curve", "interpolate");
	___mb.mb_interpolate_baked = gd::api->godot_method_bind_get_method("Curve", "interpolate_baked");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("Curve", "remove_point");
	___mb.mb_set_bake_resolution = gd::api->godot_method_bind_get_method("Curve", "set_bake_resolution");
	___mb.mb_set_max_value = gd::api->godot_method_bind_get_method("Curve", "set_max_value");
	___mb.mb_set_min_value = gd::api->godot_method_bind_get_method("Curve", "set_min_value");
	___mb.mb_set_point_left_mode = gd::api->godot_method_bind_get_method("Curve", "set_point_left_mode");
	___mb.mb_set_point_left_tangent = gd::api->godot_method_bind_get_method("Curve", "set_point_left_tangent");
	___mb.mb_set_point_offset = gd::api->godot_method_bind_get_method("Curve", "set_point_offset");
	___mb.mb_set_point_right_mode = gd::api->godot_method_bind_get_method("Curve", "set_point_right_mode");
	___mb.mb_set_point_right_tangent = gd::api->godot_method_bind_get_method("Curve", "set_point_right_tangent");
	___mb.mb_set_point_value = gd::api->godot_method_bind_get_method("Curve", "set_point_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Curve");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

curve *curve::_new()
{
	return (curve *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Curve")());
}
array curve::_get_data() const {
	return ___godot_icall_Array(___mb.mb__get_data, (const object *) this);
}

void curve::_set_data(const array data) {
	___godot_icall_void_Array(___mb.mb__set_data, (const object *) this, data);
}

int64_t curve::add_point(const vector2 position, const real_t left_tangent, const real_t right_tangent, const int64_t left_mode, const int64_t right_mode) {
	return ___godot_icall_int_Vector2_float_float_int_int(___mb.mb_add_point, (const object *) this, position, left_tangent, right_tangent, left_mode, right_mode);
}

void curve::bake() {
	___godot_icall_void(___mb.mb_bake, (const object *) this);
}

void curve::clean_dupes() {
	___godot_icall_void(___mb.mb_clean_dupes, (const object *) this);
}

void curve::clear_points() {
	___godot_icall_void(___mb.mb_clear_points, (const object *) this);
}

int64_t curve::get_bake_resolution() const {
	return ___godot_icall_int(___mb.mb_get_bake_resolution, (const object *) this);
}

real_t curve::get_max_value() const {
	return ___godot_icall_float(___mb.mb_get_max_value, (const object *) this);
}

real_t curve::get_min_value() const {
	return ___godot_icall_float(___mb.mb_get_min_value, (const object *) this);
}

int64_t curve::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

curve::TangentMode curve::get_point_left_mode(const int64_t index) const {
	return (curve::TangentMode) ___godot_icall_int_int(___mb.mb_get_point_left_mode, (const object *) this, index);
}

real_t curve::get_point_left_tangent(const int64_t index) const {
	return ___godot_icall_float_int(___mb.mb_get_point_left_tangent, (const object *) this, index);
}

vector2 curve::get_point_position(const int64_t index) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_point_position, (const object *) this, index);
}

curve::TangentMode curve::get_point_right_mode(const int64_t index) const {
	return (curve::TangentMode) ___godot_icall_int_int(___mb.mb_get_point_right_mode, (const object *) this, index);
}

real_t curve::get_point_right_tangent(const int64_t index) const {
	return ___godot_icall_float_int(___mb.mb_get_point_right_tangent, (const object *) this, index);
}

real_t curve::interpolate(const real_t offset) const {
	return ___godot_icall_float_float(___mb.mb_interpolate, (const object *) this, offset);
}

real_t curve::interpolate_baked(const real_t offset) {
	return ___godot_icall_float_float(___mb.mb_interpolate_baked, (const object *) this, offset);
}

void curve::remove_point(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, index);
}

void curve::set_bake_resolution(const int64_t resolution) {
	___godot_icall_void_int(___mb.mb_set_bake_resolution, (const object *) this, resolution);
}

void curve::set_max_value(const real_t max) {
	___godot_icall_void_float(___mb.mb_set_max_value, (const object *) this, max);
}

void curve::set_min_value(const real_t min) {
	___godot_icall_void_float(___mb.mb_set_min_value, (const object *) this, min);
}

void curve::set_point_left_mode(const int64_t index, const int64_t mode) {
	___godot_icall_void_int_int(___mb.mb_set_point_left_mode, (const object *) this, index, mode);
}

void curve::set_point_left_tangent(const int64_t index, const real_t tangent) {
	___godot_icall_void_int_float(___mb.mb_set_point_left_tangent, (const object *) this, index, tangent);
}

int64_t curve::set_point_offset(const int64_t index, const real_t offset) {
	return ___godot_icall_int_int_float(___mb.mb_set_point_offset, (const object *) this, index, offset);
}

void curve::set_point_right_mode(const int64_t index, const int64_t mode) {
	___godot_icall_void_int_int(___mb.mb_set_point_right_mode, (const object *) this, index, mode);
}

void curve::set_point_right_tangent(const int64_t index, const real_t tangent) {
	___godot_icall_void_int_float(___mb.mb_set_point_right_tangent, (const object *) this, index, tangent);
}

void curve::set_point_value(const int64_t index, const real_t y) {
	___godot_icall_void_int_float(___mb.mb_set_point_value, (const object *) this, index, y);
}

}