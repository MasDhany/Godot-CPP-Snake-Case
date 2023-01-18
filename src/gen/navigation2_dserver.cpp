#include "navigation2_dserver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_polygon.hpp"
#include "object.hpp"


namespace gd {


navigation2_dserver *navigation2_dserver::_singleton = NULL;


navigation2_dserver::navigation2_dserver() {
	_owner = gd::api->godot_global_get_singleton((char *) "Navigation2DServer");
}


navigation2_dserver::___method_bindings navigation2_dserver::___mb = {};

void *navigation2_dserver::_detail_class_tag = nullptr;

void navigation2_dserver::___init_method_bindings() {
	___mb.mb__emit_map_changed = gd::api->godot_method_bind_get_method("Navigation2DServer", "_emit_map_changed");
	___mb.mb_agent_create = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_create");
	___mb.mb_agent_get_map = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_get_map");
	___mb.mb_agent_is_map_changed = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_is_map_changed");
	___mb.mb_agent_set_callback = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_callback");
	___mb.mb_agent_set_map = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_map");
	___mb.mb_agent_set_max_neighbors = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_max_neighbors");
	___mb.mb_agent_set_max_speed = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_max_speed");
	___mb.mb_agent_set_neighbor_dist = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_neighbor_dist");
	___mb.mb_agent_set_position = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_position");
	___mb.mb_agent_set_radius = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_radius");
	___mb.mb_agent_set_target_velocity = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_target_velocity");
	___mb.mb_agent_set_time_horizon = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_time_horizon");
	___mb.mb_agent_set_velocity = gd::api->godot_method_bind_get_method("Navigation2DServer", "agent_set_velocity");
	___mb.mb_free_rid = gd::api->godot_method_bind_get_method("Navigation2DServer", "free_rid");
	___mb.mb_get_maps = gd::api->godot_method_bind_get_method("Navigation2DServer", "get_maps");
	___mb.mb_map_create = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_create");
	___mb.mb_map_force_update = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_force_update");
	___mb.mb_map_get_agents = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_agents");
	___mb.mb_map_get_cell_height = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_cell_height");
	___mb.mb_map_get_cell_size = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_cell_size");
	___mb.mb_map_get_closest_point = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_closest_point");
	___mb.mb_map_get_closest_point_owner = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_closest_point_owner");
	___mb.mb_map_get_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_edge_connection_margin");
	___mb.mb_map_get_path = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_path");
	___mb.mb_map_get_regions = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_get_regions");
	___mb.mb_map_is_active = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_is_active");
	___mb.mb_map_set_active = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_set_active");
	___mb.mb_map_set_cell_height = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_set_cell_height");
	___mb.mb_map_set_cell_size = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_set_cell_size");
	___mb.mb_map_set_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation2DServer", "map_set_edge_connection_margin");
	___mb.mb_region_create = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_create");
	___mb.mb_region_get_connection_pathway_end = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_connection_pathway_end");
	___mb.mb_region_get_connection_pathway_start = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_connection_pathway_start");
	___mb.mb_region_get_connections_count = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_connections_count");
	___mb.mb_region_get_enter_cost = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_enter_cost");
	___mb.mb_region_get_map = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_map");
	___mb.mb_region_get_navigation_layers = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_navigation_layers");
	___mb.mb_region_get_travel_cost = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_get_travel_cost");
	___mb.mb_region_owns_point = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_owns_point");
	___mb.mb_region_set_enter_cost = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_enter_cost");
	___mb.mb_region_set_map = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_map");
	___mb.mb_region_set_navigation_layers = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_navigation_layers");
	___mb.mb_region_set_navpoly = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_navpoly");
	___mb.mb_region_set_transform = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_transform");
	___mb.mb_region_set_travel_cost = gd::api->godot_method_bind_get_method("Navigation2DServer", "region_set_travel_cost");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Navigation2DServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void navigation2_dserver::_emit_map_changed(const rid arg0) {
	___godot_icall_void_RID(___mb.mb__emit_map_changed, (const object *) this, arg0);
}

rid navigation2_dserver::agent_create() const {
	return ___godot_icall_RID(___mb.mb_agent_create, (const object *) this);
}

rid navigation2_dserver::agent_get_map(const rid agent) const {
	return ___godot_icall_RID_RID(___mb.mb_agent_get_map, (const object *) this, agent);
}

bool navigation2_dserver::agent_is_map_changed(const rid agent) const {
	return ___godot_icall_bool_RID(___mb.mb_agent_is_map_changed, (const object *) this, agent);
}

void navigation2_dserver::agent_set_callback(const rid agent, const object *receiver, const string method, const variant userdata) const {
	___godot_icall_void_RID_Object_String_Variant(___mb.mb_agent_set_callback, (const object *) this, agent, receiver, method, userdata);
}

void navigation2_dserver::agent_set_map(const rid agent, const rid map) const {
	___godot_icall_void_RID_RID(___mb.mb_agent_set_map, (const object *) this, agent, map);
}

void navigation2_dserver::agent_set_max_neighbors(const rid agent, const int64_t count) const {
	___godot_icall_void_RID_int(___mb.mb_agent_set_max_neighbors, (const object *) this, agent, count);
}

void navigation2_dserver::agent_set_max_speed(const rid agent, const real_t max_speed) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_max_speed, (const object *) this, agent, max_speed);
}

