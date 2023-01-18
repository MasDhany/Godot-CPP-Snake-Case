#include "slider_joint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


slider_joint::___method_bindings slider_joint::___mb = {};

void *slider_joint::_detail_class_tag = nullptr;

void slider_joint::___init_method_bindings() {
	___mb.mb__get_lower_limit_angular = gd::api->godot_method_bind_get_method("SliderJoint", "_get_lower_limit_angular");
	___mb.mb__get_upper_limit_angular = gd::api->godot_method_bind_get_method("SliderJoint", "_get_upper_limit_angular");
	___mb.mb__set_lower_limit_angular = gd::api->godot_method_bind_get_method("SliderJoint", "_set_lower_limit_angular");
	___mb.mb__set_upper_limit_angular = gd::api->godot_method_bind_get_method("SliderJoint", "_set_upper_limit_angular");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("SliderJoint", "get_param");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("SliderJoint", "set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SliderJoint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

slider_joint *slider_joint::_new()
{
	return (slider_joint *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SliderJoint")());
}
real_t slider_joint::_get_lower_limit_angular() const {
	return ___godot_icall_float(___mb.mb__get_lower_limit_angular, (const object *) this);
}

real_t slider_joint::_get_upper_limit_angular() const {
	return ___godot_icall_float(___mb.mb__get_upper_limit_angular, (const object *) this);
}

void slider_joint::_set_lower_limit_angular(const real_t lower_limit_angular) {
	___godot_icall_void_float(___mb.mb__set_lower_limit_angular, (const object *) this, lower_limit_angular);
}

void slider_joint::_set_upper_limit_angular(const real_t upper_limit_angular) {
	___godot_icall_void_float(___mb.mb__set_upper_limit_angular, (const object *) this, upper_limit_angular);
}

real_t slider_joint::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

void slider_joint::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

}