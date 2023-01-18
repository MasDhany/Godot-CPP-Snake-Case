#include "geometry.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


geometry *geometry::_singleton = NULL;


geometry::geometry() {
	_owner = gd::api->godot_global_get_singleton((char *) "Geometry");
}


geometry::___method_bindings geometry::___mb = {};

void *geometry::_detail_class_tag = nullptr;

void geometry::___init_method_bindings() {
	___mb.mb_build_box_planes = gd::api->godot_method_bind_get_method("_Geometry", "build_box_planes");
	___mb.mb_build_capsule_planes = gd::api->godot_method_bind_get_method("_Geometry", "build_capsule_planes");
	___mb.mb_build_cylinder_planes = gd::api->godot_method_bind_get_method("_Geometry", "build_cylinder_planes");
	___mb.mb_clip_polygon = gd::api->godot_method_bind_get_method("_Geometry", "clip_polygon");
	___mb.mb_clip_polygons_2d = gd::api->godot_method_bind_get_method("_Geometry", "clip_polygons_2d");
	___mb.mb_clip_polyline_with_polygon_2d = gd::api->godot_method_bind_get_method("_Geometry", "clip_polyline_with_polygon_2d");
	___mb.mb_convex_hull_2d = gd::api->godot_method_bind_get_method("_Geometry", "convex_hull_2d");
	___mb.mb_exclude_polygons_2d = gd::api->godot_method_bind_get_method("_Geometry", "exclude_polygons_2d");
	___mb.mb_get_closest_point_to_segment = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_point_to_segment");
	___mb.mb_get_closest_point_to_segment_2d = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_point_to_segment_2d");
	___mb.mb_get_closest_point_to_segment_uncapped = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_point_to_segment_uncapped");
	___mb.mb_get_closest_point_to_segment_uncapped_2d = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_point_to_segment_uncapped_2d");
	___mb.mb_get_closest_points_between_segments = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_points_between_segments");
	___mb.mb_get_closest_points_between_segments_2d = gd::api->godot_method_bind_get_method("_Geometry", "get_closest_points_between_segments_2d");
	___mb.mb_get_uv84_normal_bit = gd::api->godot_method_bind_get_method("_Geometry", "get_uv84_normal_bit");
	___mb.mb_intersect_polygons_2d = gd::api->godot_method_bind_get_method("_Geometry", "intersect_polygons_2d");
	___mb.mb_intersect_polyline_with_polygon_2d = gd::api->godot_method_bind_get_method("_Geometry", "intersect_polyline_with_polygon_2d");
	___mb.mb_is_point_in_circle = gd::api->godot_method_bind_get_method("_Geometry", "is_point_in_circle");
	___mb.mb_is_point_in_polygon = gd::api->godot_method_bind_get_method("_Geometry", "is_point_in_polygon");
	___mb.mb_is_polygon_clockwise = gd::api->godot_method_bind_get_method("_Geometry", "is_polygon_clockwise");
	___mb.mb_line_intersects_line_2d = gd::api->godot_method_bind_get_method("_Geometry", "line_intersects_line_2d");
	___mb.mb_make_atlas = gd::api->godot_method_bind_get_method("_Geometry", "make_atlas");
	___mb.mb_merge_polygons_2d = gd::api->godot_method_bind_get_method("_Geometry", "merge_polygons_2d");
	___mb.mb_offset_polygon_2d = gd::api->godot_method_bind_get_method("_Geometry", "offset_polygon_2d");
	___mb.mb_offset_polyline_2d = gd::api->godot_method_bind_get_method("_Geometry", "offset_polyline_2d");
	___mb.mb_point_is_inside_triangle = gd::api->godot_method_bind_get_method("_Geometry", "point_is_inside_triangle");
	___mb.mb_ray_intersects_triangle = gd::api->godot_method_bind_get_method("_Geometry", "ray_intersects_triangle");
	___mb.mb_segment_intersects_circle = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_circle");
	___mb.mb_segment_intersects_convex = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_convex");
	___mb.mb_segment_intersects_cylinder = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_cylinder");
	___mb.mb_segment_intersects_segment_2d = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_segment_2d");
	___mb.mb_segment_intersects_sphere = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_sphere");
	___mb.mb_segment_intersects_triangle = gd::api->godot_method_bind_get_method("_Geometry", "segment_intersects_triangle");
	___mb.mb_triangulate_delaunay_2d = gd::api->godot_method_bind_get_method("_Geometry", "triangulate_delaunay_2d");
	___mb.mb_triangulate_polygon = gd::api->godot_method_bind_get_method("_Geometry", "triangulate_polygon");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Geometry");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array geometry::build_box_planes(const vector3 extents) {
	return ___godot_icall_Array_Vector3(___mb.mb_build_box_planes, (const object *) this, extents);
}

