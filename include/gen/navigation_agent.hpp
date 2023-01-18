#ifndef GODOT_CPP_NAVIGATIONAGENT_HPP
#define GODOT_CPP_NAVIGATIONAGENT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class node;

class navigation_agent : public node {
	struct ___method_bindings {
		godot_method_bind *mb__avoidance_done;
		godot_method_bind *mb_distance_to_target;
		godot_method_bind *mb_get_agent_height_offset;
		godot_method_bind *mb_get_avoidance_enabled;
		godot_method_bind *mb_get_final_location;
		godot_method_bind *mb_get_ignore_y;
		godot_method_bind *mb_get_max_neighbors;
		godot_method_bind *mb_get_max_speed;
		godot_method_bind *mb_get_nav_path;
		godot_method_bind *mb_get_nav_path_index;
		godot_method_bind *mb_get_navigation;
		godot_method_bind *mb_get_navigation_layers;
		godot_method_bind *mb_get_navigation_map;
		godot_method_bind *mb_get_neighbor_dist;
		godot_method_bind *mb_get_next_location;
		godot_method_bind *mb_get_path_desired_distance;
		godot_method_bind *mb_get_path_max_distance;
		godot_method_bind *mb_get_radius;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_get_target_desired_distance;
		godot_method_bind *mb_get_target_location;
		godot_method_bind *mb_get_time_horizon;
		godot_method_bind *mb_is_navigation_finished;
		godot_method_bind *mb_is_target_reachable;
		godot_method_bind *mb_is_target_reached;
		godot_method_bind *mb_set_agent_height_offset;
		godot_method_bind *mb_set_avoidance_enabled;
		godot_method_bind *mb_set_ignore_y;
		godot_method_bind *mb_set_max_neighbors;
		godot_method_bind *mb_set_max_speed;
		godot_method_bind *mb_set_navigation;
		godot_method_bind *mb_set_navigation_layers;
		godot_method_bind *mb_set_navigation_map;
		godot_method_bind *mb_set_neighbor_dist;
		godot_method_bind *mb_set_path_desired_distance;
		godot_method_bind *mb_set_path_max_distance;
		godot_method_bind *mb_set_radius;
		godot_method_bind *mb_set_target_desired_distance;
		godot_method_bind *mb_set_target_location;
		godot_method_bind *mb_set_time_horizon;
		godot_method_bind *mb_set_velocity;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NavigationAgent"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationAgent"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation_agent *_new();

	// methods
	void _avoidance_done(const vector3 new_velocity);
	real_t distance_to_target() const;
	real_t get_agent_height_offset() const;
	bool get_avoidance_enabled() const;
	vector3 get_final_location();
	bool get_ignore_y() const;
	int64_t get_max_neighbors() const;
	real_t get_max_speed() const;
	pool_vector3_array get_nav_path() const;
	int64_t get_nav_path_index() const;
	node *get_navigation() const;
	int64_t get_navigation_layers() const;
	rid get_navigation_map() const;
	real_t get_neighbor_dist() const;
	vector3 get_next_location();
	real_t get_path_desired_distance() const;
	real_t get_path_max_distance();
	real_t get_radius() const;
	rid get_rid() const;
	real_t get_target_desired_distance() const;
	vector3 get_target_location() const;
	real_t get_time_horizon() const;
	bool is_navigation_finished();
	bool is_target_reachable();
	bool is_target_reached() const;
	void set_agent_height_offset(const real_t agent_height_offset);
	void set_avoidance_enabled(const bool enabled);
	void set_ignore_y(const bool ignore);
	void set_max_neighbors(const int64_t max_neighbors);
	void set_max_speed(const real_t max_speed);
	void set_navigation(const node *navigation_);
	void set_navigation_layers(const int64_t navigation_layers);
	void set_navigation_map(const rid navigation_map);
	void set_neighbor_dist(const real_t neighbor_dist);
	void set_path_desired_distance(const real_t desired_distance);
	void set_path_max_distance(const real_t max_speed);
	void set_radius(const real_t radius);
	void set_target_desired_distance(const real_t desired_distance);
	void set_target_location(const vector3 location);
	void set_time_horizon(const real_t time_horizon);
	void set_velocity(const vector3 velocity);

};

}

#endif