#include "input_event_magnify_gesture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_magnify_gesture::___method_bindings input_event_magnify_gesture::___mb = {};

void *input_event_magnify_gesture::_detail_class_tag = nullptr;

void input_event_magnify_gesture::___init_method_bindings() {
	___mb.mb_get_factor = gd::api->godot_method_bind_get_method("InputEventMagnifyGesture", "get_factor");
	___mb.mb_set_factor = gd::api->godot_method_bind_get_method("InputEventMagnifyGesture", "set_factor");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventMagnifyGesture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_magnify_gesture *input_event_magnify_gesture::_new()
{
	return (input_event_magnify_gesture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventMagnifyGesture")());
}
real_t input_event_magnify_gesture::get_factor() const {
	return ___godot_icall_float(___mb.mb_get_factor, (const object *) this);
}

void input_event_magnify_gesture::set_factor(const real_t factor) {
	___godot_icall_void_float(___mb.mb_set_factor, (const object *) this, factor);
}

}