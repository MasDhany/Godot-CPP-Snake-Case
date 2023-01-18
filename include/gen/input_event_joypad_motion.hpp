#ifndef GODOT_CPP_INPUTEVENTJOYPADMOTION_HPP
#define GODOT_CPP_INPUTEVENTJOYPADMOTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event.hpp"
namespace gd {


class input_event_joypad_motion : public input_event {
	struct ___method_bindings {
		godot_method_bind *mb_get_axis;
		godot_method_bind *mb_get_axis_value;
		godot_method_bind *mb_set_axis;
		godot_method_bind *mb_set_axis_value;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventJoypadMotion"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventJoypadMotion"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_joypad_motion *_new();

	// methods
	int64_t get_axis() const;
	real_t get_axis_value() const;
	void set_axis(const int64_t axis);
	void set_axis_value(const real_t axis_value);

};

}

#endif