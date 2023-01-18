#ifndef GODOT_CPP_KINEMATICBODY2D_HPP
#define GODOT_CPP_KINEMATICBODY2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "kinematic_body2d.hpp"

#include "physics_body2d.hpp"
namespace gd {

class kinematic_collision2d;
class object;

class kinematic_body2d : public physics_body2d {
	struct ___method_bindings {
		godot_method_bind *mb__direct_state_changed;
		godot_method_bind *mb_get_floor_angle;
		godot_method_bind *mb_get_floor_normal;
		godot_method_bind *mb_get_floor_velocity;
		godot_method_bind *mb_get_last_slide_collision;
		godot_method_bind *mb_get_moving_platform_apply_velocity_on_leave;
		godot_method_bind *mb_get_safe_margin;
		godot_method_bind *mb_get_slide_collision;
		godot_method_bind *mb_get_slide_count;
		godot_method_bind *mb_is_on_ceiling;
		godot_method_bind *mb_is_on_floor;
		godot_method_bind *mb_is_on_wall;
		godot_method_bind *mb_is_sync_to_physics_enabled;
		godot_method_bind *mb_move_and_collide;
		godot_method_bind *mb_move_and_slide;
		godot_method_bind *mb_move_and_slide_with_snap;
		godot_method_bind *mb_set_moving_platform_apply_velocity_on_leave;
		godot_method_bind *mb_set_safe_margin;
		godot_method_bind *mb_set_sync_to_physics;
		godot_method_bind *mb_test_move;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "KinematicBody2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "KinematicBody2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MovingPlatformApplyVelocityOnLeave {
		PLATFORM_VEL_ON_LEAVE_ALWAYS = 0,
		PLATFORM_VEL_ON_LEAVE_UPWARD_ONLY = 1,
		PLATFORM_VEL_ON_LEAVE_NEVER = 2,
	};

	// constants


	static kinematic_body2d *_new();

	// methods
	void _direct_state_changed(const object *arg0);
	real_t get_floor_angle(const vector2 up_direction = vector2(0, -1)) const;
	vector2 get_floor_normal() const;
	vector2 get_floor_velocity() const;
	ref<kinematic_collision2d> get_last_slide_collision();
	kinematic_body2d::MovingPlatformApplyVelocityOnLeave get_moving_platform_apply_velocity_on_leave() const;
	real_t get_safe_margin() const;
	ref<kinematic_collision2d> get_slide_collision(const int64_t slide_idx);
	int64_t get_slide_count() const;
	bool is_on_ceiling() const;
	bool is_on_floor() const;
	bool is_on_wall() const;
	bool is_sync_to_physics_enabled() const;
	ref<kinematic_collision2d> move_and_collide(const vector2 rel_vec, const bool infinite_inertia = true, const bool exclude_raycast_shapes = true, const bool test_only = false);
	vector2 move_and_slide(const vector2 linear_velocity, const vector2 up_direction = vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const real_t floor_max_angle = 0.785398, const bool infinite_inertia = true);
	vector2 move_and_slide_with_snap(const vector2 linear_velocity, const vector2 snap, const vector2 up_direction = vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const real_t floor_max_angle = 0.785398, const bool infinite_inertia = true);
	void set_moving_platform_apply_velocity_on_leave(const int64_t on_leave_apply_velocity);
	void set_safe_margin(const real_t pixels);
	void set_sync_to_physics(const bool enable);
	bool test_move(const transform2d from, const vector2 rel_vec, const bool infinite_inertia = true);

};

}

#endif