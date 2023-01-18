#ifndef GODOT_CPP_INPUTEVENTWITHMODIFIERS_HPP
#define GODOT_CPP_INPUTEVENTWITHMODIFIERS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "input_event.hpp"
namespace gd {


class input_event_with_modifiers : public input_event {
	struct ___method_bindings {
		godot_method_bind *mb_get_alt;
		godot_method_bind *mb_get_command;
		godot_method_bind *mb_get_control;
		godot_method_bind *mb_get_metakey;
		godot_method_bind *mb_get_shift;
		godot_method_bind *mb_set_alt;
		godot_method_bind *mb_set_command;
		godot_method_bind *mb_set_control;
		godot_method_bind *mb_set_metakey;
		godot_method_bind *mb_set_shift;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventWithModifiers"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputEventWithModifiers"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool get_alt() const;
	bool get_command() const;
	bool get_control() const;
	bool get_metakey() const;
	bool get_shift() const;
	void set_alt(const bool enable);
	void set_command(const bool enable);
	void set_control(const bool enable);
	void set_metakey(const bool enable);
	void set_shift(const bool enable);

};

}

#endif