#include "navigation_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_mesh.hpp"
#include "node.hpp"
#include "object.hpp"


namespace gd {


navigation_server *navigation_server::_singleton = NULL;


navigation_server::navigation_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "NavigationServer");
}


navigation_server::___method_bindings navigation_server::___mb = {};

void *navigation_server::_detail_class_tag = nullptr;

void navigation_server::___init_method_bindings() {
	___mb.mb_agent_create = gd::api->godot_method_bind_get_method("NavigationServer", "agent_create");
	___mb.mb_agent_get_map = gd::api->godot_method_bind_get_method("NavigationServer", "agent_get_map");
	___mb.mb_agent_is_map_changed = gd::api->godot_method_bind_get_method("NavigationServer", "agent_is_map_changed");
	___mb.mb_agent_set_callback = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_callback");
	___mb.mb_agent_set_map = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_map");
	___mb.mb_agent_set_max_neighbors = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_max_neighbors");
	___mb.mb_agent_set_max_speed = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_max_speed");
	___mb.mb_agent_set_neighbor_dist = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_neighbor_dist");
	___mb.mb_agent_set_position = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_position");
	___mb.mb_agent_set_radius = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_radius");
	___mb.mb_agent_set_target_velocity = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_target_velocity");
	___mb.mb_agent_set_time_horizon = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_time_horizon");
	___mb.mb_agent_set_velocity = gd::api->godot_method_bind_get_method("NavigationServer", "agent_set_velocity");
	___mb.mb_free_rid = gd::api->godot_method_bind_get_method("NavigationServer", "free_rid");
	___mb.mb_get_maps = gd::api->godot_method_bind_get_method("NavigationServer", "get_maps");
	___mb.mb_map_create = gd::api->godot_method_bind_get_method("NavigationServer", "map_create");
	___mb.mb_map_force_update = gd::api->godot_method_bind_get_method("NavigationServer", "map_force_update");
	___mb.mb_map_get_agents = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_agents");
	___mb.mb_map_get_cell_height = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_cell_height");
	___mb.mb_map_get_cell_size = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_cell_size");
	___mb.mb_map_get_closest_point = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_closest_point");
	___mb.mb_map_get_closest_point_normal = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_closest_point_normal");
	___mb.mb_map_get_closest_point_owner = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_closest_point_owner");
	___mb.mb_map_get_closest_point_to_segment = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_closest_point_to_segment");
	___mb.mb_map_get_edge_connection_margin = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_edge_connection_margin");
	___mb.mb_map_get_path = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_path");
	___mb.mb_map_get_regions = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_regions");
	___mb.mb_map_get_up = gd::api->godot_method_bind_get_method("NavigationServer", "map_get_up");
	___mb.mb_map_is_active = gd::api->godot_method_bind_get_method("NavigationServer", "map_is_active");
	___mb.mb_map_set_active = gd::api->godot_method_bind_get_method("NavigationServer", "map_set_active");
	___mb.mb_map_set_cell_height = gd::api->godot_method_bind_get_method("NavigationServer", "map_set_cell_height");
	___mb.mb_map_set_cell_size = gd::api->godot_method_bind_get_method("NavigationServer", "map_set_cell_size");
	___mb.mb_map_set_edge_connection_margin = gd::api->godot_method_bind_get_method("NavigationServer", "map_set_edge_connection_margin");
	___mb.mb_map_set_up = gd::api->godot_method_bind_get_method("NavigationServer", "map_set_up");
	___mb.mb_process = gd::api->godot_method_bind_get_method("NavigationServer", "process");
	___mb.mb_region_bake_navmesh = gd::api->godot_method_bind_get_method("NavigationServer", "region_bake_navmesh");
	___mb.mb_region_create = gd::api->godot_method_bind_get_method("NavigationServer", "region_create");
	___mb.mb_region_get_connection_pathway_end = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_connection_pathway_end");
	___mb.mb_region_get_connection_pathway_start = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_connection_pathway_start");
	___mb.mb_region_get_connections_count = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_connections_count");
	___mb.mb_region_get_enter_cost = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_enter_cost");
	___mb.mb_region_get_map = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_map");
	___mb.mb_region_get_navigation_layers = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_navigation_layers");
	___mb.mb_region_get_travel_cost = gd::api->godot_method_bind_get_method("NavigationServer", "region_get_travel_cost");
	___mb.mb_region_owns_point = gd::api->godot_method_bind_get_method("NavigationServer", "region_owns_point");
	___mb.mb_region_set_enter_cost = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_enter_cost");
	___mb.mb_region_set_map = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_map");
	___mb.mb_region_set_navigation_layers = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_navigation_layers");
	___mb.mb_region_set_navmesh = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_navmesh");
	___mb.mb_region_set_transform = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_transform");
	___mb.mb_region_set_travel_cost = gd::api->godot_method_bind_get_method("NavigationServer", "region_set_travel_cost");
	___mb.mb_set_active = gd::api->godot_method_bind_get_method("NavigationServer", "set_active");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rid navigation_server::agent_create() const {
	return ___godot_icall_RID(___mb.mb_agent_create, (const object *) this);
}

rid navigation_server::agent_get_map(const rid agent) const {
	return ___godot_icall_RID_RID(___mb.mb_agent_get_map, (const object *) this, agent);
}

bool navigation_server::agent_is_map_changed(const rid agent) const {
	return ___godot_icall_bool_RID(___mb.mb_agent_is_map_changed, (const object *) this, agent);
}

void navigation_server::agent_set_callback(const rid agent, const object *receiver, const string method, const variant userdata) const {
	___godot_icall_void_RID_Object_String_Variant(___mb.mb_agent_set_callback, (const object *) this, agent, receiver, method, userdata);
}

void navigation_server::agent_set_map(const rid agent, const rid map) const {
	___godot_icall_void_RID_RID(___mb.mb_agent_set_map, (const object *) this, agent, map);
}

void navigation_server::agent_set_max_neighbors(const rid agent, const int64_t count) const {
	___godot_icall_void_RID_int(___mb.mb_agent_set_max_neighbors, (const object *) this, agent, count);
}

void navigation_server::agent_set_max_speed(const rid agent, const real_t max_speed) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_max_speed, (const object *) this, agent, max_speed);
}

