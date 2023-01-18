#include "occluder_polygon2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


occluder_polygon2d::___method_bindings occluder_polygon2d::___mb = {};

void *occluder_polygon2d::_detail_class_tag = nullptr;

void occluder_polygon2d::___init_method_bindings() {
	___mb.mb_get_cull_mode = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "get_cull_mode");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "get_polygon");
	___mb.mb_is_closed = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "is_closed");
	___mb.mb_set_closed = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "set_closed");
	___mb.mb_set_cull_mode = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "set_cull_mode");
	___mb.mb_set_polygon = gd::api->godot_method_bind_get_method("OccluderPolygon2D", "set_polygon");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OccluderPolygon2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

occluder_polygon2d *occluder_polygon2d::_new()
{
	return (occluder_polygon2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OccluderPolygon2D")());
}
occluder_polygon2d::CullMode occluder_polygon2d::get_cull_mode() const {
	return (occluder_polygon2d::CullMode) ___godot_icall_int(___mb.mb_get_cull_mode, (const object *) this);
}

pool_vector2_array occluder_polygon2d::get_polygon() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_polygon, (const object *) this);
}

bool occluder_polygon2d::is_closed() const {
	return ___godot_icall_bool(___mb.mb_is_closed, (const object *) this);
}

void occluder_polygon2d::set_closed(const bool closed) {
	___godot_icall_void_bool(___mb.mb_set_closed, (const object *) this, closed);
}

void occluder_polygon2d::set_cull_mode(const int64_t cull_mode) {
	___godot_icall_void_int(___mb.mb_set_cull_mode, (const object *) this, cull_mode);
}

void occluder_polygon2d::set_polygon(const pool_vector2_array polygon) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_polygon, (const object *) this, polygon);
}

}