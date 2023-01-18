#include "rectangle_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


rectangle_shape2d::___method_bindings rectangle_shape2d::___mb = {};

void *rectangle_shape2d::_detail_class_tag = nullptr;

void rectangle_shape2d::___init_method_bindings() {
	___mb.mb_get_extents = gd::api->godot_method_bind_get_method("RectangleShape2D", "get_extents");
	___mb.mb_set_extents = gd::api->godot_method_bind_get_method("RectangleShape2D", "set_extents");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RectangleShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rectangle_shape2d *rectangle_shape2d::_new()
{
	return (rectangle_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RectangleShape2D")());
}
vector2 rectangle_shape2d::get_extents() const {
	return ___godot_icall_Vector2(___mb.mb_get_extents, (const object *) this);
}

void rectangle_shape2d::set_extents(const vector2 extents) {
	___godot_icall_void_Vector2(___mb.mb_set_extents, (const object *) this, extents);
}

}