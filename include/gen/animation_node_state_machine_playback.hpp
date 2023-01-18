#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINEPLAYBACK_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINEPLAYBACK_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class animation_node_state_machine_playback : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_current_length;
		godot_method_bind *mb_get_current_node;
		godot_method_bind *mb_get_current_play_position;
		godot_method_bind *mb_get_travel_path;
		godot_method_bind *mb_is_playing;
		godot_method_bind *mb_start;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_travel;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachinePlayback"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeStateMachinePlayback"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static animation_node_state_machine_playback *_new();

	// methods
	real_t get_current_length() const;
	string get_current_node() const;
	real_t get_current_play_position() const;
	pool_string_array get_travel_path() const;
	bool is_playing() const;
	void start(const string node_);
	void stop();
	void travel(const string to_node);

};

}

#endif