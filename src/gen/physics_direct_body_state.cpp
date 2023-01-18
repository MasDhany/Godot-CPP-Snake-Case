#include "physics_direct_body_state.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "physics_direct_space_state.hpp"


namespace gd {


physics_direct_body_state::___method_bindings physics_direct_body_state::___mb = {};

void *physics_direct_body_state::_detail_class_tag = nullptr;

void physics_direct_body_state::___init_method_bindings() {
	___mb.mb_add_central_force = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "add_central_force");
	___mb.mb_add_force = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "add_force");
	___mb.mb_add_torque = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "add_torque");
	___mb.mb_apply_central_impulse = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "apply_central_impulse");
	___mb.mb_apply_impulse = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "apply_impulse");
	___mb.mb_apply_torque_impulse = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "apply_torque_impulse");
	___mb.mb_get_angular_velocity = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_angular_velocity");
	___mb.mb_get_center_of_mass = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_center_of_mass");
	___mb.mb_get_contact_collider = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider");
	___mb.mb_get_contact_collider_id = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider_id");
	___mb.mb_get_contact_collider_object = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider_object");
	___mb.mb_get_contact_collider_position = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider_position");
	___mb.mb_get_contact_collider_shape = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider_shape");
	___mb.mb_get_contact_collider_velocity_at_position = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_collider_velocity_at_position");
	___mb.mb_get_contact_count = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_count");
	___mb.mb_get_contact_impulse = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_impulse");
	___mb.mb_get_contact_local_normal = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_local_normal");
	___mb.mb_get_contact_local_position = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_local_position");
	___mb.mb_get_contact_local_shape = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_contact_local_shape");
	___mb.mb_get_inverse_inertia = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_inverse_inertia");
	___mb.mb_get_inverse_mass = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_inverse_mass");
	___mb.mb_get_linear_velocity = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_linear_velocity");
	___mb.mb_get_principal_inertia_axes = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_principal_inertia_axes");
	___mb.mb_get_space_state = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_space_state");
	___mb.mb_get_step = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_step");
	___mb.mb_get_total_angular_damp = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_total_angular_damp");
	___mb.mb_get_total_gravity = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_total_gravity");
	___mb.mb_get_total_linear_damp = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_total_linear_damp");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_transform");
	___mb.mb_get_velocity_at_local_position = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "get_velocity_at_local_position");
	___mb.mb_integrate_forces = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "integrate_forces");
	___mb.mb_is_sleeping = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "is_sleeping");
	___mb.mb_set_angular_velocity = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "set_angular_velocity");
	___mb.mb_set_linear_velocity = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "set_linear_velocity");
	___mb.mb_set_sleep_state = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "set_sleep_state");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("PhysicsDirectBodyState", "set_transform");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsDirectBodyState");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void physics_direct_body_state::add_central_force(const vector3 force) {
	___godot_icall_void_Vector3(___mb.mb_add_central_force, (const object *) this, force);
}

void physics_direct_body_state::add_force(const vector3 force, const vector3 position) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_add_force, (const object *) this, force, position);
}

void physics_direct_body_state::add_torque(const vector3 torque) {
	___godot_icall_void_Vector3(___mb.mb_add_torque, (const object *) this, torque);
}

void physics_direct_body_state::apply_central_impulse(const vector3 j) {
	___godot_icall_void_Vector3(___mb.mb_apply_central_impulse, (const object *) this, j);
}

void physics_direct_body_state::apply_impulse(const vector3 position, const vector3 j) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_apply_impulse, (const object *) this, position, j);
}

void physics_direct_body_state::apply_torque_impulse(const vector3 j) {
	___godot_icall_void_Vector3(___mb.mb_apply_torque_impulse, (const object *) this, j);
}

vector3 physics_direct_body_state::get_angular_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_angular_velocity, (const object *) this);
}

vector3 physics_direct_body_state::get_center_of_mass() const {
	return ___godot_icall_Vector3(___mb.mb_get_center_of_mass, (const object *) this);
}

rid physics_direct_body_state::get_contact_collider(const int64_t contact_idx) const {
	return ___godot_icall_RID_int(___mb.mb_get_contact_collider, (const object *) this, contact_idx);
}

int64_t physics_direct_body_state::get_contact_collider_id(const int64_t contact_idx) const {
	return ___godot_icall_int_int(___mb.mb_get_contact_collider_id, (const object *) this, contact_idx);
}

