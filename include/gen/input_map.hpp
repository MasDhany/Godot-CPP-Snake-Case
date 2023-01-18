#ifndef GODOT_CPP_INPUTMAP_HPP
#define GODOT_CPP_INPUTMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class input_event;

class input_map : public object {
	static input_map *_singleton;

	input_map();

	struct ___method_bindings {
		godot_method_bind *mb_action_add_event;
		godot_method_bind *mb_action_erase_event;
		godot_method_bind *mb_action_erase_events;
		godot_method_bind *mb_action_get_deadzone;
		godot_method_bind *mb_action_has_event;
		godot_method_bind *mb_action_set_deadzone;
		godot_method_bind *mb_add_action;
		godot_method_bind *mb_erase_action;
		godot_method_bind *mb_event_is_action;
		godot_method_bind *mb_get_action_list;
		godot_method_bind *mb_get_actions;
		godot_method_bind *mb_has_action;
		godot_method_bind *mb_load_from_globals;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline input_map *get_singleton()
	{
		if (!input_map::_singleton) {
			input_map::_singleton = new input_map;
		}
		return input_map::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "InputMap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InputMap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void action_add_event(const string action, const ref<input_event> event);
	void action_erase_event(const string action, const ref<input_event> event);
	void action_erase_events(const string action);
	real_t action_get_deadzone(const string action);
	bool action_has_event(const string action, const ref<input_event> event);
	void action_set_deadzone(const string action, const real_t deadzone);
	void add_action(const string action, const real_t deadzone = 0.5);
	void erase_action(const string action);
	bool event_is_action(const ref<input_event> event, const string action, const bool exact_match = false) const;
	array get_action_list(const string action);
	array get_actions();
	bool has_action(const string action) const;
	void load_from_globals();

};

}

#endif