#include "rigid_body.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "physics_direct_body_state.hpp"
#include "physics_material.hpp"


namespace gd {


rigid_body::___method_bindings rigid_body::___mb = {};

void *rigid_body::_detail_class_tag = nullptr;

void rigid_body::___init_method_bindings() {
	___mb.mb__body_enter_tree = gd::api->godot_method_bind_get_method("RigidBody", "_body_enter_tree");
	___mb.mb__body_exit_tree = gd::api->godot_method_bind_get_method("RigidBody", "_body_exit_tree");
	___mb.mb__direct_state_changed = gd::api->godot_method_bind_get_method("RigidBody", "_direct_state_changed");
	___mb.mb__integrate_forces = gd::api->godot_method_bind_get_method("RigidBody", "_integrate_forces");
	___mb.mb__reload_physics_characteristics = gd::api->godot_method_bind_get_method("RigidBody", "_reload_physics_characteristics");
	___mb.mb_add_central_force = gd::api->godot_method_bind_get_method("RigidBody", "add_central_force");
	___mb.mb_add_force = gd::api->godot_method_bind_get_method("RigidBody", "add_force");
	___mb.mb_add_torque = gd::api->godot_method_bind_get_method("RigidBody", "add_torque");
	___mb.mb_apply_central_impulse = gd::api->godot_method_bind_get_method("RigidBody", "apply_central_impulse");
	___mb.mb_apply_impulse = gd::api->godot_method_bind_get_method("RigidBody", "apply_impulse");
	___mb.mb_apply_torque_impulse = gd::api->godot_method_bind_get_method("RigidBody", "apply_torque_impulse");
	___mb.mb_get_angular_damp = gd::api->godot_method_bind_get_method("RigidBody", "get_angular_damp");
	___mb.mb_get_angular_velocity = gd::api->godot_method_bind_get_method("RigidBody", "get_angular_velocity");
	___mb.mb_get_axis_lock = gd::api->godot_method_bind_get_method("RigidBody", "get_axis_lock");
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("RigidBody", "get_bounce");
	___mb.mb_get_colliding_bodies = gd::api->godot_method_bind_get_method("RigidBody", "get_colliding_bodies");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("RigidBody", "get_friction");
	___mb.mb_get_gravity_scale = gd::api->godot_method_bind_get_method("RigidBody", "get_gravity_scale");
	___mb.mb_get_inverse_inertia_tensor = gd::api->godot_method_bind_get_method("RigidBody", "get_inverse_inertia_tensor");
	___mb.mb_get_linear_damp = gd::api->godot_method_bind_get_method("RigidBody", "get_linear_damp");
	___mb.mb_get_linear_velocity = gd::api->godot_method_bind_get_method("RigidBody", "get_linear_velocity");
	___mb.mb_get_mass = gd::api->godot_method_bind_get_method("RigidBody", "get_mass");
	___mb.mb_get_max_contacts_reported = gd::api->godot_method_bind_get_method("RigidBody", "get_max_contacts_reported");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("RigidBody", "get_mode");
	___mb.mb_get_physics_material_override = gd::api->godot_method_bind_get_method("RigidBody", "get_physics_material_override");
	___mb.mb_get_weight = gd::api->godot_method_bind_get_method("RigidBody", "get_weight");
	___mb.mb_is_able_to_sleep = gd::api->godot_method_bind_get_method("RigidBody", "is_able_to_sleep");
	___mb.mb_is_contact_monitor_enabled = gd::api->godot_method_bind_get_method("RigidBody", "is_contact_monitor_enabled");
	___mb.mb_is_sleeping = gd::api->godot_method_bind_get_method("RigidBody", "is_sleeping");
	___mb.mb_is_using_continuous_collision_detection = gd::api->godot_method_bind_get_method("RigidBody", "is_using_continuous_collision_detection");
	___mb.mb_is_using_custom_integrator = gd::api->godot_method_bind_get_method("RigidBody", "is_using_custom_integrator");
	___mb.mb_set_angular_damp = gd::api->godot_method_bind_get_method("RigidBody", "set_angular_damp");
	___mb.mb_set_angular_velocity = gd::api->godot_method_bind_get_method("RigidBody", "set_angular_velocity");
	___mb.mb_set_axis_lock = gd::api->godot_method_bind_get_method("RigidBody", "set_axis_lock");
	___mb.mb_set_axis_velocity = gd::api->godot_method_bind_get_method("RigidBody", "set_axis_velocity");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("RigidBody", "set_bounce");
	___mb.mb_set_can_sleep = gd::api->godot_method_bind_get_method("RigidBody", "set_can_sleep");
	___mb.mb_set_contact_monitor = gd::api->godot_method_bind_get_method("RigidBody", "set_contact_monitor");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("RigidBody", "set_friction");
	___mb.mb_set_gravity_scale = gd::api->godot_method_bind_get_method("RigidBody", "set_gravity_scale");
	___mb.mb_set_linear_damp = gd::api->godot_method_bind_get_method("RigidBody", "set_linear_damp");
	___mb.mb_set_linear_velocity = gd::api->godot_method_bind_get_method("RigidBody", "set_linear_velocity");
	___mb.mb_set_mass = gd::api->godot_method_bind_get_method("RigidBody", "set_mass");
	___mb.mb_set_max_contacts_reported = gd::api->godot_method_bind_get_method("RigidBody", "set_max_contacts_reported");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("RigidBody", "set_mode");
	___mb.mb_set_physics_material_override = gd::api->godot_method_bind_get_method("RigidBody", "set_physics_material_override");
	___mb.mb_set_sleeping = gd::api->godot_method_bind_get_method("RigidBody", "set_sleeping");
	___mb.mb_set_use_continuous_collision_detection = gd::api->godot_method_bind_get_method("RigidBody", "set_use_continuous_collision_detection");
	___mb.mb_set_use_custom_integrator = gd::api->godot_method_bind_get_method("RigidBody", "set_use_custom_integrator");
	___mb.mb_set_weight = gd::api->godot_method_bind_get_method("RigidBody", "set_weight");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RigidBody");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rigid_body *rigid_body::_new()
{
	return (rigid_body *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RigidBody")());
}
void rigid_body::_body_enter_tree(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__body_enter_tree, (const object *) this, arg0);
}

void rigid_body::_body_exit_tree(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__body_exit_tree, (const object *) this, arg0);
}

void rigid_body::_direct_state_changed(const object *arg0) {
	___godot_icall_void_Object(___mb.mb__direct_state_changed, (const object *) this, arg0);
}

void rigid_body::_integrate_forces(const physics_direct_body_state *state) {
	___godot_icall_void_Object(___mb.mb__integrate_forces, (const object *) this, state);
}

void rigid_body::_reload_physics_characteristics() {
	___godot_icall_void(___mb.mb__reload_physics_characteristics, (const object *) this);
}

void rigid_body::add_central_force(const vector3 force) {
	___godot_icall_void_Vector3(___mb.mb_add_central_force, (const object *) this, force);
}

void rigid_body::add_force(const vector3 force, const vector3 position) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_add_force, (const object *) this, force, position);
}

