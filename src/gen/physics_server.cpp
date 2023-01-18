#include "physics_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "physics_direct_body_state.hpp"
#include "physics_direct_space_state.hpp"
#include "physics_test_motion_result.hpp"


namespace gd {


physics_server *physics_server::_singleton = NULL;


physics_server::physics_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "PhysicsServer");
}


physics_server::___method_bindings physics_server::___mb = {};

void *physics_server::_detail_class_tag = nullptr;

void physics_server::___init_method_bindings() {
	___mb.mb_area_add_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "area_add_shape");
	___mb.mb_area_attach_object_instance_id = gd::api->godot_method_bind_get_method("PhysicsServer", "area_attach_object_instance_id");
	___mb.mb_area_clear_shapes = gd::api->godot_method_bind_get_method("PhysicsServer", "area_clear_shapes");
	___mb.mb_area_create = gd::api->godot_method_bind_get_method("PhysicsServer", "area_create");
	___mb.mb_area_get_object_instance_id = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_object_instance_id");
	___mb.mb_area_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_param");
	___mb.mb_area_get_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_shape");
	___mb.mb_area_get_shape_count = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_shape_count");
	___mb.mb_area_get_shape_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_shape_transform");
	___mb.mb_area_get_space = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_space");
	___mb.mb_area_get_space_override_mode = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_space_override_mode");
	___mb.mb_area_get_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "area_get_transform");
	___mb.mb_area_is_ray_pickable = gd::api->godot_method_bind_get_method("PhysicsServer", "area_is_ray_pickable");
	___mb.mb_area_remove_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "area_remove_shape");
	___mb.mb_area_set_area_monitor_callback = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_area_monitor_callback");
	___mb.mb_area_set_collision_layer = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_collision_layer");
	___mb.mb_area_set_collision_mask = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_collision_mask");
	___mb.mb_area_set_monitor_callback = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_monitor_callback");
	___mb.mb_area_set_monitorable = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_monitorable");
	___mb.mb_area_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_param");
	___mb.mb_area_set_ray_pickable = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_ray_pickable");
	___mb.mb_area_set_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_shape");
	___mb.mb_area_set_shape_disabled = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_shape_disabled");
	___mb.mb_area_set_shape_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_shape_transform");
	___mb.mb_area_set_space = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_space");
	___mb.mb_area_set_space_override_mode = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_space_override_mode");
	___mb.mb_area_set_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "area_set_transform");
	___mb.mb_body_add_central_force = gd::api->godot_method_bind_get_method("PhysicsServer", "body_add_central_force");
	___mb.mb_body_add_collision_exception = gd::api->godot_method_bind_get_method("PhysicsServer", "body_add_collision_exception");
	___mb.mb_body_add_force = gd::api->godot_method_bind_get_method("PhysicsServer", "body_add_force");
	___mb.mb_body_add_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "body_add_shape");
	___mb.mb_body_add_torque = gd::api->godot_method_bind_get_method("PhysicsServer", "body_add_torque");
	___mb.mb_body_apply_central_impulse = gd::api->godot_method_bind_get_method("PhysicsServer", "body_apply_central_impulse");
	___mb.mb_body_apply_impulse = gd::api->godot_method_bind_get_method("PhysicsServer", "body_apply_impulse");
	___mb.mb_body_apply_torque_impulse = gd::api->godot_method_bind_get_method("PhysicsServer", "body_apply_torque_impulse");
	___mb.mb_body_attach_object_instance_id = gd::api->godot_method_bind_get_method("PhysicsServer", "body_attach_object_instance_id");
	___mb.mb_body_clear_shapes = gd::api->godot_method_bind_get_method("PhysicsServer", "body_clear_shapes");
	___mb.mb_body_create = gd::api->godot_method_bind_get_method("PhysicsServer", "body_create");
	___mb.mb_body_get_collision_layer = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_collision_layer");
	___mb.mb_body_get_collision_mask = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_collision_mask");
	___mb.mb_body_get_direct_state = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_direct_state");
	___mb.mb_body_get_kinematic_safe_margin = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_kinematic_safe_margin");
	___mb.mb_body_get_max_contacts_reported = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_max_contacts_reported");
	___mb.mb_body_get_mode = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_mode");
	___mb.mb_body_get_object_instance_id = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_object_instance_id");
	___mb.mb_body_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_param");
	___mb.mb_body_get_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_shape");
	___mb.mb_body_get_shape_count = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_shape_count");
	___mb.mb_body_get_shape_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_shape_transform");
	___mb.mb_body_get_space = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_space");
	___mb.mb_body_get_state = gd::api->godot_method_bind_get_method("PhysicsServer", "body_get_state");
	___mb.mb_body_is_axis_locked = gd::api->godot_method_bind_get_method("PhysicsServer", "body_is_axis_locked");
	___mb.mb_body_is_continuous_collision_detection_enabled = gd::api->godot_method_bind_get_method("PhysicsServer", "body_is_continuous_collision_detection_enabled");
	___mb.mb_body_is_omitting_force_integration = gd::api->godot_method_bind_get_method("PhysicsServer", "body_is_omitting_force_integration");
	___mb.mb_body_is_ray_pickable = gd::api->godot_method_bind_get_method("PhysicsServer", "body_is_ray_pickable");
	___mb.mb_body_remove_collision_exception = gd::api->godot_method_bind_get_method("PhysicsServer", "body_remove_collision_exception");
	___mb.mb_body_remove_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "body_remove_shape");
	___mb.mb_body_set_axis_lock = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_axis_lock");
	___mb.mb_body_set_axis_velocity = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_axis_velocity");
	___mb.mb_body_set_collision_layer = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_collision_layer");
	___mb.mb_body_set_collision_mask = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_collision_mask");
	___mb.mb_body_set_enable_continuous_collision_detection = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_enable_continuous_collision_detection");
	___mb.mb_body_set_force_integration_callback = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_force_integration_callback");
	___mb.mb_body_set_kinematic_safe_margin = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_kinematic_safe_margin");
	___mb.mb_body_set_max_contacts_reported = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_max_contacts_reported");
	___mb.mb_body_set_mode = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_mode");
	___mb.mb_body_set_omit_force_integration = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_omit_force_integration");
	___mb.mb_body_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_param");
	___mb.mb_body_set_ray_pickable = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_ray_pickable");
	___mb.mb_body_set_shape = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_shape");
	___mb.mb_body_set_shape_disabled = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_shape_disabled");
	___mb.mb_body_set_shape_transform = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_shape_transform");
	___mb.mb_body_set_space = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_space");
	___mb.mb_body_set_state = gd::api->godot_method_bind_get_method("PhysicsServer", "body_set_state");
	___mb.mb_body_test_motion = gd::api->godot_method_bind_get_method("PhysicsServer", "body_test_motion");
	___mb.mb_cone_twist_joint_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "cone_twist_joint_get_param");
	___mb.mb_cone_twist_joint_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "cone_twist_joint_set_param");
	___mb.mb_free_rid = gd::api->godot_method_bind_get_method("PhysicsServer", "free_rid");
	___mb.mb_generic_6dof_joint_get_flag = gd::api->godot_method_bind_get_method("PhysicsServer", "generic_6dof_joint_get_flag");
	___mb.mb_generic_6dof_joint_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "generic_6dof_joint_get_param");
	___mb.mb_generic_6dof_joint_set_flag = gd::api->godot_method_bind_get_method("PhysicsServer", "generic_6dof_joint_set_flag");
	___mb.mb_generic_6dof_joint_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "generic_6dof_joint_set_param");
	___mb.mb_get_process_info = gd::api->godot_method_bind_get_method("PhysicsServer", "get_process_info");
	___mb.mb_hinge_joint_get_flag = gd::api->godot_method_bind_get_method("PhysicsServer", "hinge_joint_get_flag");
	___mb.mb_hinge_joint_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "hinge_joint_get_param");
	___mb.mb_hinge_joint_set_flag = gd::api->godot_method_bind_get_method("PhysicsServer", "hinge_joint_set_flag");
	___mb.mb_hinge_joint_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "hinge_joint_set_param");
	___mb.mb_joint_create_cone_twist = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_create_cone_twist");
	___mb.mb_joint_create_generic_6dof = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_create_generic_6dof");
	___mb.mb_joint_create_hinge = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_create_hinge");
	___mb.mb_joint_create_pin = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_create_pin");
	___mb.mb_joint_create_slider = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_create_slider");
	___mb.mb_joint_get_solver_priority = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_get_solver_priority");
	___mb.mb_joint_get_type = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_get_type");
	___mb.mb_joint_set_solver_priority = gd::api->godot_method_bind_get_method("PhysicsServer", "joint_set_solver_priority");
	___mb.mb_pin_joint_get_local_a = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_get_local_a");
	___mb.mb_pin_joint_get_local_b = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_get_local_b");
	___mb.mb_pin_joint_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_get_param");
	___mb.mb_pin_joint_set_local_a = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_set_local_a");
	___mb.mb_pin_joint_set_local_b = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_set_local_b");
	___mb.mb_pin_joint_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "pin_joint_set_param");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("PhysicsServer", "set_active");
	___mb.mb_set_collision_iterations = gd::api->godot_method_bind_get_method("PhysicsServer", "set_collision_iterations");
	___mb.mb_shape_create = gd::api->godot_method_bind_get_method("PhysicsServer", "shape_create");
	___mb.mb_shape_get_data = gd::api->godot_method_bind_get_method("PhysicsServer", "shape_get_data");
	___mb.mb_shape_get_type = gd::api->godot_method_bind_get_method("PhysicsServer", "shape_get_type");
	___mb.mb_shape_set_data = gd::api->godot_method_bind_get_method("PhysicsServer", "shape_set_data");
	___mb.mb_slider_joint_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "slider_joint_get_param");
	___mb.mb_slider_joint_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "slider_joint_set_param");
	___mb.mb_space_create = gd::api->godot_method_bind_get_method("PhysicsServer", "space_create");
	___mb.mb_space_get_direct_state = gd::api->godot_method_bind_get_method("PhysicsServer", "space_get_direct_state");
	___mb.mb_space_get_param = gd::api->godot_method_bind_get_method("PhysicsServer", "space_get_param");
	___mb.mb_space_is_active = gd::api->godot_method_bind_get_method("PhysicsServer", "space_is_active");
	___mb.mb_space_set_active = gd::api->godot_method_bind_get_method("PhysicsServer", "space_set_active");
	___mb.mb_space_set_param = gd::api->godot_method_bind_get_method("PhysicsServer", "space_set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PhysicsServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void physics_server::area_add_shape(const rid area_, const rid shape_, const transform transform_, const bool disabled) {
	___godot_icall_void_RID_RID_Transform_bool(___mb.mb_area_add_shape, (const object *) this, area_, shape_, transform_, disabled);
}

