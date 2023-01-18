#include "input_event_mouse.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_mouse::___method_bindings input_event_mouse::___mb = {};

void *input_event_mouse::_detail_class_tag = nullptr;

void input_event_mouse::___init_method_bindings() {
	___mb.mb_get_button_mask = gd::api->godot_method_bind_get_method("InputEventMouse", "get_button_mask");
	___mb.mb_get_global_position = gd::api->godot_method_bind_get_method("InputEventMouse", "get_global_position");
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("InputEventMouse", "get_position");
	___mb.mb_set_button_mask = gd::api->godot_method_bind_get_method("InputEventMouse", "set_button_mask");
	___mb.mb_set_global_position = gd::api->godot_method_bind_get_method("InputEventMouse", "set_global_position");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("InputEventMouse", "set_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventMouse");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t input_event_mouse::get_button_mask() const {
	return ___godot_icall_int(___mb.mb_get_button_mask, (const object *) this);
}

vector2 input_event_mouse::get_global_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_global_position, (const object *) this);
}

vector2 input_event_mouse::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

void input_event_mouse::set_button_mask(const int64_t button_mask) {
	___godot_icall_void_int(___mb.mb_set_button_mask, (const object *) this, button_mask);
}

void input_event_mouse::set_global_position(const vector2 global_position) {
	___godot_icall_void_Vector2(___mb.mb_set_global_position, (const object *) this, global_position);
}

void input_event_mouse::set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const object *) this, position);
}

}