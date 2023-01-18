#include "damped_spring_joint2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


damped_spring_joint2d::___method_bindings damped_spring_joint2d::___mb = {};

void *damped_spring_joint2d::_detail_class_tag = nullptr;

void damped_spring_joint2d::___init_method_bindings() {
	___mb.mb_get_damping = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "get_damping");
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "get_length");
	___mb.mb_get_rest_length = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "get_rest_length");
	___mb.mb_get_stiffness = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "get_stiffness");
	___mb.mb_set_damping = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "set_damping");
	___mb.mb_set_length = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "set_length");
	___mb.mb_set_rest_length = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "set_rest_length");
	___mb.mb_set_stiffness = gd::api->godot_method_bind_get_method("DampedSpringJoint2D", "set_stiffness");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "DampedSpringJoint2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

damped_spring_joint2d *damped_spring_joint2d::_new()
{
	return (damped_spring_joint2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"DampedSpringJoint2D")());
}
real_t damped_spring_joint2d::get_damping() const {
	return ___godot_icall_float(___mb.mb_get_damping, (const object *) this);
}

real_t damped_spring_joint2d::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

real_t damped_spring_joint2d::get_rest_length() const {
	return ___godot_icall_float(___mb.mb_get_rest_length, (const object *) this);
}

real_t damped_spring_joint2d::get_stiffness() const {
	return ___godot_icall_float(___mb.mb_get_stiffness, (const object *) this);
}

void damped_spring_joint2d::set_damping(const real_t damping) {
	___godot_icall_void_float(___mb.mb_set_damping, (const object *) this, damping);
}

void damped_spring_joint2d::set_length(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_length, (const object *) this, length);
}

void damped_spring_joint2d::set_rest_length(const real_t rest_length) {
	___godot_icall_void_float(___mb.mb_set_rest_length, (const object *) this, rest_length);
}

void damped_spring_joint2d::set_stiffness(const real_t stiffness) {
	___godot_icall_void_float(___mb.mb_set_stiffness, (const object *) this, stiffness);
}

}