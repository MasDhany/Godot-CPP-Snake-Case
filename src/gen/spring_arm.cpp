#include "spring_arm.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "shape.hpp"


namespace gd {


spring_arm::___method_bindings spring_arm::___mb = {};

void *spring_arm::_detail_class_tag = nullptr;

void spring_arm::___init_method_bindings() {
	___mb.mb_add_excluded_object = gd::api->godot_method_bind_get_method("SpringArm", "add_excluded_object");
	___mb.mb_clear_excluded_objects = gd::api->godot_method_bind_get_method("SpringArm", "clear_excluded_objects");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("SpringArm", "get_collision_mask");
	___mb.mb_get_hit_length = gd::api->godot_method_bind_get_method("SpringArm", "get_hit_length");
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("SpringArm", "get_length");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("SpringArm", "get_margin");
	___mb.mb_get_shape = gd::api->godot_method_bind_get_method("SpringArm", "get_shape");
	___mb.mb_remove_excluded_object = gd::api->godot_method_bind_get_method("SpringArm", "remove_excluded_object");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("SpringArm", "set_collision_mask");
	___mb.mb_set_length = gd::api->godot_method_bind_get_method("SpringArm", "set_length");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("SpringArm", "set_margin");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("SpringArm", "set_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpringArm");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

spring_arm *spring_arm::_new()
{
	return (spring_arm *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SpringArm")());
}
void spring_arm::add_excluded_object(const rid rid) {
	___godot_icall_void_RID(___mb.mb_add_excluded_object, (const object *) this, rid);
}

void spring_arm::clear_excluded_objects() {
	___godot_icall_void(___mb.mb_clear_excluded_objects, (const object *) this);
}

int64_t spring_arm::get_collision_mask() {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

real_t spring_arm::get_hit_length() {
	return ___godot_icall_float(___mb.mb_get_hit_length, (const object *) this);
}

real_t spring_arm::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

real_t spring_arm::get_margin() {
	return ___godot_icall_float(___mb.mb_get_margin, (const object *) this);
}

ref<shape> spring_arm::get_shape() const {
	return ref<shape>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const object *) this));
}

bool spring_arm::remove_excluded_object(const rid rid) {
	return ___godot_icall_bool_RID(___mb.mb_remove_excluded_object, (const object *) this, rid);
}

void spring_arm::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void spring_arm::set_length(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_length, (const object *) this, length);
}

void spring_arm::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const object *) this, margin);
}

void spring_arm::set_shape(const ref<shape> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

}