void navigation2_dserver::agent_set_neighbor_dist(const rid agent, const real_t dist) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_neighbor_dist, (const object *) this, agent, dist);
}

void navigation2_dserver::agent_set_position(const rid agent, const vector2 position) const {
	___godot_icall_void_RID_Vector2(___mb.mb_agent_set_position, (const object *) this, agent, position);
}

void navigation2_dserver::agent_set_radius(const rid agent, const real_t radius) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_radius, (const object *) this, agent, radius);
}

void navigation2_dserver::agent_set_target_velocity(const rid agent, const vector2 target_velocity) const {
	___godot_icall_void_RID_Vector2(___mb.mb_agent_set_target_velocity, (const object *) this, agent, target_velocity);
}

void navigation2_dserver::agent_set_time_horizon(const rid agent, const real_t time_) const {
	___godot_icall_void_RID_float(___mb.mb_agent_set_time_horizon, (const object *) this, agent, time_);
}

void navigation2_dserver::agent_set_velocity(const rid agent, const vector2 velocity) const {
	___godot_icall_void_RID_Vector2(___mb.mb_agent_set_velocity, (const object *) this, agent, velocity);
}

void navigation2_dserver::free_rid(const rid rid_) const {
	___godot_icall_void_RID(___mb.mb_free_rid, (const object *) this, rid_);
}

array navigation2_dserver::get_maps() const {
	return ___godot_icall_Array(___mb.mb_get_maps, (const object *) this);
}

rid navigation2_dserver::map_create() const {
	return ___godot_icall_RID(___mb.mb_map_create, (const object *) this);
}

void navigation2_dserver::map_force_update(const rid map) {
	___godot_icall_void_RID(___mb.mb_map_force_update, (const object *) this, map);
}

array navigation2_dserver::map_get_agents(const rid map) const {
	return ___godot_icall_Array_RID(___mb.mb_map_get_agents, (const object *) this, map);
}

real_t navigation2_dserver::map_get_cell_height(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_cell_height, (const object *) this, map);
}

real_t navigation2_dserver::map_get_cell_size(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_cell_size, (const object *) this, map);
}

vector2 navigation2_dserver::map_get_closest_point(const rid map, const vector2 to_point) const {
	return ___godot_icall_Vector2_RID_Vector2(___mb.mb_map_get_closest_point, (const object *) this, map, to_point);
}

rid navigation2_dserver::map_get_closest_point_owner(const rid map, const vector2 to_point) const {
	return ___godot_icall_RID_RID_Vector2(___mb.mb_map_get_closest_point_owner, (const object *) this, map, to_point);
}

real_t navigation2_dserver::map_get_edge_connection_margin(const rid map) const {
	return ___godot_icall_float_RID(___mb.mb_map_get_edge_connection_margin, (const object *) this, map);
}

pool_vector2_array navigation2_dserver::map_get_path(const rid map, const vector2 origin, const vector2 destination, const bool optimize, const int64_t navigation_layers) const {
	return ___godot_icall_PoolVector2Array_RID_Vector2_Vector2_bool_int(___mb.mb_map_get_path, (const object *) this, map, origin, destination, optimize, navigation_layers);
}

