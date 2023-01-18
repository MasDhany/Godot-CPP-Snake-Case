#include "sphere_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


sphere_mesh::___method_bindings sphere_mesh::___mb = {};

void *sphere_mesh::_detail_class_tag = nullptr;

void sphere_mesh::___init_method_bindings() {
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("SphereMesh", "get_height");
	___mb.mb_get_is_hemisphere = gd::api->godot_method_bind_get_method("SphereMesh", "get_is_hemisphere");
	___mb.mb_get_radial_segments = gd::api->godot_method_bind_get_method("SphereMesh", "get_radial_segments");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("SphereMesh", "get_radius");
	___mb.mb_get_rings = gd::api->godot_method_bind_get_method("SphereMesh", "get_rings");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("SphereMesh", "set_height");
	___mb.mb_set_is_hemisphere = gd::api->godot_method_bind_get_method("SphereMesh", "set_is_hemisphere");
	___mb.mb_set_radial_segments = gd::api->godot_method_bind_get_method("SphereMesh", "set_radial_segments");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("SphereMesh", "set_radius");
	___mb.mb_set_rings = gd::api->godot_method_bind_get_method("SphereMesh", "set_rings");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SphereMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

sphere_mesh *sphere_mesh::_new()
{
	return (sphere_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SphereMesh")());
}
real_t sphere_mesh::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

bool sphere_mesh::get_is_hemisphere() const {
	return ___godot_icall_bool(___mb.mb_get_is_hemisphere, (const object *) this);
}

int64_t sphere_mesh::get_radial_segments() const {
	return ___godot_icall_int(___mb.mb_get_radial_segments, (const object *) this);
}

real_t sphere_mesh::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

int64_t sphere_mesh::get_rings() const {
	return ___godot_icall_int(___mb.mb_get_rings, (const object *) this);
}

void sphere_mesh::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void sphere_mesh::set_is_hemisphere(const bool is_hemisphere) {
	___godot_icall_void_bool(___mb.mb_set_is_hemisphere, (const object *) this, is_hemisphere);
}

void sphere_mesh::set_radial_segments(const int64_t radial_segments) {
	___godot_icall_void_int(___mb.mb_set_radial_segments, (const object *) this, radial_segments);
}

void sphere_mesh::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

void sphere_mesh::set_rings(const int64_t rings) {
	___godot_icall_void_int(___mb.mb_set_rings, (const object *) this, rings);
}

}