#include "csgsphere.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


csgsphere::___method_bindings csgsphere::___mb = {};

void *csgsphere::_detail_class_tag = nullptr;

void csgsphere::___init_method_bindings() {
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGSphere", "get_material");
	___mb.mb_get_radial_segments = gd::api->godot_method_bind_get_method("CSGSphere", "get_radial_segments");
	___mb.mb_get_radius = gd::api->godot_method_bind_get_method("CSGSphere", "get_radius");
	___mb.mb_get_rings = gd::api->godot_method_bind_get_method("CSGSphere", "get_rings");
	___mb.mb_get_smooth_faces = gd::api->godot_method_bind_get_method("CSGSphere", "get_smooth_faces");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGSphere", "set_material");
	___mb.mb_set_radial_segments = gd::api->godot_method_bind_get_method("CSGSphere", "set_radial_segments");
	___mb.mb_set_radius = gd::api->godot_method_bind_get_method("CSGSphere", "set_radius");
	___mb.mb_set_rings = gd::api->godot_method_bind_get_method("CSGSphere", "set_rings");
	___mb.mb_set_smooth_faces = gd::api->godot_method_bind_get_method("CSGSphere", "set_smooth_faces");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGSphere");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgsphere *csgsphere::_new()
{
	return (csgsphere *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGSphere")());
}
ref<material> csgsphere::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

int64_t csgsphere::get_radial_segments() const {
	return ___godot_icall_int(___mb.mb_get_radial_segments, (const object *) this);
}

real_t csgsphere::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const object *) this);
}

int64_t csgsphere::get_rings() const {
	return ___godot_icall_int(___mb.mb_get_rings, (const object *) this);
}

bool csgsphere::get_smooth_faces() const {
	return ___godot_icall_bool(___mb.mb_get_smooth_faces, (const object *) this);
}

void csgsphere::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgsphere::set_radial_segments(const int64_t radial_segments) {
	___godot_icall_void_int(___mb.mb_set_radial_segments, (const object *) this, radial_segments);
}

void csgsphere::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const object *) this, radius);
}

void csgsphere::set_rings(const int64_t rings) {
	___godot_icall_void_int(___mb.mb_set_rings, (const object *) this, rings);
}

void csgsphere::set_smooth_faces(const bool smooth_faces) {
	___godot_icall_void_bool(___mb.mb_set_smooth_faces, (const object *) this, smooth_faces);
}

}