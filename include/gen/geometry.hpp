#ifndef GODOT_CPP_GEOMETRY_HPP
#define GODOT_CPP_GEOMETRY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {


class geometry : public object {
	static geometry *_singleton;

	geometry();

	struct ___method_bindings {
		godot_method_bind *mb_build_box_planes;
		godot_method_bind *mb_build_capsule_planes;
		godot_method_bind *mb_build_cylinder_planes;
		godot_method_bind *mb_clip_polygon;
		godot_method_bind *mb_clip_polygons_2d;
		godot_method_bind *mb_clip_polyline_with_polygon_2d;
		godot_method_bind *mb_convex_hull_2d;
		godot_method_bind *mb_exclude_polygons_2d;
		godot_method_bind *mb_get_closest_point_to_segment;
		godot_method_bind *mb_get_closest_point_to_segment_2d;
		godot_method_bind *mb_get_closest_point_to_segment_uncapped;
		godot_method_bind *mb_get_closest_point_to_segment_uncapped_2d;
		godot_method_bind *mb_get_closest_points_between_segments;
		godot_method_bind *mb_get_closest_points_between_segments_2d;
		godot_method_bind *mb_get_uv84_normal_bit;
		godot_method_bind *mb_intersect_polygons_2d;
		godot_method_bind *mb_intersect_polyline_with_polygon_2d;
		godot_method_bind *mb_is_point_in_circle;
		godot_method_bind *mb_is_point_in_polygon;
		godot_method_bind *mb_is_polygon_clockwise;
		godot_method_bind *mb_line_intersects_line_2d;
		godot_method_bind *mb_make_atlas;
		godot_method_bind *mb_merge_polygons_2d;
		godot_method_bind *mb_offset_polygon_2d;
		godot_method_bind *mb_offset_polyline_2d;
		godot_method_bind *mb_point_is_inside_triangle;
		godot_method_bind *mb_ray_intersects_triangle;
		godot_method_bind *mb_segment_intersects_circle;
		godot_method_bind *mb_segment_intersects_convex;
		godot_method_bind *mb_segment_intersects_cylinder;
		godot_method_bind *mb_segment_intersects_segment_2d;
		godot_method_bind *mb_segment_intersects_sphere;
		godot_method_bind *mb_segment_intersects_triangle;
		godot_method_bind *mb_triangulate_delaunay_2d;
		godot_method_bind *mb_triangulate_polygon;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline geometry *get_singleton()
	{
		if (!geometry::_singleton) {
			geometry::_singleton = new geometry;
		}
		return geometry::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Geometry"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Geometry"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PolyEndType {
		END_POLYGON = 0,
		END_JOINED = 1,
		END_BUTT = 2,
		END_SQUARE = 3,
		END_ROUND = 4,
	};
	enum PolyBooleanOperation {
		OPERATION_UNION = 0,
		OPERATION_DIFFERENCE = 1,
		OPERATION_INTERSECTION = 2,
		OPERATION_XOR = 3,
	};
	enum PolyJoinType {
		JOIN_SQUARE = 0,
		JOIN_ROUND = 1,
		JOIN_MITER = 2,
	};

	// constants

	// methods
	array build_box_planes(const vector3 extents);
	array build_capsule_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t lats, const int64_t axis = 2);
	array build_cylinder_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t axis = 2);
	pool_vector3_array clip_polygon(const pool_vector3_array points, const plane plane_);
	array clip_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b);
	array clip_polyline_with_polygon_2d(const pool_vector2_array polyline, const pool_vector2_array polygon);
	pool_vector2_array convex_hull_2d(const pool_vector2_array points);
	array exclude_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b);
	vector3 get_closest_point_to_segment(const vector3 point, const vector3 s1, const vector3 s2);
	vector2 get_closest_point_to_segment_2d(const vector2 point, const vector2 s1, const vector2 s2);
	vector3 get_closest_point_to_segment_uncapped(const vector3 point, const vector3 s1, const vector3 s2);
	vector2 get_closest_point_to_segment_uncapped_2d(const vector2 point, const vector2 s1, const vector2 s2);
	pool_vector3_array get_closest_points_between_segments(const vector3 p1, const vector3 p2, const vector3 q1, const vector3 q2);
	pool_vector2_array get_closest_points_between_segments_2d(const vector2 p1, const vector2 q1, const vector2 p2, const vector2 q2);
	int64_t get_uv84_normal_bit(const vector3 normal);
	array intersect_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b);
	array intersect_polyline_with_polygon_2d(const pool_vector2_array polyline, const pool_vector2_array polygon);
	bool is_point_in_circle(const vector2 point, const vector2 circle_position, const real_t circle_radius);
	bool is_point_in_polygon(const vector2 point, const pool_vector2_array polygon);
	bool is_polygon_clockwise(const pool_vector2_array polygon);
	variant line_intersects_line_2d(const vector2 from_a, const vector2 dir_a, const vector2 from_b, const vector2 dir_b);
	dictionary make_atlas(const pool_vector2_array sizes);
	array merge_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b);
	array offset_polygon_2d(const pool_vector2_array polygon, const real_t delta, const int64_t join_type = 0);
	array offset_polyline_2d(const pool_vector2_array polyline, const real_t delta, const int64_t join_type = 0, const int64_t end_type = 3);
	bool point_is_inside_triangle(const vector2 point, const vector2 a, const vector2 b, const vector2 c) const;
	variant ray_intersects_triangle(const vector3 from, const vector3 dir, const vector3 a, const vector3 b, const vector3 c);
	real_t segment_intersects_circle(const vector2 segment_from, const vector2 segment_to, const vector2 circle_position, const real_t circle_radius);
	pool_vector3_array segment_intersects_convex(const vector3 from, const vector3 to, const array planes);
	pool_vector3_array segment_intersects_cylinder(const vector3 from, const vector3 to, const real_t height, const real_t radius);
	variant segment_intersects_segment_2d(const vector2 from_a, const vector2 to_a, const vector2 from_b, const vector2 to_b);
	pool_vector3_array segment_intersects_sphere(const vector3 from, const vector3 to, const vector3 sphere_position, const real_t sphere_radius);
	variant segment_intersects_triangle(const vector3 from, const vector3 to, const vector3 a, const vector3 b, const vector3 c);
	pool_int_array triangulate_delaunay_2d(const pool_vector2_array points);
	pool_int_array triangulate_polygon(const pool_vector2_array polygon);

};

}

#endif