void navigation_server::agent_set_neighbor_dist(const rid agent, const real_t dist) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_neighbor_dist, (const object *) this, agent, dist);
}

void navigation_server::agent_set_position(const rid agent, const vector3 position) const {
	___godot_icall_void_RID_Vector3(___mb.mb_agent_set_position, (const object *) this, agent, position);
}

void navigation_server::agent_set_radius(const rid agent, const real_t radius) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_radius, (const object *) this, agent, radius);
}

void navigation_server::agent_set_target_velocity(const rid agent, const vector3 target_velocity) const {
	___godot_icall_void_RID_Vector3(___mb.mb_agent_set_target_velocity, (const object *) this, agent, target_velocity);
}

void navigation_server::agent_set_time_horizon(const rid agent, const real_t time_) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_time_horizon, (const object *) this, agent, time_);
}

void navigation_server::agent_set_velocity(const rid agent, const vector3 velocity) const {
	___godot_icall_void_RID_Vector3(___mb.mb_agent_set_velocity, (const object *) this, agent, velocity);
}

void navigation_server::free_rid(const rid rid_) const {
	___godot_icall_void_RID(___mb.mb_free_rid, (const object *) this, rid_);
}

array navigation_server::get_maps() const {
	return ___godot_icall_Array(___mb.mb_get_maps, (const object *) this);
}

rid navigation_server::map_create() const {
	return ___godot_icall_RID(___mb.mb_map_create, (const object *) this);
}

void navigation_server::map_force_update(const rid map) {
	___godot_icall_void_RID(___mb.mb_map_force_update, (const object *) this, map);
}

array navigation_server::map_get_agents(const rid map) const {
	return ___godot_icall_Array_RID(___mb.mb_map_get_agents, (const object *) this, map);
}

real_t navigation_server::map_get_cell_height(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_cell_height, (const object *) this, map);
}

real_t navigation_server::map_get_cell_size(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_cell_size, (const object *) this, map);
}

vector3 navigation_server::map_get_closest_point(const rid map, const vector3 to_point) const {
	return ___godot_icall_Vector3_RID_Vector3(___mb.mb_map_get_closest_point, (const object *) this, map, to_point);
}

vector3 navigation_server::map_get_closest_point_normal(const rid map, const vector3 to_point) const {
	return ___godot_icall_Vector3_RID_Vector3(___mb.mb_map_get_closest_point_normal, (const object *) this, map, to_point);
}

rid navigation_server::map_get_closest_point_owner(const rid map, const vector3 to_point) const {
	return ___godot_icall_RID_RID_Vector3(___mb.mb_map_get_closest_point_owner, (const object *) this, map, to_point);
}

vector3 navigation_server::map_get_closest_point_to_segment(const rid map, const vector3 start, const vector3 end, const bool use_collision) const {
	return ___godot_icall_Vector3_RID_Vector3_Vector3_bool(___mb.mb_map_get_closest_point_to_segment, (const object *) this, map, start, end, use_collision);
}

real_t navigation_server::map_get_edge_connection_margin(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_edge_connection_margin, (const object *) this, map);
}

pool_vector3_array navigation_server::map_get_path(const rid map, const vector3 origin, const vector3 destination, const bool optimize, const int64_t navigation_layers) const {
	return ___godot_icall_PoolVector3Array_RID_Vector3_Vector3_bool_int(___mb.mb_map_get_path, (const object *) this, map, origin, destination, optimize, navigation_layers);
}

