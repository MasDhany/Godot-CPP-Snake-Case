#include "input_event_joypad_motion.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_joypad_motion::___method_bindings input_event_joypad_motion::___mb = {};

void *input_event_joypad_motion::_detail_class_tag = nullptr;

void input_event_joypad_motion::___init_method_bindings() {
	___mb.mb_get_axis = gd::api->godot_method_bind_get_method("InputEventJoypadMotion", "get_axis");
	___mb.mb_get_axis_value = gd::api->godot_method_bind_get_method("InputEventJoypadMotion", "get_axis_value");
	___mb.mb_set_axis = gd::api->godot_method_bind_get_method("InputEventJoypadMotion", "set_axis");
	___mb.mb_set_axis_value = gd::api->godot_method_bind_get_method("InputEventJoypadMotion", "set_axis_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventJoypadMotion");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_joypad_motion *input_event_joypad_motion::_new()
{
	return (input_event_joypad_motion *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventJoypadMotion")());
}
int64_t input_event_joypad_motion::get_axis() const {
	return ___godot_icall_int(___mb.mb_get_axis, (const object *) this);
}

real_t input_event_joypad_motion::get_axis_value() const {
	return ___godot_icall_float(___mb.mb_get_axis_value, (const object *) this);
}

void input_event_joypad_motion::set_axis(const int64_t axis) {
	___godot_icall_void_int(___mb.mb_set_axis, (const object *) this, axis);
}

void input_event_joypad_motion::set_axis_value(const real_t axis_value) {
	___godot_icall_void_float(___mb.mb_set_axis_value, (const object *) this, axis_value);
}

}