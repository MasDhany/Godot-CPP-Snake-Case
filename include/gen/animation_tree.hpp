#ifndef GODOT_CPP_ANIMATIONTREE_HPP
#define GODOT_CPP_ANIMATIONTREE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "animation_tree.hpp"

#include "node.hpp"
namespace gd {

class animation_node;
class node;

class animation_tree : public node {
	struct ___method_bindings {
		godot_method_bind *mb__clear_caches;
		godot_method_bind *mb__node_removed;
		godot_method_bind *mb__tree_changed;
		godot_method_bind *mb__update_properties;
		godot_method_bind *mb_advance;
		godot_method_bind *mb_get_animation_player;
		godot_method_bind *mb_get_process_mode;
		godot_method_bind *mb_get_root_motion_track;
		godot_method_bind *mb_get_root_motion_transform;
		godot_method_bind *mb_get_tree_root;
		godot_method_bind *mb_is_active;
		godot_method_bind *mb_rename_parameter;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_animation_player;
		godot_method_bind *mb_set_process_mode;
		godot_method_bind *mb_set_root_motion_track;
		godot_method_bind *mb_set_tree_root;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationTree"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationTree"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AnimationProcessMode {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
		ANIMATION_PROCESS_MANUAL = 2,
	};

	// constants


	static animation_tree *_new();

	// methods
	void _clear_caches();
	void _node_removed(const node *arg0);
	void _tree_changed();
	void _update_properties();
	void advance(const real_t delta);
	node_path get_animation_player() const;
	animation_tree::AnimationProcessMode get_process_mode() const;
	node_path get_root_motion_track() const;
	transform get_root_motion_transform() const;
	ref<animation_node> get_tree_root() const;
	bool is_active() const;
	void rename_parameter(const string old_name, const string new_name);
	void set_active(const bool active);
	void set_animation_player(const node_path root);
	void set_process_mode(const int64_t mode);
	void set_root_motion_track(const node_path path_);
	void set_tree_root(const ref<animation_node> root);

};

}

#endif