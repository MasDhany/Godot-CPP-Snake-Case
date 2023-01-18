#include "input_event_action.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_action::___method_bindings input_event_action::___mb = {};

void *input_event_action::_detail_class_tag = nullptr;

void input_event_action::___init_method_bindings() {
	___mb.mb_get_action = gd::api->godot_method_bind_get_method("InputEventAction", "get_action");
	___mb.mb_get_strength = gd::api->godot_method_bind_get_method("InputEventAction", "get_strength");
	___mb.mb_set_action = gd::api->godot_method_bind_get_method("InputEventAction", "set_action");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("InputEventAction", "set_pressed");
	___mb.mb_set_strength = gd::api->godot_method_bind_get_method("InputEventAction", "set_strength");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventAction");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_action *input_event_action::_new()
{
	return (input_event_action *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventAction")());
}
string input_event_action::get_action() const {
	return ___godot_icall_String(___mb.mb_get_action, (const object *) this);
}

real_t input_event_action::get_strength() const {
	return ___godot_icall_float(___mb.mb_get_strength, (const object *) this);
}

void input_event_action::set_action(const string action) {
	___godot_icall_void_String(___mb.mb_set_action, (const object *) this, action);
}

void input_event_action::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

void input_event_action::set_strength(const real_t strength) {
	___godot_icall_void_float(___mb.mb_set_strength, (const object *) this, strength);
}

}