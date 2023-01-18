#include "navigation_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"


namespace gd {


navigation_mesh::___method_bindings navigation_mesh::___mb = {};

void *navigation_mesh::_detail_class_tag = nullptr;

void navigation_mesh::___init_method_bindings() {
	___mb.mb__get_polygons = gd::api->godot_method_bind_get_method("NavigationMesh", "_get_polygons");
	___mb.mb__set_polygons = gd::api->godot_method_bind_get_method("NavigationMesh", "_set_polygons");
	___mb.mb_add_polygon = gd::api->godot_method_bind_get_method("NavigationMesh", "add_polygon");
	___mb.mb_clear_polygons = gd::api->godot_method_bind_get_method("NavigationMesh", "clear_polygons");
	___mb.mb_create_from_mesh = gd::api->godot_method_bind_get_method("NavigationMesh", "create_from_mesh");
	___mb.mb_get_agent_height = gd::api->godot_method_bind_get_method("NavigationMesh", "get_agent_height");
	___mb.mb_get_agent_max_climb = gd::api->godot_method_bind_get_method("NavigationMesh", "get_agent_max_climb");
	___mb.mb_get_agent_max_slope = gd::api->godot_method_bind_get_method("NavigationMesh", "get_agent_max_slope");
	___mb.mb_get_agent_radius = gd::api->godot_method_bind_get_method("NavigationMesh", "get_agent_radius");
	___mb.mb_get_cell_height = gd::api->godot_method_bind_get_method("NavigationMesh", "get_cell_height");
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("NavigationMesh", "get_cell_size");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("NavigationMesh", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("NavigationMesh", "get_collision_mask_bit");
	___mb.mb_get_detail_sample_distance = gd::api->godot_method_bind_get_method("NavigationMesh", "get_detail_sample_distance");
	___mb.mb_get_detail_sample_max_error = gd::api->godot_method_bind_get_method("NavigationMesh", "get_detail_sample_max_error");
	___mb.mb_get_edge_max_error = gd::api->godot_method_bind_get_method("NavigationMesh", "get_edge_max_error");
	___mb.mb_get_edge_max_length = gd::api->godot_method_bind_get_method("NavigationMesh", "get_edge_max_length");
	___mb.mb_get_filter_baking_aabb = gd::api->godot_method_bind_get_method("NavigationMesh", "get_filter_baking_aabb");
	___mb.mb_get_filter_baking_aabb_offset = gd::api->godot_method_bind_get_method("NavigationMesh", "get_filter_baking_aabb_offset");
	___mb.mb_get_filter_ledge_spans = gd::api->godot_method_bind_get_method("NavigationMesh", "get_filter_ledge_spans");
	___mb.mb_get_filter_low_hanging_obstacles = gd::api->godot_method_bind_get_method("NavigationMesh", "get_filter_low_hanging_obstacles");
	___mb.mb_get_filter_walkable_low_height_spans = gd::api->godot_method_bind_get_method("NavigationMesh", "get_filter_walkable_low_height_spans");
	___mb.mb_get_parsed_geometry_type = gd::api->godot_method_bind_get_method("NavigationMesh", "get_parsed_geometry_type");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("NavigationMesh", "get_polygon");
	___mb.mb_get_polygon_count = gd::api->godot_method_bind_get_method("NavigationMesh", "get_polygon_count");
	___mb.mb_get_region_merge_size = gd::api->godot_method_bind_get_method("NavigationMesh", "get_region_merge_size");
	___mb.mb_get_region_min_size = gd::api->godot_method_bind_get_method("NavigationMesh", "get_region_min_size");
	___mb.mb_get_sample_partition_type = gd::api->godot_method_bind_get_method("NavigationMesh", "get_sample_partition_type");
	___mb.mb_get_source_geometry_mode = gd::api->godot_method_bind_get_method("NavigationMesh", "get_source_geometry_mode");
	___mb.mb_get_source_group_name = gd::api->godot_method_bind_get_method("NavigationMesh", "get_source_group_name");
	___mb.mb_get_vertices = gd::api->godot_method_bind_get_method("NavigationMesh", "get_vertices");
	___mb.mb_get_verts_per_poly = gd::api->godot_method_bind_get_method("NavigationMesh", "get_verts_per_poly");
	___mb.mb_set_agent_height = gd::api->godot_method_bind_get_method("NavigationMesh", "set_agent_height");
	___mb.mb_set_agent_max_climb = gd::api->godot_method_bind_get_method("NavigationMesh", "set_agent_max_climb");
	___mb.mb_set_agent_max_slope = gd::api->godot_method_bind_get_method("NavigationMesh", "set_agent_max_slope");
	___mb.mb_set_agent_radius = gd::api->godot_method_bind_get_method("NavigationMesh", "set_agent_radius");
	___mb.mb_set_cell_height = gd::api->godot_method_bind_get_method("NavigationMesh", "set_cell_height");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("NavigationMesh", "set_cell_size");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("NavigationMesh", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("NavigationMesh", "set_collision_mask_bit");
	___mb.mb_set_detail_sample_distance = gd::api->godot_method_bind_get_method("NavigationMesh", "set_detail_sample_distance");
	___mb.mb_set_detail_sample_max_error = gd::api->godot_method_bind_get_method("NavigationMesh", "set_detail_sample_max_error");
	___mb.mb_set_edge_max_error = gd::api->godot_method_bind_get_method("NavigationMesh", "set_edge_max_error");
	___mb.mb_set_edge_max_length = gd::api->godot_method_bind_get_method("NavigationMesh", "set_edge_max_length");
	___mb.mb_set_filter_baking_aabb = gd::api->godot_method_bind_get_method("NavigationMesh", "set_filter_baking_aabb");
	___mb.mb_set_filter_baking_aabb_offset = gd::api->godot_method_bind_get_method("NavigationMesh", "set_filter_baking_aabb_offset");
	___mb.mb_set_filter_ledge_spans = gd::api->godot_method_bind_get_method("NavigationMesh", "set_filter_ledge_spans");
	___mb.mb_set_filter_low_hanging_obstacles = gd::api->godot_method_bind_get_method("NavigationMesh", "set_filter_low_hanging_obstacles");
	___mb.mb_set_filter_walkable_low_height_spans = gd::api->godot_method_bind_get_method("NavigationMesh", "set_filter_walkable_low_height_spans");
	___mb.mb_set_parsed_geometry_type = gd::api->godot_method_bind_get_method("NavigationMesh", "set_parsed_geometry_type");
	___mb.mb_set_region_merge_size = gd::api->godot_method_bind_get_method("NavigationMesh", "set_region_merge_size");
	___mb.mb_set_region_min_size = gd::api->godot_method_bind_get_method("NavigationMesh", "set_region_min_size");
	___mb.mb_set_sample_partition_type = gd::api->godot_method_bind_get_method("NavigationMesh", "set_sample_partition_type");
	___mb.mb_set_source_geometry_mode = gd::api->godot_method_bind_get_method("NavigationMesh", "set_source_geometry_mode");
	___mb.mb_set_source_group_name = gd::api->godot_method_bind_get_method("NavigationMesh", "set_source_group_name");
	___mb.mb_set_vertices = gd::api->godot_method_bind_get_method("NavigationMesh", "set_vertices");
	___mb.mb_set_verts_per_poly = gd::api->godot_method_bind_get_method("NavigationMesh", "set_verts_per_poly");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_mesh *navigation_mesh::_new()
{
	return (navigation_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationMesh")());
}
array navigation_mesh::_get_polygons() const {
	return ___godot_icall_Array(___mb.mb__get_polygons, (const object *) this);
}

void navigation_mesh::_set_polygons(const array polygons) {
	___godot_icall_void_Array(___mb.mb__set_polygons, (const object *) this, polygons);
}

void navigation_mesh::add_polygon(const pool_int_array polygon) {
	___godot_icall_void_PoolIntArray(___mb.mb_add_polygon, (const object *) this, polygon);
}

void navigation_mesh::clear_polygons() {
	___godot_icall_void(___mb.mb_clear_polygons, (const object *) this);
}

void navigation_mesh::create_from_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_create_from_mesh, (const object *) this, mesh_.ptr());
}

real_t navigation_mesh::get_agent_height() const {
	return ___godot_icall_float(___mb.mb_get_agent_height, (const object *) this);
}

real_t navigation_mesh::get_agent_max_climb() const {
	return ___godot_icall_float(___mb.mb_get_agent_max_climb, (const object *) this);
}

real_t navigation_mesh::get_agent_max_slope() const {
	return ___godot_icall_float(___mb.mb_get_agent_max_slope, (const object *) this);
}

real_t navigation_mesh::get_agent_radius() {
	return ___godot_icall_float(___mb.mb_get_agent_radius, (const object *) this);
}

real_t navigation_mesh::get_cell_height() const {
	return ___godot_icall_float(___mb.mb_get_cell_height, (const object *) this);
}

real_t navigation_mesh::get_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_cell_size, (const object *) this);
}

int64_t navigation_mesh::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool navigation_mesh::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

real_t navigation_mesh::get_detail_sample_distance() const {
	return ___godot_icall_float(___mb.mb_get_detail_sample_distance, (const object *) this);
}

real_t navigation_mesh::get_detail_sample_max_error() const {
	return ___godot_icall_float(___mb.mb_get_detail_sample_max_error, (const object *) this);
}

real_t navigation_mesh::get_edge_max_error() const {
	return ___godot_icall_float(___mb.mb_get_edge_max_error, (const object *) this);
}

real_t navigation_mesh::get_edge_max_length() const {
	return ___godot_icall_float(___mb.mb_get_edge_max_length, (const object *) this);
}

aabb navigation_mesh::get_filter_baking_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_filter_baking_aabb, (const object *) this);
}