void physics_server::area_attach_object_instance_id(const rid area_, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_area_attach_object_instance_id, (const object *) this, area_, id);
}

void physics_server::area_clear_shapes(const rid area_) {
	___godot_icall_void_RID(___mb.mb_area_clear_shapes, (const object *) this, area_);
}

rid physics_server::area_create() {
	return ___godot_icall_RID(___mb.mb_area_create, (const object *) this);
}

int64_t physics_server::area_get_object_instance_id(const rid area_) const {
	return ___godot_icall_int_RID(___mb.mb_area_get_object_instance_id, (const object *) this, area_);
}

variant physics_server::area_get_param(const rid area_, const int64_t param) const {
	return ___godot_icall_Variant_RID_int(___mb.mb_area_get_param, (const object *) this, area_, param);
}

rid physics_server::area_get_shape(const rid area_, const int64_t shape_idx) const {
	return ___godot_icall_RID_RID_int(___mb.mb_area_get_shape, (const object *) this, area_, shape_idx);
}

int64_t physics_server::area_get_shape_count(const rid area_) const {
	return ___godot_icall_int_RID(___mb.mb_area_get_shape_count, (const object *) this, area_);
}

transform physics_server::area_get_shape_transform(const rid area_, const int64_t shape_idx) const {
	return ___godot_icall_Transform_RID_int(___mb.mb_area_get_shape_transform, (const object *) this, area_, shape_idx);
}

