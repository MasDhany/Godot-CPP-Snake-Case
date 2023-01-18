#include "rigid_body2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "physics2_ddirect_body_state.hpp"
#include "physics2_dtest_motion_result.hpp"
#include "physics_material.hpp"


namespace gd {


rigid_body2d::___method_bindings rigid_body2d::___mb = {};

void *rigid_body2d::_detail_class_tag = nullptr;

void rigid_body2d::___init_method_bindings() {
	___mb.mb__body_enter_tree = gd::api->godot_method_bind_get_method("RigidBody2D", "_body_enter_tree");
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("RigidBody2D", "_body_exit_tree");
	___mb.mb__direct_state_changed = gd::api->godot_method_bind_get_method("RigidBody2D", "_direct_state_changed");
	___mb.mb__integrate_forces = gd::api->godot_method_bind_get_method("RigidBody2D", "_integrate_forces");
	___mb.mb__reload_physics_characteristics = gd::api->godot_method_bind_get_method("RigidBody2D", "_reload_physics_characteristics");
	___mb.mb_add_central_force = gd::api->godot_method_bind_get_method("RigidBody2D", "add_central_force");
	___mb.mb_add_force = gd::api->godot_method_bind_get_method("RigidBody2D", "add_force");
	___mb.mb_add_torque = gd::api->godot_method_bind_get_method("RigidBody2D", "add_torque");
	___mb.mb_apply_central_impulse = gd::api->godot_method_bind_get_method("RigidBody2D", "apply_central_impulse");
	___mb.mb_apply_impulse = gd::api->godot_method_bind_get_method("RigidBody2D", "apply_impulse");
	___mb.mb_apply_torque_impulse = gd::api->godot_method_bind_get_method("RigidBody2D", "apply_torque_impulse");
	___mb.mb_get_angular_damp = gd::api->godot_method_bind_get_method("RigidBody2D", "get_angular_damp");
	___mb.mb_get_angular_velocity = gd::api->godot_method_bind_get_method("RigidBody2D", "get_angular_velocity");
	___mb.mb_get_applied_force = gd::api->godot_method_bind_get_method("RigidBody2D", "get_applied_force");
	___mb.mb_get_applied_torque = gd::api->godot_method_bind_get_method("RigidBody2D", "get_applied_torque");
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("RigidBody2D", "get_bounce");
	___mb.mb_get_colliding_bodies = gd::api->godot_method_bind_get_method("RigidBody2D", "get_colliding_bodies");
	___mb.mb_get_continuous_collision_detection_mode = gd::api->godot_method_bind_get_method("RigidBody2D", "get_continuous_collision_detection_mode");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("RigidBody2D", "get_friction");
	___mb.mb_get_gravity_scale = gd::api->godot_method_bind_get_method("RigidBody2D", "get_gravity_scale");
	___mb.mb_get_inertia = gd::api->godot_method_bind_get_method("RigidBody2D", "get_inertia");
	___mb.mb_get_linear_damp = gd::api->godot_method_bind_get_method("RigidBody2D", "get_linear_damp");
	___mb.mb_get_linear_velocity = gd::api->godot_method_bind_get_method("RigidBody2D", "get_linear_velocity");
	___mb.mb_get_mass = gd::api->godot_method_bind_get_method("RigidBody2D", "get_mass");
	___mb.mb_get_max_contacts_reported = gd::api->godot_method_bind_get_method("RigidBody2D", "get_max_contacts_reported");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("RigidBody2D", "get_mode");
	___mb.mb_get_physics_material_override = gd::api->godot_method_bind_get_method("RigidBody2D", "get_physics_material_override");
	___mb.mb_get_weight = gd::api->godot_method_bind_get_method("RigidBody2D", "get_weight");
	___mb.mb_is_able_to_sleep = gd::api->godot_method_bind_get_method("RigidBody2D", "is_able_to_sleep");
	___mb.mb_is_contact_monitor_enabled = gd::api->godot_method_bind_get_method("RigidBody2D", "is_contact_monitor_enabled");
	___mb.mb_is_sleeping = gd::api->godot_method_bind_get_method("RigidBody2D", "is_sleeping");
	___mb.mb_is_using_custom_integrator = gd::api->godot_method_bind_get_method("RigidBody2D", "is_using_custom_integrator");
	___mb.mb_set_angular_damp = gd::api->godot_method_bind_get_method("RigidBody2D", "set_angular_damp");
	___mb.mb_set_angular_velocity = gd::api->godot_method_bind_get_method("RigidBody2D", "set_angular_velocity");
	___mb.mb_set_applied_force = gd::api->godot_method_bind_get_method("RigidBody2D", "set_applied_force");
	___mb.mb_set_applied_torque = gd::api->godot_method_bind_get_method("RigidBody2D", "set_applied_torque");
	___mb.mb_set_axis_velocity = gd::api->godot_method_bind_get_method("RigidBody2D", "set_axis_velocity");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("RigidBody2D", "set_bounce");
	___mb.mb_set_can_sleep = gd::api->godot_method_bind_get_method("RigidBody2D", "set_can_sleep");
	___mb.mb_set_contact_monitor = gd::api->godot_method_bind_get_method("RigidBody2D", "set_contact_monitor");
	___mb.mb_set_continuous_collision_detection_mode = gd::api->godot_method_bind_get_method("RigidBody2D", "set_continuous_collision_detection_mode");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("RigidBody2D", "set_friction");
	___mb.mb_set_gravity_scale = gd::api->godot_method_bind_get_method("RigidBody2D", "set_gravity_scale");
	___mb.mb_set_inertia = gd::api->godot_method_bind_get_method("RigidBody2D", "set_inertia");
	___mb.mb_set_linear_damp = gd::api->godot_method_bind_get_method("RigidBody2D", "set_linear_damp");
	___mb.mb_set_linear_velocity = gd::api->godot_method_bind_get_method("RigidBody2D", "set_linear_velocity");
	___mb.mb_set_mass = gd::api->godot_method_bind_get_method("RigidBody2D", "set_mass");
	___mb.mb_set_max_contacts_reported = gd::api->godot_method_bind_get_method("RigidBody2D", "set_max_contacts_reported");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("RigidBody2D", "set_mode");
	___mb.mb_set_physics_material_override = gd::api->godot_method_bind_get_method("RigidBody2D", "set_physics_material_override");
	___mb.mb_set_sleeping = gd::api->godot_method_bind_get_method("RigidBody2D", "set_sleeping");
	___mb.mb_set_use_custom_integrator = gd::api->godot_method_bind_get_method("RigidBody2D", "set_use_custom_integrator");
	___mb.mb_set_weight = gd::api->godot_method_bind_get_method("RigidBody2D", "set_weight");
	___mb.mb_test_motion = gd::api->godot_method_bind_get_method("RigidBody2D", "test_motion");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RigidBody2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rigid_body2d *rigid_body2d::_new()
{
	return (rigid_body2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RigidBody2D")());
}
void rigid_body2d::_body_enter_tree(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__body_enter_tree, (const object *) this, arg0);
}

void rigid_body2d::_body_exit_tree(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__body_exit_tree, (const object *) this, arg0);
}

void rigid_body2d::_direct_state_changed(const object *arg0) {
	___godot_icall_void_Object(___mb.mb__direct_state_changed, (const object *) this, arg0);
}

void rigid_body2d::_integrate_forces(const physics2_ddirect_body_state *state) {
	___godot_icall_void_Object(___mb.mb__integrate_forces, (const object *) this, state);
}

void rigid_body2d::_reload_physics_characteristics() {
	___godot_icall_void(___mb.mb__reload_physics_characteristics, (const object *) this);
}

void rigid_body2d::add_central_force(const vector2 force) {
	___godot_icall_void_Vector2(___mb.mb_add_central_force, (const object *) this, force);
}

void rigid_body2d::add_force(const vector2 offset, const vector2 force) {
	___godot_icall_void_Vector2_Vector2(___mb.mb_add_force, (const object *) this, offset, force);
}

void rigid_body2d::add_torque(const real_t torque) {
	___godot_icall_void_float(___mb.mb_add_torque, (const object *) this, torque);
}

void rigid_body2d::apply_central_impulse(const vector2 impulse) {
	___godot_icall_void_Vector2(___mb.mb_apply_central_impulse, (const object *) this, impulse);
}

void rigid_body2d::apply_impulse(const vector2 offset, const vector2 impulse) {
	___godot_icall_void_Vector2_Vector2(___mb.mb_apply_impulse, (const object *) this, offset, impulse);
}

void rigid_body2d::apply_torque_impulse(const real_t torque) {
	___godot_icall_void_float(___mb.mb_apply_torque_impulse, (const object *) this, torque);
}

real_t rigid_body2d::get_angular_damp() const {
	return ___godot_icall_float(___mb.mb_get_angular_damp, (const object *) this);
}

real_t rigid_body2d::get_angular_velocity() const {
	return ___godot_icall_float(___mb.mb_get_angular_velocity, (const object *) this);
}

vector2 rigid_body2d::get_applied_force() const {
	return ___godot_icall_Vector2(___mb.mb_get_applied_force, (const object *) this);
}

real_t rigid_body2d::get_applied_torque() const {
	return ___godot_icall_float(___mb.mb_get_applied_torque, (const object *) this);
}

real_t rigid_body2d::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

array rigid_body2d::get_colliding_bodies() const {
	return ___godot_icall_Array(___mb.mb_get_colliding_bodies, (const object *) this);
}

rigid_body2d::CCDMode rigid_body2d::get_continuous_collision_detection_mode() const {
	return (rigid_body2d::CCDMode) ___godot_icall_int(___mb.mb_get_continuous_collision_detection_mode, (const object *) this);
}

real_t rigid_body2d::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

real_t rigid_body2d::get_gravity_scale() const {
	return ___godot_icall_float(___mb.mb_get_gravity_scale, (const object *) this);
}

real_t rigid_body2d::get_inertia() const {
	return ___godot_icall_float(___mb.mb_get_inertia, (const object *) this);
}

real_t rigid_body2d::get_linear_damp() const {
	return ___godot_icall_float(___mb.mb_get_linear_damp, (const object *) this);
}

vector2 rigid_body2d::get_linear_velocity() const {
	return ___godot_icall_Vector2(___mb.mb_get_linear_velocity, (const object *) this);
}

real_t rigid_body2d::get_mass() const {
	return ___godot_icall_float(___mb.mb_get_mass, (const object *) this);
}

int64_t rigid_body2d::get_max_contacts_reported() const {
	return ___godot_icall_int(___mb.mb_get_max_contacts_reported, (const object *) this);
}

rigid_body2d::Mode rigid_body2d::get_mode() const {
	return (rigid_body2d::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

ref<physics_material> rigid_body2d::get_physics_material_override() const {
	return ref<physics_material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_physics_material_override, (const object *) this));
}

real_t rigid_body2d::get_weight() const {
	return ___godot_icall_float(___mb.mb_get_weight, (const object *) this);
}

bool rigid_body2d::is_able_to_sleep() const {
	return ___godot_icall_bool(___mb.mb_is_able_to_sleep, (const object *) this);
}

bool rigid_body2d::is_contact_monitor_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_contact_monitor_enabled, (const object *) this);
}