array geometry::build_capsule_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t lats, const int64_t axis) {
	return ___godot_icall_Array_float_float_int_int_int(___mb.mb_build_capsule_planes, (const object *) this, radius, height, sides, lats, axis);
}

array geometry::build_cylinder_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t axis) {
	return ___godot_icall_Array_float_float_int_int(___mb.mb_build_cylinder_planes, (const object *) this, radius, height, sides, axis);
}

pool_vector3_array geometry::clip_polygon(const pool_vector3_array points, const plane plane_) {
	return ___godot_icall_PoolVector3Array_PoolVector3Array_Plane(___mb.mb_clip_polygon, (const object *) this, points, plane_);
}

array geometry::clip_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_clip_polygons_2d, (const object *) this, polygon_a, polygon_b);
}

array geometry::clip_polyline_with_polygon_2d(const pool_vector2_array polyline, const pool_vector2_array polygon) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_clip_polyline_with_polygon_2d, (const object *) this, polyline, polygon);
}

pool_vector2_array geometry::convex_hull_2d(const pool_vector2_array points) {
	return ___godot_icall_PoolVector2Array_PoolVector2Array(___mb.mb_convex_hull_2d, (const object *) this, points);
}

array geometry::exclude_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_exclude_polygons_2d, (const object *) this, polygon_a, polygon_b);
}

vector3 geometry::get_closest_point_to_segment(const vector3 point, const vector3 s1, const vector3 s2) {
	return ___godot_icall_Vector3_Vector3_Vector3_Vector3(___mb.mb_get_closest_point_to_segment, (const object *) this, point, s1, s2);
}

vector2 geometry::get_closest_point_to_segment_2d(const vector2 point, const vector2 s1, const vector2 s2) {
	return ___godot_icall_Vector2_Vector2_Vector2_Vector2(___mb.mb_get_closest_point_to_segment_2d, (const object *) this, point, s1, s2);
}

vector3 geometry::get_closest_point_to_segment_uncapped(const vector3 point, const vector3 s1, const vector3 s2) {
	return ___godot_icall_Vector3_Vector3_Vector3_Vector3(___mb.mb_get_closest_point_to_segment_uncapped, (const object *) this, point, s1, s2);
}

vector2 geometry::get_closest_point_to_segment_uncapped_2d(const vector2 point, const vector2 s1, const vector2 s2) {
	return ___godot_icall_Vector2_Vector2_Vector2_Vector2(___mb.mb_get_closest_point_to_segment_uncapped_2d, (const object *) this, point, s1, s2);
}

pool_vector3_array geometry::get_closest_points_between_segments(const vector3 p1, const vector3 p2, const vector3 q1, const vector3 q2) {
	return ___godot_icall_PoolVector3Array_Vector3_Vector3_Vector3_Vector3(___mb.mb_get_closest_points_between_segments, (const object *) this, p1, p2, q1, q2);
}

pool_vector2_array geometry::get_closest_points_between_segments_2d(const vector2 p1, const vector2 q1, const vector2 p2, const vector2 q2) {
	return ___godot_icall_PoolVector2Array_Vector2_Vector2_Vector2_Vector2(___mb.mb_get_closest_points_between_segments_2d, (const object *) this, p1, q1, p2, q2);
}

int64_t geometry::get_uv84_normal_bit(const vector3 normal) {
	return ___godot_icall_int_Vector3(___mb.mb_get_uv84_normal_bit, (const object *) this, normal);
}

array geometry::intersect_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_intersect_polygons_2d, (const object *) this, polygon_a, polygon_b);
}

array geometry::intersect_polyline_with_polygon_2d(const pool_vector2_array polyline, const pool_vector2_array polygon) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_intersect_polyline_with_polygon_2d, (const object *) this, polyline, polygon);
}

bool geometry::is_point_in_circle(const vector2 point, const vector2 circle_position, const real_t circle_radius) {
	return ___godot_icall_bool_Vector2_Vector2_float(___mb.mb_is_point_in_circle, (const object *) this, point, circle_position, circle_radius);
}

bool geometry::is_point_in_polygon(const vector2 point, const pool_vector2_array polygon) {
	return ___godot_icall_bool_Vector2_PoolVector2Array(___mb.mb_is_point_in_polygon, (const object *) this, point, polygon);
}

bool geometry::is_polygon_clockwise(const pool_vector2_array polygon) {
	return ___godot_icall_bool_PoolVector2Array(___mb.mb_is_polygon_clockwise, (const object *) this, polygon);
}

