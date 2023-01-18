#include "input_event_gesture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_gesture::___method_bindings input_event_gesture::___mb = {};

void *input_event_gesture::_detail_class_tag = nullptr;

void input_event_gesture::___init_method_bindings() {
	___mb.mb_get_position = gd::api->godot_method_bind_get_method("InputEventGesture", "get_position");
	___mb.mb_set_position = gd::api->godot_method_bind_get_method("InputEventGesture", "set_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventGesture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

vector2 input_event_gesture::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const object *) this);
}

void input_event_gesture::set_position(const vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const object *) this, position);
}

}