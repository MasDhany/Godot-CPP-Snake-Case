#include "navigation_polygon.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "navigation_mesh.hpp"


namespace gd {


navigation_polygon::___method_bindings navigation_polygon::___mb = {};

void *navigation_polygon::_detail_class_tag = nullptr;

void navigation_polygon::___init_method_bindings() {
	___mb.mb__get_outlines = gd::api->godot_method_bind_get_method("NavigationPolygon", "_get_outlines");
	___mb.mb__get_polygons = gd::api->godot_method_bind_get_method("NavigationPolygon", "_get_polygons");
	___mb.mb__set_outlines = gd::api->godot_method_bind_get_method("NavigationPolygon", "_set_outlines");
	___mb.mb__set_polygons = gd::api->godot_method_bind_get_method("NavigationPolygon", "_set_polygons");
	___mb.mb_add_outline = gd::api->godot_method_bind_get_method("NavigationPolygon", "add_outline");
	___mb.mb_add_outline_at_index = gd::api->godot_method_bind_get_method("NavigationPolygon", "add_outline_at_index");
	___mb.mb_add_polygon = gd::api->godot_method_bind_get_method("NavigationPolygon", "add_polygon");
	___mb.mb_clear_outlines = gd::api->godot_method_bind_get_method("NavigationPolygon", "clear_outlines");
	___mb.mb_clear_polygons = gd::api->godot_method_bind_get_method("NavigationPolygon", "clear_polygons");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_mesh");
	___mb.mb_get_outline = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_outline");
	___mb.mb_get_outline_count = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_outline_count");
	___mb.mb_get_polygon = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_polygon");
	___mb.mb_get_polygon_count = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_polygon_count");
	___mb.mb_get_vertices = gd::api->godot_method_bind_get_method("NavigationPolygon", "get_vertices");
	___mb.mb_make_polygons_from_outlines = gd::api->godot_method_bind_get_method("NavigationPolygon", "make_polygons_from_outlines");
	___mb.mb_remove_outline = gd::api->godot_method_bind_get_method("NavigationPolygon", "remove_outline");
	___mb.mb_set_outline = gd::api->godot_method_bind_get_method("NavigationPolygon", "set_outline");
	___mb.mb_set_vertices = gd::api->godot_method_bind_get_method("NavigationPolygon", "set_vertices");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NavigationPolygon");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation_polygon *navigation_polygon::_new()
{
	return (navigation_polygon *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NavigationPolygon")());
}
array navigation_polygon::_get_outlines() const {
	return ___godot_icall_Array(___mb.mb__get_outlines, (const object *) this);
}

array navigation_polygon::_get_polygons() const {
	return ___godot_icall_Array(___mb.mb__get_polygons, (const object *) this);
}

void navigation_polygon::_set_outlines(const array outlines) {
	___godot_icall_void_Array(___mb.mb__set_outlines, (const object *) this, outlines);
}

void navigation_polygon::_set_polygons(const array polygons) {
	___godot_icall_void_Array(___mb.mb__set_polygons, (const object *) this, polygons);
}

void navigation_polygon::add_outline(const pool_vector2_array outline) {
	___godot_icall_void_PoolVector2Array(___mb.mb_add_outline, (const object *) this, outline);
}

void navigation_polygon::add_outline_at_index(const pool_vector2_array outline, const int64_t index) {
	___godot_icall_void_PoolVector2Array_int(___mb.mb_add_outline_at_index, (const object *) this, outline, index);
}

void navigation_polygon::add_polygon(const pool_int_array polygon) {
	___godot_icall_void_PoolIntArray(___mb.mb_add_polygon, (const object *) this, polygon);
}

void navigation_polygon::clear_outlines() {
	___godot_icall_void(___mb.mb_clear_outlines, (const object *) this);
}

void navigation_polygon::clear_polygons() {
	___godot_icall_void(___mb.mb_clear_polygons, (const object *) this);
}

ref<navigation_mesh> navigation_polygon::get_mesh() {
	return ref<navigation_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

pool_vector2_array navigation_polygon::get_outline(const int64_t idx) const {
	return ___godot_icall_PoolVector2Array_int(___mb.mb_get_outline, (const object *) this, idx);
}

int64_t navigation_polygon::get_outline_count() const {
	return ___godot_icall_int(___mb.mb_get_outline_count, (const object *) this);
}

pool_int_array navigation_polygon::get_polygon(const int64_t idx) {
	return ___godot_icall_PoolIntArray_int(___mb.mb_get_polygon, (const object *) this, idx);
}

int64_t navigation_polygon::get_polygon_count() const {
	return ___godot_icall_int(___mb.mb_get_polygon_count, (const object *) this);
}

pool_vector2_array navigation_polygon::get_vertices() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_vertices, (const object *) this);
}

void navigation_polygon::make_polygons_from_outlines() {
	___godot_icall_void(___mb.mb_make_polygons_from_outlines, (const object *) this);
}

void navigation_polygon::remove_outline(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_outline, (const object *) this, idx);
}

void navigation_polygon::set_outline(const int64_t idx, const pool_vector2_array outline) {
	___godot_icall_void_int_PoolVector2Array(___mb.mb_set_outline, (const object *) this, idx, outline);
}

void navigation_polygon::set_vertices(const pool_vector2_array vertices) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_vertices, (const object *) this, vertices);
}

}