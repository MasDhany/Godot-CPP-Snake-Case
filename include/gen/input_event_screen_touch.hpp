#ifndef GODOT_CPP_INPUTEVENTSCREENTOUCH_HPP
#define GODOT_CPP_INPUTEVENTSCREENTOUCH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event.hpp"
namespace gd {


class input_event_screen_touch : public input_event {
	struct ___method_bindings {
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_set_index;
		godot_method_bind *mb_set_position;
		godot_method_bind *mb_set_pressed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventScreenTouch"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventScreenTouch"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_screen_touch *_new();

	// methods
	int64_t get_index() const;
	vector2 get_position() const;
	void set_index(const int64_t index);
	void set_position(const vector2 position);
	void set_pressed(const bool pressed);

};

}

#endif