bool rigid_body2d::is_sleeping() const {
	return ___godot_icall_bool(___mb.mb_is_sleeping, (const object *) this);
}

bool rigid_body2d::is_using_custom_integrator() {
	return ___godot_icall_bool(___mb.mb_is_using_custom_integrator, (const object *) this);
}

void rigid_body2d::set_angular_damp(const real_t angular_damp) {
	___godot_icall_void_float(___mb.mb_set_angular_damp, (const object *) this, angular_damp);
}

void rigid_body2d::set_angular_velocity(const real_t angular_velocity) {
	___godot_icall_void_float(___mb.mb_set_angular_velocity, (const object *) this, angular_velocity);
}

void rigid_body2d::set_applied_force(const vector2 force) {
	___godot_icall_void_Vector2(___mb.mb_set_applied_force, (const object *) this, force);
}

void rigid_body2d::set_applied_torque(const real_t torque) {
	___godot_icall_void_float(___mb.mb_set_applied_torque, (const object *) this, torque);
}

void rigid_body2d::set_axis_velocity(const vector2 axis_velocity) {
	___godot_icall_void_Vector2(___mb.mb_set_axis_velocity, (const object *) this, axis_velocity);
}

void rigid_body2d::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void rigid_body2d::set_can_sleep(const bool able_to_sleep) {
	___godot_icall_void_bool(___mb.mb_set_can_sleep, (const object *) this, able_to_sleep);
}

