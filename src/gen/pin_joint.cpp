#include "pin_joint.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


pin_joint::___method_bindings pin_joint::___mb = {};

void *pin_joint::_detail_class_tag = nullptr;

void pin_joint::___init_method_bindings() {
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("PinJoint", "get_param");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("PinJoint", "set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PinJoint");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

pin_joint *pin_joint::_new()
{
	return (pin_joint *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PinJoint")());
}
real_t pin_joint::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

void pin_joint::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

}