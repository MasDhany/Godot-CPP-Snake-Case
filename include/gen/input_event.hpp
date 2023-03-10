#ifndef GODOT_CPP_INPUTEVENT_HPP
#define GODOT_CPP_INPUTEVENT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class input_event;

class input_event : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_accumulate;
		godot_method_bind *mb_as_text;
		godot_method_bind *mb_get_action_strength;
		godot_method_bind *mb_get_device;
		godot_method_bind *mb_is_action;
		godot_method_bind *mb_is_action_pressed;
		godot_method_bind *mb_is_action_released;
		godot_method_bind *mb_is_action_type;
		godot_method_bind *mb_is_echo;
		godot_method_bind *mb_is_pressed;
		godot_method_bind *mb_set_device;
		godot_method_bind *mb_shortcut_match;
		godot_method_bind *mb_xformed_by;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEvent"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEvent"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool accumulate(const ref<input_event> with_event);
	string as_text() const;
	real_t get_action_strength(const string action, const bool exact_match = false) const;
	int64_t get_device() const;
	bool is_action(const string action, const bool exact_match = false) const;
	bool is_action_pressed(const string action, const bool allow_echo = false, const bool exact_match = false) const;
	bool is_action_released(const string action, const bool exact_match = false) const;
	bool is_action_type() const;
	bool is_echo() const;
	bool is_pressed() const;
	void set_device(const int64_t device);
	bool shortcut_match(const ref<input_event> event, const bool exact_match = true) const;
	ref<input_event> xformed_by(const transform2d xform, const vector2 local_ofs = vector2(0, 0)) const;

};

}

#endif