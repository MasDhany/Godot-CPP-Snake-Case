#include "physics2_dserver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "physics2_ddirect_body_state.hpp"
#include "physics2_ddirect_space_state.hpp"
#include "physics2_dtest_motion_result.hpp"


namespace gd {


physics2_dserver *physics2_dserver::_singleton = NULL;


physics2_dserver::physics2_dserver() {
	_owner = gd::api->godot_global_get_singleton((char *) "Physics2DServer");
}


physics2_dserver::___method_bindings physics2_dserver::___mb = {};

void *physics2_dserver::_detail_class_tag = nullptr;

void physics2_dserver::___init_method_bindings() {
	___mb.mb_area_add_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "area_add_shape");
	___mb.mb_area_attach_canvas_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "area_attach_canvas_instance_id");
	___mb.mb_area_attach_object_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "area_attach_object_instance_id");
	___mb.mb_area_clear_shapes = gd::api->godot_method_bind_get_method("Physics2DServer", "area_clear_shapes");
	___mb.mb_area_create = gd::api->godot_method_bind_get_method("Physics2DServer", "area_create");
	___mb.mb_area_get_canvas_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_canvas_instance_id");
	___mb.mb_area_get_object_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_object_instance_id");
	___mb.mb_area_get_param = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_param");
	___mb.mb_area_get_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_shape");
	___mb.mb_area_get_shape_count = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_shape_count");
	___mb.mb_area_get_shape_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_shape_transform");
	___mb.mb_area_get_space = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_space");
	___mb.mb_area_get_space_override_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_space_override_mode");
	___mb.mb_area_get_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "area_get_transform");
	___mb.mb_area_remove_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "area_remove_shape");
	___mb.mb_area_set_area_monitor_callback = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_area_monitor_callback");
	___mb.mb_area_set_collision_layer = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_collision_layer");
	___mb.mb_area_set_collision_mask = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_collision_mask");
	___mb.mb_area_set_monitor_callback = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_monitor_callback");
	___mb.mb_area_set_monitorable = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_monitorable");
	___mb.mb_area_set_param = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_param");
	___mb.mb_area_set_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_shape");
	___mb.mb_area_set_shape_disabled = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_shape_disabled");
	___mb.mb_area_set_shape_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_shape_transform");
	___mb.mb_area_set_space = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_space");
	___mb.mb_area_set_space_override_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_space_override_mode");
	___mb.mb_area_set_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "area_set_transform");
	___mb.mb_body_add_central_force = gd::api->godot_method_bind_get_method("Physics2DServer", "body_add_central_force");
	___mb.mb_body_add_collision_exception = gd::api->godot_method_bind_get_method("Physics2DServer", "body_add_collision_exception");
	___mb.mb_body_add_force = gd::api->godot_method_bind_get_method("Physics2DServer", "body_add_force");
	___mb.mb_body_add_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "body_add_shape");
	___mb.mb_body_add_torque = gd::api->godot_method_bind_get_method("Physics2DServer", "body_add_torque");
	___mb.mb_body_apply_central_impulse = gd::api->godot_method_bind_get_method("Physics2DServer", "body_apply_central_impulse");
	___mb.mb_body_apply_impulse = gd::api->godot_method_bind_get_method("Physics2DServer", "body_apply_impulse");
	___mb.mb_body_apply_torque_impulse = gd::api->godot_method_bind_get_method("Physics2DServer", "body_apply_torque_impulse");
	___mb.mb_body_attach_canvas_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "body_attach_canvas_instance_id");
	___mb.mb_body_attach_object_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "body_attach_object_instance_id");
	___mb.mb_body_clear_shapes = gd::api->godot_method_bind_get_method("Physics2DServer", "body_clear_shapes");
	___mb.mb_body_create = gd::api->godot_method_bind_get_method("Physics2DServer", "body_create");
	___mb.mb_body_get_canvas_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_canvas_instance_id");
	___mb.mb_body_get_collision_layer = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_collision_layer");
	___mb.mb_body_get_collision_mask = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_collision_mask");
	___mb.mb_body_get_continuous_collision_detection_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_continuous_collision_detection_mode");
	___mb.mb_body_get_direct_state = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_direct_state");
	___mb.mb_body_get_max_contacts_reported = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_max_contacts_reported");
	___mb.mb_body_get_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_mode");
	___mb.mb_body_get_object_instance_id = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_object_instance_id");
	___mb.mb_body_get_param = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_param");
	___mb.mb_body_get_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_shape");
	___mb.mb_body_get_shape_count = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_shape_count");
	___mb.mb_body_get_shape_metadata = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_shape_metadata");
	___mb.mb_body_get_shape_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_shape_transform");
	___mb.mb_body_get_space = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_space");
	___mb.mb_body_get_state = gd::api->godot_method_bind_get_method("Physics2DServer", "body_get_state");
	___mb.mb_body_is_omitting_force_integration = gd::api->godot_method_bind_get_method("Physics2DServer", "body_is_omitting_force_integration");
	___mb.mb_body_remove_collision_exception = gd::api->godot_method_bind_get_method("Physics2DServer", "body_remove_collision_exception");
	___mb.mb_body_remove_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "body_remove_shape");
	___mb.mb_body_set_axis_velocity = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_axis_velocity");
	___mb.mb_body_set_collision_layer = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_collision_layer");
	___mb.mb_body_set_collision_mask = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_collision_mask");
	___mb.mb_body_set_continuous_collision_detection_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_continuous_collision_detection_mode");
	___mb.mb_body_set_force_integration_callback = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_force_integration_callback");
	___mb.mb_body_set_max_contacts_reported = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_max_contacts_reported");
	___mb.mb_body_set_mode = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_mode");
	___mb.mb_body_set_omit_force_integration = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_omit_force_integration");
	___mb.mb_body_set_param = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_param");
	___mb.mb_body_set_shape = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_shape");
	___mb.mb_body_set_shape_as_one_way_collision = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_shape_as_one_way_collision");
	___mb.mb_body_set_shape_disabled = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_shape_disabled");
	___mb.mb_body_set_shape_metadata = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_shape_metadata");
	___mb.mb_body_set_shape_transform = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_shape_transform");
	___mb.mb_body_set_space = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_space");
	___mb.mb_body_set_state = gd::api->godot_method_bind_get_method("Physics2DServer", "body_set_state");
	___mb.mb_body_test_motion = gd::api->godot_method_bind_get_method("Physics2DServer", "body_test_motion");
	___mb.mb_capsule_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "capsule_shape_create");
	___mb.mb_circle_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "circle_shape_create");
	___mb.mb_concave_polygon_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "concave_polygon_shape_create");
	___mb.mb_convex_polygon_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "convex_polygon_shape_create");
	___mb.mb_damped_spring_joint_create = gd::api->godot_method_bind_get_method("Physics2DServer", "damped_spring_joint_create");
	___mb.mb_damped_string_joint_get_param = gd::api->godot_method_bind_get_method("Physics2DServer", "damped_string_joint_get_param");
	___mb.mb_damped_string_joint_set_param = gd::api->godot_method_bind_get_method("Physics2DServer", "damped_string_joint_set_param");
	___mb.mb_free_rid = gd::api->godot_method_bind_get_method("Physics2DServer", "free_rid");
	___mb.mb_get_process_info = gd::api->godot_method_bind_get_method("Physics2DServer", "get_process_info");
	___mb.mb_groove_joint_create = gd::api->godot_method_bind_get_method("Physics2DServer", "groove_joint_create");
	___mb.mb_joint_get_param = gd::api->godot_method_bind_get_method("Physics2DServer", "joint_get_param");
	___mb.mb_joint_get_type = gd::api->godot_method_bind_get_method("Physics2DServer", "joint_get_type");
	___mb.mb_joint_set_param = gd::api->godot_method_bind_get_method("Physics2DServer", "joint_set_param");
	___mb.mb_line_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "line_shape_create");
	___mb.mb_pin_joint_create = gd::api->godot_method_bind_get_method("Physics2DServer", "pin_joint_create");
	___mb.mb_ray_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "ray_shape_create");
	___mb.mb_rectangle_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "rectangle_shape_create");
	___mb.mb_segment_shape_create = gd::api->godot_method_bind_get_method("Physics2DServer", "segment_shape_create");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("Physics2DServer", "set_active");
	___mb.mb_set_collision_iterations = gd::api->godot_method_bind_get_method("Physics2DServer", "set_collision_iterations");
	___mb.mb_shape_get_data = gd::api->godot_method_bind_get_method("Physics2DServer", "shape_get_data");
	___mb.mb_shape_get_type = gd::api->godot_method_bind_get_method("Physics2DServer", "shape_get_type");
	___mb.mb_shape_set_data = gd::api->godot_method_bind_get_method("Physics2DServer", "shape_set_data");
	___mb.mb_space_create = gd::api->godot_method_bind_get_method("Physics2DServer", "space_create");
	___mb.mb_space_get_direct_state = gd::api->godot_method_bind_get_method("Physics2DServer", "space_get_direct_state");
	___mb.mb_space_get_param = gd::api->godot_method_bind_get_method("Physics2DServer", "space_get_param");
	___mb.mb_space_is_active = gd::api->godot_method_bind_get_method("Physics2DServer", "space_is_active");
	___mb.mb_space_set_active = gd::api->godot_method_bind_get_method("Physics2DServer", "space_set_active");
	___mb.mb_space_set_param = gd::api->godot_method_bind_get_method("Physics2DServer", "space_set_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Physics2DServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void physics2_dserver::area_add_shape(const rid area_, const rid shape_, const transform2d transform_, const bool disabled) {
	___godot_icall_void_RID_RID_Transform2D_bool(___mb.mb_area_add_shape, (const object *) this, area_, shape_, transform_, disabled);
}