array navigation_server::map_get_regions(const rid map) const {
	return ___godot_icall_Array_RID(___mb.mb_map_get_regions, (const object *) this, map);
}

vector3 navigation_server::map_get_up(const rid map) const {
	return ___godot_icall_Vector3_RID(___mb.mb_map_get_up, (const object *) this, map);
}

bool navigation_server::map_is_active(const rid map) const {
	return ___godot_icall_bool_RID(___mb.mb_map_is_active, (const object *) this, map);
}

void navigation_server::map_set_active(const rid map, const bool active) const {
	___godot_icall_void_RID_bool(___mb.mb_map_set_active, (const object *) this, map, active);
}

void navigation_server::map_set_cell_height(const rid map, const real_t cell_height) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_cell_height, (const object *) this, map, cell_height);
}

void navigation_server::map_set_cell_size(const rid map, const real_t cell_size) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_cell_size, (const object *) this, map, cell_size);
}

void navigation_server::map_set_edge_connection_margin(const rid map, const real_t margin) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_edge_connection_margin, (const object *) this, map, margin);
}

void navigation_server::map_set_up(const rid map, const vector3 up) const {
	___godot_icall_void_RID_Vector3(___mb.mb_map_set_up, (const object *) this, map, up);
}

void navigation_server::process(const real_t delta_time) {
	___godot_icall_void_float(___mb.mb_process, (const object *) this, delta_time);
}

void navigation_server::region_bake_navmesh(const ref<navigation_mesh> mesh_, const node *node_) const {
	___godot_icall_void_Object_Object(___mb.mb_region_bake_navmesh, (const object *) this, mesh_.ptr(), node_);
}

rid navigation_server::region_create() const {
	return ___godot_icall_RID(___mb.mb_region_create, (const object *) this);
}

vector3 navigation_server::region_get_connection_pathway_end(const rid region, const int64_t connection) const {
	return ___godot_icall_Vector3_RID_int(___mb.mb_region_get_connection_pathway_end, (const object *) this, region, connection);
}

vector3 navigation_server::region_get_connection_pathway_start(const rid region, const int64_t connection) const {
	return ___godot_icall_Vector3_RID_int(___mb.mb_region_get_connection_pathway_start, (const object *) this, region, connection);
}

int64_t navigation_server::region_get_connections_count(const rid region) const {
	return ___godot_icall_int_RID(___mb.mb_region_get_connections_count, (const object *) this, region);
}

real_t navigation_server::region_get_enter_cost(const rid region) const {
	return ___godot_icall_float_RID(___mb.mb_region_get_enter_cost, (const object *) this, region);
}

rid navigation_server::region_get_map(const rid region) const {
	return ___godot_icall_RID_RID(___mb.mb_region_get_map, (const object *) this, region);
}

int64_t navigation_server::region_get_navigation_layers(const rid region) const {
	return ___godot_icall_int_RID(___mb.mb_region_get_navigation_layers, (const object *) this, region);
}

real_t navigation_server::region_get_travel_cost(const rid region) const {
	return ___godot_icall_float_RID(___mb.mb_region_get_travel_cost, (const object *) this, region);
}

bool navigation_server::region_owns_point(const rid region, const vector3 point) const {
	return ___godot_icall_bool_RID_Vector3(___mb.mb_region_owns_point, (const object *) this, region, point);
}

void navigation_server::region_set_enter_cost(const rid region, const real_t enter_cost) const {
	___godot_icall_void_RID_float(___mb.mb_region_set_enter_cost, (const object *) this, region, enter_cost);
}

void navigation_server::region_set_map(const rid region, const rid map) const {
	___godot_icall_void_RID_RID(___mb.mb_region_set_map, (const object *) this, region, map);
}

void navigation_server::region_set_navigation_layers(const rid region, const int64_t navigation_layers) const {
	___godot_icall_void_RID_int(___mb.mb_region_set_navigation_layers, (const object *) this, region, navigation_layers);
}

void navigation_server::region_set_navmesh(const rid region, const ref<navigation_mesh> nav_mesh) const {
	___godot_icall_void_RID_Object(___mb.mb_region_set_navmesh, (const object *) this, region, nav_mesh.ptr());
}

void navigation_server::region_set_transform(const rid region, const transform transform_) const {
	___godot_icall_void_RID_Transform(___mb.mb_region_set_transform, (const object *) this, region, transform_);
}

void navigation_server::region_set_travel_cost(const rid region, const real_t travel_cost) const {
	___godot_icall_void_RID_float(___mb.mb_region_set_travel_cost, (const object *) this, region, travel_cost);
}

void navigation_server::set_active(const bool active) const {
	___godot_icall_void_bool(___mb.mb_set_active, (const object *) this, active);
}

}