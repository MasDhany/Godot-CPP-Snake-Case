#include "area.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


area::___method_bindings area::___mb = {};

void *area::_detail_class_tag = nullptr;

void area::___init_method_bindings() {
	___mb.mb__area_enter_tree = gd::api->godot_method_bind_get_method("Area", "_area_enter_tree");
	___mb.mb__area_exit_tree = gd::api->godot_method_bind_get_method("Area", "_area_exit_tree");
	___mb.mb__area_inout = gd::api->godot_method_bind_get_method("Area", "_area_inout");
	___mb.mb__body_enter_tree = gd::api->godot_method_bind_get_method("Area", "_body_enter_tree");
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("Area", "_body_exit_tree");
	___mb.mb__body_inout = gd::api->godot_method_bind_get_method("Area", "_body_inout");
	___mb.mb_get_angular_damp = gd::api->godot_method_bind_get_method("Area", "get_angular_damp");
	___mb.mb_get_audio_bus = gd::api->godot_method_bind_get_method("Area", "get_audio_bus");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("Area", "get_gravity");
	___mb.mb_get_gravity_distance_scale = gd::api->godot_method_bind_get_method("Area", "get_gravity_distance_scale");
	___mb.mb_get_gravity_vector = gd::api->godot_method_bind_get_method("Area", "get_gravity_vector");
	___mb.mb_get_linear_damp = gd::api->godot_method_bind_get_method("Area", "get_linear_damp");
	___mb.mb_get_overlapping_areas = gd::api->godot_method_bind_get_method("Area", "get_overlapping_areas");
	___mb.mb_get_overlapping_bodies = gd::api->godot_method_bind_get_method("Area", "get_overlapping_bodies");
	___mb.mb_get_priority = gd::api->godot_method_bind_get_method("Area", "get_priority");
	___mb.mb_get_reverb_amount = gd::api->godot_method_bind_get_method("Area", "get_reverb_amount");
	___mb.mb_get_reverb_bus = gd::api->godot_method_bind_get_method("Area", "get_reverb_bus");
	___mb.mb_get_reverb_uniformity = gd::api->godot_method_bind_get_method("Area", "get_reverb_uniformity");
	___mb.mb_get_space_override_mode = gd::api->godot_method_bind_get_method("Area", "get_space_override_mode");
	___mb.mb_is_gravity_a_point = gd::api->godot_method_bind_get_method("Area", "is_gravity_a_point");
	___mb.mb_is_monitorable = gd::api->godot_method_bind_get_method("Area", "is_monitorable");
	___mb.mb_is_monitoring = gd::api->godot_method_bind_get_method("Area", "is_monitoring");
	___mb.mb_is_overriding_audio_bus = gd::api->godot_method_bind_get_method("Area", "is_overriding_audio_bus");
	___mb.mb_is_using_reverb_bus = gd::api->godot_method_bind_get_method("Area", "is_using_reverb_bus");
	___mb.mb_overlaps_area = gd::api->godot_method_bind_get_method("Area", "overlaps_area");
	___mb.mb_overlaps_body = gd::api->godot_method_bind_get_method("Area", "overlaps_body");
	___mb.mb_set_angular_damp = gd::api->godot_method_bind_get_method("Area", "set_angular_damp");
	___mb.mb_set_audio_bus = gd::api->godot_method_bind_get_method("Area", "set_audio_bus");
	___mb.mb_set_audio_bus_override = gd::api->godot_method_bind_get_method("Area", "set_audio_bus_override");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("Area", "set_gravity");
	___mb.mb_set_gravity_distance_scale = gd::api->godot_method_bind_get_method("Area", "set_gravity_distance_scale");
	___mb.mb_set_gravity_is_point = gd::api->godot_method_bind_get_method("Area", "set_gravity_is_point");
	___mb.mb_set_gravity_vector = gd::api->godot_method_bind_get_method("Area", "set_gravity_vector");
	___mb.mb_set_linear_damp = gd::api->godot_method_bind_get_method("Area", "set_linear_damp");
	___mb.mb_set_monitorable = gd::api->godot_method_bind_get_method("Area", "set_monitorable");
	___mb.mb_set_monitoring = gd::api->godot_method_bind_get_method("Area", "set_monitoring");
	___mb.mb_set_priority = gd::api->godot_method_bind_get_method("Area", "set_priority");
	___mb.mb_set_reverb_amount = gd::api->godot_method_bind_get_method("Area", "set_reverb_amount");
	___mb.mb_set_reverb_bus = gd::api->godot_method_bind_get_method("Area", "set_reverb_bus");
	___mb.mb_set_reverb_uniformity = gd::api->godot_method_bind_get_method("Area", "set_reverb_uniformity");
	___mb.mb_set_space_override_mode = gd::api->godot_method_bind_get_method("Area", "set_space_override_mode");
	___mb.mb_set_use_reverb_bus = gd::api->godot_method_bind_get_method("Area", "set_use_reverb_bus");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Area");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

area *area::_new()
{
	return (area *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Area")());
}
void area::_area_enter_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__area_enter_tree, (const object *) this, id);
}

void area::_area_exit_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__area_exit_tree, (const object *) this, id);
}

void area::_area_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	___godot_icall_void_int_RID_int_int_int(___mb.mb__area_inout, (const object *) this, arg0, arg1, arg2, arg3, arg4);
}

