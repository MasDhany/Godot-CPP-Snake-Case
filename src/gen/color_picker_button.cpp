#include "color_picker_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "color_picker.hpp"
#include "popup_panel.hpp"


namespace gd {


color_picker_button::___method_bindings color_picker_button::___mb = {};

void *color_picker_button::_detail_class_tag = nullptr;

void color_picker_button::___init_method_bindings() {
	___mb.mb__about_to_show = gd::api->godot_method_bind_get_method("ColorPickerButton", "_about_to_show");
	___mb.mb__color_changed = gd::api->godot_method_bind_get_method("ColorPickerButton", "_color_changed");
	___mb.mb__modal_closed = gd::api->godot_method_bind_get_method("ColorPickerButton", "_modal_closed");
	___mb.mb_get_pick_color = gd::api->godot_method_bind_get_method("ColorPickerButton", "get_pick_color");
	___mb.mb_get_picker = gd::api->godot_method_bind_get_method("ColorPickerButton", "get_picker");
	___mb.mb_get_popup = gd::api->godot_method_bind_get_method("ColorPickerButton", "get_popup");
	___mb.mb_is_editing_alpha = gd::api->godot_method_bind_get_method("ColorPickerButton", "is_editing_alpha");
	___mb.mb_set_edit_alpha = gd::api->godot_method_bind_get_method("ColorPickerButton", "set_edit_alpha");
	___mb.mb_set_pick_color = gd::api->godot_method_bind_get_method("ColorPickerButton", "set_pick_color");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ColorPickerButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

color_picker_button *color_picker_button::_new()
{
	return (color_picker_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ColorPickerButton")());
}
void color_picker_button::_about_to_show() {
	___godot_icall_void(___mb.mb__about_to_show, (const object *) this);
}

void color_picker_button::_color_changed(const color arg0) {
	___godot_icall_void_Color(___mb.mb__color_changed, (const object *) this, arg0);
}

void color_picker_button::_modal_closed() {
	___godot_icall_void(___mb.mb__modal_closed, (const object *) this);
}

color color_picker_button::get_pick_color() const {
	return ___godot_icall_Color(___mb.mb_get_pick_color, (const object *) this);
}

color_picker *color_picker_button::get_picker() {
	return (color_picker *) ___godot_icall_Object(___mb.mb_get_picker, (const object *) this);
}

popup_panel *color_picker_button::get_popup() {
	return (popup_panel *) ___godot_icall_Object(___mb.mb_get_popup, (const object *) this);
}

bool color_picker_button::is_editing_alpha() const {
	return ___godot_icall_bool(___mb.mb_is_editing_alpha, (const object *) this);
}

void color_picker_button::set_edit_alpha(const bool show) {
	___godot_icall_void_bool(___mb.mb_set_edit_alpha, (const object *) this, show);
}

void color_picker_button::set_pick_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_pick_color, (const object *) this, color_);
}

}