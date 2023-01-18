#include "line_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


line_shape2d::___method_bindings line_shape2d::___mb = {};

void *line_shape2d::_detail_class_tag = nullptr;

void line_shape2d::___init_method_bindings() {
	___mb.mb_get_d = gd::api->godot_method_bind_get_method("LineShape2D", "get_d");
	___mb.mb_get_normal = gd::api->godot_method_bind_get_method("LineShape2D", "get_normal");
	___mb.mb_set_d = gd::api->godot_method_bind_get_method("LineShape2D", "set_d");
	___mb.mb_set_normal = gd::api->godot_method_bind_get_method("LineShape2D", "set_normal");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "LineShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

line_shape2d *line_shape2d::_new()
{
	return (line_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"LineShape2D")());
}
real_t line_shape2d::get_d() const {
	return ___godot_icall_float(___mb.mb_get_d, (const object *) this);
}

vector2 line_shape2d::get_normal() const {
	return ___godot_icall_Vector2(___mb.mb_get_normal, (const object *) this);
}

void line_shape2d::set_d(const real_t d) {
	___godot_icall_void_float(___mb.mb_set_d, (const object *) this, d);
}

void line_shape2d::set_normal(const vector2 normal) {
	___godot_icall_void_Vector2(___mb.mb_set_normal, (const object *) this, normal);
}

}