void physics2_dserver::area_attach_canvas_instance_id(const rid area_, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_area_attach_canvas_instance_id, (const object *) this, area_, id);
}

void physics2_dserver::area_attach_object_instance_id(const rid area_, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_area_attach_object_instance_id, (const object *) this, area_, id);
}

void physics2_dserver::area_clear_shapes(const rid area_) {
	___godot_icall_void_RID(___mb.mb_area_clear_shapes, (const object *) this, area_);
}

rid physics2_dserver::area_create() {
	return ___godot_icall_RID(___mb.mb_area_create, (const object *) this);
}

int64_t physics2_dserver::area_get_canvas_instance_id(const rid area_) const {
	return ___godot_icall_int_RID(___mb.mb_area_get_canvas_instance_id, (const object *) this, area_);
}

int64_t physics2_dserver::area_get_object_instance_id(const rid area_) const {
	return ___godot_icall_int_RID(___mb.mb_area_get_object_instance_id, (const object *) this, area_);
}

variant physics2_dserver::area_get_param(const rid area_, const int64_t param) const {
	return ___godot_icall_Variant_RID_int(___mb.mb_area_get_param, (const object *) this, area_, param);
}

rid physics2_dserver::area_get_shape(const rid area_, const int64_t shape_idx) const {
	return ___godot_icall_RID_RID_int(___mb.mb_area_get_shape, (const object *) this, area_, shape_idx);
}

