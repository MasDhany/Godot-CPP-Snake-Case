#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINE_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "animation_root_node.hpp"
namespace gd {

class animation_node;
class animation_node_state_machine_transition;

class animation_node_state_machine : public animation_root_node {
	struct ___method_bindings {
		godot_method_bind *mb__tree_changed;
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_add_transition;
		godot_method_bind *mb_get_end_node;
		godot_method_bind *mb_get_graph_offset;
		godot_method_bind *mb_get_node;
		godot_method_bind *mb_get_node_name;
		godot_method_bind *mb_get_node_position;
		godot_method_bind *mb_get_start_node;
		godot_method_bind *mb_get_transition;
		godot_method_bind *mb_get_transition_count;
		godot_method_bind *mb_get_transition_from;
		godot_method_bind *mb_get_transition_to;
		godot_method_bind *mb_has_node;
		godot_method_bind *mb_has_transition;
		godot_method_bind *mb_remove_node;
		godot_method_bind *mb_remove_transition;
		godot_method_bind *mb_remove_transition_by_index;
		godot_method_bind *mb_rename_node;
		godot_method_bind *mb_replace_node;
		godot_method_bind *mb_set_end_node;
		godot_method_bind *mb_set_graph_offset;
		godot_method_bind *mb_set_node_position;
		godot_method_bind *mb_set_start_node;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachine"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeStateMachine"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static animation_node_state_machine *_new();

	// methods
	void _tree_changed();
	void add_node(const string name, const ref<animation_node> node_, const vector2 position = vector2(0, 0));
	void add_transition(const string from, const string to, const ref<animation_node_state_machine_transition> transition);
	string get_end_node() const;
	vector2 get_graph_offset() const;
	ref<animation_node> get_node(const string name) const;
	string get_node_name(const ref<animation_node> node_) const;
	vector2 get_node_position(const string name) const;
	string get_start_node() const;
	ref<animation_node_state_machine_transition> get_transition(const int64_t idx) const;
	int64_t get_transition_count() const;
	string get_transition_from(const int64_t idx) const;
	string get_transition_to(const int64_t idx) const;
	bool has_node(const string name) const;
	bool has_transition(const string from, const string to) const;
	void remove_node(const string name);
	void remove_transition(const string from, const string to);
	void remove_transition_by_index(const int64_t idx);
	void rename_node(const string name, const string new_name);
	void replace_node(const string name, const ref<animation_node> node_);
	void set_end_node(const string name);
	void set_graph_offset(const vector2 offset);
	void set_node_position(const string name, const vector2 position);
	void set_start_node(const string name);

};

}

#endif