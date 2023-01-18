#include "input_event_mouse_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_mouse_button::___method_bindings input_event_mouse_button::___mb = {};

void *input_event_mouse_button::_detail_class_tag = nullptr;

void input_event_mouse_button::___init_method_bindings() {
	___mb.mb_get_button_index = gd::api->godot_method_bind_get_method("InputEventMouseButton", "get_button_index");
	___mb.mb_get_factor = gd::api->godot_method_bind_get_method("InputEventMouseButton", "get_factor");
	___mb.mb_is_doubleclick = gd::api->godot_method_bind_get_method("InputEventMouseButton", "is_doubleclick");
	___mb.mb_set_button_index = gd::api->godot_method_bind_get_method("InputEventMouseButton", "set_button_index");
	___mb.mb_set_doubleclick = gd::api->godot_method_bind_get_method("InputEventMouseButton", "set_doubleclick");
	___mb.mb_set_factor = gd::api->godot_method_bind_get_method("InputEventMouseButton", "set_factor");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("InputEventMouseButton", "set_pressed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventMouseButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_mouse_button *input_event_mouse_button::_new()
{
	return (input_event_mouse_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventMouseButton")());
}
int64_t input_event_mouse_button::get_button_index() const {
	return ___godot_icall_int(___mb.mb_get_button_index, (const object *) this);
}

real_t input_event_mouse_button::get_factor() const {
	return ___godot_icall_float(___mb.mb_get_factor, (const object *) this);
}

bool input_event_mouse_button::is_doubleclick() const {
	return ___godot_icall_bool(___mb.mb_is_doubleclick, (const object *) this);
}

void input_event_mouse_button::set_button_index(const int64_t button_index) {
	___godot_icall_void_int(___mb.mb_set_button_index, (const object *) this, button_index);
}

void input_event_mouse_button::set_doubleclick(const bool doubleclick) {
	___godot_icall_void_bool(___mb.mb_set_doubleclick, (const object *) this, doubleclick);
}

void input_event_mouse_button::set_factor(const real_t factor) {
	___godot_icall_void_float(___mb.mb_set_factor, (const object *) this, factor);
}

void input_event_mouse_button::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

}