int64_t physics2_dserver::area_get_shape_count(const rid area_) const {
	return ___godot_icall_int_RID(___mb.mb_area_get_shape_count, (const object *) this, area_);
}

transform2d physics2_dserver::area_get_shape_transform(const rid area_, const int64_t shape_idx) const {
	return ___godot_icall_Transform2D_RID_int(___mb.mb_area_get_shape_transform, (const object *) this, area_, shape_idx);
}

rid physics2_dserver::area_get_space(const rid area_) const {
	return ___godot_icall_RID_RID(___mb.mb_area_get_space, (const object *) this, area_);
}

physics2_dserver::AreaSpaceOverrideMode physics2_dserver::area_get_space_override_mode(const rid area_) const {
	return (physics2_dserver::AreaSpaceOverrideMode) ___godot_icall_int_RID(___mb.mb_area_get_space_override_mode, (const object *) this, area_);
}

transform2d physics2_dserver::area_get_transform(const rid area_) const {
	return ___godot_icall_Transform2D_RID(___mb.mb_area_get_transform, (const object *) this, area_);
}

void physics2_dserver::area_remove_shape(const rid area_, const int64_t shape_idx) {
	___godot_icall_void_RID_int(___mb.mb_area_remove_shape, (const object *) this, area_, shape_idx);
}

void physics2_dserver::area_set_area_monitor_callback(const rid area_, const object *receiver, const string method) {
	___godot_icall_void_RID_Object_String(___mb.mb_area_set_area_monitor_callback, (const object *) this, area_, receiver, method);
}

