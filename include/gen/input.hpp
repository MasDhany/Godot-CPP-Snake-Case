#ifndef GODOT_CPP_INPUT_HPP
#define GODOT_CPP_INPUT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "input.hpp"

#include "object.hpp"
namespace gd {

class input_event;
class resource;

class input : public object {
	static input *_singleton;

	input();

	struct ___method_bindings {
		godot_method_bind *mb_action_press;
		godot_method_bind *mb_action_release;
		godot_method_bind *mb_add_joy_mapping;
		godot_method_bind *mb_flush_buffered_events;
		godot_method_bind *mb_get_accelerometer;
		godot_method_bind *mb_get_action_raw_strength;
		godot_method_bind *mb_get_action_strength;
		godot_method_bind *mb_get_axis;
		godot_method_bind *mb_get_connected_joypads;
		godot_method_bind *mb_get_current_cursor_shape;
		godot_method_bind *mb_get_gravity;
		godot_method_bind *mb_get_gyroscope;
		godot_method_bind *mb_get_joy_axis;
		godot_method_bind *mb_get_joy_axis_index_from_string;
		godot_method_bind *mb_get_joy_axis_string;
		godot_method_bind *mb_get_joy_button_index_from_string;
		godot_method_bind *mb_get_joy_button_string;
		godot_method_bind *mb_get_joy_guid;
		godot_method_bind *mb_get_joy_name;
		godot_method_bind *mb_get_joy_vibration_duration;
		godot_method_bind *mb_get_joy_vibration_strength;
		godot_method_bind *mb_get_last_mouse_speed;
		godot_method_bind *mb_get_magnetometer;
		godot_method_bind *mb_get_mouse_button_mask;
		godot_method_bind *mb_get_mouse_mode;
		godot_method_bind *mb_get_vector;
		godot_method_bind *mb_is_action_just_pressed;
		godot_method_bind *mb_is_action_just_released;
		godot_method_bind *mb_is_action_pressed;
		godot_method_bind *mb_is_joy_button_pressed;
		godot_method_bind *mb_is_joy_known;
		godot_method_bind *mb_is_key_pressed;
		godot_method_bind *mb_is_mouse_button_pressed;
		godot_method_bind *mb_is_physical_key_pressed;
		godot_method_bind *mb_is_using_accumulated_input;
		godot_method_bind *mb_joy_connection_changed;
		godot_method_bind *mb_parse_input_event;
		godot_method_bind *mb_remove_joy_mapping;
		godot_method_bind *mb_set_accelerometer;
		godot_method_bind *mb_set_custom_mouse_cursor;
		godot_method_bind *mb_set_default_cursor_shape;
		godot_method_bind *mb_set_gravity;
		godot_method_bind *mb_set_gyroscope;
		godot_method_bind *mb_set_magnetometer;
		godot_method_bind *mb_set_mouse_mode;
		godot_method_bind *mb_set_use_accumulated_input;
		godot_method_bind *mb_start_joy_vibration;
		godot_method_bind *mb_stop_joy_vibration;
		godot_method_bind *mb_vibrate_handheld;
		godot_method_bind *mb_warp_mouse_position;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline input *get_singleton()
	{
		if (!input::_singleton) {
			input::_singleton = new input;
		}
		return input::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Input"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Input"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MouseMode {
		MOUSE_MODE_VISIBLE = 0,
		MOUSE_MODE_HIDDEN = 1,
		MOUSE_MODE_CAPTURED = 2,
		MOUSE_MODE_CONFINED = 3,
	};
	enum CursorShape {
		CURSOR_ARROW = 0,
		CURSOR_IBEAM = 1,
		CURSOR_POINTING_HAND = 2,
		CURSOR_CROSS = 3,
		CURSOR_WAIT = 4,
		CURSOR_BUSY = 5,
		CURSOR_DRAG = 6,
		CURSOR_CAN_DROP = 7,
		CURSOR_FORBIDDEN = 8,
		CURSOR_VSIZE = 9,
		CURSOR_HSIZE = 10,
		CURSOR_BDIAGSIZE = 11,
		CURSOR_FDIAGSIZE = 12,
		CURSOR_MOVE = 13,
		CURSOR_VSPLIT = 14,
		CURSOR_HSPLIT = 15,
		CURSOR_HELP = 16,
	};

	// constants

	// methods
	void action_press(const string action, const real_t strength = 1);
	void action_release(const string action);
	void add_joy_mapping(const string mapping, const bool update_existing = false);
	void flush_buffered_events();
	vector3 get_accelerometer() const;
	real_t get_action_raw_strength(const string action, const bool exact = false) const;
	real_t get_action_strength(const string action, const bool exact = false) const;
	real_t get_axis(const string negative_action, const string positive_action) const;
	array get_connected_joypads();
	input::CursorShape get_current_cursor_shape() const;
	vector3 get_gravity() const;
	vector3 get_gyroscope() const;
	real_t get_joy_axis(const int64_t device, const int64_t axis) const;
	int64_t get_joy_axis_index_from_string(const string axis);
	string get_joy_axis_string(const int64_t axis_index);
	int64_t get_joy_button_index_from_string(const string button_);
	string get_joy_button_string(const int64_t button_index);
	string get_joy_guid(const int64_t device) const;
	string get_joy_name(const int64_t device);
	real_t get_joy_vibration_duration(const int64_t device);
	vector2 get_joy_vibration_strength(const int64_t device);
	vector2 get_last_mouse_speed() const;
	vector3 get_magnetometer() const;
	int64_t get_mouse_button_mask() const;
	input::MouseMode get_mouse_mode() const;
	vector2 get_vector(const string negative_x, const string positive_x, const string negative_y, const string positive_y, const real_t deadzone = -1) const;
	bool is_action_just_pressed(const string action, const bool exact = false) const;
	bool is_action_just_released(const string action, const bool exact = false) const;
	bool is_action_pressed(const string action, const bool exact = false) const;
	bool is_joy_button_pressed(const int64_t device, const int64_t button_) const;
	bool is_joy_known(const int64_t device);
	bool is_key_pressed(const int64_t scancode) const;
	bool is_mouse_button_pressed(const int64_t button_) const;
	bool is_physical_key_pressed(const int64_t scancode) const;
	bool is_using_accumulated_input();
	void joy_connection_changed(const int64_t device, const bool connected, const string name, const string guid);
	void parse_input_event(const ref<input_event> event);
	void remove_joy_mapping(const string guid);
	void set_accelerometer(const vector3 value);
	void set_custom_mouse_cursor(const ref<resource> image_, const int64_t shape_ = 0, const vector2 hotspot = vector2(0, 0));
	void set_default_cursor_shape(const int64_t shape_ = 0);
	void set_gravity(const vector3 value);
	void set_gyroscope(const vector3 value);
	void set_magnetometer(const vector3 value);
	void set_mouse_mode(const int64_t mode);
	void set_use_accumulated_input(const bool enable);
	void start_joy_vibration(const int64_t device, const real_t weak_magnitude, const real_t strong_magnitude, const real_t duration = 0);
	void stop_joy_vibration(const int64_t device);
	void vibrate_handheld(const int64_t duration_ms = 500);
	void warp_mouse_position(const vector2 to);

};

}

#endif