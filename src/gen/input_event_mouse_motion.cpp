#include "input_event_mouse_motion.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


input_event_mouse_motion::___method_bindings input_event_mouse_motion::___mb = {};

void *input_event_mouse_motion::_detail_class_tag = nullptr;

void input_event_mouse_motion::___init_method_bindings() {
	___mb.mb_get_pen_inverted = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "get_pen_inverted");
	___mb.mb_get_pressure = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "get_pressure");
	___mb.mb_get_relative = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "get_relative");
	___mb.mb_get_speed = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "get_speed");
	___mb.mb_get_tilt = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "get_tilt");
	___mb.mb_set_pen_inverted = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "set_pen_inverted");
	___mb.mb_set_pressure = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "set_pressure");
	___mb.mb_set_relative = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "set_relative");
	___mb.mb_set_speed = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "set_speed");
	___mb.mb_set_tilt = gd::api->godot_method_bind_get_method("InputEventMouseMotion", "set_tilt");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "InputEventMouseMotion");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

input_event_mouse_motion *input_event_mouse_motion::_new()
{
	return (input_event_mouse_motion *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"InputEventMouseMotion")());
}
bool input_event_mouse_motion::get_pen_inverted() const {
	return ___godot_icall_bool(___mb.mb_get_pen_inverted, (const object *) this);
}

real_t input_event_mouse_motion::get_pressure() const {
	return ___godot_icall_float(___mb.mb_get_pressure, (const object *) this);
}

vector2 input_event_mouse_motion::get_relative() const {
	return ___godot_icall_Vector2(___mb.mb_get_relative, (const object *) this);
}

vector2 input_event_mouse_motion::get_speed() const {
	return ___godot_icall_Vector2(___mb.mb_get_speed, (const object *) this);
}

vector2 input_event_mouse_motion::get_tilt() const {
	return ___godot_icall_Vector2(___mb.mb_get_tilt, (const object *) this);
}

void input_event_mouse_motion::set_pen_inverted(const bool pen_inverted) {
	___godot_icall_void_bool(___mb.mb_set_pen_inverted, (const object *) this, pen_inverted);
}

void input_event_mouse_motion::set_pressure(const real_t pressure) {
	___godot_icall_void_float(___mb.mb_set_pressure, (const object *) this, pressure);
}

void input_event_mouse_motion::set_relative(const vector2 relative) {
	___godot_icall_void_Vector2(___mb.mb_set_relative, (const object *) this, relative);
}

void input_event_mouse_motion::set_speed(const vector2 speed) {
	___godot_icall_void_Vector2(___mb.mb_set_speed, (const object *) this, speed);
}

void input_event_mouse_motion::set_tilt(const vector2 tilt) {
	___godot_icall_void_Vector2(___mb.mb_set_tilt, (const object *) this, tilt);
}

}