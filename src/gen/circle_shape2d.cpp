#include "circle_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


circle_shape2d::___method_bindings circle_shape2d::___mb = {};

void *circle_shape2d::_detail_class_tag = nullptr;

void circle_shape2d::___init_method_bindings() {
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CircleShape2D", "get_radius");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CircleShape2D", "set_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CircleShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

circle_shape2d *circle_shape2d::_new()
{
	return (circle_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CircleShape2D")());
}
real_t circle_shape2d::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

void circle_shape2d::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

}