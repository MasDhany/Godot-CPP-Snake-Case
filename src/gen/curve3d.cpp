#include "curve3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


curve3d::___method_bindings curve3d::___mb = {};

void *curve3d::_detail_class_tag = nullptr;

void curve3d::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("Curve3D", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("Curve3D", "_set_data");
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("Curve3D", "add_point");
	___mb.mb_clear_points = gd::api->godot_method_bind_get_method("Curve3D", "clear_points");
	___mb.mb_get_bake_interval = gd::api->godot_method_bind_get_method("Curve3D", "get_bake_interval");
	___mb.mb_get_baked_length = gd::api->godot_method_bind_get_method("Curve3D", "get_baked_length");
	___mb.mb_get_baked_points = gd::api->godot_method_bind_get_method("Curve3D", "get_baked_points");
	___mb.mb_get_baked_tilts = gd::api->godot_method_bind_get_method("Curve3D", "get_baked_tilts");
	___mb.mb_get_baked_up_vectors = gd::api->godot_method_bind_get_method("Curve3D", "get_baked_up_vectors");
	___mb.mb_get_closest_offset = gd::api->godot_method_bind_get_method("Curve3D", "get_closest_offset");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("Curve3D", "get_closest_point");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("Curve3D", "get_point_count");
	___mb.mb_get_point_in = gd::api->godot_method_bind_get_method("Curve3D", "get_point_in");
	___mb.mb_get_point_out = gd::api->godot_method_bind_get_method("Curve3D", "get_point_out");
	___mb.mb_get_point_position = gd::api->godot_method_bind_get_method("Curve3D", "get_point_position");
	___mb.mb_get_point_tilt = gd::api->godot_method_bind_get_method("Curve3D", "get_point_tilt");
	___mb.mb_interpolate = gd::api->godot_method_bind_get_method("Curve3D", "interpolate");
	___mb.mb_interpolate_baked = gd::api->godot_method_bind_get_method("Curve3D", "interpolate_baked");
	___mb.mb_interpolate_baked_up_vector = gd::api->godot_method_bind_get_method("Curve3D", "interpolate_baked_up_vector");
	___mb.mb_interpolatef = gd::api->godot_method_bind_get_method("Curve3D", "interpolatef");
	___mb.mb_is_up_vector_enabled = gd::api->godot_method_bind_get_method("Curve3D", "is_up_vector_enabled");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("Curve3D", "remove_point");
	___mb.mb_set_bake_interval = gd::api->godot_method_bind_get_method("Curve3D", "set_bake_interval");
	___mb.mb_set_point_in = gd::api->godot_method_bind_get_method("Curve3D", "set_point_in");
	___mb.mb_set_point_out = gd::api->godot_method_bind_get_method("Curve3D", "set_point_out");
	___mb.mb_set_point_position = gd::api->godot_method_bind_get_method("Curve3D", "set_point_position");
	___mb.mb_set_point_tilt = gd::api->godot_method_bind_get_method("Curve3D", "set_point_tilt");
	___mb.mb_set_up_vector_enabled = gd::api->godot_method_bind_get_method("Curve3D", "set_up_vector_enabled");
	___mb.mb_tessellate = gd::api->godot_method_bind_get_method("Curve3D", "tessellate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Curve3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

curve3d *curve3d::_new()
{
	return (curve3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Curve3D")());
}
dictionary curve3d::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void curve3d::_set_data(const dictionary arg0) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, arg0);
}

void curve3d::add_point(const vector3 position, const vector3 in, const vector3 out, const int64_t index) {
	___godot_icall_void_Vector3_Vector3_Vector3_int(___mb.mb_add_point, (const object *) this, position, in, out, index);
}

void curve3d::clear_points() {
	___godot_icall_void(___mb.mb_clear_points, (const object *) this);
}

real_t curve3d::get_bake_interval() const {
	return ___godot_icall_float(___mb.mb_get_bake_interval, (const object *) this);
}

real_t curve3d::get_baked_length() const {
	return ___godot_icall_float(___mb.mb_get_baked_length, (const object *) this);
}

pool_vector3_array curve3d::get_baked_points() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_baked_points, (const object *) this);
}

pool_real_array curve3d::get_baked_tilts() const {
	return ___godot_icall_PoolRealArray(___mb.mb_get_baked_tilts, (const object *) this);
}

pool_vector3_array curve3d::get_baked_up_vectors() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_baked_up_vectors, (const object *) this);
}

real_t curve3d::get_closest_offset(const vector3 to_point) const {
	return ___godot_icall_float_Vector3(___mb.mb_get_closest_offset, (const object *) this, to_point);
}

vector3 curve3d::get_closest_point(const vector3 to_point) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_get_closest_point, (const object *) this, to_point);
}

int64_t curve3d::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

vector3 curve3d::get_point_in(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_point_in, (const object *) this, idx);
}

vector3 curve3d::get_point_out(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_point_out, (const object *) this, idx);
}

vector3 curve3d::get_point_position(const int64_t idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_point_position, (const object *) this, idx);
}

real_t curve3d::get_point_tilt(const int64_t idx) const {
	return ___godot_icall_float_int(___mb.mb_get_point_tilt, (const object *) this, idx);
}

vector3 curve3d::interpolate(const int64_t idx, const real_t t) const {
	return ___godot_icall_Vector3_int_float(___mb.mb_interpolate, (const object *) this, idx, t);
}

vector3 curve3d::interpolate_baked(const real_t offset, const bool cubic) const {
	return ___godot_icall_Vector3_float_bool(___mb.mb_interpolate_baked, (const object *) this, offset, cubic);
}

vector3 curve3d::interpolate_baked_up_vector(const real_t offset, const bool apply_tilt) const {
	return ___godot_icall_Vector3_float_bool(___mb.mb_interpolate_baked_up_vector, (const object *) this, offset, apply_tilt);
}

vector3 curve3d::interpolatef(const real_t fofs) const {
	return ___godot_icall_Vector3_float(___mb.mb_interpolatef, (const object *) this, fofs);
}

bool curve3d::is_up_vector_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_up_vector_enabled, (const object *) this);
}

void curve3d::remove_point(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, idx);
}

void curve3d::set_bake_interval(const real_t distance) {
	___godot_icall_void_float(___mb.mb_set_bake_interval, (const object *) this, distance);
}

void curve3d::set_point_in(const int64_t idx, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point_in, (const object *) this, idx, position);
}

void curve3d::set_point_out(const int64_t idx, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point_out, (const object *) this, idx, position);
}

void curve3d::set_point_position(const int64_t idx, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point_position, (const object *) this, idx, position);
}

void curve3d::set_point_tilt(const int64_t idx, const real_t tilt) {
	___godot_icall_void_int_float(___mb.mb_set_point_tilt, (const object *) this, idx, tilt);
}

void curve3d::set_up_vector_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_up_vector_enabled, (const object *) this, enable);
}

pool_vector3_array curve3d::tessellate(const int64_t max_stages, const real_t tolerance_degrees) const {
	return ___godot_icall_PoolVector3Array_int_float(___mb.mb_tessellate, (const object *) this, max_stages, tolerance_degrees);
}

}