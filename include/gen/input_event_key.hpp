#ifndef GODOT_CPP_INPUTEVENTKEY_HPP
#define GODOT_CPP_INPUTEVENTKEY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event_with_modifiers.hpp"
namespace gd {


class input_event_key : public input_event_with_modifiers {
	struct ___method_bindings {
		godot_method_bind *mb_get_physical_scancode;
		godot_method_bind *mb_get_physical_scancode_with_modifiers;
		godot_method_bind *mb_get_scancode;
		godot_method_bind *mb_get_scancode_with_modifiers;
		godot_method_bind *mb_get_unicode;
		godot_method_bind *mb_set_echo;
		godot_method_bind *mb_set_physical_scancode;
		godot_method_bind *mb_set_pressed;
		godot_method_bind *mb_set_scancode;
		godot_method_bind *mb_set_unicode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventKey"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventKey"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static input_event_key *_new();

	// methods
	int64_t get_physical_scancode() const;
	int64_t get_physical_scancode_with_modifiers() const;
	int64_t get_scancode() const;
	int64_t get_scancode_with_modifiers() const;
	int64_t get_unicode() const;
	void set_echo(const bool echo);
	void set_physical_scancode(const int64_t scancode);
	void set_pressed(const bool pressed);
	void set_scancode(const int64_t scancode);
	void set_unicode(const int64_t unicode);

};

}

#endif