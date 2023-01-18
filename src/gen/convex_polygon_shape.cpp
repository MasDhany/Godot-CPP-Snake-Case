#include "convex_polygon_shape.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


convex_polygon_shape::___method_bindings convex_polygon_shape::___mb = {};

void *convex_polygon_shape::_detail_class_tag = nullptr;

void convex_polygon_shape::___init_method_bindings() {
	___mb.mb_get_points = gd::api->godot_method_bind_get_method("ConvexPolygonShape", "get_points");
	___mb.mb_set_points = gd::api->godot_method_bind_get_method("ConvexPolygonShape", "set_points");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConvexPolygonShape");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

convex_polygon_shape *convex_polygon_shape::_new()
{
	return (convex_polygon_shape *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConvexPolygonShape")());
}
pool_vector3_array convex_polygon_shape::get_points() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_points, (const object *) this);
}

void convex_polygon_shape::set_points(const pool_vector3_array points) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_points, (const object *) this, points);
}

}