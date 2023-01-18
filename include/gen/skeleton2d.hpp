#ifndef GODOT_CPP_SKELETON2D_HPP
#define GODOT_CPP_SKELETON2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class bone2d;

class skeleton2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__update_bone_setup;
		godot_method_bind *mb__update_transform;
		godot_method_bind *mb_get_bone;
		godot_method_bind *mb_get_bone_count;
		godot_method_bind *mb_get_skeleton;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Skeleton2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Skeleton2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static skeleton2d *_new();

	// methods
	void _update_bone_setup();
	void _update_transform();
	bone2d *get_bone(const int64_t idx);
	int64_t get_bone_count() const;
	rid get_skeleton() const;

};

}

#endif