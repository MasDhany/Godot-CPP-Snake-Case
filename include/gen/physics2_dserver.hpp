#ifndef GODOT_CPP_PHYSICS2DSERVER_HPP
#define GODOT_CPP_PHYSICS2DSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "physics2_dserver.hpp"

#include "object.hpp"
namespace gd {

class object;
class physics2_ddirect_body_state;
class physics2_ddirect_space_state;
class physics2_dtest_motion_result;

class physics2_dserver : public object {
	static physics2_dserver *_singleton;

	physics2_dserver();

	struct ___method_bindings {
		godot_method_bind *mb_area_add_shape;
		godot_method_bind *mb_area_attach_canvas_instance_id;
		godot_method_bind *mb_area_attach_object_instance_id;
		godot_method_bind *mb_area_clear_shapes;
		godot_method_bind *mb_area_create;
		godot_method_bind *mb_area_get_canvas_instance_id;
		godot_method_bind *mb_area_get_object_instance_id;
		godot_method_bind *mb_area_get_param;
		godot_method_bind *mb_area_get_shape;
		godot_method_bind *mb_area_get_shape_count;
		godot_method_bind *mb_area_get_shape_transform;
		godot_method_bind *mb_area_get_space;
		godot_method_bind *mb_area_get_space_override_mode;
		godot_method_bind *mb_area_get_transform;
		godot_method_bind *mb_area_remove_shape;
		godot_method_bind *mb_area_set_area_monitor_callback;
		godot_method_bind *mb_area_set_collision_layer;
		godot_method_bind *mb_area_set_collision_mask;
		godot_method_bind *mb_area_set_monitor_callback;
		godot_method_bind *mb_area_set_monitorable;
		godot_method_bind *mb_area_set_param;
		godot_method_bind *mb_area_set_shape;
		godot_method_bind *mb_area_set_shape_disabled;
		godot_method_bind *mb_area_set_shape_transform;
		godot_method_bind *mb_area_set_space;
		godot_method_bind *mb_area_set_space_override_mode;
		godot_method_bind *mb_area_set_transform;
		godot_method_bind *mb_body_add_central_force;
		godot_method_bind *mb_body_add_collision_exception;
		godot_method_bind *mb_body_add_force;
		godot_method_bind *mb_body_add_shape;
		godot_method_bind *mb_body_add_torque;
		godot_method_bind *mb_body_apply_central_impulse;
		godot_method_bind *mb_body_apply_impulse;
		godot_method_bind *mb_body_apply_torque_impulse;
		godot_method_bind *mb_body_attach_canvas_instance_id;
		godot_method_bind *mb_body_attach_object_instance_id;
		godot_method_bind *mb_body_clear_shapes;
		godot_method_bind *mb_body_create;
		godot_method_bind *mb_body_get_canvas_instance_id;
		godot_method_bind *mb_body_get_collision_layer;
		godot_method_bind *mb_body_get_collision_mask;
		godot_method_bind *mb_body_get_continuous_collision_detection_mode;
		godot_method_bind *mb_body_get_direct_state;
		godot_method_bind *mb_body_get_max_contacts_reported;
		godot_method_bind *mb_body_get_mode;
		godot_method_bind *mb_body_get_object_instance_id;
		godot_method_bind *mb_body_get_param;
		godot_method_bind *mb_body_get_shape;
		godot_method_bind *mb_body_get_shape_count;
		godot_method_bind *mb_body_get_shape_metadata;
		godot_method_bind *mb_body_get_shape_transform;
		godot_method_bind *mb_body_get_space;
		godot_method_bind *mb_body_get_state;
		godot_method_bind *mb_body_is_omitting_force_integration;
		godot_method_bind *mb_body_remove_collision_exception;
		godot_method_bind *mb_body_remove_shape;
		godot_method_bind *mb_body_set_axis_velocity;
		godot_method_bind *mb_body_set_collision_layer;
		godot_method_bind *mb_body_set_collision_mask;
		godot_method_bind *mb_body_set_continuous_collision_detection_mode;
		godot_method_bind *mb_body_set_force_integration_callback;
		godot_method_bind *mb_body_set_max_contacts_reported;
		godot_method_bind *mb_body_set_mode;
		godot_method_bind *mb_body_set_omit_force_integration;
		godot_method_bind *mb_body_set_param;
		godot_method_bind *mb_body_set_shape;
		godot_method_bind *mb_body_set_shape_as_one_way_collision;
		godot_method_bind *mb_body_set_shape_disabled;
		godot_method_bind *mb_body_set_shape_metadata;
		godot_method_bind *mb_body_set_shape_transform;
		godot_method_bind *mb_body_set_space;
		godot_method_bind *mb_body_set_state;
		godot_method_bind *mb_body_test_motion;
		godot_method_bind *mb_capsule_shape_create;
		godot_method_bind *mb_circle_shape_create;
		godot_method_bind *mb_concave_polygon_shape_create;
		godot_method_bind *mb_convex_polygon_shape_create;
		godot_method_bind *mb_damped_spring_joint_create;
		godot_method_bind *mb_damped_string_joint_get_param;
		godot_method_bind *mb_damped_string_joint_set_param;
		godot_method_bind *mb_free_rid;
		godot_method_bind *mb_get_process_info;
		godot_method_bind *mb_groove_joint_create;
		godot_method_bind *mb_joint_get_param;
		godot_method_bind *mb_joint_get_type;
		godot_method_bind *mb_joint_set_param;
		godot_method_bind *mb_line_shape_create;
		godot_method_bind *mb_pin_joint_create;
		godot_method_bind *mb_ray_shape_create;
		godot_method_bind *mb_rectangle_shape_create;
		godot_method_bind *mb_segment_shape_create;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_collision_iterations;
		godot_method_bind *mb_shape_get_data;
		godot_method_bind *mb_shape_get_type;
		godot_method_bind *mb_shape_set_data;
		godot_method_bind *mb_space_create;
		godot_method_bind *mb_space_get_direct_state;
		godot_method_bind *mb_space_get_param;
		godot_method_bind *mb_space_is_active;
		godot_method_bind *mb_space_set_active;
		godot_method_bind *mb_space_set_param;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline physics2_dserver *get_singleton()
	{
		if (!physics2_dserver::_singleton) {
			physics2_dserver::_singleton = new physics2_dserver;
		}
		return physics2_dserver::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Physics2DServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Physics2DServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ProcessInfo {
		INFO_ACTIVE_OBJECTS = 0,
		INFO_COLLISION_PAIRS = 1,
		INFO_ISLAND_COUNT = 2,
	};
	enum AreaBodyStatus {
		AREA_BODY_ADDED = 0,
		AREA_BODY_REMOVED = 1,
	};
	enum DampedStringParam {
		DAMPED_STRING_REST_LENGTH = 0,
		DAMPED_STRING_STIFFNESS = 1,
		DAMPED_STRING_DAMPING = 2,
	};
	enum BodyMode {
		BODY_MODE_STATIC = 0,
		BODY_MODE_KINEMATIC = 1,
		BODY_MODE_RIGID = 2,
		BODY_MODE_CHARACTER = 3,
	};
	enum ShapeType {
		SHAPE_LINE = 0,
		SHAPE_RAY = 1,
		SHAPE_SEGMENT = 2,
		SHAPE_CIRCLE = 3,
		SHAPE_RECTANGLE = 4,
		SHAPE_CAPSULE = 5,
		SHAPE_CONVEX_POLYGON = 6,
		SHAPE_CONCAVE_POLYGON = 7,
		SHAPE_CUSTOM = 8,
	};
	enum JointParam {
		JOINT_PARAM_BIAS = 0,
		JOINT_PARAM_MAX_BIAS = 1,
		JOINT_PARAM_MAX_FORCE = 2,
	};
	enum SpaceParameter {
		SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
		SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
		SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION = 2,
		SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 3,
		SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 4,
		SPACE_PARAM_BODY_TIME_TO_SLEEP = 5,
		SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS = 6,
	};
	enum JointType {
		JOINT_PIN = 0,
		JOINT_GROOVE = 1,
		JOINT_DAMPED_SPRING = 2,
	};
	enum CCDMode {
		CCD_MODE_DISABLED = 0,
		CCD_MODE_CAST_RAY = 1,
		CCD_MODE_CAST_SHAPE = 2,
	};
	enum BodyState {
		BODY_STATE_TRANSFORM = 0,
		BODY_STATE_LINEAR_VELOCITY = 1,
		BODY_STATE_ANGULAR_VELOCITY = 2,
		BODY_STATE_SLEEPING = 3,
		BODY_STATE_CAN_SLEEP = 4,
	};
	enum BodyParameter {
		BODY_PARAM_BOUNCE = 0,
		BODY_PARAM_FRICTION = 1,
		BODY_PARAM_MASS = 2,
		BODY_PARAM_INERTIA = 3,
		BODY_PARAM_GRAVITY_SCALE = 4,
		BODY_PARAM_LINEAR_DAMP = 5,
		BODY_PARAM_ANGULAR_DAMP = 6,
		BODY_PARAM_MAX = 7,
	};
	enum AreaSpaceOverrideMode {
		AREA_SPACE_OVERRIDE_DISABLED = 0,
		AREA_SPACE_OVERRIDE_COMBINE = 1,
		AREA_SPACE_OVERRIDE_COMBINE_REPLACE = 2,
		AREA_SPACE_OVERRIDE_REPLACE = 3,
		AREA_SPACE_OVERRIDE_REPLACE_COMBINE = 4,
	};
	enum AreaParameter {
		AREA_PARAM_GRAVITY = 0,
		AREA_PARAM_GRAVITY_VECTOR = 1,
		AREA_PARAM_GRAVITY_IS_POINT = 2,
		AREA_PARAM_GRAVITY_DISTANCE_SCALE = 3,
		AREA_PARAM_GRAVITY_POINT_ATTENUATION = 4,
		AREA_PARAM_LINEAR_DAMP = 5,
		AREA_PARAM_ANGULAR_DAMP = 6,
		AREA_PARAM_PRIORITY = 7,
	};

	// constants

	// methods
	void area_add_shape(const rid area_, const rid shape_, const transform2d transform_ = transform2d(), const bool disabled = false);
	void area_attach_canvas_instance_id(const rid area_, const int64_t id);
	void area_attach_object_instance_id(const rid area_, const int64_t id);
	void area_clear_shapes(const rid area_);
	rid area_create();
	int64_t area_get_canvas_instance_id(const rid area_) const;
	int64_t area_get_object_instance_id(const rid area_) const;
	variant area_get_param(const rid area_, const int64_t param) const;
	rid area_get_shape(const rid area_, const int64_t shape_idx) const;
	int64_t area_get_shape_count(const rid area_) const;
	transform2d area_get_shape_transform(const rid area_, const int64_t shape_idx) const;
	rid area_get_space(const rid area_) const;
	physics2_dserver::AreaSpaceOverrideMode area_get_space_override_mode(const rid area_) const;
	transform2d area_get_transform(const rid area_) const;
	void area_remove_shape(const rid area_, const int64_t shape_idx);
	void area_set_area_monitor_callback(const rid area_, const object *receiver, const string method);
	void area_set_collision_layer(const rid area_, const int64_t layer);
	void area_set_collision_mask(const rid area_, const int64_t mask);
	void area_set_monitor_callback(const rid area_, const object *receiver, const string method);
	void area_set_monitorable(const rid area_, const bool monitorable);
	void area_set_param(const rid area_, const int64_t param, const variant value);
	void area_set_shape(const rid area_, const int64_t shape_idx, const rid shape_);
	void area_set_shape_disabled(const rid area_, const int64_t shape_idx, const bool disabled);
	void area_set_shape_transform(const rid area_, const int64_t shape_idx, const transform2d transform_);
	void area_set_space(const rid area_, const rid space);
	void area_set_space_override_mode(const rid area_, const int64_t mode);
	void area_set_transform(const rid area_, const transform2d transform_);
	void body_add_central_force(const rid body, const vector2 force);
	void body_add_collision_exception(const rid body, const rid excepted_body);
	void body_add_force(const rid body, const vector2 offset, const vector2 force);
	void body_add_shape(const rid body, const rid shape_, const transform2d transform_ = transform2d(), const bool disabled = false);
	void body_add_torque(const rid body, const real_t torque);
	void body_apply_central_impulse(const rid body, const vector2 impulse);
	void body_apply_impulse(const rid body, const vector2 position, const vector2 impulse);
	void body_apply_torque_impulse(const rid body, const real_t impulse);
	void body_attach_canvas_instance_id(const rid body, const int64_t id);
	void body_attach_object_instance_id(const rid body, const int64_t id);
	void body_clear_shapes(const rid body);
	rid body_create();
	int64_t body_get_canvas_instance_id(const rid body) const;
	int64_t body_get_collision_layer(const rid body) const;
	int64_t body_get_collision_mask(const rid body) const;
	physics2_dserver::CCDMode body_get_continuous_collision_detection_mode(const rid body) const;
	physics2_ddirect_body_state *body_get_direct_state(const rid body);
	int64_t body_get_max_contacts_reported(const rid body) const;
	physics2_dserver::BodyMode body_get_mode(const rid body) const;
	int64_t body_get_object_instance_id(const rid body) const;
	real_t body_get_param(const rid body, const int64_t param) const;
	rid body_get_shape(const rid body, const int64_t shape_idx) const;
	int64_t body_get_shape_count(const rid body) const;
	variant body_get_shape_metadata(const rid body, const int64_t shape_idx) const;
	transform2d body_get_shape_transform(const rid body, const int64_t shape_idx) const;
	rid body_get_space(const rid body) const;
	variant body_get_state(const rid body, const int64_t state) const;
	bool body_is_omitting_force_integration(const rid body) const;
	void body_remove_collision_exception(const rid body, const rid excepted_body);
	void body_remove_shape(const rid body, const int64_t shape_idx);
	void body_set_axis_velocity(const rid body, const vector2 axis_velocity);
	void body_set_collision_layer(const rid body, const int64_t layer);
	void body_set_collision_mask(const rid body, const int64_t mask);
	void body_set_continuous_collision_detection_mode(const rid body, const int64_t mode);
	void body_set_force_integration_callback(const rid body, const object *receiver, const string method, const variant userdata = variant());
	void body_set_max_contacts_reported(const rid body, const int64_t amount);
	void body_set_mode(const rid body, const int64_t mode);
	void body_set_omit_force_integration(const rid body, const bool enable);
	void body_set_param(const rid body, const int64_t param, const real_t value);
	void body_set_shape(const rid body, const int64_t shape_idx, const rid shape_);
	void body_set_shape_as_one_way_collision(const rid body, const int64_t shape_idx, const bool enable, const real_t margin);
	void body_set_shape_disabled(const rid body, const int64_t shape_idx, const bool disabled);
	void body_set_shape_metadata(const rid body, const int64_t shape_idx, const variant metadata);
	void body_set_shape_transform(const rid body, const int64_t shape_idx, const transform2d transform_);
	void body_set_space(const rid body, const rid space);
	void body_set_state(const rid body, const int64_t state, const variant value);
	bool body_test_motion(const rid body, const transform2d from, const vector2 motion, const bool infinite_inertia, const real_t margin = 0.08, const ref<physics2_dtest_motion_result> result = nullptr, const bool exclude_raycast_shapes = true, const array exclude = array());
	rid capsule_shape_create();
	rid circle_shape_create();
	rid concave_polygon_shape_create();
	rid convex_polygon_shape_create();
	rid damped_spring_joint_create(const vector2 anchor_a, const vector2 anchor_b, const rid body_a, const rid body_b = rid());
	real_t damped_string_joint_get_param(const rid joint_, const int64_t param) const;
	void damped_string_joint_set_param(const rid joint_, const int64_t param, const real_t value);
	void free_rid(const rid rid_);
	int64_t get_process_info(const int64_t process_info);
	rid groove_joint_create(const vector2 groove1_a, const vector2 groove2_a, const vector2 anchor_b, const rid body_a = rid(), const rid body_b = rid());
	real_t joint_get_param(const rid joint_, const int64_t param) const;
	physics2_dserver::JointType joint_get_type(const rid joint_) const;
	void joint_set_param(const rid joint_, const int64_t param, const real_t value);
	rid line_shape_create();
	rid pin_joint_create(const vector2 anchor, const rid body_a, const rid body_b = rid());
	rid ray_shape_create();
	rid rectangle_shape_create();
	rid segment_shape_create();
	void set_active(const bool active);
	void set_collision_iterations(const int64_t iterations);
	variant shape_get_data(const rid shape_) const;
	physics2_dserver::ShapeType shape_get_type(const rid shape_) const;
	void shape_set_data(const rid shape_, const variant data);
	rid space_create();
	physics2_ddirect_space_state *space_get_direct_state(const rid space);
	real_t space_get_param(const rid space, const int64_t param) const;
	bool space_is_active(const rid space) const;
	void space_set_active(const rid space, const bool active);
	void space_set_param(const rid space, const int64_t param, const real_t value);

};

}

#endif