array navigation2_dserver::map_get_regions(const rid map) const {
	return ___godot_icall_Array_RID(___mb.mb_map_get_regions, (const object *) this, map);
}

bool navigation2_dserver::map_is_active(const rid map) const {
	return ___godot_icall_bool_RID(___mb.mb_map_is_active, (const object *) this, map);
}

void navigation2_dserver::map_set_active(const rid map, const bool active) const {
	___godot_icall_void_RID_bool(___mb.mb_map_set_active, (const object *) this, map, active);
}

void navigation2_dserver::map_set_cell_height(const rid map, const real_t cell_height) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_cell_height, (const object *) this, map, cell_height);
}

void navigation2_dserver::map_set_cell_size(const rid map, const real_t cell_size) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_cell_size, (const object *) this, map, cell_size);
}

void navigation2_dserver::map_set_edge_connection_margin(const rid map, const real_t margin) const {
	___godot_icall_void_RID_float(___mb.mb_map_set_edge_connection_margin, (const object *) this, map, margin);
}

rid navigation2_dserver::region_create() const {
	return ___godot_icall_RID(___mb.mb_region_create, (const object *) this);
}

vector2 navigation2_dserver::region_get_connection_pathway_end(const rid region, const int64_t connection) const {
	return ___godot_icall_Vector2_RID_int(___mb.mb_region_get_connection_pathway_end, (const object *) this, region, connection);
}

vector2 navigation2_dserver::region_get_connection_pathway_start(const rid region, const int64_t connection) const {
	return ___godot_icall_Vector2_RID_int(___mb.mb_region_get_connection_pathway_start, (const object *) this, region, connection);
}

int64_t navigation2_dserver::region_get_connections_count(const rid region) const {
	return ___godot_icall_int_RID(___mb.mb_region_get_connections_count, (const object *) this, region);
}

real_t navigation2_dserver::region_get_enter_cost(const rid region) const {
	return ___godot_icall_float_RID(___mb.mb_region_get_enter_cost, (const object *) this, region);
}

rid navigation2_dserver::region_get_map(const rid region) const {
	return ___godot_icall_RID_RID(___mb.mb_region_get_map, (const object *) this, region);
}

int64_t navigation2_dserver::region_get_navigation_layers(const rid region) const {
	return ___godot_icall_int_RID(___mb.mb_region_get_navigation_layers, (const object *) this, region);
}

real_t navigation2_dserver::region_get_travel_cost(const rid region) const {
	return ___godot_icall_float_RID(___mb.mb_region_get_travel_cost, (const object *) this, region);
}

bool navigation2_dserver::region_owns_point(const rid region, const vector2 point) const {
	return ___godot_icall_bool_RID_Vector2(___mb.mb_region_owns_point, (const object *) this, region, point);
}

void navigation2_dserver::region_set_enter_cost(const rid region, const real_t enter_cost) const {
	___godot_icall_void_RID_float(___mb.mb_region_set_enter_cost, (const object *) this, region, enter_cost);
}

void navigation2_dserver::region_set_map(const rid region, const rid map) const {
	___godot_icall_void_RID_RID(___mb.mb_region_set_map, (const object *) this, region, map);
}

void navigation2_dserver::region_set_navigation_layers(const rid region, const int64_t navigation_layers) const {
	___godot_icall_void_RID_int(___mb.mb_region_set_navigation_layers, (const object *) this, region, navigation_layers);
}

void navigation2_dserver::region_set_navpoly(const rid region, const ref<navigation_polygon> nav_poly) const {
	___godot_icall_void_RID_Object(___mb.mb_region_set_navpoly, (const object *) this, region, nav_poly.ptr());
}

void navigation2_dserver::region_set_transform(const rid region, const transform2d transform_) const {
	___godot_icall_void_RID_Transform2D(___mb.mb_region_set_transform, (const object *) this, region, transform_);
}

void navigation2_dserver::region_set_travel_cost(const rid region, const real_t travel_cost) const {
	___godot_icall_void_RID_float(___mb.mb_region_set_travel_cost, (const object *) this, region, travel_cost);
}

}