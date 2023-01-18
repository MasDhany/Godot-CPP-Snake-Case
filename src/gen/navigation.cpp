#include "navigation.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


navigation::___method_bindings navigation::___mb = {};

void *navigation::_detail_class_tag = nullptr;

void navigation::___init_method_bindings() {
	___mb.mb_get_cell_height = gd::api->godot_method_bind_get_method("Navigation", "get_cell_height");
	___mb.mb_get_cell_size = gd::api->godot_method_bind_get_method("Navigation", "get_cell_size");
	___mb.mb_get_closest_point = gd::api->godot_method_bind_get_method("Navigation", "get_closest_point");
	___mb.mb_get_closest_point_normal = gd::api->godot_method_bind_get_method("Navigation", "get_closest_point_normal");
	___mb.mb_get_closest_point_owner = gd::api->godot_method_bind_get_method("Navigation", "get_closest_point_owner");
	___mb.mb_get_closest_point_to_segment = gd::api->godot_method_bind_get_method("Navigation", "get_closest_point_to_segment");
	___mb.mb_get_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation", "get_edge_connection_margin");
	___mb.mb_get_navigation_layers = gd::api->godot_method_bind_get_method("Navigation", "get_navigation_layers");
	___mb.mb_get_rid = gd::api->godot_method_bind_get_method("Navigation", "get_rid");
	___mb.mb_get_simple_path = gd::api->godot_method_bind_get_method("Navigation", "get_simple_path");
	___mb.mb_get_up_vector = gd::api->godot_method_bind_get_method("Navigation", "get_up_vector");
	___mb.mb_set_cell_height = gd::api->godot_method_bind_get_method("Navigation", "set_cell_height");
	___mb.mb_set_cell_size = gd::api->godot_method_bind_get_method("Navigation", "set_cell_size");
	___mb.mb_set_edge_connection_margin = gd::api->godot_method_bind_get_method("Navigation", "set_edge_connection_margin");
	___mb.mb_set_navigation_layers = gd::api->godot_method_bind_get_method("Navigation", "set_navigation_layers");
	___mb.mb_set_up_vector = gd::api->godot_method_bind_get_method("Navigation", "set_up_vector");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Navigation");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

navigation *navigation::_new()
{
	return (navigation *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Navigation")());
}
real_t navigation::get_cell_height() const {
	return ___godot_icall_float(___mb.mb_get_cell_height, (const object *) this);
}

real_t navigation::get_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_cell_size, (const object *) this);
}

vector3 navigation::get_closest_point(const vector3 to_point) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_get_closest_point, (const object *) this, to_point);
}

vector3 navigation::get_closest_point_normal(const vector3 to_point) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_get_closest_point_normal, (const object *) this, to_point);
}

rid navigation::get_closest_point_owner(const vector3 to_point) const {
	return ___godot_icall_RID_Vector3(___mb.mb_get_closest_point_owner, (const object *) this, to_point);
}

vector3 navigation::get_closest_point_to_segment(const vector3 start, const vector3 end, const bool use_collision) const {
	return ___godot_icall_Vector3_Vector3_Vector3_bool(___mb.mb_get_closest_point_to_segment, (const object *) this, start, end, use_collision);
}

real_t navigation::get_edge_connection_margin() const {
	return ___godot_icall_float(___mb.mb_get_edge_connection_margin, (const object *) this);
}

int64_t navigation::get_navigation_layers() const {
	return ___godot_icall_int(___mb.mb_get_navigation_layers, (const object *) this);
}

rid navigation::get_rid() const {
	return ___godot_icall_RID(___mb.mb_get_rid, (const object *) this);
}

pool_vector3_array navigation::get_simple_path(const vector3 start, const vector3 end, const bool optimize) const {
	return ___godot_icall_PoolVector3Array_Vector3_Vector3_bool(___mb.mb_get_simple_path, (const object *) this, start, end, optimize);
}

vector3 navigation::get_up_vector() const {
	return ___godot_icall_Vector3(___mb.mb_get_up_vector, (const object *) this);
}

void navigation::set_cell_height(const real_t cell_height) {
	___godot_icall_void_float(___mb.mb_set_cell_height, (const object *) this, cell_height);
}

void navigation::set_cell_size(const real_t cell_size) {
	___godot_icall_void_float(___mb.mb_set_cell_size, (const object *) this, cell_size);
}

void navigation::set_edge_connection_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_edge_connection_margin, (const object *) this, margin);
}

void navigation::set_navigation_layers(const int64_t navigation_layers) {
	___godot_icall_void_int(___mb.mb_set_navigation_layers, (const object *) this, navigation_layers);
}

void navigation::set_up_vector(const vector3 up) {
	___godot_icall_void_Vector3(___mb.mb_set_up_vector, (const object *) this, up);
}

}