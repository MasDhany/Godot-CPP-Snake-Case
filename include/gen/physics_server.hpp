#ifndef GODOT_CPP_PHYSICSSERVER_HPP
#define GODOT_CPP_PHYSICSSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "physics_server.hpp"

#include "object.hpp"
namespace gd {

class object;
class physics_direct_body_state;
class physics_direct_space_state;
class physics_test_motion_result;

class physics_server : public object {
	static physics_server *_singleton;

	physics_server();

	struct ___method_bindings {
		godot_method_bind *mb_area_add_shape;
		godot_method_bind *mb_area_attach_object_instance_id;
		godot_method_bind *mb_area_clear_shapes;
		godot_method_bind *mb_area_create;
		godot_method_bind *mb_area_get_object_instance_id;
		godot_method_bind *mb_area_get_param;
		godot_method_bind *mb_area_get_shape;
		godot_method_bind *mb_area_get_shape_count;
		godot_method_bind *mb_area_get_shape_transform;
		godot_method_bind *mb_area_get_space;
		godot_method_bind *mb_area_get_space_override_mode;
		godot_method_bind *mb_area_get_transform;
		godot_method_bind *mb_area_is_ray_pickable;
		godot_method_bind *mb_area_remove_shape;
		godot_method_bind *mb_area_set_area_monitor_callback;
		godot_method_bind *mb_area_set_collision_layer;
		godot_method_bind *mb_area_set_collision_mask;
		godot_method_bind *mb_area_set_monitor_callback;
		godot_method_bind *mb_area_set_monitorable;
		godot_method_bind *mb_area_set_param;
		godot_method_bind *mb_area_set_ray_pickable;
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
		godot_method_bind *mb_body_attach_object_instance_id;
		godot_method_bind *mb_body_clear_shapes;
		godot_method_bind *mb_body_create;
		godot_method_bind *mb_body_get_collision_layer;
		godot_method_bind *mb_body_get_collision_mask;
		godot_method_bind *mb_body_get_direct_state;
		godot_method_bind *mb_body_get_kinematic_safe_margin;
		godot_method_bind *mb_body_get_max_contacts_reported;
		godot_method_bind *mb_body_get_mode;
		godot_method_bind *mb_body_get_object_instance_id;
		godot_method_bind *mb_body_get_param;
		godot_method_bind *mb_body_get_shape;
		godot_method_bind *mb_body_get_shape_count;
		godot_method_bind *mb_body_get_shape_transform;
		godot_method_bind *mb_body_get_space;
		godot_method_bind *mb_body_get_state;
		godot_method_bind *mb_body_is_axis_locked;
		godot_method_bind *mb_body_is_continuous_collision_detection_enabled;
		godot_method_bind *mb_body_is_omitting_force_integration;
		godot_method_bind *mb_body_is_ray_pickable;
		godot_method_bind *mb_body_remove_collision_exception;
		godot_method_bind *mb_body_remove_shape;
		godot_method_bind *mb_body_set_axis_lock;
		godot_method_bind *mb_body_set_axis_velocity;
		godot_method_bind *mb_body_set_collision_layer;
		godot_method_bind *mb_body_set_collision_mask;
		godot_method_bind *mb_body_set_enable_continuous_collision_detection;
		godot_method_bind *mb_body_set_force_integration_callback;
		godot_method_bind *mb_body_set_kinematic_safe_margin;
		godot_method_bind *mb_body_set_max_contacts_reported;
		godot_method_bind *mb_body_set_mode;
		godot_method_bind *mb_body_set_omit_force_integration;
		godot_method_bind *mb_body_set_param;
		godot_method_bind *mb_body_set_ray_pickable;
		godot_method_bind *mb_body_set_shape;
		godot_method_bind *mb_body_set_shape_disabled;
		godot_method_bind *mb_body_set_shape_transform;
		godot_method_bind *mb_body_set_space;
		godot_method_bind *mb_body_set_state;
		godot_method_bind *mb_body_test_motion;
		godot_method_bind *mb_cone_twist_joint_get_param;
		godot_method_bind *mb_cone_twist_joint_set_param;
		godot_method_bind *mb_free_rid;
		godot_method_bind *mb_generic_6dof_joint_get_flag;
		godot_method_bind *mb_generic_6dof_joint_get_param;
		godot_method_bind *mb_generic_6dof_joint_set_flag;
		godot_method_bind *mb_generic_6dof_joint_set_param;
		godot_method_bind *mb_get_process_info;
		godot_method_bind *mb_hinge_joint_get_flag;
		godot_method_bind *mb_hinge_joint_get_param;
		godot_method_bind *mb_hinge_joint_set_flag;
		godot_method_bind *mb_hinge_joint_set_param;
		godot_method_bind *mb_joint_create_cone_twist;
		godot_method_bind *mb_joint_create_generic_6dof;
		godot_method_bind *mb_joint_create_hinge;
		godot_method_bind *mb_joint_create_pin;
		godot_method_bind *mb_joint_create_slider;
		godot_method_bind *mb_joint_get_solver_priority;
		godot_method_bind *mb_joint_get_type;
		godot_method_bind *mb_joint_set_solver_priority;
		godot_method_bind *mb_pin_joint_get_local_a;
		godot_method_bind *mb_pin_joint_get_local_b;
		godot_method_bind *mb_pin_joint_get_param;
		godot_method_bind *mb_pin_joint_set_local_a;
		godot_method_bind *mb_pin_joint_set_local_b;
		godot_method_bind *mb_pin_joint_set_param;
		godot_method_bind *mb_set_active;
		godot_method_bind *mb_set_collision_iterations;
		godot_method_bind *mb_shape_create;
		godot_method_bind *mb_shape_get_data;
		godot_method_bind *mb_shape_get_type;
		godot_method_bind *mb_shape_set_data;
		godot_method_bind *mb_slider_joint_get_param;
		godot_method_bind *mb_slider_joint_set_param;
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