vector3 navigation_mesh::get_filter_baking_aabb_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_filter_baking_aabb_offset, (const object *) this);
}

bool navigation_mesh::get_filter_ledge_spans() const {
	return ___godot_icall_bool(___mb.mb_get_filter_ledge_spans, (const object *) this);
}

bool navigation_mesh::get_filter_low_hanging_obstacles() const {
	return ___godot_icall_bool(___mb.mb_get_filter_low_hanging_obstacles, (const object *) this);
}

bool navigation_mesh::get_filter_walkable_low_height_spans() const {
	return ___godot_icall_bool(___mb.mb_get_filter_walkable_low_height_spans, (const object *) this);
}

navigation_mesh::ParsedGeometryType navigation_mesh::get_parsed_geometry_type() const {
	return (navigation_mesh::ParsedGeometryType) ___godot_icall_int(___mb.mb_get_parsed_geometry_type, (const object *) this);
}

pool_int_array navigation_mesh::get_polygon(const int64_t idx) {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_polygon, (const object *) this, idx);
}

int64_t navigation_mesh::get_polygon_count() const {
	return ___godot_icall_int(___mb.mb_get_polygon_count, (const object *) this);
}

real_t navigation_mesh::get_region_merge_size() const {
	return ___godot_icall_float(___mb.mb_get_region_merge_size, (const object *) this);
}

