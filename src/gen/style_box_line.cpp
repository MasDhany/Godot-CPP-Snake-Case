#include "style_box_line.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


style_box_line::___method_bindings style_box_line::___mb = {};

void *style_box_line::_detail_class_tag = nullptr;

void style_box_line::___init_method_bindings() {
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("StyleBoxLine", "get_color");
	___mb.mb_get_grow_begin = gd::api->godot_method_bind_get_method("StyleBoxLine", "get_grow_begin");
	___mb.mb_get_grow_end = gd::api->godot_method_bind_get_method("StyleBoxLine", "get_grow_end");
	___mb.mb_get_thickness = gd::api->godot_method_bind_get_method("StyleBoxLine", "get_thickness");
	___mb.mb_is_vertical = gd::api->godot_method_bind_get_method("StyleBoxLine", "is_vertical");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("StyleBoxLine", "set_color");
	___mb.mb_set_grow_begin = gd::api->godot_method_bind_get_method("StyleBoxLine", "set_grow_begin");
	___mb.mb_set_grow_end = gd::api->godot_method_bind_get_method("StyleBoxLine", "set_grow_end");
	___mb.mb_set_thickness = gd::api->godot_method_bind_get_method("StyleBoxLine", "set_thickness");
	___mb.mb_set_vertical = gd::api->godot_method_bind_get_method("StyleBoxLine", "set_vertical");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "StyleBoxLine");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

style_box_line *style_box_line::_new()
{
	return (style_box_line *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"StyleBoxLine")());
}
color style_box_line::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

real_t style_box_line::get_grow_begin() const {
	return ___godot_icall_float(___mb.mb_get_grow_begin, (const object *) this);
}

real_t style_box_line::get_grow_end() const {
	return ___godot_icall_float(___mb.mb_get_grow_end, (const object *) this);
}

int64_t style_box_line::get_thickness() const {
	return ___godot_icall_int(___mb.mb_get_thickness, (const object *) this);
}

bool style_box_line::is_vertical() const {
	return ___godot_icall_bool(___mb.mb_is_vertical, (const object *) this);
}

void style_box_line::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void style_box_line::set_grow_begin(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_grow_begin, (const object *) this, offset);
}

void style_box_line::set_grow_end(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_grow_end, (const object *) this, offset);
}

void style_box_line::set_thickness(const int64_t thickness) {
	___godot_icall_void_int(___mb.mb_set_thickness, (const object *) this, thickness);
}

void style_box_line::set_vertical(const bool vertical) {
	___godot_icall_void_bool(___mb.mb_set_vertical, (const object *) this, vertical);
}

}