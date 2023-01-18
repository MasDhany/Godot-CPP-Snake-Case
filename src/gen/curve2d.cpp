#include "curve2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


curve2d::___method_bindings curve2d::___mb = {};

void *curve2d::_detail_class_tag = nullptr;

void curve2d::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("Curve2D", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("Curve2D", "_set_data");
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("Curve2D", "add_point");
	___mb.mb_clear_points = gd::api->godot_method_bind_get_method("Curve2D", "clear_points");
	___mb.mb_get_bake_interval = gd::api->godot_method_bind_get_method("Curve2D", "get_bake_interval");
	___mb.mb_get_baked_length = gd::api->godot_method_bind_get_method("Curve2D", "get_baked_length");
	___mb.mb_get_baked_points = gd::api->godot_method_bind_get_method("Curve2D", "get_baked_points");
	___mb.mb_get_closest_offset = gd::api->godot_method_bind_get_method("Curve2D", "get_closest_offset");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("Curve2D", "get_closest_point");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("Curve2D", "get_point_count");
	___mb.mb_get_point_in = gd::api->godot_method_bind_get_method("Curve2D", "get_point_in");
	___mb.mb_get_point_out = gd::api->godot_method_bind_get_method("Curve2D", "get_point_out");
	___mb.mb_get_point_position = gd::api->godot_method_bind_get_method("Curve2D", "get_point_position");
	___mb.mb_interpolate = gd::api->godot_method_bind_get_method("Curve2D", "interpolate");
	___mb.mb_interpolate_baked = gd::api->godot_method_bind_get_method("Curve2D", "interpolate_baked");
	___mb.mb_interpolatef = gd::api->godot_method_bind_get_method("Curve2D", "interpolatef");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("Curve2D", "remove_point");
	___mb.mb_set_bake_interval = gd::api->godot_method_bind_get_method("Curve2D", "set_bake_interval");
	___mb.mb_set_point_in = gd::api->godot_method_bind_get_method("Curve2D", "set_point_in");
	___mb.mb_set_point_out = gd::api->godot_method_bind_get_method("Curve2D", "set_point_out");
	___mb.mb_set_point_position = gd::api->godot_method_bind_get_method("Curve2D", "set_point_position");
	___mb.mb_tessellate = gd::api->godot_method_bind_get_method("Curve2D", "tessellate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Curve2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

curve2d *curve2d::_new()
{
	return (curve2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Curve2D")());
}
dictionary curve2d::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void curve2d::_set_data(const dictionary arg0) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, arg0);
}

void curve2d::add_point(const vector2 position, const vector2 in, const vector2 out, const int64_t index) {
	___godot_icall_void_Vector2_Vector2_Vector2_int(___mb.mb_add_point, (const object *) this, position, in, out, index);
}

void curve2d::clear_points() {
	___godot_icall_void(___mb.mb_clear_points, (const object *) this);
}

real_t curve2d::get_bake_interval() const {
	return ___godot_icall_float(___mb.mb_get_bake_interval, (const object *) this);
}

real_t curve2d::get_baked_length() const {
	return ___godot_icall_float(___mb.mb_get_baked_length, (const object *) this);
}

pool_vector2_array curve2d::get_baked_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_baked_points, (const object *) this);
}

real_t curve2d::get_closest_offset(const vector2 to_point) const {
	return ___godot_icall_float_Vector2(___mb.mb_get_closest_offset, (const object *) this, to_point);
}

vector2 curve2d::get_closest_point(const vector2 to_point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_get_closest_point, (const object *) this, to_point);
}

int64_t curve2d::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

vector2 curve2d::get_point_in(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_point_in, (const object *) this, idx);
}

vector2 curve2d::get_point_out(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_point_out, (const object *) this, idx);
}

vector2 curve2d::get_point_position(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_point_position, (const object *) this, idx);
}

vector2 curve2d::interpolate(const int64_t idx, const real_t t) const {
	return ___godot_icall_Vector2_int_float(___mb.mb_interpolate, (const object *) this, idx, t);
}

vector2 curve2d::interpolate_baked(const real_t offset, const bool cubic) const {
	return ___godot_icall_Vector2_float_bool(___mb.mb_interpolate_baked, (const object *) this, offset, cubic);
}

vector2 curve2d::interpolatef(const real_t fofs) const {
	return ___godot_icall_Vector2_float(___mb.mb_interpolatef, (const object *) this, fofs);
}

void curve2d::remove_point(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, idx);
}

void curve2d::set_bake_interval(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_bake_interval, (const object *) this, distance);
}

void curve2d::set_point_in(const int64_t idx, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point_in, (const object *) this, idx, position);
}

void curve2d::set_point_out(const int64_t idx, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point_out, (const object *) this, idx, position);
}

void curve2d::set_point_position(const int64_t idx, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point_position, (const object *) this, idx, position);
}

pool_vector2_array curve2d::tessellate(const int64_t max_stages, const real_t tolerance_degrees) const {
	return ___godot_icall_PoolVector2Array_int_float(___mb.mb_tessellate, (const object *) this, max_stages, tolerance_degrees);
}

}