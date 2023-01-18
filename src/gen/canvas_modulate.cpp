#include "canvas_modulate.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


canvas_modulate::___method_bindings canvas_modulate::___mb = {};

void *canvas_modulate::_detail_class_tag = nullptr;

void canvas_modulate::___init_method_bindings() {
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("CanvasModulate", "get_color");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("CanvasModulate", "set_color");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CanvasModulate");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

canvas_modulate *canvas_modulate::_new()
{
	return (canvas_modulate *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CanvasModulate")());
}
color canvas_modulate::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

void canvas_modulate::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

}