#ifndef GODOT_CPP_PHYSICS2DTESTMOTIONRESULT_HPP
#define GODOT_CPP_PHYSICS2DTESTMOTIONRESULT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class object;

class physics2_dtest_motion_result : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_collider;
		godot_method_bind *mb_get_collider_id;
		godot_method_bind *mb_get_collider_rid;
		godot_method_bind *mb_get_collider_shape;
		godot_method_bind *mb_get_collider_velocity;
		godot_method_bind *mb_get_collision_depth;
		godot_method_bind *mb_get_collision_normal;
		godot_method_bind *mb_get_collision_point;
		godot_method_bind *mb_get_collision_safe_fraction;
		godot_method_bind *mb_get_collision_unsafe_fraction;
		godot_method_bind *mb_get_motion;
		godot_method_bind *mb_get_motion_remainder;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Physics2DTestMotionResult"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Physics2DTestMotionResult"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static physics2_dtest_motion_result *_new();

	// methods
	object *get_collider() const;
	int64_t get_collider_id() const;
	rid get_collider_rid() const;
	int64_t get_collider_shape() const;
	vector2 get_collider_velocity() const;
	real_t get_collision_depth() const;
	vector2 get_collision_normal() const;
	vector2 get_collision_point() const;
	real_t get_collision_safe_fraction() const;
	real_t get_collision_unsafe_fraction() const;
	vector2 get_motion() const;
	vector2 get_motion_remainder() const;

};

}

#endif