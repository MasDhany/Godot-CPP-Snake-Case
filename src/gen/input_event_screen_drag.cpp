#include "input_event_screen_drag.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_screen_drag::___method_bindings input_event_screen_drag::___mb = {};

void *input_event_screen_drag::_detail_class_tag = nullptr;

void input_event_screen_drag::___init_method_bindings() {
	___mb.mb_get_index = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "get_index");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "get_position");
	___mb.mb_get_relative = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "get_relative");
	___mb.mb_get_speed = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "get_speed");
	___mb.mb_set_index = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "set_index");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "set_position");
	___mb.mb_set_relative = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "set_relative");
	___mb.mb_set_speed = gd::api->godot_method_bind_get_method("InputEventScreenDrag", "set_speed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventScreenDrag");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_screen_drag *input_event_screen_drag::_new()
{
	return (input_event_screen_drag *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventScreenDrag")());
}
int64_t input_event_screen_drag::get_index() const {
	return ___godot_icall_int(___mb.mb_get_index, (const object *) this);
}

vector2 input_event_screen_drag::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

vector2 input_event_screen_drag::get_relative() const {
	return ___godot_icall_Vector2(___mb.mb_get_relative, (const object *) this);
}

vector2 input_event_screen_drag::get_speed() const {
	return ___godot_icall_Vector2(___mb.mb_get_speed, (const object *) this);
}

void input_event_screen_drag::set_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_index, (const object *) this, index);
}

void input_event_screen_drag::set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const object *) this, position);
}

void input_event_screen_drag::set_relative(const vector2 relative) {
	___godot_icall_void_Vector2(___mb.mb_set_relative, (const object *) this, relative);
}

void input_event_screen_drag::set_speed(const vector2 speed) {
	___godot_icall_void_Vector2(___mb.mb_set_speed, (const object *) this, speed);
}

}