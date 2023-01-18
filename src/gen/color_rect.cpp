#include "color_rect.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


color_rect::___method_bindings color_rect::___mb = {};

void *color_rect::_detail_class_tag = nullptr;

void color_rect::___init_method_bindings() {
	___mb.mb_get_frame_color = gd::api->godot_method_bind_get_method("ColorRect", "get_frame_color");
	___mb.mb_set_frame_color = gd::api->godot_method_bind_get_method("ColorRect", "set_frame_color");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ColorRect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

color_rect *color_rect::_new()
{
	return (color_rect *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ColorRect")());
}
color color_rect::get_frame_color() const {
	return ___godot_icall_Color(___mb.mb_get_frame_color, (const object *) this);
}

void color_rect::set_frame_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_frame_color, (const object *) this, color_);
}

}