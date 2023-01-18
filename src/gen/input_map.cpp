#include "input_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


input_map *input_map::_singleton = NULL;


input_map::input_map() {
	_owner = gd::api->godot_global_get_singleton((char *) "InputMap");
}


input_map::___method_bindings input_map::___mb = {};

void *input_map::_detail_class_tag = nullptr;

void input_map::___init_method_bindings() {
	___mb.mb_action_add_event = gd::api->godot_method_bind_get_method("InputMap", "action_add_event");
	___mb.mb_action_erase_event = gd::api->godot_method_bind_get_method("InputMap", "action_erase_event");
	___mb.mb_action_erase_events = gd::api->godot_method_bind_get_method("InputMap", "action_erase_events");
	___mb.mb_action_get_deadzone = gd::api->godot_method_bind_get_method("InputMap", "action_get_deadzone");
	___mb.mb_action_has_event = gd::api->godot_method_bind_get_method("InputMap", "action_has_event");
	___mb.mb_action_set_deadzone = gd::api->godot_method_bind_get_method("InputMap", "action_set_deadzone");
	___mb.mb_add_action = gd::api->godot_method_bind_get_method("InputMap", "add_action");
	___mb.mb_erase_action = gd::api->godot_method_bind_get_method("InputMap", "erase_action");
	___mb.mb_event_is_action = gd::api->godot_method_bind_get_method("InputMap", "event_is_action");
	___mb.mb_get_action_list = gd::api->godot_method_bind_get_method("InputMap", "get_action_list");
	___mb.mb_get_actions = gd::api->godot_method_bind_get_method("InputMap", "get_actions");
	___mb.mb_has_action = gd::api->godot_method_bind_get_method("InputMap", "has_action");
	___mb.mb_load_from_globals = gd::api->godot_method_bind_get_method("InputMap", "load_from_globals");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void input_map::action_add_event(const string action, const ref<input_event> event) {
	___godot_icall_void_String_Object(___mb.mb_action_add_event, (const object *) this, action, event.ptr());
}

void input_map::action_erase_event(const string action, const ref<input_event> event) {
	___godot_icall_void_String_Object(___mb.mb_action_erase_event, (const object *) this, action, event.ptr());
}

void input_map::action_erase_events(const string action) {
	___godot_icall_void_String(___mb.mb_action_erase_events, (const object *) this, action);
}

real_t input_map::action_get_deadzone(const string action) {
	return ___godot_icall_float_String(___mb.mb_action_get_deadzone, (const object *) this, action);
}

bool input_map::action_has_event(const string action, const ref<input_event> event) {
	return ___godot_icall_bool_String_Object(___mb.mb_action_has_event, (const object *) this, action, event.ptr());
}

void input_map::action_set_deadzone(const string action, const real_t deadzone) {
	___godot_icall_void_String_float(___mb.mb_action_set_deadzone, (const object *) this, action, deadzone);
}

void input_map::add_action(const string action, const real_t deadzone) {
	___godot_icall_void_String_float(___mb.mb_add_action, (const object *) this, action, deadzone);
}

void input_map::erase_action(const string action) {
	___godot_icall_void_String(___mb.mb_erase_action, (const object *) this, action);
}

bool input_map::event_is_action(const ref<input_event> event, const string action, const bool exact_match) const {
	return ___godot_icall_bool_Object_String_bool(___mb.mb_event_is_action, (const object *) this, event.ptr(), action, exact_match);
}

array input_map::get_action_list(const string action) {
	return ___godot_icall_Array_String(___mb.mb_get_action_list, (const object *) this, action);
}

array input_map::get_actions() {
	return ___godot_icall_Array(___mb.mb_get_actions, (const object *) this);
}

bool input_map::has_action(const string action) const {
	return ___godot_icall_bool_String(___mb.mb_has_action, (const object *) this, action);
}

void input_map::load_from_globals() {
	___godot_icall_void(___mb.mb_load_from_globals, (const object *) this);
}

}