rid physics_server::area_get_space(const rid area_) const {
	return ___godot_icall_RID_RID(___mb.mb_area_get_space, (const object *) this, area_);
}

physics_server::AreaSpaceOverrideMode physics_server::area_get_space_override_mode(const rid area_) const {
	return (physics_server::AreaSpaceOverrideMode) ___godot_icall_int_RID(___mb.mb_area_get_space_override_mode, (const object *) this, area_);
}

transform physics_server::area_get_transform(const rid area_) const {
	return ___godot_icall_Transform_RID(___mb.mb_area_get_transform, (const object *) this, area_);
}

bool physics_server::area_is_ray_pickable(const rid area_) const {
	return ___godot_icall_bool_RID(___mb.mb_area_is_ray_pickable, (const object *) this, area_);
}

void physics_server::area_remove_shape(const rid area_, const int64_t shape_idx) {
	___godot_icall_void_RID_int(___mb.mb_area_remove_shape, (const object *) this, area_, shape_idx);
}

void physics_server::area_set_area_monitor_callback(const rid area_, const object *receiver, const string method) {
	___godot_icall_void_RID_Object_String(___mb.mb_area_set_area_monitor_callback, (const object *) this, area_, receiver, method);
}

void physics_server::area_set_collision_layer(const rid area_, const int64_t layer) {
	___godot_icall_void_RID_int(___mb.mb_area_set_collision_layer, (const object *) this, area_, layer);
}

