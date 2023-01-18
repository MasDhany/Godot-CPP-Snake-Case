#include "physical_bone.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


physical_bone::___method_bindings physical_bone::___mb = {};

void *physical_bone::_detail_class_tag = nullptr;

void physical_bone::___init_method_bindings() {
	___mb.mb__direct_state_changed = gd::api->godot_method_bind_get_method("PhysicalBone", "_direct_state_changed");
	___mb.mb_apply_central_impulse = gd::api->godot_method_bind_get_method("PhysicalBone", "apply_central_impulse");
	___mb.mb_apply_impulse = gd::api->godot_method_bind_get_method("PhysicalBone", "apply_impulse");
	___mb.mb_get_body_offset = gd::api->godot_method_bind_get_method("PhysicalBone", "get_body_offset");
	___mb.mb_get_bone_id = gd::api->godot_method_bind_get_method("PhysicalBone", "get_bone_id");
	___mb.mb_get_bounce = gd::api->godot_method_bind_get_method("PhysicalBone", "get_bounce");
	___mb.mb_get_friction = gd::api->godot_method_bind_get_method("PhysicalBone", "get_friction");
	___mb.mb_get_gravity_scale = gd::api->godot_method_bind_get_method("PhysicalBone", "get_gravity_scale");
	___mb.mb_get_joint_offset = gd::api->godot_method_bind_get_method("PhysicalBone", "get_joint_offset");
	___mb.mb_get_joint_type = gd::api->godot_method_bind_get_method("PhysicalBone", "get_joint_type");
	___mb.mb_get_mass = gd::api->godot_method_bind_get_method("PhysicalBone", "get_mass");
	___mb.mb_get_simulate_physics = gd::api->godot_method_bind_get_method("PhysicalBone", "get_simulate_physics");
	___mb.mb_get_weight = gd::api->godot_method_bind_get_method("PhysicalBone", "get_weight");
	___mb.mb_is_simulating_physics = gd::api->godot_method_bind_get_method("PhysicalBone", "is_simulating_physics");
	___mb.mb_is_static_body = gd::api->godot_method_bind_get_method("PhysicalBone", "is_static_body");
	___mb.mb_set_body_offset = gd::api->godot_method_bind_get_method("PhysicalBone", "set_body_offset");
	___mb.mb_set_bounce = gd::api->godot_method_bind_get_method("PhysicalBone", "set_bounce");
	___mb.mb_set_friction = gd::api->godot_method_bind_get_method("PhysicalBone", "set_friction");
	___mb.mb_set_gravity_scale = gd::api->godot_method_bind_get_method("PhysicalBone", "set_gravity_scale");
	___mb.mb_set_joint_offset = gd::api->godot_method_bind_get_method("PhysicalBone", "set_joint_offset");
	___mb.mb_set_joint_type = gd::api->godot_method_bind_get_method("PhysicalBone", "set_joint_type");
	___mb.mb_set_mass = gd::api->godot_method_bind_get_method("PhysicalBone", "set_mass");
	___mb.mb_set_weight = gd::api->godot_method_bind_get_method("PhysicalBone", "set_weight");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicalBone");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

physical_bone *physical_bone::_new()
{
	return (physical_bone *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PhysicalBone")());
}
void physical_bone::_direct_state_changed(const object *arg0) {
	___godot_icall_void_Object(___mb.mb__direct_state_changed, (const object *) this, arg0);
}

void physical_bone::apply_central_impulse(const vector3 impulse) {
	___godot_icall_void_Vector3(___mb.mb_apply_central_impulse, (const object *) this, impulse);
}

void physical_bone::apply_impulse(const vector3 position, const vector3 impulse) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_apply_impulse, (const object *) this, position, impulse);
}

transform physical_bone::get_body_offset() const {
	return ___godot_icall_Transform(___mb.mb_get_body_offset, (const object *) this);
}

int64_t physical_bone::get_bone_id() const {
	return ___godot_icall_int(___mb.mb_get_bone_id, (const object *) this);
}

real_t physical_bone::get_bounce() const {
	return ___godot_icall_float(___mb.mb_get_bounce, (const object *) this);
}

real_t physical_bone::get_friction() const {
	return ___godot_icall_float(___mb.mb_get_friction, (const object *) this);
}

real_t physical_bone::get_gravity_scale() const {
	return ___godot_icall_float(___mb.mb_get_gravity_scale, (const object *) this);
}

transform physical_bone::get_joint_offset() const {
	return ___godot_icall_Transform(___mb.mb_get_joint_offset, (const object *) this);
}

physical_bone::JointType physical_bone::get_joint_type() const {
	return (physical_bone::JointType) ___godot_icall_int(___mb.mb_get_joint_type, (const object *) this);
}

real_t physical_bone::get_mass() const {
	return ___godot_icall_float(___mb.mb_get_mass, (const object *) this);
}

bool physical_bone::get_simulate_physics() {
	return ___godot_icall_bool(___mb.mb_get_simulate_physics, (const object *) this);
}

real_t physical_bone::get_weight() const {
	return ___godot_icall_float(___mb.mb_get_weight, (const object *) this);
}

bool physical_bone::is_simulating_physics() {
	return ___godot_icall_bool(___mb.mb_is_simulating_physics, (const object *) this);
}

bool physical_bone::is_static_body() {
	return ___godot_icall_bool(___mb.mb_is_static_body, (const object *) this);
}

void physical_bone::set_body_offset(const transform offset) {
	___godot_icall_void_Transform(___mb.mb_set_body_offset, (const object *) this, offset);
}

void physical_bone::set_bounce(const real_t bounce) {
	___godot_icall_void_float(___mb.mb_set_bounce, (const object *) this, bounce);
}

void physical_bone::set_friction(const real_t friction) {
	___godot_icall_void_float(___mb.mb_set_friction, (const object *) this, friction);
}

void physical_bone::set_gravity_scale(const real_t gravity_scale) {
	___godot_icall_void_float(___mb.mb_set_gravity_scale, (const object *) this, gravity_scale);
}

void physical_bone::set_joint_offset(const transform offset) {
	___godot_icall_void_Transform(___mb.mb_set_joint_offset, (const object *) this, offset);
}

void physical_bone::set_joint_type(const int64_t joint_type) {
	___godot_icall_void_int(___mb.mb_set_joint_type, (const object *) this, joint_type);
}

void physical_bone::set_mass(const real_t mass) {
	___godot_icall_void_float(___mb.mb_set_mass, (const object *) this, mass);
}

void physical_bone::set_weight(const real_t weight) {
	___godot_icall_void_float(___mb.mb_set_weight, (const object *) this, weight);
}

}