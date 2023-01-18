#include "cone_twist_joint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


cone_twist_joint::___method_bindings cone_twist_joint::___mb = {};

void *cone_twist_joint::_detail_class_tag = nullptr;

void cone_twist_joint::___init_method_bindings() {
	___mb.mb__get_swing_span = gd::api->godot_method_bind_get_method("ConeTwistJoint", "_get_swing_span");
	___mb.mb__get_twist_span = gd::api->godot_method_bind_get_method("ConeTwistJoint", "_get_twist_span");
	___mb.mb__set_swing_span = gd::api->godot_method_bind_get_method("ConeTwistJoint", "_set_swing_span");
	___mb.mb__set_twist_span = gd::api->godot_method_bind_get_method("ConeTwistJoint", "_set_twist_span");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("ConeTwistJoint", "get_param");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("ConeTwistJoint", "set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConeTwistJoint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cone_twist_joint *cone_twist_joint::_new()
{
	return (cone_twist_joint *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConeTwistJoint")());
}
real_t cone_twist_joint::_get_swing_span() const {
	return ___godot_icall_float(___mb.mb__get_swing_span, (const object *) this);
}

real_t cone_twist_joint::_get_twist_span() const {
	return ___godot_icall_float(___mb.mb__get_twist_span, (const object *) this);
}

void cone_twist_joint::_set_swing_span(const real_t swing_span) {
	___godot_icall_void_float(___mb.mb__set_swing_span, (const object *) this, swing_span);
}

void cone_twist_joint::_set_twist_span(const real_t twist_span) {
	___godot_icall_void_float(___mb.mb__set_twist_span, (const object *) this, twist_span);
}

real_t cone_twist_joint::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

void cone_twist_joint::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

}