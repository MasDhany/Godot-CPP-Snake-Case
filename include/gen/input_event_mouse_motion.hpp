#ifndef GODOT_CPP_INPUTEVENTMOUSEMOTION_HPP
#define GODOT_CPP_INPUTEVENTMOUSEMOTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event_mouse.hpp"
namespace gd {


class input_event_mouse_motion : public input_event_mouse {
	struct ___method_bindings {
		godot_method_bind *mb_get_pen_inverted;
		godot_method_bind *mb_get_pressure;
		godot_method_bind *mb_get_relative;
		godot_method_bind *mb_get_speed;
		godot_method_bind *mb_get_tilt;
		godot_method_bind *mb_set_pen_inverted;
		godot_method_bind *mb_set_pressure;
		godot_method_bind *mb_set_relative;
		godot_method_bind *mb_set_speed;
		godot_method_bind *mb_set_tilt;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventMouseMotion"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventMouseMotion"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_mouse_motion *_new();

	// methods
	bool get_pen_inverted() const;
	real_t get_pressure() const;
	vector2 get_relative() const;
	vector2 get_speed() const;
	vector2 get_tilt() const;
	void set_pen_inverted(const bool pen_inverted);
	void set_pressure(const real_t pressure);
	void set_relative(const vector2 relative);
	void set_speed(const vector2 speed);
	void set_tilt(const vector2 tilt);

};

}

#endif