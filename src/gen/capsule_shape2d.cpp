#include "capsule_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


capsule_shape2d::___method_bindings capsule_shape2d::___mb = {};

void *capsule_shape2d::_detail_class_tag = nullptr;

void capsule_shape2d::___init_method_bindings() {
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CapsuleShape2D", "get_height");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CapsuleShape2D", "get_radius");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("CapsuleShape2D", "set_height");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CapsuleShape2D", "set_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CapsuleShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

capsule_shape2d *capsule_shape2d::_new()
{
	return (capsule_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CapsuleShape2D")());
}
real_t capsule_shape2d::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

real_t capsule_shape2d::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

void capsule_shape2d::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void capsule_shape2d::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

}