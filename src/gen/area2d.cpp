#include "area2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


area2d::___method_bindings area2d::___mb = {};

void *area2d::_detail_class_tag = nullptr;

void area2d::___init_method_bindings() {
	___mb.mb__area_enter_tree = gd::api->godot_method_bind_get_method("Area2D", "_area_enter_tree");
	___mb.mb__area_exit_tree = gd::api->godot_method_bind_get_method("Area2D", "_area_exit_tree");
	___mb.mb__area_inout = gd::api->godot_method_bind_get_method("Area2D", "_area_inout");
	___mb.mb__body_enter_tree = gd::api->godot_method_bind_get_method("Area2D", "_body_enter_tree");
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("Area2D", "_body_exit_tree");
	___mb.mb__body_inout = gd::api->godot_method_bind_get_method("Area2D", "_body_inout");
	___mb.mb_get_angular_damp = gd::api->godot_method_bind_get_method("Area2D", "get_angular_damp");
	___mb.mb_get_audio_bus_name = gd::api->godot_method_bind_get_method("Area2D", "get_audio_bus_name");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("Area2D", "get_gravity");
	___mb.mb_get_gravity_distance_scale = gd::api->godot_method_bind_get_method("Area2D", "get_gravity_distance_scale");
	___mb.mb_get_gravity_vector = gd::api->godot_method_bind_get_method("Area2D", "get_gravity_vector");
	___mb.mb_get_linear_damp = gd::api->godot_method_bind_get_method("Area2D", "get_linear_damp");
	___mb.mb_get_overlapping_areas = gd::api->godot_method_bind_get_method("Area2D", "get_overlapping_areas");
	___mb.mb_get_overlapping_bodies = gd::api->godot_method_bind_get_method("Area2D", "get_overlapping_bodies");
	___mb.mb_get_priority = gd::api->godot_method_bind_get_method("Area2D", "get_priority");
	___mb.mb_get_space_override_mode = gd::api->godot_method_bind_get_method("Area2D", "get_space_override_mode");
	___mb.mb_is_gravity_a_point = gd::api->godot_method_bind_get_method("Area2D", "is_gravity_a_point");
	___mb.mb_is_monitorable = gd::api->godot_method_bind_get_method("Area2D", "is_monitorable");
	___mb.mb_is_monitoring = gd::api->godot_method_bind_get_method("Area2D", "is_monitoring");
	___mb.mb_is_overriding_audio_bus = gd::api->godot_method_bind_get_method("Area2D", "is_overriding_audio_bus");
	___mb.mb_overlaps_area = gd::api->godot_method_bind_get_method("Area2D", "overlaps_area");
	___mb.mb_overlaps_body = gd::api->godot_method_bind_get_method("Area2D", "overlaps_body");
	___mb.mb_set_angular_damp = gd::api->godot_method_bind_get_method("Area2D", "set_angular_damp");
	___mb.mb_set_audio_bus_name = gd::api->godot_method_bind_get_method("Area2D", "set_audio_bus_name");
	___mb.mb_set_audio_bus_override = gd::api->godot_method_bind_get_method("Area2D", "set_audio_bus_override");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("Area2D", "set_gravity");
	___mb.mb_set_gravity_distance_scale = gd::api->godot_method_bind_get_method("Area2D", "set_gravity_distance_scale");
	___mb.mb_set_gravity_is_point = gd::api->godot_method_bind_get_method("Area2D", "set_gravity_is_point");
	___mb.mb_set_gravity_vector = gd::api->godot_method_bind_get_method("Area2D", "set_gravity_vector");
	___mb.mb_set_linear_damp = gd::api->godot_method_bind_get_method("Area2D", "set_linear_damp");
	___mb.mb_set_monitorable = gd::api->godot_method_bind_get_method("Area2D", "set_monitorable");
	___mb.mb_set_monitoring = gd::api->godot_method_bind_get_method("Area2D", "set_monitoring");
	___mb.mb_set_priority = gd::api->godot_method_bind_get_method("Area2D", "set_priority");
	___mb.mb_set_space_override_mode = gd::api->godot_method_bind_get_method("Area2D", "set_space_override_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Area2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

area2d *area2d::_new()
{
	return (area2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Area2D")());
}
void area2d::_area_enter_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__area_enter_tree, (const object *) this, id);
}

void area2d::_area_exit_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__area_exit_tree, (const object *) this, id);
}

void area2d::_area_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	___godot_icall_void_int_RID_int_int_int(___mb.mb__area_inout, (const object *) this, arg0, arg1, arg2, arg3, arg4);
}