void physics_server::area_set_collision_mask(const rid area_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_area_set_collision_mask, (const object *) this, area_, mask);
}

void physics_server::area_set_monitor_callback(const rid area_, const object *receiver, const string method) {
	___godot_icall_void_RID_Object_String(___mb.mb_area_set_monitor_callback, (const object *) this, area_, receiver, method);
}

void physics_server::area_set_monitorable(const rid area_, const bool monitorable) {
	___godot_icall_void_RID_bool(___mb.mb_area_set_monitorable, (const object *) this, area_, monitorable);
}

void physics_server::area_set_param(const rid area_, const int64_t param, const variant value) {
	___godot_icall_void_RID_int_Variant(___mb.mb_area_set_param, (const object *) this, area_, param, value);
}

void physics_server::area_set_ray_pickable(const rid area_, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_area_set_ray_pickable, (const object *) this, area_, enable);
}

void physics_server::area_set_shape(const rid area_, const int64_t shape_idx, const rid shape_) {
	___godot_icall_void_RID_int_RID(___mb.mb_area_set_shape, (const object *) this, area_, shape_idx, shape_);
}

void physics_server::area_set_shape_disabled(const rid area_, const int64_t shape_idx, const bool disabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_area_set_shape_disabled, (const object *) this, area_, shape_idx, disabled);
}

void physics_server::area_set_shape_transform(const rid area_, const int64_t shape_idx, const transform transform_) {
	___godot_icall_void_RID_int_Transform(___mb.mb_area_set_shape_transform, (const object *) this, area_, shape_idx, transform_);
}

void physics_server::area_set_space(const rid area_, const rid space) {
	___godot_icall_void_RID_RID(___mb.mb_area_set_space, (const object *) this, area_, space);
}

void physics_server::area_set_space_override_mode(const rid area_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_area_set_space_override_mode, (const object *) this, area_, mode);
}

void physics_server::area_set_transform(const rid area_, const transform transform_) {
	___godot_icall_void_RID_Transform(___mb.mb_area_set_transform, (const object *) this, area_, transform_);
}

void physics_server::body_add_central_force(const rid body, const vector3 force) {
	___godot_icall_void_RID_Vector3(___mb.mb_body_add_central_force, (const object *) this, body, force);
}