object *physics_direct_body_state::get_contact_collider_object(const int64_t contact_idx) const {
	return (object *) ___godot_icall_Object_int(___mb.mb_get_contact_collider_object, (const object *) this, contact_idx);
}

vector3 physics_direct_body_state::get_contact_collider_position(const int64_t contact_idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_contact_collider_position, (const object *) this, contact_idx);
}

int64_t physics_direct_body_state::get_contact_collider_shape(const int64_t contact_idx) const {
	return ___godot_icall_int_int(___mb.mb_get_contact_collider_shape, (const object *) this, contact_idx);
}

vector3 physics_direct_body_state::get_contact_collider_velocity_at_position(const int64_t contact_idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_contact_collider_velocity_at_position, (const object *) this, contact_idx);
}

int64_t physics_direct_body_state::get_contact_count() const {
	return ___godot_icall_int(___mb.mb_get_contact_count, (const object *) this);
}

real_t physics_direct_body_state::get_contact_impulse(const int64_t contact_idx) const {
	return ___godot_icall_float_int(___mb.mb_get_contact_impulse, (const object *) this, contact_idx);
}

vector3 physics_direct_body_state::get_contact_local_normal(const int64_t contact_idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_contact_local_normal, (const object *) this, contact_idx);
}

vector3 physics_direct_body_state::get_contact_local_position(const int64_t contact_idx) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_contact_local_position, (const object *) this, contact_idx);
}

int64_t physics_direct_body_state::get_contact_local_shape(const int64_t contact_idx) const {
	return ___godot_icall_int_int(___mb.mb_get_contact_local_shape, (const object *) this, contact_idx);
}

vector3 physics_direct_body_state::get_inverse_inertia() const {
	return ___godot_icall_Vector3(___mb.mb_get_inverse_inertia, (const object *) this);
}

real_t physics_direct_body_state::get_inverse_mass() const {
	return ___godot_icall_float(___mb.mb_get_inverse_mass, (const object *) this);
}

vector3 physics_direct_body_state::get_linear_velocity() const {
	return ___godot_icall_Vector3(___mb.mb_get_linear_velocity, (const object *) this);
}

basis physics_direct_body_state::get_principal_inertia_axes() const {
	return ___godot_icall_Basis(___mb.mb_get_principal_inertia_axes, (const object *) this);
}

physics_direct_space_state *physics_direct_body_state::get_space_state() {
	return (physics_direct_space_state *) ___godot_icall_Object(___mb.mb_get_space_state, (const object *) this);
}

real_t physics_direct_body_state::get_step() const {
	return ___godot_icall_float(___mb.mb_get_step, (const object *) this);
}

real_t physics_direct_body_state::get_total_angular_damp() const {
	return ___godot_icall_float(___mb.mb_get_total_angular_damp, (const object *) this);
}

vector3 physics_direct_body_state::get_total_gravity() const {
	return ___godot_icall_Vector3(___mb.mb_get_total_gravity, (const object *) this);
}

real_t physics_direct_body_state::get_total_linear_damp() const {
	return ___godot_icall_float(___mb.mb_get_total_linear_damp, (const object *) this);
}

transform physics_direct_body_state::get_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_transform, (const object *) this);
}

vector3 physics_direct_body_state::get_velocity_at_local_position(const vector3 local_position) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_get_velocity_at_local_position, (const object *) this, local_position);
}

void physics_direct_body_state::integrate_forces() {
	___godot_icall_void(___mb.mb_integrate_forces, (const object *) this);
}

bool physics_direct_body_state::is_sleeping() const {
	return ___godot_icall_bool(___mb.mb_is_sleeping, (const object *) this);
}

void physics_direct_body_state::set_angular_velocity(const vector3 velocity) {
	___godot_icall_void_Vector3(___mb.mb_set_angular_velocity, (const object *) this, velocity);
}

void physics_direct_body_state::set_linear_velocity(const vector3 velocity) {
	___godot_icall_void_Vector3(___mb.mb_set_linear_velocity, (const object *) this, velocity);
}

void physics_direct_body_state::set_sleep_state(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_sleep_state, (const object *) this, enabled);
}

void physics_direct_body_state::set_transform(const transform transform_) {
	___godot_icall_void_Transform(___mb.mb_set_transform, (const object *) this, transform_);
}

}