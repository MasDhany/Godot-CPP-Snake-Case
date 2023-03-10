#ifndef GODOT_CPP_NAVIGATIONMESH_HPP
#define GODOT_CPP_NAVIGATIONMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "navigation_mesh.hpp"

#include "resource.hpp"
namespace gd {

class mesh;

class navigation_mesh : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_polygons;
		godot_method_bind *mb__set_polygons;
		godot_method_bind *mb_add_polygon;
		godot_method_bind *mb_clear_polygons;
		godot_method_bind *mb_create_from_mesh;
		godot_method_bind *mb_get_agent_height;
		godot_method_bind *mb_get_agent_max_climb;
		godot_method_bind *mb_get_agent_max_slope;
		godot_method_bind *mb_get_agent_radius;
		godot_method_bind *mb_get_cell_height;
		godot_method_bind *mb_get_cell_size;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_detail_sample_distance;
		godot_method_bind *mb_get_detail_sample_max_error;
		godot_method_bind *mb_get_edge_max_error;
		godot_method_bind *mb_get_edge_max_length;
		godot_method_bind *mb_get_filter_baking_aabb;
		godot_method_bind *mb_get_filter_baking_aabb_offset;
		godot_method_bind *mb_get_filter_ledge_spans;
		godot_method_bind *mb_get_filter_low_hanging_obstacles;
		godot_method_bind *mb_get_filter_walkable_low_height_spans;
		godot_method_bind *mb_get_parsed_geometry_type;
		godot_method_bind *mb_get_polygon;
		godot_method_bind *mb_get_polygon_count;
		godot_method_bind *mb_get_region_merge_size;
		godot_method_bind *mb_get_region_min_size;
		godot_method_bind *mb_get_sample_partition_type;
		godot_method_bind *mb_get_source_geometry_mode;
		godot_method_bind *mb_get_source_group_name;
		godot_method_bind *mb_get_vertices;
		godot_method_bind *mb_get_verts_per_poly;
		godot_method_bind *mb_set_agent_height;
		godot_method_bind *mb_set_agent_max_climb;
		godot_method_bind *mb_set_agent_max_slope;
		godot_method_bind *mb_set_agent_radius;
		godot_method_bind *mb_set_cell_height;
		godot_method_bind *mb_set_cell_size;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_detail_sample_distance;
		godot_method_bind *mb_set_detail_sample_max_error;
		godot_method_bind *mb_set_edge_max_error;
		godot_method_bind *mb_set_edge_max_length;
		godot_method_bind *mb_set_filter_baking_aabb;
		godot_method_bind *mb_set_filter_baking_aabb_offset;
		godot_method_bind *mb_set_filter_ledge_spans;
		godot_method_bind *mb_set_filter_low_hanging_obstacles;
		godot_method_bind *mb_set_filter_walkable_low_height_spans;
		godot_method_bind *mb_set_parsed_geometry_type;
		godot_method_bind *mb_set_region_merge_size;
		godot_method_bind *mb_set_region_min_size;
		godot_method_bind *mb_set_sample_partition_type;
		godot_method_bind *mb_set_source_geometry_mode;
		godot_method_bind *mb_set_source_group_name;
		godot_method_bind *mb_set_vertices;
		godot_method_bind *mb_set_verts_per_poly;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NavigationMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ParsedGeometryType {
		PARSED_GEOMETRY_MESH_INSTANCES = 0,
		PARSED_GEOMETRY_STATIC_COLLIDERS = 1,
		PARSED_GEOMETRY_BOTH = 2,
		PARSED_GEOMETRY_MAX = 3,
	};
	enum SamplePartitionType {
		SAMPLE_PARTITION_WATERSHED = 0,
		SAMPLE_PARTITION_MONOTONE = 1,
		SAMPLE_PARTITION_LAYERS = 2,
		SAMPLE_PARTITION_MAX = 3,
	};
	enum SourceGeometryMode {
		SOURCE_GEOMETRY_NAVMESH_CHILDREN = 0,
		SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN = 1,
		SOURCE_GEOMETRY_GROUPS_EXPLICIT = 2,
		SOURCE_GEOMETRY_MAX = 3,
	};

	// constants


	static navigation_mesh *_new();

	// methods
	array _get_polygons() const;
	void _set_polygons(const array polygons);
	void add_polygon(const pool_int_array polygon);
	void clear_polygons();
	void create_from_mesh(const ref<mesh> mesh_);
	real_t get_agent_height() const;
	real_t get_agent_max_climb() const;
	real_t get_agent_max_slope() const;
	real_t get_agent_radius();
	real_t get_cell_height() const;
	real_t get_cell_size() const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	real_t get_detail_sample_distance() const;
	real_t get_detail_sample_max_error() const;
	real_t get_edge_max_error() const;
	real_t get_edge_max_length() const;
	aabb get_filter_baking_aabb() const;
	vector3 get_filter_baking_aabb_offset() const;
	bool get_filter_ledge_spans() const;
	bool get_filter_low_hanging_obstacles() const;
	bool get_filter_walkable_low_height_spans() const;
	navigation_mesh::ParsedGeometryType get_parsed_geometry_type() const;
	pool_int_array get_polygon(const int64_t idx);
	int64_t get_polygon_count() const;
	real_t get_region_merge_size() const;
	real_t get_region_min_size() const;
	navigation_mesh::SamplePartitionType get_sample_partition_type() const;
	navigation_mesh::SourceGeometryMode get_source_geometry_mode() const;
	string get_source_group_name() const;
	pool_vector3_array get_vertices() const;
	real_t get_verts_per_poly() const;
	void set_agent_height(const real_t agent_height);
	void set_agent_max_climb(const real_t agent_max_climb);
	void set_agent_max_slope(const real_t agent_max_slope);
	void set_agent_radius(const real_t agent_radius);
	void set_cell_height(const real_t cell_height);
	void set_cell_size(const real_t cell_size);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_detail_sample_distance(const real_t detail_sample_dist);
	void set_detail_sample_max_error(const real_t detail_sample_max_error);
	void set_edge_max_error(const real_t edge_max_error);
	void set_edge_max_length(const real_t edge_max_length);
	void set_filter_baking_aabb(const aabb baking_aabb);
	void set_filter_baking_aabb_offset(const vector3 baking_aabb_offset);
	void set_filter_ledge_spans(const bool filter_ledge_spans);
	void set_filter_low_hanging_obstacles(const bool filter_low_hanging_obstacles);
	void set_filter_walkable_low_height_spans(const bool filter_walkable_low_height_spans);
	void set_parsed_geometry_type(const int64_t geometry_type);
	void set_region_merge_size(const real_t region_merge_size);
	void set_region_min_size(const real_t region_min_size);
	void set_sample_partition_type(const int64_t sample_partition_type);
	void set_source_geometry_mode(const int64_t mask);
	void set_source_group_name(const string mask);
	void set_vertices(const pool_vector3_array vertices);
	void set_verts_per_poly(const real_t verts_per_poly);

};

}

#endif