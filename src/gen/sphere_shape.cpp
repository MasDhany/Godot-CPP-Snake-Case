#include "sphere_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


sphere_shape::___method_bindings sphere_shape::___mb = {};

void *sphere_shape::_detail_class_tag = nullptr;

void sphere_shape::___init_method_bindings() {
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("SphereShape", "get_radius");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("SphereShape", "set_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SphereShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sphere_shape *sphere_shape::_new()
{
	return (sphere_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SphereShape")());
}
real_t sphere_shape::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

void sphere_shape::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

}