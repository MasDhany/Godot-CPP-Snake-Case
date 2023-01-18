#include "ray_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


ray_shape2d::___method_bindings ray_shape2d::___mb = {};

void *ray_shape2d::_detail_class_tag = nullptr;

void ray_shape2d::___init_method_bindings() {
	___mb.mb_get_length = gd::api->godot_method_bind_get_method("RayShape2D", "get_length");
	___mb.mb_get_slips_on_slope = gd::api->godot_method_bind_get_method("RayShape2D", "get_slips_on_slope");
	___mb.mb_set_length = gd::api->godot_method_bind_get_method("RayShape2D", "set_length");
	___mb.mb_set_slips_on_slope = gd::api->godot_method_bind_get_method("RayShape2D", "set_slips_on_slope");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RayShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ray_shape2d *ray_shape2d::_new()
{
	return (ray_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RayShape2D")());
}
real_t ray_shape2d::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const object *) this);
}

bool ray_shape2d::get_slips_on_slope() const {
	return ___godot_icall_bool(___mb.mb_get_slips_on_slope, (const object *) this);
}

void ray_shape2d::set_length(const real_t length) {
	___godot_icall_void_float(___mb.mb_set_length, (const object *) this, length);
}

void ray_shape2d::set_slips_on_slope(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_slips_on_slope, (const object *) this, active);
}

}