#ifndef GODOT_CPP_RAYCAST2D_HPP
#define GODOT_CPP_RAYCAST2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {

class object;

class ray_cast2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_add_exception;
		godot_method_bind *mb_add_exception_rid;
		godot_method_bind *mb_clear_exceptions;
		godot_method_bind *mb_force_raycast_update;
		godot_method_bind *mb_get_cast_to;
		godot_method_bind *mb_get_collider;
		godot_method_bind *mb_get_collider_shape;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_collision_normal;
		godot_method_bind *mb_get_collision_point;
		godot_method_bind *mb_get_exclude_parent_body;
		godot_method_bind *mb_is_collide_with_areas_enabled;
		godot_method_bind *mb_is_collide_with_bodies_enabled;
		godot_method_bind *mb_is_colliding;
		godot_method_bind *mb_is_enabled;
		godot_method_bind *mb_remove_exception;
		godot_method_bind *mb_remove_exception_rid;
		godot_method_bind *mb_set_cast_to;
		godot_method_bind *mb_set_collide_with_areas;
		godot_method_bind *mb_set_collide_with_bodies;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_enabled;
		godot_method_bind *mb_set_exclude_parent_body;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RayCast2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RayCast2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ray_cast2d *_new();

	// methods
	void add_exception(const object *node_);
	void add_exception_rid(const rid rid_);
	void clear_exceptions();
	void force_raycast_update();
	vector2 get_cast_to() const;
	object *get_collider() const;
	int64_t get_collider_shape() const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	vector2 get_collision_normal() const;
	vector2 get_collision_point() const;
	bool get_exclude_parent_body() const;
	bool is_collide_with_areas_enabled() const;
	bool is_collide_with_bodies_enabled() const;
	bool is_colliding() const;
	bool is_enabled() const;
	void remove_exception(const object *node_);
	void remove_exception_rid(const rid rid_);
	void set_cast_to(const vector2 local_point);
	void set_collide_with_areas(const bool enable);
	void set_collide_with_bodies(const bool enable);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_enabled(const bool enabled);
	void set_exclude_parent_body(const bool mask);

};

}

#endif