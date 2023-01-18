#include "concave_polygon_shape2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


concave_polygon_shape2d::___method_bindings concave_polygon_shape2d::___mb = {};

void *concave_polygon_shape2d::_detail_class_tag = nullptr;

void concave_polygon_shape2d::___init_method_bindings() {
	___mb.mb_get_segments = gd::api->godot_method_bind_get_method("ConcavePolygonShape2D", "get_segments");
	___mb.mb_set_segments = gd::api->godot_method_bind_get_method("ConcavePolygonShape2D", "set_segments");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConcavePolygonShape2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

concave_polygon_shape2d *concave_polygon_shape2d::_new()
{
	return (concave_polygon_shape2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConcavePolygonShape2D")());
}
pool_vector2_array concave_polygon_shape2d::get_segments() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_segments, (const object *) this);
}

void concave_polygon_shape2d::set_segments(const pool_vector2_array segments) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_segments, (const object *) this, segments);
}

}