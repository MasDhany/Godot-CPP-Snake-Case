#ifndef GODOT_CPP_KINEMATICCOLLISION_HPP
#define GODOT_CPP_KINEMATICCOLLISION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class object;

class kinematic_collision : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_angle;
		godot_method_bind *mb_get_collider;
		godot_method_bind *mb_get_collider_id;
		godot_method_bind *mb_get_collider_metadata;
		godot_method_bind *mb_get_collider_rid;
		godot_method_bind *mb_get_collider_shape;
		godot_method_bind *mb_get_collider_shape_index;
		godot_method_bind *mb_get_collider_velocity;
		godot_method_bind *mb_get_local_shape;
		godot_method_bind *mb_get_normal;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_remainder;
		godot_method_bind *mb_get_travel;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "KinematicCollision"; }
	static inline const char *___get_godot_class_name() { return (const char *) "KinematicCollision"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static kinematic_collision *_new();

	// methods
	real_t get_angle(const vector3 up_direction = vector3(0, 1, 0)) const;
	object *get_collider() const;
	int64_t get_collider_id() const;
	variant get_collider_metadata() const;
	rid get_collider_rid() const;
	object *get_collider_shape() const;
	int64_t get_collider_shape_index() const;
	vector3 get_collider_velocity() const;
	object *get_local_shape() const;
	vector3 get_normal() const;
	vector3 get_position() const;
	vector3 get_remainder() const;
	vector3 get_travel() const;

};

}

#endif