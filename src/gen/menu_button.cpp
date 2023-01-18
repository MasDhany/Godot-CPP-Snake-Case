#include "menu_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "popup_menu.hpp"


namespace gd {


menu_button::___method_bindings menu_button::___mb = {};

void *menu_button::_detail_class_tag = nullptr;

void menu_button::___init_method_bindings() {
	___mb.mb__get_items = gd::api->godot_method_bind_get_method("MenuButton", "_get_items");
	___mb.mb__set_items = gd::api->godot_method_bind_get_method("MenuButton", "_set_items");
	___mb.mb__unhandled_key_input = gd::api->godot_method_bind_get_method("MenuButton", "_unhandled_key_input");
	___mb.mb_get_popup = gd::api->godot_method_bind_get_method("MenuButton", "get_popup");
	___mb.mb_is_switch_on_hover = gd::api->godot_method_bind_get_method("MenuButton", "is_switch_on_hover");
	___mb.mb_set_disable_shortcuts = gd::api->godot_method_bind_get_method("MenuButton", "set_disable_shortcuts");
	___mb.mb_set_switch_on_hover = gd::api->godot_method_bind_get_method("MenuButton", "set_switch_on_hover");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MenuButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

menu_button *menu_button::_new()
{
	return (menu_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MenuButton")());
}
array menu_button::_get_items() const {
	return ___godot_icall_Array(___mb.mb__get_items, (const object *) this);
}

void menu_button::_set_items(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_items, (const object *) this, arg0);
}

void menu_button::_unhandled_key_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_key_input, (const object *) this, arg0.ptr());
}

popup_menu *menu_button::get_popup() const {
	return (popup_menu *) ___godot_icall_Object(___mb.mb_get_popup, (const object *) this);
}

bool menu_button::is_switch_on_hover() {
	return ___godot_icall_bool(___mb.mb_is_switch_on_hover, (const object *) this);
}

void menu_button::set_disable_shortcuts(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disable_shortcuts, (const object *) this, disabled);
}

void menu_button::set_switch_on_hover(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_switch_on_hover, (const object *) this, enable);
}

}