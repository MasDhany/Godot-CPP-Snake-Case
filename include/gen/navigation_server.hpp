#ifndef GODOT_CPP_NAVIGATIONSERVER_HPP
#define GODOT_CPP_NAVIGATIONSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class navigation_mesh;
class node;
class object;

class navigation_server : public object {
	static navigation_server *_singleton;

	navigation_server();

	struct ___method_bindings {
		godot_method_bind *mb_agent_create;
		godot_method_bind *mb_agent_get_map;
		godot_method_bind *mb_agent_is_map_changed;
		godot_method_bind *mb_agent_set_callback;
		godot_method_bind *mb_agent_set_map;
		godot_method_bind *mb_agent_set_max_neighbors;
		godot_method_bind *mb_agent_set_max_speed;
		godot_method_bind *mb_agent_set_neighbor_dist;
		godot_method_bind *mb_agent_set_position;
		godot_method_bind *mb_agent_set_radius;
		godot_method_bind *mb_agent_set_target_velocity;
		godot_method_bind *mb_agent_set_time_horizon;
		godot_method_bind *mb_agent_set_velocity;
		godot_method_bind *mb_free_rid;
		godot_method_bind *mb_get_maps;
		godot_method_bind *mb_map_create;
		godot_method_bind *mb_map_force_update;
		godot_method_bind *mb_map_get_agents;
		godot_method_bind *mb_map_get_cell_height;
		godot_method_bind *mb_map_get_cell_size;
		godot_method_bind *mb_map_get_closest_point;
		godot_method_bind *mb_map_get_closest_point_normal;
		godot_method_bind *mb_map_get_closest_point_owner;
		godot_method_bind *mb_map_get_closest_point_to_segment;
		godot_method_bind *mb_map_get_edge_connection_margin;
		godot_method_bind *mb_map_get_path;
		godot_method_bind *mb_map_get_regions;
		godot_method_bind *mb_map_get_up;
		godot_method_bind *mb_map_is_active;
		godot_method_bind *mb_map_set_active;
		godot_method_bind *mb_map_set_cell_height;
		godot_method_bind *mb_map_set_cell_size;
		godot_method_bind *mb_map_set_edge_connection_margin;
		godot_method_bind *mb_map_set_up;
		godot_method_bind *mb_process;
		godot_method_bind *mb_region_bake_navmesh;
		godot_method_bind *mb_region_create;
		godot_method_bind *mb_region_get_connection_pathway_end;
		godot_method_bind *mb_region_get_connection_pathway_start;
		godot_method_bind *mb_region_get_connections_count;
		godot_method_bind *mb_region_get_enter_cost;
		godot_method_bind *mb_region_get_map;
		godot_method_bind *mb_region_get_navigation_layers;
		godot_method_bind *mb_region_get_travel_cost;
		godot_method_bind *mb_region_owns_point;
		godot_method_bind *mb_region_set_enter_cost;
		godot_method_bind *mb_region_set_map;
		godot_method_bind *mb_region_set_navigation_layers;
		godot_method_bind *mb_region_set_navmesh;
		godot_method_bind *mb_region_set_transform;
		godot_method_bind *mb_region_set_travel_cost;
		godot_method_bind *mb_set_active;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline navigation_server *get_singleton()
	{
		if (!navigation_server::_singleton) {
			navigation_server::_singleton = new navigation_server;
		}
		return navigation_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "NavigationServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	rid agent_create() const;
	rid agent_get_map(const rid agent) const;
	bool agent_is_map_changed(const rid agent) const;
	void agent_set_callback(const rid agent, const object *receiver, const string method, const variant userdata = variant()) const;
	void agent_set_map(const rid agent, const rid map) const;
	void agent_set_max_neighbors(const rid agent, const int64_t count) const;
	void agent_set_max_speed(const rid agent, const real_t max_speed) const;
	void agent_set_neighbor_dist(const rid agent, const real_t dist) const;
	void agent_set_position(const rid agent, const vector3 position) const;
	void agent_set_radius(const rid agent, const real_t radius) const;
	void agent_set_target_velocity(const rid agent, const vector3 target_velocity) const;
	void agent_set_time_horizon(const rid agent, const real_t time_) const;
	void agent_set_velocity(const rid agent, const vector3 velocity) const;
	void free_rid(const rid rid_) const;
	array get_maps() const;
	rid map_create() const;
	void map_force_update(const rid map);
	array map_get_agents(const rid map) const;
	real_t map_get_cell_height(const rid map) const;
	real_t map_get_cell_size(const rid map) const;
	vector3 map_get_closest_point(const rid map, const vector3 to_point) const;
	vector3 map_get_closest_point_normal(const rid map, const vector3 to_point) const;
	rid map_get_closest_point_owner(const rid map, const vector3 to_point) const;
	vector3 map_get_closest_point_to_segment(const rid map, const vector3 start, const vector3 end, const bool use_collision = false) const;
	real_t map_get_edge_connection_margin(const rid map) const;
	pool_vector3_array map_get_path(const rid map, const vector3 origin, const vector3 destination, const bool optimize, const int64_t navigation_layers = 1) const;
	array map_get_regions(const rid map) const;
	vector3 map_get_up(const rid map) const;
	bool map_is_active(const rid map) const;
	void map_set_active(const rid map, const bool active) const;
	void map_set_cell_height(const rid map, const real_t cell_height) const;
	void map_set_cell_size(const rid map, const real_t cell_size) const;
	void map_set_edge_connection_margin(const rid map, const real_t margin) const;
	void map_set_up(const rid map, const vector3 up) const;
	void process(const real_t delta_time);
	void region_bake_navmesh(const ref<navigation_mesh> mesh_, const node *node_) const;
	rid region_create() const;
	vector3 region_get_connection_pathway_end(const rid region, const int64_t connection) const;
	vector3 region_get_connection_pathway_start(const rid region, const int64_t connection) const;
	int64_t region_get_connections_count(const rid region) const;
	real_t region_get_enter_cost(const rid region) const;
	rid region_get_map(const rid region) const;
	int64_t region_get_navigation_layers(const rid region) const;
	real_t region_get_travel_cost(const rid region) const;
	bool region_owns_point(const rid region, const vector3 point) const;
	void region_set_enter_cost(const rid region, const real_t enter_cost) const;
	void region_set_map(const rid region, const rid map) const;
	void region_set_navigation_layers(const rid region, const int64_t navigation_layers) const;
	void region_set_navmesh(const rid region, const ref<navigation_mesh> nav_mesh) const;
	void region_set_transform(const rid region, const transform transform_) const;
	void region_set_travel_cost(const rid region, const real_t travel_cost) const;
	void set_active(const bool active) const;

};

}

#endif