void physics2_dserver::area_set_collision_layer(const rid area_, const int64_t layer) {
	___godot_icall_void_RID_int(___mb.mb_area_set_collision_layer, (const object *) this, area_, layer);
}

void physics2_dserver::area_set_collision_mask(const rid area_, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_area_set_collision_mask, (const object *) this, area_, mask);
}

void physics2_dserver::area_set_monitor_callback(const rid area_, const object *receiver, const string method) {
	___godot_icall_void_RID_Object_String(___mb.mb_area_set_monitor_callback, (const object *) this, area_, receiver, method);
}

void physics2_dserver::area_set_monitorable(const rid area_, const bool monitorable) {
	___godot_icall_void_RID_bool(___mb.mb_area_set_monitorable, (const object *) this, area_, monitorable);
}

void physics2_dserver::area_set_param(const rid area_, const int64_t param, const variant value) {
	___godot_icall_void_RID_int_Variant(___mb.mb_area_set_param, (const object *) this, area_, param, value);
}

void physics2_dserver::area_set_shape(const rid area_, const int64_t shape_idx, const rid shape_) {
	___godot_icall_void_RID_int_RID(___mb.mb_area_set_shape, (const object *) this, area_, shape_idx, shape_);
}

void physics2_dserver::area_set_shape_disabled(const rid area_, const int64_t shape_idx, const bool disabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_area_set_shape_disabled, (const object *) this, area_, shape_idx, disabled);
}

void physics2_dserver::area_set_shape_transform(const rid area_, const int64_t shape_idx, const transform2d transform_) {
	___godot_icall_void_RID_int_Transform2D(___mb.mb_area_set_shape_transform, (const object *) this, area_, shape_idx, transform_);
}

void physics2_dserver::area_set_space(const rid area_, const rid space) {
	___godot_icall_void_RID_RID(___mb.mb_area_set_space, (const object *) this, area_, space);
}

void physics2_dserver::area_set_space_override_mode(const rid area_, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_area_set_space_override_mode, (const object *) this, area_, mode);
}

void physics2_dserver::area_set_transform(const rid area_, const transform2d transform_) {
	___godot_icall_void_RID_Transform2D(___mb.mb_area_set_transform, (const object *) this, area_, transform_);
}

void physics2_dserver::body_add_central_force(const rid body, const vector2 force) {
	___godot_icall_void_RID_Vector2(___mb.mb_body_add_central_force, (const object *) this, body, force);
}

void physics2_dserver::body_add_collision_exception(const rid body, const rid excepted_body) {
	___godot_icall_void_RID_RID(___mb.mb_body_add_collision_exception, (const object *) this, body, excepted_body);
}

void physics2_dserver::body_add_force(const rid body, const vector2 offset, const vector2 force) {
	___godot_icall_void_RID_Vector2_Vector2(___mb.mb_body_add_force, (const object *) this, body, offset, force);
}

void physics2_dserver::body_add_shape(const rid body, const rid shape_, const transform2d transform_, const bool disabled) {
	___godot_icall_void_RID_RID_Transform2D_bool(___mb.mb_body_add_shape, (const object *) this, body, shape_, transform_, disabled);
}

void physics2_dserver::body_add_torque(const rid body, const real_t torque) {
	___godot_icall_void_RID_float(___mb.mb_body_add_torque, (const object *) this, body, torque);
}

void physics2_dserver::body_apply_central_impulse(const rid body, const vector2 impulse) {
	___godot_icall_void_RID_Vector2(___mb.mb_body_apply_central_impulse, (const object *) this, body, impulse);
}

void physics2_dserver::body_apply_impulse(const rid body, const vector2 position, const vector2 impulse) {
	___godot_icall_void_RID_Vector2_Vector2(___mb.mb_body_apply_impulse, (const object *) this, body, position, impulse);
}

void physics2_dserver::body_apply_torque_impulse(const rid body, const real_t impulse) {
	___godot_icall_void_RID_float(___mb.mb_body_apply_torque_impulse, (const object *) this, body, impulse);
}

void physics2_dserver::body_attach_canvas_instance_id(const rid body, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_body_attach_canvas_instance_id, (const object *) this, body, id);
}