void rigid_body::add_torque(const vector3 torque) {
	___godot_icall_void_Vector3(___mb.mb_add_torque, (const object *) this, torque);
}

void rigid_body::apply_central_impulse(const vector3 impulse) {
	___godot_icall_void_Vector3(___mb.mb_apply_central_impulse, (const object *) this, impulse);
}

void rigid_body::apply_impulse(const vector3 position, const vector3 impulse) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_apply_impulse, (const object *) this, position, impulse);
}

void rigid_body::apply_torque_impulse(const vector3 impulse) {
	___godot_icall_void_Vector3(___mb.mb_apply_torque_impulse, (const object *) this, impulse);
}

real_t rigid_body::get_angular_damp() const {
	return ___godot_icall_float(___mb.mb_get_angular_damp, (const object *) this);
}

vector3 rigid_body::get_angular_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_angular_velocity, (const object *) this);
}

bool rigid_body::get_axis_lock(const int64_t axis) const {
	return ___godot_icall_bool_int(___mb.mb_get_axis_lock, (const object *) this, axis);
}

real_t rigid_body::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

array rigid_body::get_colliding_bodies() const {
	return ___godot_icall_Array(___mb.mb_get_colliding_bodies, (const object *) this);
}

real_t rigid_body::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

real_t rigid_body::get_gravity_scale() const {
	return ___godot_icall_float(___mb.mb_get_gravity_scale, (const object *) this);
}

basis rigid_body::get_inverse_inertia_tensor() {
	return ___godot_icall_Basis(___mb.mb_get_inverse_inertia_tensor, (const object *) this);
}

