#ifndef GODOT_CPP_INPUTEVENTJOYPADBUTTON_HPP
#define GODOT_CPP_INPUTEVENTJOYPADBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event.hpp"
namespace gd {


class input_event_joypad_button : public input_event {
	struct ___method_bindings {
		godot_method_bind *mb_get_button_index;
		godot_method_bind *mb_get_pressure;
		godot_method_bind *mb_set_button_index;
		godot_method_bind *mb_set_pressed;
		godot_method_bind *mb_set_pressure;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventJoypadButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventJoypadButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_joypad_button *_new();

	// methods
	int64_t get_button_index() const;
	real_t get_pressure() const;
	void set_button_index(const int64_t button_index);
	void set_pressed(const bool pressed);
	void set_pressure(const real_t pressure);

};

}

#endif