#include "capsule_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


capsule_shape::___method_bindings capsule_shape::___mb = {};

void *capsule_shape::_detail_class_tag = nullptr;

void capsule_shape::___init_method_bindings() {
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CapsuleShape", "get_height");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CapsuleShape", "get_radius");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("CapsuleShape", "set_height");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CapsuleShape", "set_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CapsuleShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

capsule_shape *capsule_shape::_new()
{
	return (capsule_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CapsuleShape")());
}
real_t capsule_shape::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

real_t capsule_shape::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

void capsule_shape::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void capsule_shape::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

}