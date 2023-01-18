#include "convex_polygon_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


convex_polygon_shape2d::___method_bindings convex_polygon_shape2d::___mb = {};

void *convex_polygon_shape2d::_detail_class_tag = nullptr;

void convex_polygon_shape2d::___init_method_bindings() {
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("ConvexPolygonShape2D", "get_points");
	___mb.mb_set_point_cloud = gd::api->godot_method_bind_get_method("ConvexPolygonShape2D", "set_point_cloud");
	___mb.mb_set_points = gd::api->godot_method_bind_get_method("ConvexPolygonShape2D", "set_points");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConvexPolygonShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

convex_polygon_shape2d *convex_polygon_shape2d::_new()
{
	return (convex_polygon_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConvexPolygonShape2D")());
}
pool_vector2_array convex_polygon_shape2d::get_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_points, (const object *) this);
}

void convex_polygon_shape2d::set_point_cloud(const pool_vector2_array point_cloud) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_point_cloud, (const object *) this, point_cloud);
}

void convex_polygon_shape2d::set_points(const pool_vector2_array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_points, (const object *) this, points);
}

}