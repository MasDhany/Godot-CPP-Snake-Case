#include "navigation_agent2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


navigation_agent2d::___method_bindings navigation_agent2d::___mb = {};

void *navigation_agent2d::_detail_class_tag = nullptr;

void navigation_agent2d::___init_method_bindings() {
	___mb.mb__avoidance_done = gd::api->godot_method_bind_get_method("NavigationAgent2D", "_avoidance_done");
	___mb.mb_distance_to_target = gd::api->godot_method_bind_get_method("NavigationAgent2D", "distance_to_target");
	___mb.mb_get_avoidance_enabled = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_avoidance_enabled");
	___mb.mb_get_final_location = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_final_location");
	___mb.mb_get_max_neighbors = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_max_neighbors");
	___mb.mb_get_max_speed = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_max_speed");
	___mb.mb_get_nav_path = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_nav_path");
	___mb.mb_get_nav_path_index = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_nav_path_index");
	___mb.mb_get_navigation = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_navigation");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_navigation_layers");
	___mb.mb_get_navigation_map = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_navigation_map");
	___mb.mb_get_neighbor_dist = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_neighbor_dist");
	___mb.mb_get_next_location = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_next_location");
	___mb.mb_get_path_desired_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_path_desired_distance");
	___mb.mb_get_path_max_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_path_max_distance");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_radius");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_rid");
	___mb.mb_get_target_desired_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_target_desired_distance");
	___mb.mb_get_target_location = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_target_location");
	___mb.mb_get_time_horizon = gd::api->godot_method_bind_get_method("NavigationAgent2D", "get_time_horizon");
	___mb.mb_is_navigation_finished = gd::api->godot_method_bind_get_method("NavigationAgent2D", "is_navigation_finished");
	___mb.mb_is_target_reachable = gd::api->godot_method_bind_get_method("NavigationAgent2D", "is_target_reachable");
	___mb.mb_is_target_reached = gd::api->godot_method_bind_get_method("NavigationAgent2D", "is_target_reached");
	___mb.mb_set_avoidance_enabled = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_avoidance_enabled");
	___mb.mb_set_max_neighbors = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_max_neighbors");
	___mb.mb_set_max_speed = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_max_speed");
	___mb.mb_set_navigation = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_navigation");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_navigation_layers");
	___mb.mb_set_navigation_map = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_navigation_map");
	___mb.mb_set_neighbor_dist = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_neighbor_dist");
	___mb.mb_set_path_desired_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_path_desired_distance");
	___mb.mb_set_path_max_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_path_max_distance");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_radius");
	___mb.mb_set_target_desired_distance = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_target_desired_distance");
	___mb.mb_set_target_location = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_target_location");
	___mb.mb_set_time_horizon = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_time_horizon");
	___mb.mb_set_velocity = gd::api->godot_method_bind_get_method("NavigationAgent2D", "set_velocity");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationAgent2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_agent2d *navigation_agent2d::_new()
{
	return (navigation_agent2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationAgent2D")());
}
void navigation_agent2d::_avoidance_done(const vector3 new_velocity) {
	___godot_icall_void_Vector3(___mb.mb__avoidance_done, (const object *) this, new_velocity);
}

real_t navigation_agent2d::distance_to_target() const {
	return ___godot_icall_float(___mb.mb_distance_to_target, (const object *) this);
}

bool navigation_agent2d::get_avoidance_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_avoidance_enabled, (const object *) this);
}

vector2 navigation_agent2d::get_final_location() {
	return ___godot_icall_Vector2(___mb.mb_get_final_location, (const object *) this);
}

int64_t navigation_agent2d::get_max_neighbors() const {
	return ___godot_icall_int(___mb.mb_get_max_neighbors, (const object *) this);
}

real_t navigation_agent2d::get_max_speed() const {
	return ___godot_icall_float(___mb.mb_get_max_speed, (const object *) this);
}

pool_vector2_array navigation_agent2d::get_nav_path() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_nav_path, (const object *) this);
}

int64_t navigation_agent2d::get_nav_path_index() const {
	return ___godot_icall_int(___mb.mb_get_nav_path_index, (const object *) this);
}