void physics2_dserver::body_attach_object_instance_id(const rid body, const int64_t id) {
	___godot_icall_void_RID_int(___mb.mb_body_attach_object_instance_id, (const object *) this, body, id);
}

void physics2_dserver::body_clear_shapes(const rid body) {
	___godot_icall_void_RID(___mb.mb_body_clear_shapes, (const object *) this, body);
}

rid physics2_dserver::body_create() {
	return ___godot_icall_RID(___mb.mb_body_create, (const object *) this);
}

int64_t physics2_dserver::body_get_canvas_instance_id(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_canvas_instance_id, (const object *) this, body);
}

int64_t physics2_dserver::body_get_collision_layer(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_collision_layer, (const object *) this, body);
}

int64_t physics2_dserver::body_get_collision_mask(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_collision_mask, (const object *) this, body);
}

physics2_dserver::CCDMode physics2_dserver::body_get_continuous_collision_detection_mode(const rid body) const {
	return (physics2_dserver::CCDMode) ___godot_icall_int_RID(___mb.mb_body_get_continuous_collision_detection_mode, (const object *) this, body);
}

physics2_ddirect_body_state *physics2_dserver::body_get_direct_state(const rid body) {
	return (physics2_ddirect_body_state *) ___godot_icall_Object_RID(___mb.mb_body_get_direct_state, (const object *) this, body);
}

int64_t physics2_dserver::body_get_max_contacts_reported(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_max_contacts_reported, (const object *) this, body);
}

physics2_dserver::BodyMode physics2_dserver::body_get_mode(const rid body) const {
	return (physics2_dserver::BodyMode) ___godot_icall_int_RID(___mb.mb_body_get_mode, (const object *) this, body);
}

int64_t physics2_dserver::body_get_object_instance_id(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_object_instance_id, (const object *) this, body);
}

real_t physics2_dserver::body_get_param(const rid body, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_body_get_param, (const object *) this, body, param);
}

rid physics2_dserver::body_get_shape(const rid body, const int64_t shape_idx) const {
	return ___godot_icall_RID_RID_int(___mb.mb_body_get_shape, (const object *) this, body, shape_idx);
}

int64_t physics2_dserver::body_get_shape_count(const rid body) const {
	return ___godot_icall_int_RID(___mb.mb_body_get_shape_count, (const object *) this, body);
}

variant physics2_dserver::body_get_shape_metadata(const rid body, const int64_t shape_idx) const {
	return ___godot_icall_Variant_RID_int(___mb.mb_body_get_shape_metadata, (const object *) this, body, shape_idx);
}

transform2d physics2_dserver::body_get_shape_transform(const rid body, const int64_t shape_idx) const {
	return ___godot_icall_Transform2D_RID_int(___mb.mb_body_get_shape_transform, (const object *) this, body, shape_idx);
}

rid physics2_dserver::body_get_space(const rid body) const {
	return ___godot_icall_RID_RID(___mb.mb_body_get_space, (const object *) this, body);
}

variant physics2_dserver::body_get_state(const rid body, const int64_t state) const {
	return ___godot_icall_Variant_RID_int(___mb.mb_body_get_state, (const object *) this, body, state);
}

bool physics2_dserver::body_is_omitting_force_integration(const rid body) const {
	return ___godot_icall_bool_RID(___mb.mb_body_is_omitting_force_integration, (const object *) this, body);
}

void physics2_dserver::body_remove_collision_exception(const rid body, const rid excepted_body) {
	___godot_icall_void_RID_RID(___mb.mb_body_remove_collision_exception, (const object *) this, body, excepted_body);
}

void physics2_dserver::body_remove_shape(const rid body, const int64_t shape_idx) {
	___godot_icall_void_RID_int(___mb.mb_body_remove_shape, (const object *) this, body, shape_idx);
}

void physics2_dserver::body_set_axis_velocity(const rid body, const vector2 axis_velocity) {
	___godot_icall_void_RID_Vector2(___mb.mb_body_set_axis_velocity, (const object *) this, body, axis_velocity);
}

void physics2_dserver::body_set_collision_layer(const rid body, const int64_t layer) {
	___godot_icall_void_RID_int(___mb.mb_body_set_collision_layer, (const object *) this, body, layer);
}

void physics2_dserver::body_set_collision_mask(const rid body, const int64_t mask) {
	___godot_icall_void_RID_int(___mb.mb_body_set_collision_mask, (const object *) this, body, mask);
}