void physics_server::body_add_collision_exception(const rid body, const rid excepted_body) {
	___godot_icall_void_RID_RID(___mb.mb_body_add_collision_exception, (const object *) this, body, excepted_body);
}

void physics_server::body_add_force(const rid body, const vector3 force, const vector3 position) {
	___godot_icall_void_RID_Vector3_Vector3(___mb.mb_body_add_force, (const object *) this, body, force, position);
}

void physics_server::body_add_shape(const rid body, const rid shape_, const transform transform_, const bool disabled) {
	___godot_icall_void_RID_RID_Transform_bool(___mb.mb_body_add_shape, (const object *) this, body, shape_, transform_, disabled);
}

void physics_server::body_add_torque(const rid body, const vector3 torque) {
	___godot_icall_void_RID_Vector3(___mb.mb_body_add_torque, (const object *) this, body, torque);
}

void physics_server::body_apply_central_impulse(const rid body, const vector3 impulse) {
	___godot_icall_void_RID_Vector3(___mb.mb_body_apply_central_impulse, (const object *) this, body, impulse);
}

void physics_server::body_apply_impulse(const rid body, const vector3 position, const vector3 impulse) {
	___godot_icall_void_RID_Vector3_Vector3(___mb.mb_body_apply_impulse, (const object *) this, body, position, impulse);
}

void physics_server::body_apply_torque_impulse(const rid body, const vector3 impulse) {
	___godot_icall_void_RID_Vector3(___mb.mb_body_apply_torque_impulse, (const object *) this, body, impulse);
}

void physics_server::body_attach_object_instance_id(const rid body, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_body_attach_object_instance_id, (const object *) this, body, id);
}

void physics_server::body_clear_shapes(const rid body) {
	___godot_icall_void_RID(___mb.mb_body_clear_shapes, (const object *) this, body);
}

rid physics_server::body_create(const int64_t mode, const bool init_sleeping) {
	return ___godot_icall_RID_int_bool(___mb.mb_body_create, (const object *) this, mode, init_sleeping);
}

int64_t physics_server::body_get_collision_layer(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_collision_layer, (const object *) this, body);
}

int64_t physics_server::body_get_collision_mask(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_collision_mask, (const object *) this, body);
}

physics_direct_body_state *physics_server::body_get_direct_state(const rid body) {
	return (physics_direct_body_state *) ___godot_icall_Object_RID(___mb.mb_body_get_direct_state, (const object *) this, body);
}

real_t physics_server::body_get_kinematic_safe_margin(const rid body) const {
	return ___godot_icall_float_RID(___mb.mb_body_get_kinematic_safe_margin, (const object *) this, body);
}

int64_t physics_server::body_get_max_contacts_reported(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_max_contacts_reported, (const object *) this, body);
}

physics_server::BodyMode physics_server::body_get_mode(const rid body) const {
	return (physics_server::BodyMode) ___godot_icall_int_RID(___mb.mb_body_get_mode, (const object *) this, body);
}

int64_t physics_server::body_get_object_instance_id(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_object_instance_id, (const object *) this, body);
}

real_t physics_server::body_get_param(const rid body, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_body_get_param, (const object *) this, body, param);
}

rid physics_server::body_get_shape(const rid body, const int64_t shape_idx) const {
	return ___godot_icall_RID_RID_int(___mb.mb_body_get_shape, (const object *) this, body, shape_idx);
}

int64_t physics_server::body_get_shape_count(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_shape_count, (const object *) this, body);
}

transform physics_server::body_get_shape_transform(const rid body, const int64_t shape_idx) const {
	return ___godot_icall_Transform_RID_int(___mb.mb_body_get_shape_transform, (const object *) this, body, shape_idx);
}

rid physics_server::body_get_space(const rid body) const {
	return ___godot_icall_RID_RID(___mb.mb_body_get_space, (const object *) this, body);
}

variant physics_server::body_get_state(const rid body, const int64_t state) const {
	return ___godot_icall_Variant_RID_int(___mb.mb_body_get_state, (const object *) this, body, state);
}

