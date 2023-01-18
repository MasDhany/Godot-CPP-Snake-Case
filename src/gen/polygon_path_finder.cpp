#include "polygon_path_finder.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


polygon_path_finder::___method_bindings polygon_path_finder::___mb = {};

void *polygon_path_finder::_detail_class_tag = nullptr;

void polygon_path_finder::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("PolygonPathFinder", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("PolygonPathFinder", "_set_data");
	___mb.mb_find_path = gd::api->godot_method_bind_get_method("PolygonPathFinder", "find_path");
	___mb.mb_get_bounds = gd::api->godot_method_bind_get_method("PolygonPathFinder", "get_bounds");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("PolygonPathFinder", "get_closest_point");
	___mb.mb_get_intersections = gd::api->godot_method_bind_get_method("PolygonPathFinder", "get_intersections");
	___mb.mb_get_point_penalty = gd::api->godot_method_bind_get_method("PolygonPathFinder", "get_point_penalty");
	___mb.mb_is_point_inside = gd::api->godot_method_bind_get_method("PolygonPathFinder", "is_point_inside");
	___mb.mb_set_point_penalty = gd::api->godot_method_bind_get_method("PolygonPathFinder", "set_point_penalty");
	___mb.mb_setup = gd::api->godot_method_bind_get_method("PolygonPathFinder", "setup");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PolygonPathFinder");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

polygon_path_finder *polygon_path_finder::_new()
{
	return (polygon_path_finder *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PolygonPathFinder")());
}
dictionary polygon_path_finder::_get_data() const {
	return ___godot_icall_Dictionary(___mb.mb__get_data, (const object *) this);
}

void polygon_path_finder::_set_data(const dictionary arg0) {
	___godot_icall_void_Dictionary(___mb.mb__set_data, (const object *) this, arg0);
}

pool_vector2_array polygon_path_finder::find_path(const vector2 from, const vector2 to) {
	return ___godot_icall_PoolVector2Array_Vector2_Vector2(___mb.mb_find_path, (const object *) this, from, to);
}

rect2 polygon_path_finder::get_bounds() const {
	return ___godot_icall_Rect2(___mb.mb_get_bounds, (const object *) this);
}

vector2 polygon_path_finder::get_closest_point(const vector2 point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_get_closest_point, (const object *) this, point);
}

pool_vector2_array polygon_path_finder::get_intersections(const vector2 from, const vector2 to) const {
	return ___godot_icall_PoolVector2Array_Vector2_Vector2(___mb.mb_get_intersections, (const object *) this, from, to);
}

real_t polygon_path_finder::get_point_penalty(const int64_t idx) const {
	return ___godot_icall_float_int(___mb.mb_get_point_penalty, (const object *) this, idx);
}

bool polygon_path_finder::is_point_inside(const vector2 point) const {
	return ___godot_icall_bool_Vector2(___mb.mb_is_point_inside, (const object *) this, point);
}

void polygon_path_finder::set_point_penalty(const int64_t idx, const real_t penalty) {
	___godot_icall_void_int_float(___mb.mb_set_point_penalty, (const object *) this, idx, penalty);
}

void polygon_path_finder::setup(const pool_vector2_array points, const pool_int_array connections) {
	___godot_icall_void_PoolVector2Array_PoolIntArray(___mb.mb_setup, (const object *) this, points, connections);
}

}