void area2d::_body_enter_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__body_enter_tree, (const object *) this, id);
}

void area2d::_body_exit_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__body_exit_tree, (const object *) this, id);
}

void area2d::_body_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	___godot_icall_void_int_RID_int_int_int(___mb.mb__body_inout, (const object *) this, arg0, arg1, arg2, arg3, arg4);
}

real_t area2d::get_angular_damp() const {
	return ___godot_icall_float(___mb.mb_get_angular_damp, (const object *) this);
}

string area2d::get_audio_bus_name() const {
	return ___godot_icall_String(___mb.mb_get_audio_bus_name, (const object *) this);
}

real_t area2d::get_gravity() const {
	return ___godot_icall_float(___mb.mb_get_gravity, (const object *) this);
}

real_t area2d::get_gravity_distance_scale() const {
	return ___godot_icall_float(___mb.mb_get_gravity_distance_scale, (const object *) this);
}

vector2 area2d::get_gravity_vector() const {
	return ___godot_icall_Vector2(___mb.mb_get_gravity_vector, (const object *) this);
}

real_t area2d::get_linear_damp() const {
	return ___godot_icall_float(___mb.mb_get_linear_damp, (const object *) this);
}

array area2d::get_overlapping_areas() const {
	return ___godot_icall_Array(___mb.mb_get_overlapping_areas, (const object *) this);
}

array area2d::get_overlapping_bodies() const {
	return ___godot_icall_Array(___mb.mb_get_overlapping_bodies, (const object *) this);
}

real_t area2d::get_priority() const {
	return ___godot_icall_float(___mb.mb_get_priority, (const object *) this);
}

area2d::SpaceOverride area2d::get_space_override_mode() const {
	return (area2d::SpaceOverride) ___godot_icall_int(___mb.mb_get_space_override_mode, (const object *) this);
}

bool area2d::is_gravity_a_point() const {
	return ___godot_icall_bool(___mb.mb_is_gravity_a_point, (const object *) this);
}

bool area2d::is_monitorable() const {
	return ___godot_icall_bool(___mb.mb_is_monitorable, (const object *) this);
}

bool area2d::is_monitoring() const {
	return ___godot_icall_bool(___mb.mb_is_monitoring, (const object *) this);
}

bool area2d::is_overriding_audio_bus() const {
	return ___godot_icall_bool(___mb.mb_is_overriding_audio_bus, (const object *) this);
}

bool area2d::overlaps_area(const node *area_) const {
	return ___godot_icall_bool_Object(___mb.mb_overlaps_area, (const object *) this, area_);
}

bool area2d::overlaps_body(const node *body) const {
	return ___godot_icall_bool_Object(___mb.mb_overlaps_body, (const object *) this, body);
}

void area2d::set_angular_damp(const real_t angular_damp) {
	___godot_icall_void_float(___mb.mb_set_angular_damp, (const object *) this, angular_damp);
}

void area2d::set_audio_bus_name(const string name) {
	___godot_icall_void_String(___mb.mb_set_audio_bus_name, (const object *) this, name);
}

void area2d::set_audio_bus_override(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_audio_bus_override, (const object *) this, enable);
}

void area2d::set_gravity(const real_t gravity) {
	___godot_icall_void_float(___mb.mb_set_gravity, (const object *) this, gravity);
}

void area2d::set_gravity_distance_scale(const real_t distance_scale) {
	___godot_icall_void_float(___mb.mb_set_gravity_distance_scale, (const object *) this, distance_scale);
}

void area2d::set_gravity_is_point(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_gravity_is_point, (const object *) this, enable);
}

void area2d::set_gravity_vector(const vector2 vector) {
	___godot_icall_void_Vector2(___mb.mb_set_gravity_vector, (const object *) this, vector);
}

void area2d::set_linear_damp(const real_t linear_damp) {
	___godot_icall_void_float(___mb.mb_set_linear_damp, (const object *) this, linear_damp);
}

void area2d::set_monitorable(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_monitorable, (const object *) this, enable);
}

void area2d::set_monitoring(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_monitoring, (const object *) this, enable);
}

void area2d::set_priority(const real_t priority) {
	___godot_icall_void_float(___mb.mb_set_priority, (const object *) this, priority);
}

void area2d::set_space_override_mode(const int64_t space_override_mode) {
	___godot_icall_void_int(___mb.mb_set_space_override_mode, (const object *) this, space_override_mode);
}

}