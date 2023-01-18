#include "cylinder_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


cylinder_mesh::___method_bindings cylinder_mesh::___mb = {};

void *cylinder_mesh::_detail_class_tag = nullptr;

void cylinder_mesh::___init_method_bindings() {
	___mb.mb_get_bottom_radius = gd::api->godot_method_bind_get_method("CylinderMesh", "get_bottom_radius");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CylinderMesh", "get_height");
	___mb.mb_get_radial_segments = gd::api->godot_method_bind_get_method("CylinderMesh", "get_radial_segments");
	___mb.mb_get_rings = gd::api->godot_method_bind_get_method("CylinderMesh", "get_rings");
	___mb.mb_get_top_radius = gd::api->godot_method_bind_get_method("CylinderMesh", "get_top_radius");
	___mb.mb_set_bottom_radius = gd::api->godot_method_bind_get_method("CylinderMesh", "set_bottom_radius");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("CylinderMesh", "set_height");
	___mb.mb_set_radial_segments = gd::api->godot_method_bind_get_method("CylinderMesh", "set_radial_segments");
	___mb.mb_set_rings = gd::api->godot_method_bind_get_method("CylinderMesh", "set_rings");
	___mb.mb_set_top_radius = gd::api->godot_method_bind_get_method("CylinderMesh", "set_top_radius");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CylinderMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cylinder_mesh *cylinder_mesh::_new()
{
	return (cylinder_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CylinderMesh")());
}
real_t cylinder_mesh::get_bottom_radius() const {
	return ___godot_icall_float(___mb.mb_get_bottom_radius, (const object *) this);
}

real_t cylinder_mesh::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

int64_t cylinder_mesh::get_radial_segments() const {
	return ___godot_icall_int(___mb.mb_get_radial_segments, (const object *) this);
}

int64_t cylinder_mesh::get_rings() const {
	return ___godot_icall_int(___mb.mb_get_rings, (const object *) this);
}

real_t cylinder_mesh::get_top_radius() const {
	return ___godot_icall_float(___mb.mb_get_top_radius, (const object *) this);
}

void cylinder_mesh::set_bottom_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_bottom_radius, (const object *) this, radius);
}

void cylinder_mesh::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void cylinder_mesh::set_radial_segments(const int64_t segments) {
	___godot_icall_void_int(___mb.mb_set_radial_segments, (const object *) this, segments);
}

void cylinder_mesh::set_rings(const int64_t rings) {
	___godot_icall_void_int(___mb.mb_set_rings, (const object *) this, rings);
}

void cylinder_mesh::set_top_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_top_radius, (const object *) this, radius);
}

}