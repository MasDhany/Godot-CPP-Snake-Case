#include "input_event_screen_touch.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_screen_touch::___method_bindings input_event_screen_touch::___mb = {};

void *input_event_screen_touch::_detail_class_tag = nullptr;

void input_event_screen_touch::___init_method_bindings() {
	___mb.mb_get_index = gd::api->godot_method_bind_get_method("InputEventScreenTouch", "get_index");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("InputEventScreenTouch", "get_position");
	___mb.mb_set_index = gd::api->godot_method_bind_get_method("InputEventScreenTouch", "set_index");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("InputEventScreenTouch", "set_position");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("InputEventScreenTouch", "set_pressed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventScreenTouch");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_screen_touch *input_event_screen_touch::_new()
{
	return (input_event_screen_touch *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventScreenTouch")());
}
int64_t input_event_screen_touch::get_index() const {
	return ___godot_icall_int(___mb.mb_get_index, (const object *) this);
}

vector2 input_event_screen_touch::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

void input_event_screen_touch::set_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_index, (const object *) this, index);
}

void input_event_screen_touch::set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const object *) this, position);
}

void input_event_screen_touch::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

}