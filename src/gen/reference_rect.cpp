#include "reference_rect.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


reference_rect::___method_bindings reference_rect::___mb = {};

void *reference_rect::_detail_class_tag = nullptr;

void reference_rect::___init_method_bindings() {
	___mb.mb_get_border_color = gd::api->godot_method_bind_get_method("ReferenceRect", "get_border_color");
	___mb.mb_get_border_width = gd::api->godot_method_bind_get_method("ReferenceRect", "get_border_width");
	___mb.mb_get_editor_only = gd::api->godot_method_bind_get_method("ReferenceRect", "get_editor_only");
	___mb.mb_set_border_color = gd::api->godot_method_bind_get_method("ReferenceRect", "set_border_color");
	___mb.mb_set_border_width = gd::api->godot_method_bind_get_method("ReferenceRect", "set_border_width");
	___mb.mb_set_editor_only = gd::api->godot_method_bind_get_method("ReferenceRect", "set_editor_only");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ReferenceRect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

reference_rect *reference_rect::_new()
{
	return (reference_rect *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ReferenceRect")());
}
color reference_rect::get_border_color() const {
	return ___godot_icall_Color(___mb.mb_get_border_color, (const object *) this);
}

real_t reference_rect::get_border_width() const {
	return ___godot_icall_float(___mb.mb_get_border_width, (const object *) this);
}

bool reference_rect::get_editor_only() const {
	return ___godot_icall_bool(___mb.mb_get_editor_only, (const object *) this);
}

void reference_rect::set_border_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_border_color, (const object *) this, color_);
}

void reference_rect::set_border_width(const real_t width) {
	___godot_icall_void_float(___mb.mb_set_border_width, (const object *) this, width);
}

void reference_rect::set_editor_only(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_editor_only, (const object *) this, enabled);
}

}