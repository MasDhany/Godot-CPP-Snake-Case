#include "capsule_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


capsule_mesh::___method_bindings capsule_mesh::___mb = {};

void *capsule_mesh::_detail_class_tag = nullptr;

void capsule_mesh::___init_method_bindings() {
	___mb.mb_get_mid_height = gd::api->godot_method_bind_get_method("CapsuleMesh", "get_mid_height");
	___mb.mb_get_radial_segments = gd::api->godot_method_bind_get_method("CapsuleMesh", "get_radial_segments");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CapsuleMesh", "get_radius");
	___mb.mb_get_rings = gd::api->godot_method_bind_get_method("CapsuleMesh", "get_rings");
	___mb.mb_set_mid_height = gd::api->godot_method_bind_get_method("CapsuleMesh", "set_mid_height");
	___mb.mb_set_radial_segments = gd::api->godot_method_bind_get_method("CapsuleMesh", "set_radial_segments");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CapsuleMesh", "set_radius");
	___mb.mb_set_rings = gd::api->godot_method_bind_get_method("CapsuleMesh", "set_rings");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CapsuleMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

capsule_mesh *capsule_mesh::_new()
{
	return (capsule_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CapsuleMesh")());
}
real_t capsule_mesh::get_mid_height() const {
	return ___godot_icall_float(___mb.mb_get_mid_height, (const object *) this);
}

int64_t capsule_mesh::get_radial_segments() const {
	return ___godot_icall_int(___mb.mb_get_radial_segments, (const object *) this);
}

real_t capsule_mesh::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

int64_t capsule_mesh::get_rings() const {
	return ___godot_icall_int(___mb.mb_get_rings, (const object *) this);
}

void capsule_mesh::set_mid_height(const real_t mid_height) {
	___godot_icall_void_float(___mb.mb_set_mid_height, (const object *) this, mid_height);
}

void capsule_mesh::set_radial_segments(const int64_t segments) {
	___godot_icall_void_int(___mb.mb_set_radial_segments, (const object *) this, segments);
}

void capsule_mesh::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

void capsule_mesh::set_rings(const int64_t rings) {
	___godot_icall_void_int(___mb.mb_set_rings, (const object *) this, rings);
}

}