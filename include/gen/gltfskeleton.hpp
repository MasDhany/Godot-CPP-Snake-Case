#ifndef GODOT_CPP_GLTFSKELETON_HPP
#define GODOT_CPP_GLTFSKELETON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class bone_attachment;
class skeleton;

class gltfskeleton : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_bone_attachment;
		godot_method_bind *mb_get_bone_attachment_count;
		godot_method_bind *mb_get_godot_bone_node;
		godot_method_bind *mb_get_godot_skeleton;
		godot_method_bind *mb_get_joints;
		godot_method_bind *mb_get_roots;
		godot_method_bind *mb_get_unique_names;
		godot_method_bind *mb_set_godot_bone_node;
		godot_method_bind *mb_set_joints;
		godot_method_bind *mb_set_roots;
		godot_method_bind *mb_set_unique_names;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFSkeleton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFSkeleton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gltfskeleton *_new();

	// methods
	bone_attachment *get_bone_attachment(const int64_t idx);
	int64_t get_bone_attachment_count();
	dictionary get_godot_bone_node();
	skeleton *get_godot_skeleton();
	pool_int_array get_joints();
	pool_int_array get_roots();
	array get_unique_names();
	void set_godot_bone_node(const dictionary godot_bone_node);
	void set_joints(const pool_int_array joints);
	void set_roots(const pool_int_array roots);
	void set_unique_names(const array unique_names);

};

}

#endif