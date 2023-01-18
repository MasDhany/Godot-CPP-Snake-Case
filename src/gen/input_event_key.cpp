#include "input_event_key.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_key::___method_bindings input_event_key::___mb = {};

void *input_event_key::_detail_class_tag = nullptr;

void input_event_key::___init_method_bindings() {
	___mb.mb_get_physical_scancode = gd::api->godot_method_bind_get_method("InputEventKey", "get_physical_scancode");
	___mb.mb_get_physical_scancode_with_modifiers = gd::api->godot_method_bind_get_method("InputEventKey", "get_physical_scancode_with_modifiers");
	___mb.mb_get_scancode = gd::api->godot_method_bind_get_method("InputEventKey", "get_scancode");
	___mb.mb_get_scancode_with_modifiers = gd::api->godot_method_bind_get_method("InputEventKey", "get_scancode_with_modifiers");
	___mb.mb_get_unicode = gd::api->godot_method_bind_get_method("InputEventKey", "get_unicode");
	___mb.mb_set_echo = gd::api->godot_method_bind_get_method("InputEventKey", "set_echo");
	___mb.mb_set_physical_scancode = gd::api->godot_method_bind_get_method("InputEventKey", "set_physical_scancode");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("InputEventKey", "set_pressed");
	___mb.mb_set_scancode = gd::api->godot_method_bind_get_method("InputEventKey", "set_scancode");
	___mb.mb_set_unicode = gd::api->godot_method_bind_get_method("InputEventKey", "set_unicode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventKey");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_key *input_event_key::_new()
{
	return (input_event_key *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventKey")());
}
int64_t input_event_key::get_physical_scancode() const {
	return ___godot_icall_int(___mb.mb_get_physical_scancode, (const object *) this);
}

int64_t input_event_key::get_physical_scancode_with_modifiers() const {
	return ___godot_icall_int(___mb.mb_get_physical_scancode_with_modifiers, (const object *) this);
}

int64_t input_event_key::get_scancode() const {
	return ___godot_icall_int(___mb.mb_get_scancode, (const object *) this);
}

int64_t input_event_key::get_scancode_with_modifiers() const {
	return ___godot_icall_int(___mb.mb_get_scancode_with_modifiers, (const object *) this);
}

int64_t input_event_key::get_unicode() const {
	return ___godot_icall_int(___mb.mb_get_unicode, (const object *) this);
}

void input_event_key::set_echo(const bool echo) {
	___godot_icall_void_bool(___mb.mb_set_echo, (const object *) this, echo);
}

void input_event_key::set_physical_scancode(const int64_t scancode) {
	___godot_icall_void_int(___mb.mb_set_physical_scancode, (const object *) this, scancode);
}

void input_event_key::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

void input_event_key::set_scancode(const int64_t scancode) {
	___godot_icall_void_int(___mb.mb_set_scancode, (const object *) this, scancode);
}

void input_event_key::set_unicode(const int64_t unicode) {
	___godot_icall_void_int(___mb.mb_set_unicode, (const object *) this, unicode);
}

}