	static inline physics_server *get_singleton()
	{
		if (!physics_server::_singleton) {
			physics_server::_singleton = new physics_server;
		}
		return physics_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "PhysicsServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PhysicsServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BodyAxis {
		BODY_AXIS_LINEAR_X = 1,
		BODY_AXIS_LINEAR_Y = 2,
		BODY_AXIS_LINEAR_Z = 4,
		BODY_AXIS_ANGULAR_X = 8,
		BODY_AXIS_ANGULAR_Y = 16,
		BODY_AXIS_ANGULAR_Z = 32,
	};
	enum ProcessInfo {
		INFO_ACTIVE_OBJECTS = 0,
		INFO_COLLISION_PAIRS = 1,
		INFO_ISLAND_COUNT = 2,
	};
	enum AreaBodyStatus {
		AREA_BODY_ADDED = 0,
		AREA_BODY_REMOVED = 1,
	};
	enum BodyMode {
		BODY_MODE_STATIC = 0,
		BODY_MODE_KINEMATIC = 1,
		BODY_MODE_RIGID = 2,
		BODY_MODE_CHARACTER = 3,
	};
	enum ShapeType {
		SHAPE_PLANE = 0,
		SHAPE_RAY = 1,
		SHAPE_SPHERE = 2,
		SHAPE_BOX = 3,
		SHAPE_CAPSULE = 4,
		SHAPE_CYLINDER = 5,
		SHAPE_CONVEX_POLYGON = 6,
		SHAPE_CONCAVE_POLYGON = 7,
		SHAPE_HEIGHTMAP = 8,
		SHAPE_CUSTOM = 9,
	};
	enum PinJointParam {
		PIN_JOINT_BIAS = 0,
		PIN_JOINT_DAMPING = 1,
		PIN_JOINT_IMPULSE_CLAMP = 2,
	};
	enum SpaceParameter {
		SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
		SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
		SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION = 2,
		SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 3,
		SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 4,
		SPACE_PARAM_BODY_TIME_TO_SLEEP = 5,
		SPACE_PARAM_BODY_ANGULAR_VELOCITY_DAMP_RATIO = 6,
		SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS = 7,
	};
	enum ConeTwistJointParam {
		CONE_TWIST_JOINT_SWING_SPAN = 0,
		CONE_TWIST_JOINT_TWIST_SPAN = 1,
		CONE_TWIST_JOINT_BIAS = 2,
		CONE_TWIST_JOINT_SOFTNESS = 3,
		CONE_TWIST_JOINT_RELAXATION = 4,
	};
	enum JointType {
		JOINT_PIN = 0,
		JOINT_HINGE = 1,
		JOINT_SLIDER = 2,
		JOINT_CONE_TWIST = 3,
		JOINT_6DOF = 4,
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
		BODY_PARAM_GRAVITY_SCALE = 3,
		BODY_PARAM_LINEAR_DAMP = 4,
		BODY_PARAM_ANGULAR_DAMP = 5,
		BODY_PARAM_MAX = 6,
	};
	enum G6DOFJointAxisParam {
		G6DOF_JOINT_LINEAR_LOWER_LIMIT = 0,
		G6DOF_JOINT_LINEAR_UPPER_LIMIT = 1,
		G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
		G6DOF_JOINT_LINEAR_RESTITUTION = 3,
		G6DOF_JOINT_LINEAR_DAMPING = 4,
		G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY = 5,
		G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT = 6,
		G6DOF_JOINT_ANGULAR_LOWER_LIMIT = 10,
		G6DOF_JOINT_ANGULAR_UPPER_LIMIT = 11,
		G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS = 12,
		G6DOF_JOINT_ANGULAR_DAMPING = 13,
		G6DOF_JOINT_ANGULAR_RESTITUTION = 14,
		G6DOF_JOINT_ANGULAR_FORCE_LIMIT = 15,
		G6DOF_JOINT_ANGULAR_ERP = 16,
		G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY = 17,
		G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT = 18,
	};
	enum SliderJointParam {
		SLIDER_JOINT_LINEAR_LIMIT_UPPER = 0,
		SLIDER_JOINT_LINEAR_LIMIT_LOWER = 1,
		SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
		SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION = 3,
		SLIDER_JOINT_LINEAR_LIMIT_DAMPING = 4,
		SLIDER_JOINT_LINEAR_MOTION_SOFTNESS = 5,
		SLIDER_JOINT_LINEAR_MOTION_RESTITUTION = 6,
		SLIDER_JOINT_LINEAR_MOTION_DAMPING = 7,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS = 8,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION = 9,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING = 10,
		SLIDER_JOINT_ANGULAR_LIMIT_UPPER = 11,
		SLIDER_JOINT_ANGULAR_LIMIT_LOWER = 12,
		SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS = 13,
		SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION = 14,
		SLIDER_JOINT_ANGULAR_LIMIT_DAMPING = 15,
		SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS = 16,
		SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION = 17,
		SLIDER_JOINT_ANGULAR_MOTION_DAMPING = 18,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS = 19,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION = 20,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING = 21,
		SLIDER_JOINT_MAX = 22,
	};
	enum HingeJointParam {
		HINGE_JOINT_BIAS = 0,
		HINGE_JOINT_LIMIT_UPPER = 1,
		HINGE_JOINT_LIMIT_LOWER = 2,
		HINGE_JOINT_LIMIT_BIAS = 3,
		HINGE_JOINT_LIMIT_SOFTNESS = 4,
		HINGE_JOINT_LIMIT_RELAXATION = 5,
		HINGE_JOINT_MOTOR_TARGET_VELOCITY = 6,
		HINGE_JOINT_MOTOR_MAX_IMPULSE = 7,
	};
	enum G6DOFJointAxisFlag {
		G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT = 0,
		G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT = 1,
		G6DOF_JOINT_FLAG_ENABLE_MOTOR = 4,
		G6DOF_JOINT_FLAG_ENABLE_LINEAR_MOTOR = 5,
	};
	enum HingeJointFlag {
		HINGE_JOINT_FLAG_USE_LIMIT = 0,
		HINGE_JOINT_FLAG_ENABLE_MOTOR = 1,
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
	void area_add_shape(const rid area_, const rid shape_, const transform transform_ = transform(), const bool disabled = false);
	void area_attach_object_instance_id(const rid area_, const int64_t id);
	void area_clear_shapes(const rid area_);
	rid area_create();
	int64_t area_get_object_instance_id(const rid area_) const;
	variant area_get_param(const rid area_, const int64_t param) const;
	rid area_get_shape(const rid area_, const int64_t shape_idx) const;
	int64_t area_get_shape_count(const rid area_) const;
	transform area_get_shape_transform(const rid area_, const int64_t shape_idx) const;
	rid area_get_space(const rid area_) const;
	physics_server::AreaSpaceOverrideMode area_get_space_override_mode(const rid area_) const;
	transform area_get_transform(const rid area_) const;
	bool area_is_ray_pickable(const rid area_) const;
	void area_remove_shape(const rid area_, const int64_t shape_idx);
	void area_set_area_monitor_callback(const rid area_, const object *receiver, const string method);
	void area_set_collision_layer(const rid area_, const int64_t layer);
	void area_set_collision_mask(const rid area_, const int64_t mask);
	void area_set_monitor_callback(const rid area_, const object *receiver, const string method);
	void area_set_monitorable(const rid area_, const bool monitorable);
	void area_set_param(const rid area_, const int64_t param, const variant value);
	void area_set_ray_pickable(const rid area_, const bool enable);
	void area_set_shape(const rid area_, const int64_t shape_idx, const rid shape_);
	void area_set_shape_disabled(const rid area_, const int64_t shape_idx, const bool disabled);
	void area_set_shape_transform(const rid area_, const int64_t shape_idx, const transform transform_);
	void area_set_space(const rid area_, const rid space);
	void area_set_space_override_mode(const rid area_, const int64_t mode);
	void area_set_transform(const rid area_, const transform transform_);
	void body_add_central_force(const rid body, const vector3 force);
	void body_add_collision_exception(const rid body, const rid excepted_body);
	void body_add_force(const rid body, const vector3 force, const vector3 position);
	void body_add_shape(const rid body, const rid shape_, const transform transform_ = transform(), const bool disabled = false);
	void body_add_torque(const rid body, const vector3 torque);
	void body_apply_central_impulse(const rid body, const vector3 impulse);
	void body_apply_impulse(const rid body, const vector3 position, const vector3 impulse);
	void body_apply_torque_impulse(const rid body, const vector3 impulse);
	void body_attach_object_instance_id(const rid body, const int64_t id);
	void body_clear_shapes(const rid body);
	rid body_create(const int64_t mode = 2, const bool init_sleeping = false);
	int64_t body_get_collision_layer(const rid body) const;
	int64_t body_get_collision_mask(const rid body) const;
	physics_direct_body_state *body_get_direct_state(const rid body);
	real_t body_get_kinematic_safe_margin(const rid body) const;
	int64_t body_get_max_contacts_reported(const rid body) const;
	physics_server::BodyMode body_get_mode(const rid body) const;
	int64_t body_get_object_instance_id(const rid body) const;
	real_t body_get_param(const rid body, const int64_t param) const;
	rid body_get_shape(const rid body, const int64_t shape_idx) const;
	int64_t body_get_shape_count(const rid body) const;
	transform body_get_shape_transform(const rid body, const int64_t shape_idx) const;
	rid body_get_space(const rid body) const;
	variant body_get_state(const rid body, const int64_t state) const;
	bool body_is_axis_locked(const rid body, const int64_t axis) const;
	bool body_is_continuous_collision_detection_enabled(const rid body) const;
	bool body_is_omitting_force_integration(const rid body) const;
	bool body_is_ray_pickable(const rid body) const;
	void body_remove_collision_exception(const rid body, const rid excepted_body);
	void body_remove_shape(const rid body, const int64_t shape_idx);
	void body_set_axis_lock(const rid body, const int64_t axis, const bool lock);
	void body_set_axis_velocity(const rid body, const vector3 axis_velocity);
	void body_set_collision_layer(const rid body, const int64_t layer);
	void body_set_collision_mask(const rid body, const int64_t mask);
	void body_set_enable_continuous_collision_detection(const rid body, const bool enable);
	void body_set_force_integration_callback(const rid body, const object *receiver, const string method, const variant userdata = variant());
	void body_set_kinematic_safe_margin(const rid body, const real_t margin);
	void body_set_max_contacts_reported(const rid body, const int64_t amount);
	void body_set_mode(const rid body, const int64_t mode);
	void body_set_omit_force_integration(const rid body, const bool enable);
	void body_set_param(const rid body, const int64_t param, const real_t value);
	void body_set_ray_pickable(const rid body, const bool enable);
	void body_set_shape(const rid body, const int64_t shape_idx, const rid shape_);
	void body_set_shape_disabled(const rid body, const int64_t shape_idx, const bool disabled);
	void body_set_shape_transform(const rid body, const int64_t shape_idx, const transform transform_);
	void body_set_space(const rid body, const rid space);
	void body_set_state(const rid body, const int64_t state, const variant value);
	bool body_test_motion(const rid body, const transform from, const vector3 motion, const bool infinite_inertia, const ref<physics_test_motion_result> result = nullptr, const bool exclude_raycast_shapes = true, const array exclude = array());
	real_t cone_twist_joint_get_param(const rid joint_, const int64_t param) const;
	void cone_twist_joint_set_param(const rid joint_, const int64_t param, const real_t value);
	void free_rid(const rid rid_);
	bool generic_6dof_joint_get_flag(const rid joint_, const int64_t axis, const int64_t flag);
	real_t generic_6dof_joint_get_param(const rid joint_, const int64_t axis, const int64_t param);
	void generic_6dof_joint_set_flag(const rid joint_, const int64_t axis, const int64_t flag, const bool enable);
	void generic_6dof_joint_set_param(const rid joint_, const int64_t axis, const int64_t param, const real_t value);
	int64_t get_process_info(const int64_t process_info);
	bool hinge_joint_get_flag(const rid joint_, const int64_t flag) const;
	real_t hinge_joint_get_param(const rid joint_, const int64_t param) const;
	void hinge_joint_set_flag(const rid joint_, const int64_t flag, const bool enabled);
	void hinge_joint_set_param(const rid joint_, const int64_t param, const real_t value);
	rid joint_create_cone_twist(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B);
	rid joint_create_generic_6dof(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B);
	rid joint_create_hinge(const rid body_A, const transform hinge_A, const rid body_B, const transform hinge_B);
	rid joint_create_pin(const rid body_A, const vector3 local_A, const rid body_B, const vector3 local_B);
	rid joint_create_slider(const rid body_A, const transform local_ref_A, const rid body_B, const transform local_ref_B);
	int64_t joint_get_solver_priority(const rid joint_) const;
	physics_server::JointType joint_get_type(const rid joint_) const;
	void joint_set_solver_priority(const rid joint_, const int64_t priority);
	vector3 pin_joint_get_local_a(const rid joint_) const;
	vector3 pin_joint_get_local_b(const rid joint_) const;
	real_t pin_joint_get_param(const rid joint_, const int64_t param) const;
	void pin_joint_set_local_a(const rid joint_, const vector3 local_A);
	void pin_joint_set_local_b(const rid joint_, const vector3 local_B);
	void pin_joint_set_param(const rid joint_, const int64_t param, const real_t value);
	void set_active(const bool active);
	void set_collision_iterations(const int64_t iterations);
	rid shape_create(const int64_t type);
	variant shape_get_data(const rid shape_) const;
	physics_server::ShapeType shape_get_type(const rid shape_) const;
	void shape_set_data(const rid shape_, const variant data);
	real_t slider_joint_get_param(const rid joint_, const int64_t param) const;
	void slider_joint_set_param(const rid joint_, const int64_t param, const real_t value);
	rid space_create();
	physics_direct_space_state *space_get_direct_state(const rid space);
	real_t space_get_param(const rid space, const int64_t param) const;
	bool space_is_active(const rid space) const;
	void space_set_active(const rid space, const bool active);
	void space_set_param(const rid space, const int64_t param, const real_t value);

};

}

#endif