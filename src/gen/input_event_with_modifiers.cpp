#include "input_event_with_modifiers.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_with_modifiers::___method_bindings input_event_with_modifiers::___mb = {};

void *input_event_with_modifiers::_detail_class_tag = nullptr;

void input_event_with_modifiers::___init_method_bindings() {
	___mb.mb_get_alt = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "get_alt");
	___mb.mb_get_command = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "get_command");
	___mb.mb_get_control = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "get_control");
	___mb.mb_get_metakey = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "get_metakey");
	___mb.mb_get_shift = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "get_shift");
	___mb.mb_set_alt = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "set_alt");
	___mb.mb_set_command = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "set_command");
	___mb.mb_set_control = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "set_control");
	___mb.mb_set_metakey = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "set_metakey");
	___mb.mb_set_shift = gd::api->godot_method_bind_get_method("InputEventWithModifiers", "set_shift");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventWithModifiers");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool input_event_with_modifiers::get_alt() const {
	return ___godot_icall_bool(___mb.mb_get_alt, (const object *) this);
}

bool input_event_with_modifiers::get_command() const {
	return ___godot_icall_bool(___mb.mb_get_command, (const object *) this);
}

bool input_event_with_modifiers::get_control() const {
	return ___godot_icall_bool(___mb.mb_get_control, (const object *) this);
}

bool input_event_with_modifiers::get_metakey() const {
	return ___godot_icall_bool(___mb.mb_get_metakey, (const object *) this);
}

bool input_event_with_modifiers::get_shift() const {
	return ___godot_icall_bool(___mb.mb_get_shift, (const object *) this);
}

void input_event_with_modifiers::set_alt(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_alt, (const object *) this, enable);
}

void input_event_with_modifiers::set_command(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_command, (const object *) this, enable);
}

void input_event_with_modifiers::set_control(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_control, (const object *) this, enable);
}

void input_event_with_modifiers::set_metakey(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_metakey, (const object *) this, enable);
}

void input_event_with_modifiers::set_shift(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_shift, (const object *) this, enable);
}

}