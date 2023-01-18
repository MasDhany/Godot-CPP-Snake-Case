#include "soft_body.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


soft_body::___method_bindings soft_body::___mb = {};

void *soft_body::_detail_class_tag = nullptr;

void soft_body::___init_method_bindings() {
	___mb.mb__draw_soft_mesh = gd::api->godot_method_bind_get_method("SoftBody", "_draw_soft_mesh");
	___mb.mb_add_collision_exception_with = gd::api->godot_method_bind_get_method("SoftBody", "add_collision_exception_with");
	___mb.mb_get_areaAngular_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "get_areaAngular_stiffness");
	___mb.mb_get_collision_exceptions = gd::api->godot_method_bind_get_method("SoftBody", "get_collision_exceptions");
	___mb.mb_get_collision_layer = gd::api->godot_method_bind_get_method("SoftBody", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = gd::api->godot_method_bind_get_method("SoftBody", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("SoftBody", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("SoftBody", "get_collision_mask_bit");
	___mb.mb_get_damping_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "get_damping_coefficient");
	___mb.mb_get_drag_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "get_drag_coefficient");
	___mb.mb_get_linear_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "get_linear_stiffness");
	___mb.mb_get_parent_collision_ignore = gd::api->godot_method_bind_get_method("SoftBody", "get_parent_collision_ignore");
	___mb.mb_get_point_transform = gd::api->godot_method_bind_get_method("SoftBody", "get_point_transform");
	___mb.mb_get_pose_matching_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "get_pose_matching_coefficient");
	___mb.mb_get_pressure_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "get_pressure_coefficient");
	___mb.mb_get_simulation_precision = gd::api->godot_method_bind_get_method("SoftBody", "get_simulation_precision");
	___mb.mb_get_total_mass = gd::api->godot_method_bind_get_method("SoftBody", "get_total_mass");
	___mb.mb_get_volume_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "get_volume_stiffness");
	___mb.mb_is_physics_enabled = gd::api->godot_method_bind_get_method("SoftBody", "is_physics_enabled");
	___mb.mb_is_point_pinned = gd::api->godot_method_bind_get_method("SoftBody", "is_point_pinned");
	___mb.mb_is_ray_pickable = gd::api->godot_method_bind_get_method("SoftBody", "is_ray_pickable");
	___mb.mb_remove_collision_exception_with = gd::api->godot_method_bind_get_method("SoftBody", "remove_collision_exception_with");
	___mb.mb_set_areaAngular_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "set_areaAngular_stiffness");
	___mb.mb_set_collision_layer = gd::api->godot_method_bind_get_method("SoftBody", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = gd::api->godot_method_bind_get_method("SoftBody", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("SoftBody", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("SoftBody", "set_collision_mask_bit");
	___mb.mb_set_damping_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "set_damping_coefficient");
	___mb.mb_set_drag_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "set_drag_coefficient");
	___mb.mb_set_linear_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "set_linear_stiffness");
	___mb.mb_set_parent_collision_ignore = gd::api->godot_method_bind_get_method("SoftBody", "set_parent_collision_ignore");
	___mb.mb_set_physics_enabled = gd::api->godot_method_bind_get_method("SoftBody", "set_physics_enabled");
	___mb.mb_set_point_pinned = gd::api->godot_method_bind_get_method("SoftBody", "set_point_pinned");
	___mb.mb_set_pose_matching_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "set_pose_matching_coefficient");
	___mb.mb_set_pressure_coefficient = gd::api->godot_method_bind_get_method("SoftBody", "set_pressure_coefficient");
	___mb.mb_set_ray_pickable = gd::api->godot_method_bind_get_method("SoftBody", "set_ray_pickable");
	___mb.mb_set_simulation_precision = gd::api->godot_method_bind_get_method("SoftBody", "set_simulation_precision");
	___mb.mb_set_total_mass = gd::api->godot_method_bind_get_method("SoftBody", "set_total_mass");
	___mb.mb_set_volume_stiffness = gd::api->godot_method_bind_get_method("SoftBody", "set_volume_stiffness");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SoftBody");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

soft_body *soft_body::_new()
{
	return (soft_body *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SoftBody")());
}
void soft_body::_draw_soft_mesh() {
	___godot_icall_void(___mb.mb__draw_soft_mesh, (const object *) this);
}

void soft_body::add_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_add_collision_exception_with, (const object *) this, body);
}

real_t soft_body::get_areaAngular_stiffness() {
	return ___godot_icall_float(___mb.mb_get_areaAngular_stiffness, (const object *) this);
}

array soft_body::get_collision_exceptions() {
	return ___godot_icall_Array(___mb.mb_get_collision_exceptions, (const object *) this);
}

int64_t soft_body::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const object *) this);
}

bool soft_body::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const object *) this, bit);
}

int64_t soft_body::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool soft_body::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

