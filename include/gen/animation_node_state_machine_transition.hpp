#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINETRANSITION_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINETRANSITION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "animation_node_state_machine_transition.hpp"

#include "resource.hpp"
namespace gd {


class animation_node_state_machine_transition : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_advance_condition;
		godot_method_bind *mb_get_priority;
		godot_method_bind *mb_get_switch_mode;
		godot_method_bind *mb_get_xfade_time;
		godot_method_bind *mb_has_auto_advance;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_set_advance_condition;
		godot_method_bind *mb_set_auto_advance;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_priority;
		godot_method_bind *mb_set_switch_mode;
		godot_method_bind *mb_set_xfade_time;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachineTransition"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeStateMachineTransition"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SwitchMode {
		SWITCH_MODE_IMMEDIATE = 0,
		SWITCH_MODE_SYNC = 1,
		SWITCH_MODE_AT_END = 2,
	};

	// constants


	static animation_node_state_machine_transition *_new();

	// methods
	string get_advance_condition() const;
	int64_t get_priority() const;
	animation_node_state_machine_transition::SwitchMode get_switch_mode() const;
	real_t get_xfade_time() const;
	bool has_auto_advance() const;
	bool is_disabled() const;
	void set_advance_condition(const string name);
	void set_auto_advance(const bool auto_advance);
	void set_disabled(const bool disabled);
	void set_priority(const int64_t priority);
	void set_switch_mode(const int64_t mode);
	void set_xfade_time(const real_t secs);

};

}

#endif