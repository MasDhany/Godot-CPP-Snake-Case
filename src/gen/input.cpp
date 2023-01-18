#include "input.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "resource.hpp"


namespace gd {


input *input::_singleton = NULL;


input::input() {
	_owner = gd::api->godot_global_get_singleton((char *) "Input");
}


input::___method_bindings input::___mb = {};

void *input::_detail_class_tag = nullptr;

void input::___init_method_bindings() {
	___mb.mb_action_press = gd::api->godot_method_bind_get_method("Input", "action_press");
	___mb.mb_action_release = gd::api->godot_method_bind_get_method("Input", "action_release");
	___mb.mb_add_joy_mapping = gd::api->godot_method_bind_get_method("Input", "add_joy_mapping");
	___mb.mb_flush_buffered_events = gd::api->godot_method_bind_get_method("Input", "flush_buffered_events");
	___mb.mb_get_accelerometer = gd::api->godot_method_bind_get_method("Input", "get_accelerometer");
	___mb.mb_get_action_raw_strength = gd::api->godot_method_bind_get_method("Input", "get_action_raw_strength");
	___mb.mb_get_action_strength = gd::api->godot_method_bind_get_method("Input", "get_action_strength");
	___mb.mb_get_axis = gd::api->godot_method_bind_get_method("Input", "get_axis");
	___mb.mb_get_connected_joypads = gd::api->godot_method_bind_get_method("Input", "get_connected_joypads");
	___mb.mb_get_current_cursor_shape = gd::api->godot_method_bind_get_method("Input", "get_current_cursor_shape");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("Input", "get_gravity");
	___mb.mb_get_gyroscope = gd::api->godot_method_bind_get_method("Input", "get_gyroscope");
	___mb.mb_get_joy_axis = gd::api->godot_method_bind_get_method("Input", "get_joy_axis");
	___mb.mb_get_joy_axis_index_from_string = gd::api->godot_method_bind_get_method("Input", "get_joy_axis_index_from_string");
	___mb.mb_get_joy_axis_string = gd::api->godot_method_bind_get_method("Input", "get_joy_axis_string");
	___mb.mb_get_joy_button_index_from_string = gd::api->godot_method_bind_get_method("Input", "get_joy_button_index_from_string");
	___mb.mb_get_joy_button_string = gd::api->godot_method_bind_get_method("Input", "get_joy_button_string");
	___mb.mb_get_joy_guid = gd::api->godot_method_bind_get_method("Input", "get_joy_guid");
	___mb.mb_get_joy_name = gd::api->godot_method_bind_get_method("Input", "get_joy_name");
	___mb.mb_get_joy_vibration_duration = gd::api->godot_method_bind_get_method("Input", "get_joy_vibration_duration");
	___mb.mb_get_joy_vibration_strength = gd::api->godot_method_bind_get_method("Input", "get_joy_vibration_strength");
	___mb.mb_get_last_mouse_speed = gd::api->godot_method_bind_get_method("Input", "get_last_mouse_speed");
	___mb.mb_get_magnetometer = gd::api->godot_method_bind_get_method("Input", "get_magnetometer");
	___mb.mb_get_mouse_button_mask = gd::api->godot_method_bind_get_method("Input", "get_mouse_button_mask");
	___mb.mb_get_mouse_mode = gd::api->godot_method_bind_get_method("Input", "get_mouse_mode");
	___mb.mb_get_vector = gd::api->godot_method_bind_get_method("Input", "get_vector");
	___mb.mb_is_action_just_pressed = gd::api->godot_method_bind_get_method("Input", "is_action_just_pressed");
	___mb.mb_is_action_just_released = gd::api->godot_method_bind_get_method("Input", "is_action_just_released");
	___mb.mb_is_action_pressed = gd::api->godot_method_bind_get_method("Input", "is_action_pressed");
	___mb.mb_is_joy_button_pressed = gd::api->godot_method_bind_get_method("Input", "is_joy_button_pressed");
	___mb.mb_is_joy_known = gd::api->godot_method_bind_get_method("Input", "is_joy_known");
	___mb.mb_is_key_pressed = gd::api->godot_method_bind_get_method("Input", "is_key_pressed");
	___mb.mb_is_mouse_button_pressed = gd::api->godot_method_bind_get_method("Input", "is_mouse_button_pressed");
	___mb.mb_is_physical_key_pressed = gd::api->godot_method_bind_get_method("Input", "is_physical_key_pressed");
	___mb.mb_is_using_accumulated_input = gd::api->godot_method_bind_get_method("Input", "is_using_accumulated_input");
	___mb.mb_joy_connection_changed = gd::api->godot_method_bind_get_method("Input", "joy_connection_changed");
	___mb.mb_parse_input_event = gd::api->godot_method_bind_get_method("Input", "parse_input_event");
	___mb.mb_remove_joy_mapping = gd::api->godot_method_bind_get_method("Input", "remove_joy_mapping");
	___mb.mb_set_accelerometer = gd::api->godot_method_bind_get_method("Input", "set_accelerometer");
	___mb.mb_set_custom_mouse_cursor = gd::api->godot_method_bind_get_method("Input", "set_custom_mouse_cursor");
	___mb.mb_set_default_cursor_shape = gd::api->godot_method_bind_get_method("Input", "set_default_cursor_shape");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("Input", "set_gravity");
	___mb.mb_set_gyroscope = gd::api->godot_method_bind_get_method("Input", "set_gyroscope");
	___mb.mb_set_magnetometer = gd::api->godot_method_bind_get_method("Input", "set_magnetometer");
	___mb.mb_set_mouse_mode = gd::api->godot_method_bind_get_method("Input", "set_mouse_mode");
	___mb.mb_set_use_accumulated_input = gd::api->godot_method_bind_get_method("Input", "set_use_accumulated_input");
	___mb.mb_start_joy_vibration = gd::api->godot_method_bind_get_method("Input", "start_joy_vibration");
	___mb.mb_stop_joy_vibration = gd::api->godot_method_bind_get_method("Input", "stop_joy_vibration");
	___mb.mb_vibrate_handheld = gd::api->godot_method_bind_get_method("Input", "vibrate_handheld");
	___mb.mb_warp_mouse_position = gd::api->godot_method_bind_get_method("Input", "warp_mouse_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Input");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void input::action_press(const string action, const real_t strength) {
	___godot_icall_void_String_float(___mb.mb_action_press, (const object *) this, action, strength);
}

void input::action_release(const string action) {
	___godot_icall_void_String(___mb.mb_action_release, (const object *) this, action);
}

void input::add_joy_mapping(const string mapping, const bool update_existing) {
	___godot_icall_void_String_bool(___mb.mb_add_joy_mapping, (const object *) this, mapping, update_existing);
}

void input::flush_buffered_events() {
	___godot_icall_void(___mb.mb_flush_buffered_events, (const object *) this);
}

vector3 input::get_accelerometer() const {
	return ___godot_icall_Vector3(___mb.mb_get_accelerometer, (const object *) this);
}

real_t input::get_action_raw_strength(const string action, const bool exact) const {
	return ___godot_icall_float_String_bool(___mb.mb_get_action_raw_strength, (const object *) this, action, exact);
}

real_t input::get_action_strength(const string action, const bool exact) const {
	return ___godot_icall_float_String_bool(___mb.mb_get_action_strength, (const object *) this, action, exact);
}

real_t input::get_axis(const string negative_action, const string positive_action) const {
	return ___godot_icall_float_String_String(___mb.mb_get_axis, (const object *) this, negative_action, positive_action);
}

array input::get_connected_joypads() {
	return ___godot_icall_Array(___mb.mb_get_connected_joypads, (const object *) this);
}

input::CursorShape input::get_current_cursor_shape() const {
	return (input::CursorShape) ___godot_icall_int(___mb.mb_get_current_cursor_shape, (const object *) this);
}

vector3 input::get_gravity() const {
	return ___godot_icall_Vector3(___mb.mb_get_gravity, (const object *) this);
}

vector3 input::get_gyroscope() const {
	return ___godot_icall_Vector3(___mb.mb_get_gyroscope, (const object *) this);
}

real_t input::get_joy_axis(const int64_t device, const int64_t axis) const {
	return ___godot_icall_float_int_int(___mb.mb_get_joy_axis, (const object *) this, device, axis);
}

int64_t input::get_joy_axis_index_from_string(const string axis) {
	return ___godot_icall_int_String(___mb.mb_get_joy_axis_index_from_string, (const object *) this, axis);
}

string input::get_joy_axis_string(const int64_t axis_index) {
	return ___godot_icall_String_int(___mb.mb_get_joy_axis_string, (const object *) this, axis_index);
}

int64_t input::get_joy_button_index_from_string(const string button_) {
	return ___godot_icall_int_String(___mb.mb_get_joy_button_index_from_string, (const object *) this, button_);
}

string input::get_joy_button_string(const int64_t button_index) {
	return ___godot_icall_String_int(___mb.mb_get_joy_button_string, (const object *) this, button_index);
}

string input::get_joy_guid(const int64_t device) const {
	return ___godot_icall_String_int(___mb.mb_get_joy_guid, (const object *) this, device);
}

string input::get_joy_name(const int64_t device) {
	return ___godot_icall_String_int(___mb.mb_get_joy_name, (const object *) this, device);
}

real_t input::get_joy_vibration_duration(const int64_t device) {
	return ___godot_icall_float_int(___mb.mb_get_joy_vibration_duration, (const object *) this, device);
}

vector2 input::get_joy_vibration_strength(const int64_t device) {
	return ___godot_icall_Vector2_int(___mb.mb_get_joy_vibration_strength, (const object *) this, device);
}

vector2 input::get_last_mouse_speed() const {
	return ___godot_icall_Vector2(___mb.mb_get_last_mouse_speed, (const object *) this);
}

vector3 input::get_magnetometer() const {
	return ___godot_icall_Vector3(___mb.mb_get_magnetometer, (const object *) this);
}

int64_t input::get_mouse_button_mask() const {
	return ___godot_icall_int(___mb.mb_get_mouse_button_mask, (const object *) this);
}

input::MouseMode input::get_mouse_mode() const {
	return (input::MouseMode) ___godot_icall_int(___mb.mb_get_mouse_mode, (const object *) this);
}

vector2 input::get_vector(const string negative_x, const string positive_x, const string negative_y, const string positive_y, const real_t deadzone) const {
	return ___godot_icall_Vector2_String_String_String_String_float(___mb.mb_get_vector, (const object *) this, negative_x, positive_x, negative_y, positive_y, deadzone);
}

bool input::is_action_just_pressed(const string action, const bool exact) const {
	return ___godot_icall_bool_String_bool(___mb.mb_is_action_just_pressed, (const object *) this, action, exact);
}

bool input::is_action_just_released(const string action, const bool exact) const {
	return ___godot_icall_bool_String_bool(___mb.mb_is_action_just_released, (const object *) this, action, exact);
}

bool input::is_action_pressed(const string action, const bool exact) const {
	return ___godot_icall_bool_String_bool(___mb.mb_is_action_pressed, (const object *) this, action, exact);
}

bool input::is_joy_button_pressed(const int64_t device, const int64_t button_) const {
	return ___godot_icall_bool_int_int(___mb.mb_is_joy_button_pressed, (const object *) this, device, button_);
}

bool input::is_joy_known(const int64_t device) {
	return ___godot_icall_bool_int(___mb.mb_is_joy_known, (const object *) this, device);
}

bool input::is_key_pressed(const int64_t scancode) const {
	return ___godot_icall_bool_int(___mb.mb_is_key_pressed, (const object *) this, scancode);
}

bool input::is_mouse_button_pressed(const int64_t button_) const {
	return ___godot_icall_bool_int(___mb.mb_is_mouse_button_pressed, (const object *) this, button_);
}

bool input::is_physical_key_pressed(const int64_t scancode) const {
	return ___godot_icall_bool_int(___mb.mb_is_physical_key_pressed, (const object *) this, scancode);
}

bool input::is_using_accumulated_input() {
	return ___godot_icall_bool(___mb.mb_is_using_accumulated_input, (const object *) this);
}

void input::joy_connection_changed(const int64_t device, const bool connected, const string name, const string guid) {
	___godot_icall_void_int_bool_String_String(___mb.mb_joy_connection_changed, (const object *) this, device, connected, name, guid);
}

void input::parse_input_event(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb_parse_input_event, (const object *) this, event.ptr());
}

void input::remove_joy_mapping(const string guid) {
	___godot_icall_void_String(___mb.mb_remove_joy_mapping, (const object *) this, guid);
}

void input::set_accelerometer(const vector3 value) {
	___godot_icall_void_Vector3(___mb.mb_set_accelerometer, (const object *) this, value);
}

void input::set_custom_mouse_cursor(const ref<resource> image_, const int64_t shape_, const vector2 hotspot) {
	___godot_icall_void_Object_int_Vector2(___mb.mb_set_custom_mouse_cursor, (const object *) this, image_.ptr(), shape_, hotspot);
}

void input::set_default_cursor_shape(const int64_t shape_) {
	___godot_icall_void_int(___mb.mb_set_default_cursor_shape, (const object *) this, shape_);
}

void input::set_gravity(const vector3 value) {
	___godot_icall_void_Vector3(___mb.mb_set_gravity, (const object *) this, value);
}

void input::set_gyroscope(const vector3 value) {
	___godot_icall_void_Vector3(___mb.mb_set_gyroscope, (const object *) this, value);
}

void input::set_magnetometer(const vector3 value) {
	___godot_icall_void_Vector3(___mb.mb_set_magnetometer, (const object *) this, value);
}

void input::set_mouse_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mouse_mode, (const object *) this, mode);
}

void input::set_use_accumulated_input(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_accumulated_input, (const object *) this, enable);
}

void input::start_joy_vibration(const int64_t device, const real_t weak_magnitude, const real_t strong_magnitude, const real_t duration) {
	___godot_icall_void_int_float_float_float(___mb.mb_start_joy_vibration, (const object *) this, device, weak_magnitude, strong_magnitude, duration);
}

void input::stop_joy_vibration(const int64_t device) {
	___godot_icall_void_int(___mb.mb_stop_joy_vibration, (const object *) this, device);
}

void input::vibrate_handheld(const int64_t duration_ms) {
	___godot_icall_void_int(___mb.mb_vibrate_handheld, (const object *) this, duration_ms);
}

void input::warp_mouse_position(const vector2 to) {
	___godot_icall_void_Vector2(___mb.mb_warp_mouse_position, (const object *) this, to);
}

}