bool physics_server::body_is_axis_locked(const rid body, const int64_t axis) const {
	return ___godot_icall_bool_RID_int(___mb.mb_body_is_axis_locked, (const object *) this, body, axis);
}

bool physics_server::body_is_continuous_collision_detection_enabled(const rid body) const {
	return ___godot_icall_bool_RID(___mb.mb_body_is_continuous_collision_detection_enabled, (const object *) this, body);
}

bool physics_server::body_is_omitting_force_integration(const rid body) const {
	return ___godot_icall_bool_RID(___mb.mb_body_is_omitting_force_integration, (const object *) this, body);
}

bool physics_server::body_is_ray_pickable(const rid body) const {
	return ___godot_icall_bool_RID(___mb.mb_body_is_ray_pickable, (const object *) this, body);
}

void physics_server::body_remove_collision_exception(const rid body, const rid excepted_body) {
	___godot_icall_void_RID_RID(___mb.mb_body_remove_collision_exception, (const object *) this, body, excepted_body);
}

void physics_server::body_remove_shape(const rid body, const int64_t shape_idx) {
	___godot_icall_void_RID_int(___mb.mb_body_remove_shape, (const object *) this, body, shape_idx);
}

void physics_server::body_set_axis_lock(const rid body, const int64_t axis, const bool lock) {
	___godot_icall_void_RID_int_bool(___mb.mb_body_set_axis_lock, (const object *) this, body, axis, lock);
}

void physics_server::body_set_axis_velocity(const rid body, const vector3 axis_velocity) {
	___godot_icall_void_RID_Vector3(___mb.mb_body_set_axis_velocity, (const object *) this, body, axis_velocity);
}

void physics_server::body_set_collision_layer(const rid body, const int64_t layer) {
	___godot_icall_void_RID_int(___mb.mb_body_set_collision_layer, (const object *) this, body, layer);
}

void physics_server::body_set_collision_mask(const rid body, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_body_set_collision_mask, (const object *) this, body, mask);
}

void physics_server::body_set_enable_continuous_collision_detection(const rid body, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_body_set_enable_continuous_collision_detection, (const object *) this, body, enable);
}

void physics_server::body_set_force_integration_callback(const rid body, const object *receiver, const string method, const variant userdata) {
	___godot_icall_void_RID_Object_String_Variant(___mb.mb_body_set_force_integration_callback, (const object *) this, body, receiver, method, userdata);
}

void physics_server::body_set_kinematic_safe_margin(const rid body, const real_t margin) {
	___godot_icall_void_RID_float(___mb.mb_body_set_kinematic_safe_margin, (const object *) this, body, margin);
}

void physics_server::body_set_max_contacts_reported(const rid body, const int64_t amount) {
	___godot_icall_void_RID_int(___mb.mb_body_set_max_contacts_reported, (const object *) this, body, amount);
}

void physics_server::body_set_mode(const rid body, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_body_set_mode, (const object *) this, body, mode);
}

void physics_server::body_set_omit_force_integration(const rid body, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_body_set_omit_force_integration, (const object *) this, body, enable);
}

void physics_server::body_set_param(const rid body, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_body_set_param, (const object *) this, body, param, value);
}

void physics_server::body_set_ray_pickable(const rid body, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_body_set_ray_pickable, (const object *) this, body, enable);
}

void physics_server::body_set_shape(const rid body, const int64_t shape_idx, const rid shape_) {
	___godot_icall_void_RID_int_RID(___mb.mb_body_set_shape, (const object *) this, body, shape_idx, shape_);
}

void physics_server::body_set_shape_disabled(const rid body, const int64_t shape_idx, const bool disabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_body_set_shape_disabled, (const object *) this, body, shape_idx, disabled);
}

void physics_server::body_set_shape_transform(const rid body, const int64_t shape_idx, const transform transform_) {
	___godot_icall_void_RID_int_Transform(___mb.mb_body_set_shape_transform, (const object *) this, body, shape_idx, transform_);
}