variant geometry::line_intersects_line_2d(const vector2 from_a, const vector2 dir_a, const vector2 from_b, const vector2 dir_b) {
	return ___godot_icall_Variant_Vector2_Vector2_Vector2_Vector2(___mb.mb_line_intersects_line_2d, (const object *) this, from_a, dir_a, from_b, dir_b);
}

dictionary geometry::make_atlas(const pool_vector2_array sizes) {
	return ___godot_icall_Dictionary_PoolVector2Array(___mb.mb_make_atlas, (const object *) this, sizes);
}

array geometry::merge_polygons_2d(const pool_vector2_array polygon_a, const pool_vector2_array polygon_b) {
	return ___godot_icall_Array_PoolVector2Array_PoolVector2Array(___mb.mb_merge_polygons_2d, (const object *) this, polygon_a, polygon_b);
}

array geometry::offset_polygon_2d(const pool_vector2_array polygon, const real_t delta, const int64_t join_type) {
	return ___godot_icall_Array_PoolVector2Array_float_int(___mb.mb_offset_polygon_2d, (const object *) this, polygon, delta, join_type);
}

array geometry::offset_polyline_2d(const pool_vector2_array polyline, const real_t delta, const int64_t join_type, const int64_t end_type) {
	return ___godot_icall_Array_PoolVector2Array_float_int_int(___mb.mb_offset_polyline_2d, (const object *) this, polyline, delta, join_type, end_type);
}

bool geometry::point_is_inside_triangle(const vector2 point, const vector2 a, const vector2 b, const vector2 c) const {
	return ___godot_icall_bool_Vector2_Vector2_Vector2_Vector2(___mb.mb_point_is_inside_triangle, (const object *) this, point, a, b, c);
}

variant geometry::ray_intersects_triangle(const vector3 from, const vector3 dir, const vector3 a, const vector3 b, const vector3 c) {
	return ___godot_icall_Variant_Vector3_Vector3_Vector3_Vector3_Vector3(___mb.mb_ray_intersects_triangle, (const object *) this, from, dir, a, b, c);
}

real_t geometry::segment_intersects_circle(const vector2 segment_from, const vector2 segment_to, const vector2 circle_position, const real_t circle_radius) {
	return ___godot_icall_float_Vector2_Vector2_Vector2_float(___mb.mb_segment_intersects_circle, (const object *) this, segment_from, segment_to, circle_position, circle_radius);
}

pool_vector3_array geometry::segment_intersects_convex(const vector3 from, const vector3 to, const array planes) {
	return ___godot_icall_PoolVector3Array_Vector3_Vector3_Array(___mb.mb_segment_intersects_convex, (const object *) this, from, to, planes);
}

pool_vector3_array geometry::segment_intersects_cylinder(const vector3 from, const vector3 to, const real_t height, const real_t radius) {
	return ___godot_icall_PoolVector3Array_Vector3_Vector3_float_float(___mb.mb_segment_intersects_cylinder, (const object *) this, from, to, height, radius);
}

variant geometry::segment_intersects_segment_2d(const vector2 from_a, const vector2 to_a, const vector2 from_b, const vector2 to_b) {
	return ___godot_icall_Variant_Vector2_Vector2_Vector2_Vector2(___mb.mb_segment_intersects_segment_2d, (const object *) this, from_a, to_a, from_b, to_b);
}

pool_vector3_array geometry::segment_intersects_sphere(const vector3 from, const vector3 to, const vector3 sphere_position, const real_t sphere_radius) {
	return ___godot_icall_PoolVector3Array_Vector3_Vector3_Vector3_float(___mb.mb_segment_intersects_sphere, (const object *) this, from, to, sphere_position, sphere_radius);
}

variant geometry::segment_intersects_triangle(const vector3 from, const vector3 to, const vector3 a, const vector3 b, const vector3 c) {
	return ___godot_icall_Variant_Vector3_Vector3_Vector3_Vector3_Vector3(___mb.mb_segment_intersects_triangle, (const object *) this, from, to, a, b, c);
}

pool_int_array geometry::triangulate_delaunay_2d(const pool_vector2_array points) {
	return ___godot_icall_PoolIntArray_PoolVector2Array(___mb.mb_triangulate_delaunay_2d, (const object *) this, points);
}

pool_int_array geometry::triangulate_polygon(const pool_vector2_array polygon) {
	return ___godot_icall_PoolIntArray_PoolVector2Array(___mb.mb_triangulate_polygon, (const object *) this, polygon);
}

}