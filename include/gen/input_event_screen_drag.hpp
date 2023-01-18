#ifndef GODOT_CPP_INPUTEVENTSCREENDRAG_HPP
#define GODOT_CPP_INPUTEVENTSCREENDRAG_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event.hpp"
namespace gd {


class input_event_screen_drag : public input_event {
	struct ___method_bindings {
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_relative;
		godot_method_bind *mb_get_speed;
		godot_method_bind *mb_set_index;
		godot_method_bind *mb_set_position;
		godot_method_bind *mb_set_relative;
		godot_method_bind *mb_set_speed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventScreenDrag"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventScreenDrag"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_screen_drag *_new();

	// methods
	int64_t get_index() const;
	vector2 get_position() const;
	vector2 get_relative() const;
	vector2 get_speed() const;
	void set_index(const int64_t index);
	void set_position(const vector2 position);
	void set_relative(const vector2 relative);
	void set_speed(const vector2 speed);

};

}

#endif