real_t soft_body::get_damping_coefficient() {
	return ___godot_icall_float(___mb.mb_get_damping_coefficient, (const object *) this);
}

real_t soft_body::get_drag_coefficient() {
	return ___godot_icall_float(___mb.mb_get_drag_coefficient, (const object *) this);
}

real_t soft_body::get_linear_stiffness() {
	return ___godot_icall_float(___mb.mb_get_linear_stiffness, (const object *) this);
}

node_path soft_body::get_parent_collision_ignore() const {
	return ___godot_icall_NodePath(___mb.mb_get_parent_collision_ignore, (const object *) this);
}

vector3 soft_body::get_point_transform(const int64_t point_index) {
	return ___godot_icall_Vector3_int(___mb.mb_get_point_transform, (const object *) this, point_index);
}

real_t soft_body::get_pose_matching_coefficient() {
	return ___godot_icall_float(___mb.mb_get_pose_matching_coefficient, (const object *) this);
}

real_t soft_body::get_pressure_coefficient() {
	return ___godot_icall_float(___mb.mb_get_pressure_coefficient, (const object *) this);
}

int64_t soft_body::get_simulation_precision() {
	return ___godot_icall_int(___mb.mb_get_simulation_precision, (const object *) this);
}

real_t soft_body::get_total_mass() {
	return ___godot_icall_float(___mb.mb_get_total_mass, (const object *) this);
}

real_t soft_body::get_volume_stiffness() {
	return ___godot_icall_float(___mb.mb_get_volume_stiffness, (const object *) this);
}

bool soft_body::is_physics_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_physics_enabled, (const object *) this);
}

bool soft_body::is_point_pinned(const int64_t point_index) const {
	return ___godot_icall_bool_int(___mb.mb_is_point_pinned, (const object *) this, point_index);
}

bool soft_body::is_ray_pickable() const {
	return ___godot_icall_bool(___mb.mb_is_ray_pickable, (const object *) this);
}

void soft_body::remove_collision_exception_with(const node *body) {
	___godot_icall_void_Object(___mb.mb_remove_collision_exception_with, (const object *) this, body);
}

void soft_body::set_areaAngular_stiffness(const real_t areaAngular_stiffness) {
	___godot_icall_void_float(___mb.mb_set_areaAngular_stiffness, (const object *) this, areaAngular_stiffness);
}

void soft_body::set_collision_layer(const int64_t collision_layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const object *) this, collision_layer);
}

void soft_body::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const object *) this, bit, value);
}

void soft_body::set_collision_mask(const int64_t collision_mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, collision_mask);
}

void soft_body::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void soft_body::set_damping_coefficient(const real_t damping_coefficient) {
	___godot_icall_void_float(___mb.mb_set_damping_coefficient, (const object *) this, damping_coefficient);
}

void soft_body::set_drag_coefficient(const real_t drag_coefficient) {
	___godot_icall_void_float(___mb.mb_set_drag_coefficient, (const object *) this, drag_coefficient);
}

void soft_body::set_linear_stiffness(const real_t linear_stiffness) {
	___godot_icall_void_float(___mb.mb_set_linear_stiffness, (const object *) this, linear_stiffness);
}

void soft_body::set_parent_collision_ignore(const node_path parent_collision_ignore) {
	___godot_icall_void_NodePath(___mb.mb_set_parent_collision_ignore, (const object *) this, parent_collision_ignore);
}

void soft_body::set_physics_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_physics_enabled, (const object *) this, enabled);
}

void soft_body::set_point_pinned(const int64_t point_index, const bool pinned, const node_path attachment_path) {
	___godot_icall_void_int_bool_NodePath(___mb.mb_set_point_pinned, (const object *) this, point_index, pinned, attachment_path);
}

void soft_body::set_pose_matching_coefficient(const real_t pose_matching_coefficient) {
	___godot_icall_void_float(___mb.mb_set_pose_matching_coefficient, (const object *) this, pose_matching_coefficient);
}

void soft_body::set_pressure_coefficient(const real_t pressure_coefficient) {
	___godot_icall_void_float(___mb.mb_set_pressure_coefficient, (const object *) this, pressure_coefficient);
}

void soft_body::set_ray_pickable(const bool ray_pickable) {
	___godot_icall_void_bool(___mb.mb_set_ray_pickable, (const object *) this, ray_pickable);
}

void soft_body::set_simulation_precision(const int64_t simulation_precision) {
	___godot_icall_void_int(___mb.mb_set_simulation_precision, (const object *) this, simulation_precision);
}

void soft_body::set_total_mass(const real_t mass) {
	___godot_icall_void_float(___mb.mb_set_total_mass, (const object *) this, mass);
}

void soft_body::set_volume_stiffness(const real_t volume_stiffness) {
	___godot_icall_void_float(___mb.mb_set_volume_stiffness, (const object *) this, volume_stiffness);
}

}