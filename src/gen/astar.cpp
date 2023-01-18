#include "astar.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


astar::___method_bindings astar::___mb = {};

void *astar::_detail_class_tag = nullptr;

void astar::___init_method_bindings() {
	___mb.mb__compute_cost = gd::api->godot_method_bind_get_method("AStar", "_compute_cost");
	___mb.mb__estimate_cost = gd::api->godot_method_bind_get_method("AStar", "_estimate_cost");
	___mb.mb_add_point = gd::api->godot_method_bind_get_method("AStar", "add_point");
	___mb.mb_are_points_connected = gd::api->godot_method_bind_get_method("AStar", "are_points_connected");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("AStar", "clear");
	___mb.mb_connect_points = gd::api->godot_method_bind_get_method("AStar", "connect_points");
	___mb.mb_disconnect_points = gd::api->godot_method_bind_get_method("AStar", "disconnect_points");
	___mb.mb_get_available_point_id = gd::api->godot_method_bind_get_method("AStar", "get_available_point_id");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("AStar", "get_closest_point");
	___mb.mb_get_closest_position_in_segment = gd::api->godot_method_bind_get_method("AStar", "get_closest_position_in_segment");
	___mb.mb_get_id_path = gd::api->godot_method_bind_get_method("AStar", "get_id_path");
	___mb.mb_get_point_capacity = gd::api->godot_method_bind_get_method("AStar", "get_point_capacity");
	___mb.mb_get_point_connections = gd::api->godot_method_bind_get_method("AStar", "get_point_connections");
	___mb.mb_get_point_count = gd::api->godot_method_bind_get_method("AStar", "get_point_count");
	___mb.mb_get_point_path = gd::api->godot_method_bind_get_method("AStar", "get_point_path");
	___mb.mb_get_point_position = gd::api->godot_method_bind_get_method("AStar", "get_point_position");
	___mb.mb_get_point_weight_scale = gd::api->godot_method_bind_get_method("AStar", "get_point_weight_scale");
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("AStar", "get_points");
	___mb.mb_has_point = gd::api->godot_method_bind_get_method("AStar", "has_point");
	___mb.mb_is_point_disabled = gd::api->godot_method_bind_get_method("AStar", "is_point_disabled");
	___mb.mb_remove_point = gd::api->godot_method_bind_get_method("AStar", "remove_point");
	___mb.mb_reserve_space = gd::api->godot_method_bind_get_method("AStar", "reserve_space");
	___mb.mb_set_point_disabled = gd::api->godot_method_bind_get_method("AStar", "set_point_disabled");
	___mb.mb_set_point_position = gd::api->godot_method_bind_get_method("AStar", "set_point_position");
	___mb.mb_set_point_weight_scale = gd::api->godot_method_bind_get_method("AStar", "set_point_weight_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AStar");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

astar *astar::_new()
{
	return (astar *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AStar")());
}
real_t astar::_compute_cost(const int64_t from_id, const int64_t to_id) {
	return ___godot_icall_float_int_int(___mb.mb__compute_cost, (const object *) this, from_id, to_id);
}

real_t astar::_estimate_cost(const int64_t from_id, const int64_t to_id) {
	return ___godot_icall_float_int_int(___mb.mb__estimate_cost, (const object *) this, from_id, to_id);
}

void astar::add_point(const int64_t id, const vector3 position, const real_t weight_scale) {
	___godot_icall_void_int_Vector3_float(___mb.mb_add_point, (const object *) this, id, position, weight_scale);
}

bool astar::are_points_connected(const int64_t id, const int64_t to_id, const bool bidirectional) const {
	return ___godot_icall_bool_int_int_bool(___mb.mb_are_points_connected, (const object *) this, id, to_id, bidirectional);
}

void astar::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void astar::connect_points(const int64_t id, const int64_t to_id, const bool bidirectional) {
	___godot_icall_void_int_int_bool(___mb.mb_connect_points, (const object *) this, id, to_id, bidirectional);
}

void astar::disconnect_points(const int64_t id, const int64_t to_id, const bool bidirectional) {
	___godot_icall_void_int_int_bool(___mb.mb_disconnect_points, (const object *) this, id, to_id, bidirectional);
}

int64_t astar::get_available_point_id() const {
	return ___godot_icall_int(___mb.mb_get_available_point_id, (const object *) this);
}

int64_t astar::get_closest_point(const vector3 to_position, const bool include_disabled) const {
	return ___godot_icall_int_Vector3_bool(___mb.mb_get_closest_point, (const object *) this, to_position, include_disabled);
}

vector3 astar::get_closest_position_in_segment(const vector3 to_position) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_get_closest_position_in_segment, (const object *) this, to_position);
}

pool_int_array astar::get_id_path(const int64_t from_id, const int64_t to_id) {
	return ___godot_icall_PoolIntArray_int_int(___mb.mb_get_id_path, (const object *) this, from_id, to_id);
}

int64_t astar::get_point_capacity() const {
	return ___godot_icall_int(___mb.mb_get_point_capacity, (const object *) this);
}

pool_int_array astar::get_point_connections(const int64_t id) {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_point_connections, (const object *) this, id);
}

int64_t astar::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const object *) this);
}

pool_vector3_array astar::get_point_path(const int64_t from_id, const int64_t to_id) {
	return ___godot_icall_PoolVector3Array_int_int(___mb.mb_get_point_path, (const object *) this, from_id, to_id);
}

vector3 astar::get_point_position(const int64_t id) const {
	return ___godot_icall_Vector3_int(___mb.mb_get_point_position, (const object *) this, id);
}

real_t astar::get_point_weight_scale(const int64_t id) const {
	return ___godot_icall_float_int(___mb.mb_get_point_weight_scale, (const object *) this, id);
}

array astar::get_points() {
	return ___godot_icall_Array(___mb.mb_get_points, (const object *) this);
}

bool astar::has_point(const int64_t id) const {
	return ___godot_icall_bool_int(___mb.mb_has_point, (const object *) this, id);
}

bool astar::is_point_disabled(const int64_t id) const {
	return ___godot_icall_bool_int(___mb.mb_is_point_disabled, (const object *) this, id);
}

void astar::remove_point(const int64_t id) {
	___godot_icall_void_int(___mb.mb_remove_point, (const object *) this, id);
}

void astar::reserve_space(const int64_t num_nodes) {
	___godot_icall_void_int(___mb.mb_reserve_space, (const object *) this, num_nodes);
}

void astar::set_point_disabled(const int64_t id, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_point_disabled, (const object *) this, id, disabled);
}

void astar::set_point_position(const int64_t id, const vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point_position, (const object *) this, id, position);
}

void astar::set_point_weight_scale(const int64_t id, const real_t weight_scale) {
	___godot_icall_void_int_float(___mb.mb_set_point_weight_scale, (const object *) this, id, weight_scale);
}

}