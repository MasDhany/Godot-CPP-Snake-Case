#ifndef GODOT_CPP_BONE2D_HPP
#define GODOT_CPP_BONE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class bone2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_apply_rest;
		godot_method_bind *mb_get_default_length;
		godot_method_bind *mb_get_index_in_skeleton;
		godot_method_bind *mb_get_rest;
		godot_method_bind *mb_get_skeleton_rest;
		godot_method_bind *mb_set_default_length;
		godot_method_bind *mb_set_rest;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Bone2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Bone2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static bone2d *_new();

	// methods
	void apply_rest();
	real_t get_default_length() const;
	int64_t get_index_in_skeleton() const;
	transform2d get_rest() const;
	transform2d get_skeleton_rest() const;
	void set_default_length(const real_t default_length);
	void set_rest(const transform2d rest);

};

}

#endif