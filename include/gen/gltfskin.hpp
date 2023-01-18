#ifndef GODOT_CPP_GLTFSKIN_HPP
#define GODOT_CPP_GLTFSKIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class skin;

class gltfskin : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_godot_skin;
		godot_method_bind *mb_get_inverse_binds;
		godot_method_bind *mb_get_joint_i_to_bone_i;
		godot_method_bind *mb_get_joint_i_to_name;
		godot_method_bind *mb_get_joints;
		godot_method_bind *mb_get_joints_original;
		godot_method_bind *mb_get_non_joints;
		godot_method_bind *mb_get_roots;
		godot_method_bind *mb_get_skeleton;
		godot_method_bind *mb_get_skin_root;
		godot_method_bind *mb_set_godot_skin;
		godot_method_bind *mb_set_inverse_binds;
		godot_method_bind *mb_set_joint_i_to_bone_i;
		godot_method_bind *mb_set_joint_i_to_name;
		godot_method_bind *mb_set_joints;
		godot_method_bind *mb_set_joints_original;
		godot_method_bind *mb_set_non_joints;
		godot_method_bind *mb_set_roots;
		godot_method_bind *mb_set_skeleton;
		godot_method_bind *mb_set_skin_root;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFSkin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFSkin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gltfskin *_new();

	// methods
	ref<skin> get_godot_skin();
	array get_inverse_binds();
	dictionary get_joint_i_to_bone_i();
	dictionary get_joint_i_to_name();
	pool_int_array get_joints();
	pool_int_array get_joints_original();
	pool_int_array get_non_joints();
	pool_int_array get_roots();
	int64_t get_skeleton();
	int64_t get_skin_root();
	void set_godot_skin(const ref<skin> godot_skin);
	void set_inverse_binds(const array inverse_binds);
	void set_joint_i_to_bone_i(const dictionary joint_i_to_bone_i);
	void set_joint_i_to_name(const dictionary joint_i_to_name);
	void set_joints(const pool_int_array joints);
	void set_joints_original(const pool_int_array joints_original);
	void set_non_joints(const pool_int_array non_joints);
	void set_roots(const pool_int_array roots);
	void set_skeleton(const int64_t skeleton_);
	void set_skin_root(const int64_t skin_root);

};

}

#endif