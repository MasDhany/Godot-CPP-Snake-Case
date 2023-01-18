#include "occluder_shape_polygon.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


occluder_shape_polygon::___method_bindings occluder_shape_polygon::___mb = {};

void *occluder_shape_polygon::_detail_class_tag = nullptr;

void occluder_shape_polygon::___init_method_bindings() {
	___mb.mb_get_hole_points = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "get_hole_points");
	___mb.mb_get_polygon_points = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "get_polygon_points");
	___mb.mb_is_two_way = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "is_two_way");
	___mb.mb_set_hole_point = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "set_hole_point");
	___mb.mb_set_hole_points = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "set_hole_points");
	___mb.mb_set_polygon_point = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "set_polygon_point");
	___mb.mb_set_polygon_points = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "set_polygon_points");
	___mb.mb_set_two_way = gd::api->godot_method_bind_get_method("OccluderShapePolygon", "set_two_way");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OccluderShapePolygon");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

occluder_shape_polygon *occluder_shape_polygon::_new()
{
	return (occluder_shape_polygon *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OccluderShapePolygon")());
}
pool_vector2_array occluder_shape_polygon::get_hole_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_hole_points, (const object *) this);
}

pool_vector2_array occluder_shape_polygon::get_polygon_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon_points, (const object *) this);
}

bool occluder_shape_polygon::is_two_way() const {
	return ___godot_icall_bool(___mb.mb_is_two_way, (const object *) this);
}

void occluder_shape_polygon::set_hole_point(const int64_t index, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_hole_point, (const object *) this, index, position);
}

void occluder_shape_polygon::set_hole_points(const pool_vector2_array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_hole_points, (const object *) this, points);
}

void occluder_shape_polygon::set_polygon_point(const int64_t index, const vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_polygon_point, (const object *) this, index, position);
}

void occluder_shape_polygon::set_polygon_points(const pool_vector2_array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon_points, (const object *) this, points);
}

void occluder_shape_polygon::set_two_way(const bool two_way) {
	___godot_icall_void_bool(___mb.mb_set_two_way, (const object *) this, two_way);
}

}