real_t navigation_mesh::get_region_min_size() const {
	return ___godot_icall_float(___mb.mb_get_region_min_size, (const object *) this);
}

navigation_mesh::SamplePartitionType navigation_mesh::get_sample_partition_type() const {
	return (navigation_mesh::SamplePartitionType) ___godot_icall_int(___mb.mb_get_sample_partition_type, (const object *) this);
}

navigation_mesh::SourceGeometryMode navigation_mesh::get_source_geometry_mode() const {
	return (navigation_mesh::SourceGeometryMode) ___godot_icall_int(___mb.mb_get_source_geometry_mode, (const object *) this);
}

string navigation_mesh::get_source_group_name() const {
	return ___godot_icall_String(___mb.mb_get_source_group_name, (const object *) this);
}

pool_vector3_array navigation_mesh::get_vertices() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_vertices, (const object *) this);
}

real_t navigation_mesh::get_verts_per_poly() const {
	return ___godot_icall_float(___mb.mb_get_verts_per_poly, (const object *) this);
}

void navigation_mesh::set_agent_height(const real_t agent_height) {
	___godot_icall_void_float(___mb.mb_set_agent_height, (const object *) this, agent_height);
}

void navigation_mesh::set_agent_max_climb(const real_t agent_max_climb) {
	___godot_icall_void_float(___mb.mb_set_agent_max_climb, (const object *) this, agent_max_climb);
}