void area::_body_enter_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__body_enter_tree, (const object *) this, id);
}

void area::_body_exit_tree(const int64_t id) {
	___godot_icall_void_int(___mb.mb__body_exit_tree, (const object *) this, id);
}

void area::_body_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
	___godot_icall_void_int_RID_int_int_int(___mb.mb__body_inout, (const object *) this, arg0, arg1, arg2, arg3, arg4);
}

real_t area::get_angular_damp() const {
	return ___godot_icall_float(___mb.mb_get_angular_damp, (const object *) this);
}

string area::get_audio_bus() const {
	return ___godot_icall_String(___mb.mb_get_audio_bus, (const object *) this);
}

real_t area::get_gravity() const {
	return ___godot_icall_float(___mb.mb_get_gravity, (const object *) this);
}

real_t area::get_gravity_distance_scale() const {
	return ___godot_icall_float(___mb.mb_get_gravity_distance_scale, (const object *) this);
}

vector3 area::get_gravity_vector() const {
	return ___godot_icall_Vector3(___mb.mb_get_gravity_vector, (const object *) this);
}

real_t area::get_linear_damp() const {
	return ___godot_icall_float(___mb.mb_get_linear_damp, (const object *) this);
}

array area::get_overlapping_areas() const {
	return ___godot_icall_Array(___mb.mb_get_overlapping_areas, (const object *) this);
}

array area::get_overlapping_bodies() const {
	return ___godot_icall_Array(___mb.mb_get_overlapping_bodies, (const object *) this);
}

real_t area::get_priority() const {
	return ___godot_icall_float(___mb.mb_get_priority, (const object *) this);
}

real_t area::get_reverb_amount() const {
	return ___godot_icall_float(___mb.mb_get_reverb_amount, (const object *) this);
}

string area::get_reverb_bus() const {
	return ___godot_icall_String(___mb.mb_get_reverb_bus, (const object *) this);
}

real_t area::get_reverb_uniformity() const {
	return ___godot_icall_float(___mb.mb_get_reverb_uniformity, (const object *) this);
}

area::SpaceOverride area::get_space_override_mode() const {
	return (area::SpaceOverride) ___godot_icall_int(___mb.mb_get_space_override_mode, (const object *) this);
}

bool area::is_gravity_a_point() const {
	return ___godot_icall_bool(___mb.mb_is_gravity_a_point, (const object *) this);
}

bool area::is_monitorable() const {
	return ___godot_icall_bool(___mb.mb_is_monitorable, (const object *) this);
}

bool area::is_monitoring() const {
	return ___godot_icall_bool(___mb.mb_is_monitoring, (const object *) this);
}

bool area::is_overriding_audio_bus() const {
	return ___godot_icall_bool(___mb.mb_is_overriding_audio_bus, (const object *) this);
}

bool area::is_using_reverb_bus() const {
	return ___godot_icall_bool(___mb.mb_is_using_reverb_bus, (const object *) this);
}

bool area::overlaps_area(const node *area_) const {
	return ___godot_icall_bool_Object(___mb.mb_overlaps_area, (const object *) this, area_);
}

bool area::overlaps_body(const node *body) const {
	return ___godot_icall_bool_Object(___mb.mb_overlaps_body, (const object *) this, body);
}

void area::set_angular_damp(const real_t angular_damp) {
	___godot_icall_void_float(___mb.mb_set_angular_damp, (const object *) this, angular_damp);
}

void area::set_audio_bus(const string name) {
	___godot_icall_void_String(___mb.mb_set_audio_bus, (const object *) this, name);
}

void area::set_audio_bus_override(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_audio_bus_override, (const object *) this, enable);
}

void area::set_gravity(const real_t gravity) {
	___godot_icall_void_float(___mb.mb_set_gravity, (const object *) this, gravity);
}

void area::set_gravity_distance_scale(const real_t distance_scale) {
	___godot_icall_void_float(___mb.mb_set_gravity_distance_scale, (const object *) this, distance_scale);
}

void area::set_gravity_is_point(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_gravity_is_point, (const object *) this, enable);
}

void area::set_gravity_vector(const vector3 vector) {
	___godot_icall_void_Vector3(___mb.mb_set_gravity_vector, (const object *) this, vector);
}

void area::set_linear_damp(const real_t linear_damp) {
	___godot_icall_void_float(___mb.mb_set_linear_damp, (const object *) this, linear_damp);
}

void area::set_monitorable(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_monitorable, (const object *) this, enable);
}

void area::set_monitoring(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_monitoring, (const object *) this, enable);
}

void area::set_priority(const real_t priority) {
	___godot_icall_void_float(___mb.mb_set_priority, (const object *) this, priority);
}

void area::set_reverb_amount(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_reverb_amount, (const object *) this, amount);
}

void area::set_reverb_bus(const string name) {
	___godot_icall_void_String(___mb.mb_set_reverb_bus, (const object *) this, name);
}

void area::set_reverb_uniformity(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_reverb_uniformity, (const object *) this, amount);
}

void area::set_space_override_mode(const int64_t enable) {
	___godot_icall_void_int(___mb.mb_set_space_override_mode, (const object *) this, enable);
}

void area::set_use_reverb_bus(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_reverb_bus, (const object *) this, enable);
}

}