void physics2_dserver::body_set_continuous_collision_detection_mode(const rid body, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_body_set_continuous_collision_detection_mode, (const object *) this, body, mode);
}

void physics2_dserver::body_set_force_integration_callback(const rid body, const object *receiver, const string method, const variant userdata) {
	___godot_icall_void_RID_Object_String_Variant(___mb.mb_body_set_force_integration_callback, (const object *) this, body, receiver, method, userdata);
}

void physics2_dserver::body_set_max_contacts_reported(const rid body, const int64_t amount) {
	___godot_icall_void_RID_int(___mb.mb_body_set_max_contacts_reported, (const object *) this, body, amount);
}

void physics2_dserver::body_set_mode(const rid body, const int64_t mode) {
	___godot_icall_void_RID_int(___mb.mb_body_set_mode, (const object *) this, body, mode);
}

void physics2_dserver::body_set_omit_force_integration(const rid body, const bool enable) {
	___godot_icall_void_RID_bool(___mb.mb_body_set_omit_force_integration, (const object *) this, body, enable);
}

void physics2_dserver::body_set_param(const rid body, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_body_set_param, (const object *) this, body, param, value);
}

void physics2_dserver::body_set_shape(const rid body, const int64_t shape_idx, const rid shape_) {
	___godot_icall_void_RID_int_RID(___mb.mb_body_set_shape, (const object *) this, body, shape_idx, shape_);
}

void physics2_dserver::body_set_shape_as_one_way_collision(const rid body, const int64_t shape_idx, const bool enable, const real_t margin) {
	___godot_icall_void_RID_int_bool_float(___mb.mb_body_set_shape_as_one_way_collision, (const object *) this, body, shape_idx, enable, margin);
}

void physics2_dserver::body_set_shape_disabled(const rid body, const int64_t shape_idx, const bool disabled) {
	___godot_icall_void_RID_int_bool(___mb.mb_body_set_shape_disabled, (const object *) this, body, shape_idx, disabled);
}

void physics2_dserver::body_set_shape_metadata(const rid body, const int64_t shape_idx, const variant metadata) {
	___godot_icall_void_RID_int_Variant(___mb.mb_body_set_shape_metadata, (const object *) this, body, shape_idx, metadata);
}

void physics2_dserver::body_set_shape_transform(const rid body, const int64_t shape_idx, const transform2d transform_) {
	___godot_icall_void_RID_int_Transform2D(___mb.mb_body_set_shape_transform, (const object *) this, body, shape_idx, transform_);
}

void physics2_dserver::body_set_space(const rid body, const rid space) {
	___godot_icall_void_RID_RID(___mb.mb_body_set_space, (const object *) this, body, space);
}

void physics2_dserver::body_set_state(const rid body, const int64_t state, const variant value) {
	___godot_icall_void_RID_int_Variant(___mb.mb_body_set_state, (const object *) this, body, state, value);
}

bool physics2_dserver::body_test_motion(const rid body, const transform2d from, const vector2 motion, const bool infinite_inertia, const real_t margin, const ref<physics2_dtest_motion_result> result, const bool exclude_raycast_shapes, const array exclude) {
	return ___godot_icall_bool_RID_Transform2D_Vector2_bool_float_Object_bool_Array(___mb.mb_body_test_motion, (const object *) this, body, from, motion, infinite_inertia, margin, result.ptr(), exclude_raycast_shapes, exclude);
}

rid physics2_dserver::capsule_shape_create() {
	return ___godot_icall_RID(___mb.mb_capsule_shape_create, (const object *) this);
}

rid physics2_dserver::circle_shape_create() {
	return ___godot_icall_RID(___mb.mb_circle_shape_create, (const object *) this);
}

rid physics2_dserver::concave_polygon_shape_create() {
	return ___godot_icall_RID(___mb.mb_concave_polygon_shape_create, (const object *) this);
}

rid physics2_dserver::convex_polygon_shape_create() {
	return ___godot_icall_RID(___mb.mb_convex_polygon_shape_create, (const object *) this);
}

rid physics2_dserver::damped_spring_joint_create(const vector2 anchor_a, const vector2 anchor_b, const rid body_a, const rid body_b) {
	return ___godot_icall_RID_Vector2_Vector2_RID_RID(___mb.mb_damped_spring_joint_create, (const object *) this, anchor_a, anchor_b, body_a, body_b);
}

