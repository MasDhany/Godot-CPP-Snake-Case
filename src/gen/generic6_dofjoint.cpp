#include "generic6_dofjoint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


generic6_dofjoint::___method_bindings generic6_dofjoint::___mb = {};

void *generic6_dofjoint::_detail_class_tag = nullptr;

void generic6_dofjoint::___init_method_bindings() {
	___mb.mb__get_angular_hi_limit_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_hi_limit_x");
	___mb.mb__get_angular_hi_limit_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_hi_limit_y");
	___mb.mb__get_angular_hi_limit_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_hi_limit_z");
	___mb.mb__get_angular_lo_limit_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_lo_limit_x");
	___mb.mb__get_angular_lo_limit_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_lo_limit_y");
	___mb.mb__get_angular_lo_limit_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_get_angular_lo_limit_z");
	___mb.mb__set_angular_hi_limit_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_hi_limit_x");
	___mb.mb__set_angular_hi_limit_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_hi_limit_y");
	___mb.mb__set_angular_hi_limit_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_hi_limit_z");
	___mb.mb__set_angular_lo_limit_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_lo_limit_x");
	___mb.mb__set_angular_lo_limit_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_lo_limit_y");
	___mb.mb__set_angular_lo_limit_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "_set_angular_lo_limit_z");
	___mb.mb_get_flag_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_flag_x");
	___mb.mb_get_flag_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_flag_y");
	___mb.mb_get_flag_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_flag_z");
	___mb.mb_get_param_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_param_x");
	___mb.mb_get_param_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_param_y");
	___mb.mb_get_param_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "get_param_z");
	___mb.mb_set_flag_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_flag_x");
	___mb.mb_set_flag_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_flag_y");
	___mb.mb_set_flag_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_flag_z");
	___mb.mb_set_param_x = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_param_x");
	___mb.mb_set_param_y = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_param_y");
	___mb.mb_set_param_z = gd::api->godot_method_bind_get_method("Generic6DOFJoint", "set_param_z");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Generic6DOFJoint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

generic6_dofjoint *generic6_dofjoint::_new()
{
	return (generic6_dofjoint *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Generic6DOFJoint")());
}
real_t generic6_dofjoint::_get_angular_hi_limit_x() const {
	return ___godot_icall_float(___mb.mb__get_angular_hi_limit_x, (const object *) this);
}

real_t generic6_dofjoint::_get_angular_hi_limit_y() const {
	return ___godot_icall_float(___mb.mb__get_angular_hi_limit_y, (const object *) this);
}

real_t generic6_dofjoint::_get_angular_hi_limit_z() const {
	return ___godot_icall_float(___mb.mb__get_angular_hi_limit_z, (const object *) this);
}

real_t generic6_dofjoint::_get_angular_lo_limit_x() const {
	return ___godot_icall_float(___mb.mb__get_angular_lo_limit_x, (const object *) this);
}

real_t generic6_dofjoint::_get_angular_lo_limit_y() const {
	return ___godot_icall_float(___mb.mb__get_angular_lo_limit_y, (const object *) this);
}

real_t generic6_dofjoint::_get_angular_lo_limit_z() const {
	return ___godot_icall_float(___mb.mb__get_angular_lo_limit_z, (const object *) this);
}

void generic6_dofjoint::_set_angular_hi_limit_x(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_hi_limit_x, (const object *) this, angle);
}

void generic6_dofjoint::_set_angular_hi_limit_y(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_hi_limit_y, (const object *) this, angle);
}

void generic6_dofjoint::_set_angular_hi_limit_z(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_hi_limit_z, (const object *) this, angle);
}

void generic6_dofjoint::_set_angular_lo_limit_x(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_lo_limit_x, (const object *) this, angle);
}

void generic6_dofjoint::_set_angular_lo_limit_y(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_lo_limit_y, (const object *) this, angle);
}

void generic6_dofjoint::_set_angular_lo_limit_z(const real_t angle) {
	___godot_icall_void_float(___mb.mb__set_angular_lo_limit_z, (const object *) this, angle);
}

bool generic6_dofjoint::get_flag_x(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag_x, (const object *) this, flag);
}

bool generic6_dofjoint::get_flag_y(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag_y, (const object *) this, flag);
}

bool generic6_dofjoint::get_flag_z(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag_z, (const object *) this, flag);
}

real_t generic6_dofjoint::get_param_x(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_x, (const object *) this, param);
}

real_t generic6_dofjoint::get_param_y(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_y, (const object *) this, param);
}

real_t generic6_dofjoint::get_param_z(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_z, (const object *) this, param);
}

void generic6_dofjoint::set_flag_x(const int64_t flag, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_flag_x, (const object *) this, flag, value);
}

void generic6_dofjoint::set_flag_y(const int64_t flag, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_flag_y, (const object *) this, flag, value);
}

void generic6_dofjoint::set_flag_z(const int64_t flag, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_flag_z, (const object *) this, flag, value);
}

void generic6_dofjoint::set_param_x(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param_x, (const object *) this, param, value);
}

void generic6_dofjoint::set_param_y(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param_y, (const object *) this, param, value);
}

void generic6_dofjoint::set_param_z(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param_z, (const object *) this, param, value);
}

}