void navigation_mesh::set_agent_max_slope(const real_t agent_max_slope) {
	___godot_icall_void_float(___mb.mb_set_agent_max_slope, (const object *) this, agent_max_slope);
}

void navigation_mesh::set_agent_radius(const real_t agent_radius) {
	___godot_icall_void_float(___mb.mb_set_agent_radius, (const object *) this, agent_radius);
}

void navigation_mesh::set_cell_height(const real_t cell_height) {
	___godot_icall_void_float(___mb.mb_set_cell_height, (const object *) this, cell_height);
}

void navigation_mesh::set_cell_size(const real_t cell_size) {
	___godot_icall_void_float(___mb.mb_set_cell_size, (const object *) this, cell_size);
}

void navigation_mesh::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void navigation_mesh::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void navigation_mesh::set_detail_sample_distance(const real_t detail_sample_dist) {
	___godot_icall_void_float(___mb.mb_set_detail_sample_distance, (const object *) this, detail_sample_dist);
}

void navigation_mesh::set_detail_sample_max_error(const real_t detail_sample_max_error) {
	___godot_icall_void_float(___mb.mb_set_detail_sample_max_error, (const object *) this, detail_sample_max_error);
}

void navigation_mesh::set_edge_max_error(const real_t edge_max_error) {
	___godot_icall_void_float(___mb.mb_set_edge_max_error, (const object *) this, edge_max_error);
}

void navigation_mesh::set_edge_max_length(const real_t edge_max_length) {
	___godot_icall_void_float(___mb.mb_set_edge_max_length, (const object *) this, edge_max_length);
}

void navigation_mesh::set_filter_baking_aabb(const aabb baking_aabb) {
	___godot_icall_void_AABB(___mb.mb_set_filter_baking_aabb, (const object *) this, baking_aabb);
}

void navigation_mesh::set_filter_baking_aabb_offset(const vector3 baking_aabb_offset) {
	___godot_icall_void_Vector3(___mb.mb_set_filter_baking_aabb_offset, (const object *) this, baking_aabb_offset);
}

void navigation_mesh::set_filter_ledge_spans(const bool filter_ledge_spans) {
	___godot_icall_void_bool(___mb.mb_set_filter_ledge_spans, (const object *) this, filter_ledge_spans);
}

void navigation_mesh::set_filter_low_hanging_obstacles(const bool filter_low_hanging_obstacles) {
	___godot_icall_void_bool(___mb.mb_set_filter_low_hanging_obstacles, (const object *) this, filter_low_hanging_obstacles);
}

void navigation_mesh::set_filter_walkable_low_height_spans(const bool filter_walkable_low_height_spans) {
	___godot_icall_void_bool(___mb.mb_set_filter_walkable_low_height_spans, (const object *) this, filter_walkable_low_height_spans);
}

void navigation_mesh::set_parsed_geometry_type(const int64_t geometry_type) {
	___godot_icall_void_int(___mb.mb_set_parsed_geometry_type, (const object *) this, geometry_type);
}

void navigation_mesh::set_region_merge_size(const real_t region_merge_size) {
	___godot_icall_void_float(___mb.mb_set_region_merge_size, (const object *) this, region_merge_size);
}

void navigation_mesh::set_region_min_size(const real_t region_min_size) {
	___godot_icall_void_float(___mb.mb_set_region_min_size, (const object *) this, region_min_size);
}

void navigation_mesh::set_sample_partition_type(const int64_t sample_partition_type) {
	___godot_icall_void_int(___mb.mb_set_sample_partition_type, (const object *) this, sample_partition_type);
}

void navigation_mesh::set_source_geometry_mode(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_source_geometry_mode, (const object *) this, mask);
}

void navigation_mesh::set_source_group_name(const string mask) {
	___godot_icall_void_String(___mb.mb_set_source_group_name, (const object *) this, mask);
}

void navigation_mesh::set_vertices(const pool_vector3_array vertices) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_vertices, (const object *) this, vertices);
}

void navigation_mesh::set_verts_per_poly(const real_t verts_per_poly) {
	___godot_icall_void_float(___mb.mb_set_verts_per_poly, (const object *) this, verts_per_poly);
}

}