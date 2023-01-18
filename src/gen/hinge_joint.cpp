#include "hinge_joint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


hinge_joint::___method_bindings hinge_joint::___mb = {};

void *hinge_joint::_detail_class_tag = nullptr;

void hinge_joint::___init_method_bindings() {
	___mb.mb__get_lower_limit = gd::api->godot_method_bind_get_method("HingeJoint", "_get_lower_limit");
	___mb.mb__get_upper_limit = gd::api->godot_method_bind_get_method("HingeJoint", "_get_upper_limit");
	___mb.mb__set_lower_limit = gd::api->godot_method_bind_get_method("HingeJoint", "_set_lower_limit");
	___mb.mb__set_upper_limit = gd::api->godot_method_bind_get_method("HingeJoint", "_set_upper_limit");
	___mb.mb_get_flag = gd::api->godot_method_bind_get_method("HingeJoint", "get_flag");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("HingeJoint", "get_param");
	___mb.mb_set_flag = gd::api->godot_method_bind_get_method("HingeJoint", "set_flag");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("HingeJoint", "set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "HingeJoint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

hinge_joint *hinge_joint::_new()
{
	return (hinge_joint *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"HingeJoint")());
}
real_t hinge_joint::_get_lower_limit() const {
	return ___godot_icall_float(___mb.mb__get_lower_limit, (const object *) this);
}

real_t hinge_joint::_get_upper_limit() const {
	return ___godot_icall_float(___mb.mb__get_upper_limit, (const object *) this);
}

void hinge_joint::_set_lower_limit(const real_t lower_limit) {
	___godot_icall_void_float(___mb.mb__set_lower_limit, (const object *) this, lower_limit);
}

void hinge_joint::_set_upper_limit(const real_t upper_limit) {
	___godot_icall_void_float(___mb.mb__set_upper_limit, (const object *) this, upper_limit);
}

bool hinge_joint::get_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag, (const object *) this, flag);
}

real_t hinge_joint::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

void hinge_joint::set_flag(const int64_t flag, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_flag, (const object *) this, flag, enabled);
}

void hinge_joint::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

}