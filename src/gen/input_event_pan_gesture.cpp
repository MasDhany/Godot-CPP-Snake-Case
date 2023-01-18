#include "input_event_pan_gesture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_pan_gesture::___method_bindings input_event_pan_gesture::___mb = {};

void *input_event_pan_gesture::_detail_class_tag = nullptr;

void input_event_pan_gesture::___init_method_bindings() {
	___mb.mb_get_delta = gd::api->godot_method_bind_get_method("InputEventPanGesture", "get_delta");
	___mb.mb_set_delta = gd::api->godot_method_bind_get_method("InputEventPanGesture", "set_delta");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventPanGesture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_pan_gesture *input_event_pan_gesture::_new()
{
	return (input_event_pan_gesture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventPanGesture")());
}
vector2 input_event_pan_gesture::get_delta() const {
	return ___godot_icall_Vector2(___mb.mb_get_delta, (const object *) this);
}

void input_event_pan_gesture::set_delta(const vector2 delta) {
	___godot_icall_void_Vector2(___mb.mb_set_delta, (const object *) this, delta);
}

}