real_t physics2_dserver::damped_string_joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_damped_string_joint_get_param, (const object *) this, joint_, param);
}

void physics2_dserver::damped_string_joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_damped_string_joint_set_param, (const object *) this, joint_, param, value);
}

void physics2_dserver::free_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_free_rid, (const object *) this, rid_);
}

int64_t physics2_dserver::get_process_info(const int64_t process_info) {
	return ___godot_icall_int_int(___mb.mb_get_process_info, (const object *) this, process_info);
}

rid physics2_dserver::groove_joint_create(const vector2 groove1_a, const vector2 groove2_a, const vector2 anchor_b, const rid body_a, const rid body_b) {
	return ___godot_icall_RID_Vector2_Vector2_Vector2_RID_RID(___mb.mb_groove_joint_create, (const object *) this, groove1_a, groove2_a, anchor_b, body_a, body_b);
}

real_t physics2_dserver::joint_get_param(const rid joint_, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_joint_get_param, (const object *) this, joint_, param);
}

physics2_dserver::JointType physics2_dserver::joint_get_type(const rid joint_) const {
	return (physics2_dserver::JointType) ___godot_icall_int_RID(___mb.mb_joint_get_type, (const object *) this, joint_);
}

void physics2_dserver::joint_set_param(const rid joint_, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_joint_set_param, (const object *) this, joint_, param, value);
}

rid physics2_dserver::line_shape_create() {
	return ___godot_icall_RID(___mb.mb_line_shape_create, (const object *) this);
}

rid physics2_dserver::pin_joint_create(const vector2 anchor, const rid body_a, const rid body_b) {
	return ___godot_icall_RID_Vector2_RID_RID(___mb.mb_pin_joint_create, (const object *) this, anchor, body_a, body_b);
}

rid physics2_dserver::ray_shape_create() {
	return ___godot_icall_RID(___mb.mb_ray_shape_create, (const object *) this);
}

rid physics2_dserver::rectangle_shape_create() {
	return ___godot_icall_RID(___mb.mb_rectangle_shape_create, (const object *) this);
}

rid physics2_dserver::segment_shape_create() {
	return ___godot_icall_RID(___mb.mb_segment_shape_create, (const object *) this);
}

void physics2_dserver::set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

void physics2_dserver::set_collision_iterations(const int64_t iterations) {
	___godot_icall_void_int(___mb.mb_set_collision_iterations, (const object *) this, iterations);
}

variant physics2_dserver::shape_get_data(const rid shape_) const {
	return ___godot_icall_Variant_RID(___mb.mb_shape_get_data, (const object *) this, shape_);
}

physics2_dserver::ShapeType physics2_dserver::shape_get_type(const rid shape_) const {
	return (physics2_dserver::ShapeType) ___godot_icall_int_RID(___mb.mb_shape_get_type, (const object *) this, shape_);
}

void physics2_dserver::shape_set_data(const rid shape_, const variant data) {
	___godot_icall_void_RID_Variant(___mb.mb_shape_set_data, (const object *) this, shape_, data);
}

rid physics2_dserver::space_create() {
	return ___godot_icall_RID(___mb.mb_space_create, (const object *) this);
}

physics2_ddirect_space_state *physics2_dserver::space_get_direct_state(const rid space) {
	return (physics2_ddirect_space_state *) ___godot_icall_Object_RID(___mb.mb_space_get_direct_state, (const object *) this, space);
}

real_t physics2_dserver::space_get_param(const rid space, const int64_t param) const {
	return ___godot_icall_float_RID_int(___mb.mb_space_get_param, (const object *) this, space, param);
}

bool physics2_dserver::space_is_active(const rid space) const {
	return ___godot_icall_bool_RID(___mb.mb_space_is_active, (const object *) this, space);
}

void physics2_dserver::space_set_active(const rid space, const bool active) {
	___godot_icall_void_RID_bool(___mb.mb_space_set_active, (const object *) this, space, active);
}

void physics2_dserver::space_set_param(const rid space, const int64_t param, const real_t value) {
	___godot_icall_void_RID_int_float(___mb.mb_space_set_param, (const object *) this, space, param, value);
}

}