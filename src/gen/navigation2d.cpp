#include "navigation2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


navigation2d::___method_bindings navigation2d::___mb = {};

void *navigation2d::_detail_class_tag = nullptr;

void navigation2d::___init_method_bindings() {
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("Navigation2D", "get_cell_size");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("Navigation2D", "get_closest_point");
	___mb.mb_get_closest_point_owner = gd::api->godot_method_bind_get_method("Navigation2D", "get_closest_point_owner");
	___mb.mb_get_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation2D", "get_edge_connection_margin");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("Navigation2D", "get_navigation_layers");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("Navigation2D", "get_rid");
	___mb.mb_get_simple_path = gd::api->godot_method_bind_get_method("Navigation2D", "get_simple_path");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("Navigation2D", "set_cell_size");
	___mb.mb_set_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation2D", "set_edge_connection_margin");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("Navigation2D", "set_navigation_layers");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Navigation2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation2d *navigation2d::_new()
{
	return (navigation2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Navigation2D")());
}
real_t navigation2d::get_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_cell_size, (const object *) this);
}

vector2 navigation2d::get_closest_point(const vector2 to_point) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_get_closest_point, (const object *) this, to_point);
}

rid navigation2d::get_closest_point_owner(const vector2 to_point) const {
	return ___godot_icall_RID_Vector2(___mb.mb_get_closest_point_owner, (const object *) this, to_point);
}

real_t navigation2d::get_edge_connection_margin() const {
	return ___godot_icall_float(___mb.mb_get_edge_connection_margin, (const object *) this);
}

int64_t navigation2d::get_navigation_layers() const {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

rid navigation2d::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

pool_vector2_array navigation2d::get_simple_path(const vector2 start, const vector2 end, const bool optimize) const {
	return ___godot_icall_PoolVector2Array_Vector2_Vector2_bool(___mb.mb_get_simple_path, (const object *) this, start, end, optimize);
}

void navigation2d::set_cell_size(const real_t cell_size) {
	___godot_icall_void_float(___mb.mb_set_cell_size, (const object *) this, cell_size);
}

void navigation2d::set_edge_connection_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_edge_connection_margin, (const object *) this, margin);
}

void navigation2d::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

}