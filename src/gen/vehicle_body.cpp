#include "vehicle_body.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


vehicle_body::___method_bindings vehicle_body::___mb = {};

void *vehicle_body::_detail_class_tag = nullptr;

void vehicle_body::___init_method_bindings() {
	___mb.mb_get_brake = gd::api->godot_method_bind_get_method("VehicleBody", "get_brake");
	___mb.mb_get_engine_force = gd::api->godot_method_bind_get_method("VehicleBody", "get_engine_force");
	___mb.mb_get_steering = gd::api->godot_method_bind_get_method("VehicleBody", "get_steering");
	___mb.mb_set_brake = gd::api->godot_method_bind_get_method("VehicleBody", "set_brake");
	___mb.mb_set_engine_force = gd::api->godot_method_bind_get_method("VehicleBody", "set_engine_force");
	___mb.mb_set_steering = gd::api->godot_method_bind_get_method("VehicleBody", "set_steering");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VehicleBody");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

vehicle_body *vehicle_body::_new()
{
	return (vehicle_body *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VehicleBody")());
}
real_t vehicle_body::get_brake() const {
	return ___godot_icall_float(___mb.mb_get_brake, (const object *) this);
}

real_t vehicle_body::get_engine_force() const {
	return ___godot_icall_float(___mb.mb_get_engine_force, (const object *) this);
}

real_t vehicle_body::get_steering() const {
	return ___godot_icall_float(___mb.mb_get_steering, (const object *) this);
}

void vehicle_body::set_brake(const real_t brake) {
	___godot_icall_void_float(___mb.mb_set_brake, (const object *) this, brake);
}

void vehicle_body::set_engine_force(const real_t engine_force) {
	___godot_icall_void_float(___mb.mb_set_engine_force, (const object *) this, engine_force);
}

void vehicle_body::set_steering(const real_t steering) {
	___godot_icall_void_float(___mb.mb_set_steering, (const object *) this, steering);
}

}