void physics_server::body_set_space(const rid body, const rid space) {
	___godot_icall_void_RID_RID(___mb.mb_body_set_space, (const object *) this, body, space);
}

void physics_server::body_set_state(const rid body, const int64_t state, const variant value) {
	___godot_icall_void_RID_int_Variant(___mb.mb_body_set_state, (const object *) this, body, state, value);
}

bool physics_server::body_test_motion(const rid body, const transform from, const vector3 motion, const bool infinite_inertia, const ref<physics_test_motion_result> result, const bool exclude_raycast_shapes, const array exclude) {
	return ___godot_icall_bool_RID_Transform_Vector3_bool_Object_bool_Array(___mb.mb_body_test_motion, (const object *) this, body, from, motion, infinite_inertia, result.ptr(), exclude_raycast_shapes, exclude);
}

real_t physics_server::cone_twist_joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_cone_twist_joint_get_param, (const object *) this, joint_, param);
}

void physics_server::cone_twist_joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_cone_twist_joint_set_param, (const object *) this, joint_, param, value);
}

void physics_server::free_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_free_rid, (const object *) this, rid_);
}

bool physics_server::generic_6dof_joint_get_flag(const rid joint_, const int64_t axis, const int64_t flag) {
	return ___godot_icall_bool_RID_int_int(___mb.mb_generic_6dof_joint_get_flag, (const object *) this, joint_, axis, flag);
}

real_t physics_server::generic_6dof_joint_get_param(const rid joint_, const int64_t axis, const int64_t param) {
	return ___godot_icall_float_RID_int_int(___mb.mb_generic_6dof_joint_get_param, (const object *) this, joint_, axis, param);
}

void physics_server::generic_6dof_joint_set_flag(const rid joint_, const int64_t axis, const int64_t flag, const bool enable) {
	___godot_icall_void_RID_int_int_bool(___mb.mb_generic_6dof_joint_set_flag, (const object *) this, joint_, axis, flag, enable);
}

void physics_server::generic_6dof_joint_set_param(const rid joint_, const int64_t axis, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_int_float(___mb.mb_generic_6dof_joint_set_param, (const object *) this, joint_, axis, param, value);
}

int64_t physics_server::get_process_info(const int64_t process_info) {
	return ___godot_icall_int_int(___mb.mb_get_process_info, (const object *) this, process_info);
}

bool physics_server::hinge_joint_get_flag(const rid joint_, const int64_t flag) const {
	return ___godot_icall_bool_RID_int(___mb.mb_hinge_joint_get_flag, (const object *) this, joint_, flag);
}

real_t physics_server::hinge_joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_hinge_joint_get_param, (const object *) this, joint_, param);
}

void physics_server::hinge_joint_set_flag(const rid joint_, const int64_t flag, const bool enabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_hinge_joint_set_flag, (const object *) this, joint_, flag, enabled);
}

void physics_server::hinge_joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_hinge_joint_set_param, (const object *) this, joint_, param, value);
}

rid physics_server::joint_create_cone_twist(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B) {
	return ___godot_icall_RID_RID_Transform_RID_Transform(___mb.mb_joint_create_cone_twist, (const object *) this, body_A, local_ref_A, body_B, local_ref_B);
}

rid physics_server::joint_create_generic_6dof(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B) {
	return ___godot_icall_RID_RID_Transform_RID_Transform(___mb.mb_joint_create_generic_6dof, (const object *) this, body_A, local_ref_A, body_B, local_ref_B);
}

rid physics_server::joint_create_hinge(const rid body_A, const transform hinge_A, const rid body_B, const transform hinge_B) {
	return ___godot_icall_RID_RID_Transform_RID_Transform(___mb.mb_joint_create_hinge, (const object *) this, body_A, hinge_A, body_B, hinge_B);
}

rid physics_server::joint_create_pin(const rid body_A, const vector3 local_A, const rid body_B, const vector3 local_B) {
	return ___godot_icall_RID_RID_Vector3_RID_Vector3(___mb.mb_joint_create_pin, (const object *) this, body_A, local_A, body_B, local_B);
}