void rigid_body2d::set_contact_monitor(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_contact_monitor, (const object *) this, enabled);
}

void rigid_body2d::set_continuous_collision_detection_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_continuous_collision_detection_mode, (const object *) this, mode);
}

void rigid_body2d::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void rigid_body2d::set_gravity_scale(const real_t gravity_scale) {
	___godot_icall_void_float(___mb.mb_set_gravity_scale, (const object *) this, gravity_scale);
}

void rigid_body2d::set_inertia(const real_t inertia) {
	___godot_icall_void_float(___mb.mb_set_inertia, (const object *) this, inertia);
}

void rigid_body2d::set_linear_damp(const real_t linear_damp) {
	___godot_icall_void_float(___mb.mb_set_linear_damp, (const object *) this, linear_damp);
}

void rigid_body2d::set_linear_velocity(const vector2 linear_velocity) {
	___godot_icall_void_Vector2(___mb.mb_set_linear_velocity, (const object *) this, linear_velocity);
}

void rigid_body2d::set_mass(const real_t mass) {
	___godot_icall_void_float(___mb.mb_set_mass, (const object *) this, mass);
}

void rigid_body2d::set_max_contacts_reported(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_max_contacts_reported, (const object *) this, amount);
}

void rigid_body2d::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void rigid_body2d::set_physics_material_override(const ref<physics_material> physics_material_override) {
	___godot_icall_void_Object(___mb.mb_set_physics_material_override, (const object *) this, physics_material_override.ptr());
}

void rigid_body2d::set_sleeping(const bool sleeping) {
	___godot_icall_void_bool(___mb.mb_set_sleeping, (const object *) this, sleeping);
}

void rigid_body2d::set_use_custom_integrator(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_custom_integrator, (const object *) this, enable);
}

void rigid_body2d::set_weight(const real_t weight) {
	___godot_icall_void_float(___mb.mb_set_weight, (const object *) this, weight);
}

bool rigid_body2d::test_motion(const vector2 motion, const bool infinite_inertia, const real_t margin, const ref<physics2_dtest_motion_result> result) {
	return ___godot_icall_bool_Vector2_bool_float_Object(___mb.mb_test_motion, (const object *) this, motion, infinite_inertia, margin, result.ptr());
}

}