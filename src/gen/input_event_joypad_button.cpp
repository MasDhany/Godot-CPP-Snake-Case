#include "input_event_joypad_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_joypad_button::___method_bindings input_event_joypad_button::___mb = {};

void *input_event_joypad_button::_detail_class_tag = nullptr;

void input_event_joypad_button::___init_method_bindings() {
	___mb.mb_get_button_index = gd::api->godot_method_bind_get_method("InputEventJoypadButton", "get_button_index");
	___mb.mb_get_pressure = gd::api->godot_method_bind_get_method("InputEventJoypadButton", "get_pressure");
	___mb.mb_set_button_index = gd::api->godot_method_bind_get_method("InputEventJoypadButton", "set_button_index");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("InputEventJoypadButton", "set_pressed");
	___mb.mb_set_pressure = gd::api->godot_method_bind_get_method("InputEventJoypadButton", "set_pressure");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventJoypadButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_joypad_button *input_event_joypad_button::_new()
{
	return (input_event_joypad_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventJoypadButton")());
}
int64_t input_event_joypad_button::get_button_index() const {
	return ___godot_icall_int(___mb.mb_get_button_index, (const object *) this);
}

real_t input_event_joypad_button::get_pressure() const {
	return ___godot_icall_float(___mb.mb_get_pressure, (const object *) this);
}

void input_event_joypad_button::set_button_index(const int64_t button_index) {
	___godot_icall_void_int(___mb.mb_set_button_index, (const object *) this, button_index);
}

void input_event_joypad_button::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

void input_event_joypad_button::set_pressure(const real_t pressure) {
	___godot_icall_void_float(___mb.mb_set_pressure, (const object *) this, pressure);
}

}