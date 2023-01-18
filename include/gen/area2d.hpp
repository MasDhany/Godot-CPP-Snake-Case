#ifndef GODOT_CPP_AREA2D_HPP
#define GODOT_CPP_AREA2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "area2d.hpp"

#include "collision_object2d.hpp"
namespace gd {

class node;

class area2d : public collision_object2d {
	struct ___method_bindings {
		godot_method_bind *mb__area_enter_tree;
		godot_method_bind *mb__area_exit_tree;
		godot_method_bind *mb__area_inout;
		godot_method_bind *mb__body_enter_tree;
		godot_method_bind *mb__body_exit_tree;
		godot_method_bind *mb__body_inout;
		godot_method_bind *mb_get_angular_damp;
		godot_method_bind *mb_get_audio_bus_name;
		godot_method_bind *mb_get_gravity;
		godot_method_bind *mb_get_gravity_distance_scale;
		godot_method_bind *mb_get_gravity_vector;
		godot_method_bind *mb_get_linear_damp;
		godot_method_bind *mb_get_overlapping_areas;
		godot_method_bind *mb_get_overlapping_bodies;
		godot_method_bind *mb_get_priority;
		godot_method_bind *mb_get_space_override_mode;
		godot_method_bind *mb_is_gravity_a_point;
		godot_method_bind *mb_is_monitorable;
		godot_method_bind *mb_is_monitoring;
		godot_method_bind *mb_is_overriding_audio_bus;
		godot_method_bind *mb_overlaps_area;
		godot_method_bind *mb_overlaps_body;
		godot_method_bind *mb_set_angular_damp;
		godot_method_bind *mb_set_audio_bus_name;
		godot_method_bind *mb_set_audio_bus_override;
		godot_method_bind *mb_set_gravity;
		godot_method_bind *mb_set_gravity_distance_scale;
		godot_method_bind *mb_set_gravity_is_point;
		godot_method_bind *mb_set_gravity_vector;
		godot_method_bind *mb_set_linear_damp;
		godot_method_bind *mb_set_monitorable;
		godot_method_bind *mb_set_monitoring;
		godot_method_bind *mb_set_priority;
		godot_method_bind *mb_set_space_override_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Area2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Area2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SpaceOverride {
		SPACE_OVERRIDE_DISABLED = 0,
		SPACE_OVERRIDE_COMBINE = 1,
		SPACE_OVERRIDE_COMBINE_REPLACE = 2,
		SPACE_OVERRIDE_REPLACE = 3,
		SPACE_OVERRIDE_REPLACE_COMBINE = 4,
	};

	// constants


	static area2d *_new();

	// methods
	void _area_enter_tree(const int64_t id);
	void _area_exit_tree(const int64_t id);
	void _area_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4);
	void _body_enter_tree(const int64_t id);
	void _body_exit_tree(const int64_t id);
	void _body_inout(const int64_t arg0, const rid arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4);
	real_t get_angular_damp() const;
	string get_audio_bus_name() const;
	real_t get_gravity() const;
	real_t get_gravity_distance_scale() const;
	vector2 get_gravity_vector() const;
	real_t get_linear_damp() const;
	array get_overlapping_areas() const;
	array get_overlapping_bodies() const;
	real_t get_priority() const;
	area2d::SpaceOverride get_space_override_mode() const;
	bool is_gravity_a_point() const;
	bool is_monitorable() const;
	bool is_monitoring() const;
	bool is_overriding_audio_bus() const;
	bool overlaps_area(const node *area_) const;
	bool overlaps_body(const node *body) const;
	void set_angular_damp(const real_t angular_damp);
	void set_audio_bus_name(const string name);
	void set_audio_bus_override(const bool enable);
	void set_gravity(const real_t gravity);
	void set_gravity_distance_scale(const real_t distance_scale);
	void set_gravity_is_point(const bool enable);
	void set_gravity_vector(const vector2 vector);
	void set_linear_damp(const real_t linear_damp);
	void set_monitorable(const bool enable);
	void set_monitoring(const bool enable);
	void set_priority(const real_t priority);
	void set_space_override_mode(const int64_t space_override_mode);

};

}

#endif