real_t rigid_body::get_linear_damp() const {
	return ___godot_icall_float(___mb.mb_get_linear_damp, (const object *) this);
}

vector3 rigid_body::get_linear_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_linear_velocity, (const object *) this);
}

real_t rigid_body::get_mass() const {
	return ___godot_icall_float(___mb.mb_get_mass, (const object *) this);
}

int64_t rigid_body::get_max_contacts_reported() const {
	return ___godot_icall_int(___mb.mb_get_max_contacts_reported, (const object *) this);
}

rigid_body::Mode rigid_body::get_mode() const {
	return (rigid_body::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

ref<physics_material> rigid_body::get_physics_material_override() const {
	return ref<physics_material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_physics_material_override, (const object *) this));
}

real_t rigid_body::get_weight() const {
	return ___godot_icall_float(___mb.mb_get_weight, (const object *) this);
}

bool rigid_body::is_able_to_sleep() const {
	return ___godot_icall_bool(___mb.mb_is_able_to_sleep, (const object *) this);
}

bool rigid_body::is_contact_monitor_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_contact_monitor_enabled, (const object *) this);
}

bool rigid_body::is_sleeping() const {
	return ___godot_icall_bool(___mb.mb_is_sleeping, (const object *) this);
}

bool rigid_body::is_using_continuous_collision_detection() const {
	return ___godot_icall_bool(___mb.mb_is_using_continuous_collision_detection, (const object *) this);
}

bool rigid_body::is_using_custom_integrator() {
	return ___godot_icall_bool(___mb.mb_is_using_custom_integrator, (const object *) this);
}

void rigid_body::set_angular_damp(const real_t angular_damp) {
	___godot_icall_void_float(___mb.mb_set_angular_damp, (const object *) this, angular_damp);
}

void rigid_body::set_angular_velocity(const vector3 angular_velocity) {
	___godot_icall_void_Vector3(___mb.mb_set_angular_velocity, (const object *) this, angular_velocity);
}

void rigid_body::set_axis_lock(const int64_t axis, const bool lock) {
	___godot_icall_void_int_bool(___mb.mb_set_axis_lock, (const object *) this, axis, lock);
}

void rigid_body::set_axis_velocity(const vector3 axis_velocity) {
	___godot_icall_void_Vector3(___mb.mb_set_axis_velocity, (const object *) this, axis_velocity);
}

void rigid_body::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void rigid_body::set_can_sleep(const bool able_to_sleep) {
	___godot_icall_void_bool(___mb.mb_set_can_sleep, (const object *) this, able_to_sleep);
}

void rigid_body::set_contact_monitor(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_contact_monitor, (const object *) this, enabled);
}

void rigid_body::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void rigid_body::set_gravity_scale(const real_t gravity_scale) {
	___godot_icall_void_float(___mb.mb_set_gravity_scale, (const object *) this, gravity_scale);
}

void rigid_body::set_linear_damp(const real_t linear_damp) {
	___godot_icall_void_float(___mb.mb_set_linear_damp, (const object *) this, linear_damp);
}

void rigid_body::set_linear_velocity(const vector3 linear_velocity) {
	___godot_icall_void_Vector3(___mb.mb_set_linear_velocity, (const object *) this, linear_velocity);
}

void rigid_body::set_mass(const real_t mass) {
	___godot_icall_void_float(___mb.mb_set_mass, (const object *) this, mass);
}

void rigid_body::set_max_contacts_reported(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_max_contacts_reported, (const object *) this, amount);
}

void rigid_body::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void rigid_body::set_physics_material_override(const ref<physics_material> physics_material_override) {
	___godot_icall_void_Object(___mb.mb_set_physics_material_override, (const object *) this, physics_material_override.ptr());
}

void rigid_body::set_sleeping(const bool sleeping) {
	___godot_icall_void_bool(___mb.mb_set_sleeping, (const object *) this, sleeping);
}

void rigid_body::set_use_continuous_collision_detection(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_continuous_collision_detection, (const object *) this, enable);
}

void rigid_body::set_use_custom_integrator(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_custom_integrator, (const object *) this, enable);
}

void rigid_body::set_weight(const real_t weight) {
	___godot_icall_void_float(___mb.mb_set_weight, (const object *) this, weight);
}

}