rid physics_server::joint_create_slider(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B) {
	return ___godot_icall_RID_RID_Transform_RID_Transform(___mb.mb_joint_create_slider, (const object *) this, body_A, local_ref_A, body_B, local_ref_B);
}

int64_t physics_server::joint_get_solver_priority(const rid joint_) const {
	return ___godot_icall_int_RID(___mb.mb_joint_get_solver_priority, (const object *) this, joint_);
}

physics_server::JointType physics_server::joint_get_type(const rid joint_) const {
	return (physics_server::JointType) ___godot_icall_int_RID(___mb.mb_joint_get_type, (const object *) this, joint_);
}

void physics_server::joint_set_solver_priority(const rid joint_, const int64_t priority) {
	___godot_icall_void_RID_int(___mb.mb_joint_set_solver_priority, (const object *) this, joint_, priority);
}

vector3 physics_server::pin_joint_get_local_a(const rid joint_) const {
	return ___godot_icall_Vector3_RID(___mb.mb_pin_joint_get_local_a, (const object *) this, joint_);
}

vector3 physics_server::pin_joint_get_local_b(const rid joint_) const {
	return ___godot_icall_Vector3_RID(___mb.mb_pin_joint_get_local_b, (const object *) this, joint_);
}

real_t physics_server::pin_joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_pin_joint_get_param, (const object *) this, joint_, param);
}

void physics_server::pin_joint_set_local_a(const rid joint_, const vector3 local_A) {
	___godot_icall_void_RID_Vector3(___mb.mb_pin_joint_set_local_a, (const object *) this, joint_, local_A);
}

void physics_server::pin_joint_set_local_b(const rid joint_, const vector3 local_B) {
	___godot_icall_void_RID_Vector3(___mb.mb_pin_joint_set_local_b, (const object *) this, joint_, local_B);
}

void physics_server::pin_joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_pin_joint_set_param, (const object *) this, joint_, param, value);
}

void physics_server::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void physics_server::set_collision_iterations(const int64_t iterations) {
	___godot_icall_void_int(___mb.mb_set_collision_iterations, (const object *) this, iterations);
}

rid physics_server::shape_create(const int64_t type) {
	return ___godot_icall_RID_int(___mb.mb_shape_create, (const object *) this, type);
}

variant physics_server::shape_get_data(const rid shape_) const {
	return ___godot_icall_Variant_RID(___mb.mb_shape_get_data, (const object *) this, shape_);
}

physics_server::ShapeType physics_server::shape_get_type(const rid shape_) const {
	return (physics_server::ShapeType) ___godot_icall_int_RID(___mb.mb_shape_get_type, (const object *) this, shape_);
}

void physics_server::shape_set_data(const rid shape_, const variant data) {
	___godot_icall_void_RID_Variant(___mb.mb_shape_set_data, (const object *) this, shape_, data);
}

real_t physics_server::slider_joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_slider_joint_get_param, (const object *) this, joint_, param);
}

void physics_server::slider_joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_slider_joint_set_param, (const object *) this, joint_, param, value);
}

rid physics_server::space_create() {
	return ___godot_icall_RID(___mb.mb_space_create, (const object *) this);
}

physics_direct_space_state *physics_server::space_get_direct_state(const rid space) {
	return (physics_direct_space_state *) ___godot_icall_Object_RID(___mb.mb_space_get_direct_state, (const object *) this, space);
}

real_t physics_server::space_get_param(const rid space, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_space_get_param, (const object *) this, space, param);
}

bool physics_server::space_is_active(const rid space) const {
	return ___godot_icall_bool_RID(___mb.mb_space_is_active, (const object *) this, space);
}

void physics_server::space_set_active(const rid space, const bool active) {
	___godot_icall_void_RID_bool(___mb.mb_space_set_active, (const object *) this, space, active);
}

void physics_server::space_set_param(const rid space, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_space_set_param, (const object *) this, space, param, value);
}

}