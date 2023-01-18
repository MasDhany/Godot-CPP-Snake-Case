#ifndef GODOT_CPP_SKELETON_HPP
#define GODOT_CPP_SKELETON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class node;
class skin;
class skin_reference;

class skeleton : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_add_bone;
		godot_method_bind *mb_bind_child_node_to_bone;
		godot_method_bind *mb_clear_bones;
		godot_method_bind *mb_clear_bones_global_pose_override;
		godot_method_bind *mb_find_bone;
		godot_method_bind *mb_get_bone_count;
		godot_method_bind *mb_get_bone_custom_pose;
		godot_method_bind *mb_get_bone_global_pose;
		godot_method_bind *mb_get_bone_global_pose_no_override;
		godot_method_bind *mb_get_bone_name;
		godot_method_bind *mb_get_bone_parent;
		godot_method_bind *mb_get_bone_pose;
		godot_method_bind *mb_get_bone_rest;
		godot_method_bind *mb_get_bound_child_nodes_to_bone;
		godot_method_bind *mb_is_bone_rest_disabled;
		godot_method_bind *mb_localize_rests;
		godot_method_bind *mb_physical_bones_add_collision_exception;
		godot_method_bind *mb_physical_bones_remove_collision_exception;
		godot_method_bind *mb_physical_bones_start_simulation;
		godot_method_bind *mb_physical_bones_stop_simulation;
		godot_method_bind *mb_register_skin;
		godot_method_bind *mb_set_bone_custom_pose;
		godot_method_bind *mb_set_bone_disable_rest;
		godot_method_bind *mb_set_bone_global_pose_override;
		godot_method_bind *mb_set_bone_name;
		godot_method_bind *mb_set_bone_parent;
		godot_method_bind *mb_set_bone_pose;
		godot_method_bind *mb_set_bone_rest;
		godot_method_bind *mb_unbind_child_node_from_bone;
		godot_method_bind *mb_unparent_bone_and_rest;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Skeleton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Skeleton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_UPDATE_SKELETON = 50;


	static skeleton *_new();

	// methods
	void add_bone(const string name);
	void bind_child_node_to_bone(const int64_t bone_idx, const node *node_);
	void clear_bones();
	void clear_bones_global_pose_override();
	int64_t find_bone(const string name) const;
	int64_t get_bone_count() const;
	transform get_bone_custom_pose(const int64_t bone_idx) const;
	transform get_bone_global_pose(const int64_t bone_idx) const;
	transform get_bone_global_pose_no_override(const int64_t bone_idx) const;
	string get_bone_name(const int64_t bone_idx) const;
	int64_t get_bone_parent(const int64_t bone_idx) const;
	transform get_bone_pose(const int64_t bone_idx) const;
	transform get_bone_rest(const int64_t bone_idx) const;
	array get_bound_child_nodes_to_bone(const int64_t bone_idx) const;
	bool is_bone_rest_disabled(const int64_t bone_idx) const;
	void localize_rests();
	void physical_bones_add_collision_exception(const rid exception);
	void physical_bones_remove_collision_exception(const rid exception);
	void physical_bones_start_simulation(const array bones = array());
	void physical_bones_stop_simulation();
	ref<skin_reference> register_skin(const ref<skin> skin_);
	void set_bone_custom_pose(const int64_t bone_idx, const transform custom_pose);
	void set_bone_disable_rest(const int64_t bone_idx, const bool disable);
	void set_bone_global_pose_override(const int64_t bone_idx, const transform pose, const real_t amount, const bool persistent = false);
	void set_bone_name(const int64_t bone_idx, const string name);
	void set_bone_parent(const int64_t bone_idx, const int64_t parent_idx);
	void set_bone_pose(const int64_t bone_idx, const transform pose);
	void set_bone_rest(const int64_t bone_idx, const transform rest);
	void unbind_child_node_from_bone(const int64_t bone_idx, const node *node_);
	void unparent_bone_and_rest(const int64_t bone_idx);

};

}

#endif