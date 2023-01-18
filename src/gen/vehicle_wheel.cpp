#include "vehicle_wheel.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "spatial.hpp"


namespace gd {


vehicle_wheel::___method_bindings vehicle_wheel::___mb = {};

void *vehicle_wheel::_detail_class_tag = nullptr;

void vehicle_wheel::___init_method_bindings() {
	___mb.mb_get_brake = gd::api->godot_method_bind_get_method("VehicleWheel", "get_brake");
	___mb.mb_get_contact_body = gd::api->godot_method_bind_get_method("VehicleWheel", "get_contact_body");
	___mb.mb_get_damping_compression = gd::api->godot_method_bind_get_method("VehicleWheel", "get_damping_compression");
	___mb.mb_get_damping_relaxation = gd::api->godot_method_bind_get_method("VehicleWheel", "get_damping_relaxation");
	___mb.mb_get_engine_force = gd::api->godot_method_bind_get_method("VehicleWheel", "get_engine_force");
	___mb.mb_get_friction_slip = gd::api->godot_method_bind_get_method("VehicleWheel", "get_friction_slip");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("VehicleWheel", "get_radius");
	___mb.mb_get_roll_influence = gd::api->godot_method_bind_get_method("VehicleWheel", "get_roll_influence");
	___mb.mb_get_rpm = gd::api->godot_method_bind_get_method("VehicleWheel", "get_rpm");
	___mb.mb_get_skidinfo = gd::api->godot_method_bind_get_method("VehicleWheel", "get_skidinfo");
	___mb.mb_get_steering = gd::api->godot_method_bind_get_method("VehicleWheel", "get_steering");
	___mb.mb_get_suspension_max_force = gd::api->godot_method_bind_get_method("VehicleWheel", "get_suspension_max_force");
	___mb.mb_get_suspension_rest_length = gd::api->godot_method_bind_get_method("VehicleWheel", "get_suspension_rest_length");
	___mb.mb_get_suspension_stiffness = gd::api->godot_method_bind_get_method("VehicleWheel", "get_suspension_stiffness");
	___mb.mb_get_suspension_travel = gd::api->godot_method_bind_get_method("VehicleWheel", "get_suspension_travel");
	___mb.mb_is_in_contact = gd::api->godot_method_bind_get_method("VehicleWheel", "is_in_contact");
	___mb.mb_is_used_as_steering = gd::api->godot_method_bind_get_method("VehicleWheel", "is_used_as_steering");
	___mb.mb_is_used_as_traction = gd::api->godot_method_bind_get_method("VehicleWheel", "is_used_as_traction");
	___mb.mb_set_brake = gd::api->godot_method_bind_get_method("VehicleWheel", "set_brake");
	___mb.mb_set_damping_compression = gd::api->godot_method_bind_get_method("VehicleWheel", "set_damping_compression");
	___mb.mb_set_damping_relaxation = gd::api->godot_method_bind_get_method("VehicleWheel", "set_damping_relaxation");
	___mb.mb_set_engine_force = gd::api->godot_method_bind_get_method("VehicleWheel", "set_engine_force");
	___mb.mb_set_friction_slip = gd::api->godot_method_bind_get_method("VehicleWheel", "set_friction_slip");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("VehicleWheel", "set_radius");
	___mb.mb_set_roll_influence = gd::api->godot_method_bind_get_method("VehicleWheel", "set_roll_influence");
	___mb.mb_set_steering = gd::api->godot_method_bind_get_method("VehicleWheel", "set_steering");
	___mb.mb_set_suspension_max_force = gd::api->godot_method_bind_get_method("VehicleWheel", "set_suspension_max_force");
	___mb.mb_set_suspension_rest_length = gd::api->godot_method_bind_get_method("VehicleWheel", "set_suspension_rest_length");
	___mb.mb_set_suspension_stiffness = gd::api->godot_method_bind_get_method("VehicleWheel", "set_suspension_stiffness");
	___mb.mb_set_suspension_travel = gd::api->godot_method_bind_get_method("VehicleWheel", "set_suspension_travel");
	___mb.mb_set_use_as_steering = gd::api->godot_method_bind_get_method("VehicleWheel", "set_use_as_steering");
	___mb.mb_set_use_as_traction = gd::api->godot_method_bind_get_method("VehicleWheel", "set_use_as_traction");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VehicleWheel");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

vehicle_wheel *vehicle_wheel::_new()
{
	return (vehicle_wheel *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VehicleWheel")());
}
real_t vehicle_wheel::get_brake() const {
	return ___godot_icall_float(___mb.mb_get_brake, (const object *) this);
}

spatial *vehicle_wheel::get_contact_body() const {
	return (spatial *) ___godot_icall_Object(___mb.mb_get_contact_body, (const object *) this);
}

real_t vehicle_wheel::get_damping_compression() const {
	return ___godot_icall_float(___mb.mb_get_damping_compression, (const object *) this);
}

real_t vehicle_wheel::get_damping_relaxation() const {
	return ___godot_icall_float(___mb.mb_get_damping_relaxation, (const object *) this);
}

real_t vehicle_wheel::get_engine_force() const {
	return ___godot_icall_float(___mb.mb_get_engine_force, (const object *) this);
}

real_t vehicle_wheel::get_friction_slip() const {
	return ___godot_icall_float(___mb.mb_get_friction_slip, (const object *) this);
}

real_t vehicle_wheel::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

real_t vehicle_wheel::get_roll_influence() const {
	return ___godot_icall_float(___mb.mb_get_roll_influence, (const object *) this);
}

real_t vehicle_wheel::get_rpm() const {
	return ___godot_icall_float(___mb.mb_get_rpm, (const object *) this);
}

real_t vehicle_wheel::get_skidinfo() const {
	return ___godot_icall_float(___mb.mb_get_skidinfo, (const object *) this);
}

real_t vehicle_wheel::get_steering() const {
	return ___godot_icall_float(___mb.mb_get_steering, (const object *) this);
}

real_t vehicle_wheel::get_suspension_max_force() const {
	return ___godot_icall_float(___mb.mb_get_suspension_max_force, (const object *) this);
}

real_t vehicle_wheel::get_suspension_rest_length() const {
	return ___godot_icall_float(___mb.mb_get_suspension_rest_length, (const object *) this);
}

real_t vehicle_wheel::get_suspension_stiffness() const {
	return ___godot_icall_float(___mb.mb_get_suspension_stiffness, (const object *) this);
}

real_t vehicle_wheel::get_suspension_travel() const {
	return ___godot_icall_float(___mb.mb_get_suspension_travel, (const object *) this);
}

bool vehicle_wheel::is_in_contact() const {
	return ___godot_icall_bool(___mb.mb_is_in_contact, (const object *) this);
}

bool vehicle_wheel::is_used_as_steering() const {
	return ___godot_icall_bool(___mb.mb_is_used_as_steering, (const object *) this);
}

bool vehicle_wheel::is_used_as_traction() const {
	return ___godot_icall_bool(___mb.mb_is_used_as_traction, (const object *) this);
}

void vehicle_wheel::set_brake(const real_t brake) {
	___godot_icall_void_float(___mb.mb_set_brake, (const object *) this, brake);
}

void vehicle_wheel::set_damping_compression(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_damping_compression, (const object *) this, length);
}

void vehicle_wheel::set_damping_relaxation(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_damping_relaxation, (const object *) this, length);
}

void vehicle_wheel::set_engine_force(const real_t engine_force) {
	___godot_icall_void_float(___mb.mb_set_engine_force, (const object *) this, engine_force);
}

void vehicle_wheel::set_friction_slip(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_friction_slip, (const object *) this, length);
}

void vehicle_wheel::set_radius(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, length);
}

void vehicle_wheel::set_roll_influence(const real_t roll_influence) {
	___godot_icall_void_float(___mb.mb_set_roll_influence, (const object *) this, roll_influence);
}

void vehicle_wheel::set_steering(const real_t steering) {
	___godot_icall_void_float(___mb.mb_set_steering, (const object *) this, steering);
}

void vehicle_wheel::set_suspension_max_force(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_suspension_max_force, (const object *) this, length);
}

void vehicle_wheel::set_suspension_rest_length(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_suspension_rest_length, (const object *) this, length);
}

void vehicle_wheel::set_suspension_stiffness(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_suspension_stiffness, (const object *) this, length);
}

void vehicle_wheel::set_suspension_travel(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_suspension_travel, (const object *) this, length);
}

void vehicle_wheel::set_use_as_steering(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_as_steering, (const object *) this, enable);
}

void vehicle_wheel::set_use_as_traction(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_as_traction, (const object *) this, enable);
}

}