node *navigation_agent2d::get_navigation() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_navigation, (const object *) this);
}

int64_t navigation_agent2d::get_navigation_layers() const {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

rid navigation_agent2d::get_navigation_map() const {
	return ___godot_icall_RID(___mb.mb_get_navigation_map, (const object *) this);
}

real_t navigation_agent2d::get_neighbor_dist() const {
	return ___godot_icall_float(___mb.mb_get_neighbor_dist, (const object *) this);
}

vector2 navigation_agent2d::get_next_location() {
	return ___godot_icall_Vector2(___mb.mb_get_next_location, (const object *) this);
}

real_t navigation_agent2d::get_path_desired_distance() const {
	return ___godot_icall_float(___mb.mb_get_path_desired_distance, (const object *) this);
}

real_t navigation_agent2d::get_path_max_distance() {
	return ___godot_icall_float(___mb.mb_get_path_max_distance, (const object *) this);
}

real_t navigation_agent2d::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

rid navigation_agent2d::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

real_t navigation_agent2d::get_target_desired_distance() const {
	return ___godot_icall_float(___mb.mb_get_target_desired_distance, (const object *) this);
}

vector2 navigation_agent2d::get_target_location() const {
	return ___godot_icall_Vector2(___mb.mb_get_target_location, (const object *) this);
}

real_t navigation_agent2d::get_time_horizon() const {
	return ___godot_icall_float(___mb.mb_get_time_horizon, (const object *) this);
}

bool navigation_agent2d::is_navigation_finished() {
	return ___godot_icall_bool(___mb.mb_is_navigation_finished, (const object *) this);
}

bool navigation_agent2d::is_target_reachable() {
	return ___godot_icall_bool(___mb.mb_is_target_reachable, (const object *) this);
}

bool navigation_agent2d::is_target_reached() const {
	return ___godot_icall_bool(___mb.mb_is_target_reached, (const object *) this);
}

void navigation_agent2d::set_avoidance_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_avoidance_enabled, (const object *) this, enabled);
}

void navigation_agent2d::set_max_neighbors(const int64_t max_neighbors) {
	___godot_icall_void_int(___mb.mb_set_max_neighbors, (const object *) this, max_neighbors);
}

void navigation_agent2d::set_max_speed(const real_t max_speed) {
	___godot_icall_void_float(___mb.mb_set_max_speed, (const object *) this, max_speed);
}

void navigation_agent2d::set_navigation(const node *navigation_) {
	___godot_icall_void_Object(___mb.mb_set_navigation, (const object *) this, navigation_);
}

void navigation_agent2d::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void navigation_agent2d::set_navigation_map(const rid navigation_map) {
	___godot_icall_void_RID(___mb.mb_set_navigation_map, (const object *) this, navigation_map);
}

void navigation_agent2d::set_neighbor_dist(const real_t neighbor_dist) {
	___godot_icall_void_float(___mb.mb_set_neighbor_dist, (const object *) this, neighbor_dist);
}

void navigation_agent2d::set_path_desired_distance(const real_t desired_distance) {
	___godot_icall_void_float(___mb.mb_set_path_desired_distance, (const object *) this, desired_distance);
}

void navigation_agent2d::set_path_max_distance(const real_t max_speed) {
	___godot_icall_void_float(___mb.mb_set_path_max_distance, (const object *) this, max_speed);
}

void navigation_agent2d::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

void navigation_agent2d::set_target_desired_distance(const real_t desired_distance) {
	___godot_icall_void_float(___mb.mb_set_target_desired_distance, (const object *) this, desired_distance);
}

void navigation_agent2d::set_target_location(const vector2 location) {
	___godot_icall_void_Vector2(___mb.mb_set_target_location, (const object *) this, location);
}

void navigation_agent2d::set_time_horizon(const real_t time_horizon) {
	___godot_icall_void_float(___mb.mb_set_time_horizon, (const object *) this, time_horizon);
}

void navigation_agent2d::set_velocity(const vector2 velocity) {
	___godot_icall_void_Vector2(___mb.mb_set_velocity, (const object *) this, velocity);
}

}