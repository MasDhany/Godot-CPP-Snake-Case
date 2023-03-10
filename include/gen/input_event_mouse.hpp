#ifndef GODOT_CPP_INPUTEVENTMOUSE_HPP
#define GODOT_CPP_INPUTEVENTMOUSE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event_with_modifiers.hpp"
namespace gd {


class input_event_mouse : public input_event_with_modifiers {
	struct ___method_bindings {
		godot_method_bind *mb_get_button_mask;
		godot_method_bind *mb_get_global_position;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_set_button_mask;
		godot_method_bind *mb_set_global_position;
		godot_method_bind *mb_set_position;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventMouse"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventMouse"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	int64_t get_button_mask() const;
	vector2 get_global_position() const;
	vector2 get_position() const;
	void set_button_mask(const int64_t button_mask);
	void set_global_position(const vector2 global_position);
	void set_position(const vector2 position);

};

}

#endif