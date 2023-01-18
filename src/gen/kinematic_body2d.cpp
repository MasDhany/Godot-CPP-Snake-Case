#include "kinematic_body2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "kinematic_collision2d.hpp"
#include "object.hpp"


namespace gd {


kinematic_body2d::___method_bindings kinematic_body2d::___mb = {};

void *kinematic_body2d::_detail_class_tag = nullptr;

void kinematic_body2d::___init_method_bindings() {
	___mb.mb__direct_state_changed = gd::api->godot_method_bind_get_method("KinematicBody2D", "_direct_state_changed");
	___mb.mb_get_floor_angle = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_floor_angle");
	___mb.mb_get_floor_normal = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_floor_normal");
	___mb.mb_get_floor_velocity = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_floor_velocity");
	___mb.mb_get_last_slide_collision = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_last_slide_collision");
	___mb.mb_get_moving_platform_apply_velocity_on_leave = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_moving_platform_apply_velocity_on_leave");
	___mb.mb_get_safe_margin = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_safe_margin");
	___mb.mb_get_slide_collision = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_slide_collision");
	___mb.mb_get_slide_count = gd::api->godot_method_bind_get_method("KinematicBody2D", "get_slide_count");
	___mb.mb_is_on_ceiling = gd::api->godot_method_bind_get_method("KinematicBody2D", "is_on_ceiling");
	___mb.mb_is_on_floor = gd::api->godot_method_bind_get_method("KinematicBody2D", "is_on_floor");
	___mb.mb_is_on_wall = gd::api->godot_method_bind_get_method("KinematicBody2D", "is_on_wall");
	___mb.mb_is_sync_to_physics_enabled = gd::api->godot_method_bind_get_method("KinematicBody2D", "is_sync_to_physics_enabled");
	___mb.mb_move_and_collide = gd::api->godot_method_bind_get_method("KinematicBody2D", "move_and_collide");
	___mb.mb_move_and_slide = gd::api->godot_method_bind_get_method("KinematicBody2D", "move_and_slide");
	___mb.mb_move_and_slide_with_snap = gd::api->godot_method_bind_get_method("KinematicBody2D", "move_and_slide_with_snap");
	___mb.mb_set_moving_platform_apply_velocity_on_leave = gd::api->godot_method_bind_get_method("KinematicBody2D", "set_moving_platform_apply_velocity_on_leave");
	___mb.mb_set_safe_margin = gd::api->godot_method_bind_get_method("KinematicBody2D", "set_safe_margin");
	___mb.mb_set_sync_to_physics = gd::api->godot_method_bind_get_method("KinematicBody2D", "set_sync_to_physics");
	___mb.mb_test_move = gd::api->godot_method_bind_get_method("KinematicBody2D", "test_move");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "KinematicBody2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

kinematic_body2d *kinematic_body2d::_new()
{
	return (kinematic_body2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"KinematicBody2D")());
}
void kinematic_body2d::_direct_state_changed(const object *arg0) {
	___godot_icall_void_Object(___mb.mb__direct_state_changed, (const object *) this, arg0);
}

real_t kinematic_body2d::get_floor_angle(const vector2 up_direction) const {
	return ___godot_icall_float_Vector2(___mb.mb_get_floor_angle, (const object *) this, up_direction);
}

vector2 kinematic_body2d::get_floor_normal() const {
	return ___godot_icall_Vector2(___mb.mb_get_floor_normal, (const object *) this);
}

vector2 kinematic_body2d::get_floor_velocity() const {
	return ___godot_icall_Vector2(___mb.mb_get_floor_velocity, (const object *) this);
}

ref<kinematic_collision2d> kinematic_body2d::get_last_slide_collision() {
	return ref<kinematic_collision2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_last_slide_collision, (const object *) this));
}

kinematic_body2d::MovingPlatformApplyVelocityOnLeave kinematic_body2d::get_moving_platform_apply_velocity_on_leave() const {
	return (kinematic_body2d::MovingPlatformApplyVelocityOnLeave) ___godot_icall_int(___mb.mb_get_moving_platform_apply_velocity_on_leave, (const object *) this);
}

real_t kinematic_body2d::get_safe_margin() const {
	return ___godot_icall_float(___mb.mb_get_safe_margin, (const object *) this);
}

ref<kinematic_collision2d> kinematic_body2d::get_slide_collision(const int64_t slide_idx) {
	return ref<kinematic_collision2d>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_slide_collision, (const object *) this, slide_idx));
}

int64_t kinematic_body2d::get_slide_count() const {
	return ___godot_icall_int(___mb.mb_get_slide_count, (const object *) this);
}

bool kinematic_body2d::is_on_ceiling() const {
	return ___godot_icall_bool(___mb.mb_is_on_ceiling, (const object *) this);
}

bool kinematic_body2d::is_on_floor() const {
	return ___godot_icall_bool(___mb.mb_is_on_floor, (const object *) this);
}

bool kinematic_body2d::is_on_wall() const {
	return ___godot_icall_bool(___mb.mb_is_on_wall, (const object *) this);
}

bool kinematic_body2d::is_sync_to_physics_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_sync_to_physics_enabled, (const object *) this);
}

ref<kinematic_collision2d> kinematic_body2d::move_and_collide(const vector2 rel_vec, const bool infinite_inertia, const bool exclude_raycast_shapes, const bool test_only) {
	return ref<kinematic_collision2d>::__internal_constructor(___godot_icall_Object_Vector2_bool_bool_bool(___mb.mb_move_and_collide, (const object *) this, rel_vec, infinite_inertia, exclude_raycast_shapes, test_only));
}

vector2 kinematic_body2d::move_and_slide(const vector2 linear_velocity, const vector2 up_direction, const bool stop_on_slope, const int64_t max_slides, const real_t floor_max_angle, const bool infinite_inertia) {
	return ___godot_icall_Vector2_Vector2_Vector2_bool_int_float_bool(___mb.mb_move_and_slide, (const object *) this, linear_velocity, up_direction, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

vector2 kinematic_body2d::move_and_slide_with_snap(const vector2 linear_velocity, const vector2 snap, const vector2 up_direction, const bool stop_on_slope, const int64_t max_slides, const real_t floor_max_angle, const bool infinite_inertia) {
	return ___godot_icall_Vector2_Vector2_Vector2_Vector2_bool_int_float_bool(___mb.mb_move_and_slide_with_snap, (const object *) this, linear_velocity, snap, up_direction, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

void kinematic_body2d::set_moving_platform_apply_velocity_on_leave(const int64_t on_leave_apply_velocity) {
	___godot_icall_void_int(___mb.mb_set_moving_platform_apply_velocity_on_leave, (const object *) this, on_leave_apply_velocity);
}

void kinematic_body2d::set_safe_margin(const real_t pixels) {
	___godot_icall_void_float(___mb.mb_set_safe_margin, (const object *) this, pixels);
}

void kinematic_body2d::set_sync_to_physics(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_sync_to_physics, (const object *) this, enable);
}

bool kinematic_body2d::test_move(const transform2d from, const vector2 rel_vec, const bool infinite_inertia) {
	return ___godot_icall_bool_Transform2D_Vector2_bool(___mb.mb_test_move, (const object *) this, from, rel_vec, infinite_inertia);
}

}