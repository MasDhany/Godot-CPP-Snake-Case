#ifndef GODOT_CPP_RIGIDBODY2D_HPP
#define GODOT_CPP_RIGIDBODY2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "rigid_body2d.hpp"

#include "physics_body2d.hpp"
namespace gd {

class object;
class physics2_ddirect_body_state;
class physics2_dtest_motion_result;
class physics_material;

class rigid_body2d : public physics_body2d {
	struct ___method_bindings {
		godot_method_bind *mb__body_enter_tree;
		godot_method_bind *mb__body_exit_tree;
		godot_method_bind *mb__direct_state_changed;
		godot_method_bind *mb__integrate_forces;
		godot_method_bind *mb__reload_physics_characteristics;
		godot_method_bind *mb_add_central_force;
		godot_method_bind *mb_add_force;
		godot_method_bind *mb_add_torque;
		godot_method_bind *mb_apply_central_impulse;
		godot_method_bind *mb_apply_impulse;
		godot_method_bind *mb_apply_torque_impulse;
		godot_method_bind *mb_get_angular_damp;
		godot_method_bind *mb_get_angular_velocity;
		godot_method_bind *mb_get_applied_force;
		godot_method_bind *mb_get_applied_torque;
		godot_method_bind *mb_get_bounce;
		godot_method_bind *mb_get_colliding_bodies;
		godot_method_bind *mb_get_continuous_collision_detection_mode;
		godot_method_bind *mb_get_friction;
		godot_method_bind *mb_get_gravity_scale;
		godot_method_bind *mb_get_inertia;
		godot_method_bind *mb_get_linear_damp;
		godot_method_bind *mb_get_linear_velocity;
		godot_method_bind *mb_get_mass;
		godot_method_bind *mb_get_max_contacts_reported;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_physics_material_override;
		godot_method_bind *mb_get_weight;
		godot_method_bind *mb_is_able_to_sleep;
		godot_method_bind *mb_is_contact_monitor_enabled;
		godot_method_bind *mb_is_sleeping;
		godot_method_bind *mb_is_using_custom_integrator;
		godot_method_bind *mb_set_angular_damp;
		godot_method_bind *mb_set_angular_velocity;
		godot_method_bind *mb_set_applied_force;
		godot_method_bind *mb_set_applied_torque;
		godot_method_bind *mb_set_axis_velocity;
		godot_method_bind *mb_set_bounce;
		godot_method_bind *mb_set_can_sleep;
		godot_method_bind *mb_set_contact_monitor;
		godot_method_bind *mb_set_continuous_collision_detection_mode;
		godot_method_bind *mb_set_friction;
		godot_method_bind *mb_set_gravity_scale;
		godot_method_bind *mb_set_inertia;
		godot_method_bind *mb_set_linear_damp;
		godot_method_bind *mb_set_linear_velocity;
		godot_method_bind *mb_set_mass;
		godot_method_bind *mb_set_max_contacts_reported;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_physics_material_override;
		godot_method_bind *mb_set_sleeping;
		godot_method_bind *mb_set_use_custom_integrator;
		godot_method_bind *mb_set_weight;
		godot_method_bind *mb_test_motion;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RigidBody2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RigidBody2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_RIGID = 0,
		MODE_STATIC = 1,
		MODE_CHARACTER = 2,
		MODE_KINEMATIC = 3,
	};
	enum CCDMode {
		CCD_MODE_DISABLED = 0,
		CCD_MODE_CAST_RAY = 1,
		CCD_MODE_CAST_SHAPE = 2,
	};

	// constants


	static rigid_body2d *_new();

	// methods
	void _body_enter_tree(const int64_t arg0);
	void _body_exit_tree(const int64_t arg0);
	void _direct_state_changed(const object *arg0);
	void _integrate_forces(const physics2_ddirect_body_state *state);
	void _reload_physics_characteristics();
	void add_central_force(const vector2 force);
	void add_force(const vector2 offset, const vector2 force);
	void add_torque(const real_t torque);
	void apply_central_impulse(const vector2 impulse);
	void apply_impulse(const vector2 offset, const vector2 impulse);
	void apply_torque_impulse(const real_t torque);
	real_t get_angular_damp() const;
	real_t get_angular_velocity() const;
	vector2 get_applied_force() const;
	real_t get_applied_torque() const;
	real_t get_bounce() const;
	array get_colliding_bodies() const;
	rigid_body2d::CCDMode get_continuous_collision_detection_mode() const;
	real_t get_friction() const;
	real_t get_gravity_scale() const;
	real_t get_inertia() const;
	real_t get_linear_damp() const;
	vector2 get_linear_velocity() const;
	real_t get_mass() const;
	int64_t get_max_contacts_reported() const;
	rigid_body2d::Mode get_mode() const;
	ref<physics_material> get_physics_material_override() const;
	real_t get_weight() const;
	bool is_able_to_sleep() const;
	bool is_contact_monitor_enabled() const;
	bool is_sleeping() const;
	bool is_using_custom_integrator();
	void set_angular_damp(const real_t angular_damp);
	void set_angular_velocity(const real_t angular_velocity);
	void set_applied_force(const vector2 force);
	void set_applied_torque(const real_t torque);
	void set_axis_velocity(const vector2 axis_velocity);
	void set_bounce(const real_t bounce);
	void set_can_sleep(const bool able_to_sleep);
	void set_contact_monitor(const bool enabled);
	void set_continuous_collision_detection_mode(const int64_t mode);
	void set_friction(const real_t friction);
	void set_gravity_scale(const real_t gravity_scale);
	void set_inertia(const real_t inertia);
	void set_linear_damp(const real_t linear_damp);
	void set_linear_velocity(const vector2 linear_velocity);
	void set_mass(const real_t mass);
	void set_max_contacts_reported(const int64_t amount);
	void set_mode(const int64_t mode);
	void set_physics_material_override(const ref<physics_material> physics_material_override);
	void set_sleeping(const bool sleeping);
	void set_use_custom_integrator(const bool enable);
	void set_weight(const real_t weight);
	bool test_motion(const vector2 motion, const bool infinite_inertia = true, const real_t margin = 0.08, const ref<physics2_dtest_motion_result> result = nullptr);

};

}

#endif