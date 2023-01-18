#include "csgtorus.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


csgtorus::___method_bindings csgtorus::___mb = {};

void *csgtorus::_detail_class_tag = nullptr;

void csgtorus::___init_method_bindings() {
	___mb.mb_get_inner_radius = gd::api->godot_method_bind_get_method("CSGTorus", "get_inner_radius");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGTorus", "get_material");
	___mb.mb_get_outer_radius = gd::api->godot_method_bind_get_method("CSGTorus", "get_outer_radius");
	___mb.mb_get_ring_sides = gd::api->godot_method_bind_get_method("CSGTorus", "get_ring_sides");
	___mb.mb_get_sides = gd::api->godot_method_bind_get_method("CSGTorus", "get_sides");
	___mb.mb_get_smooth_faces = gd::api->godot_method_bind_get_method("CSGTorus", "get_smooth_faces");
	___mb.mb_set_inner_radius = gd::api->godot_method_bind_get_method("CSGTorus", "set_inner_radius");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGTorus", "set_material");
	___mb.mb_set_outer_radius = gd::api->godot_method_bind_get_method("CSGTorus", "set_outer_radius");
	___mb.mb_set_ring_sides = gd::api->godot_method_bind_get_method("CSGTorus", "set_ring_sides");
	___mb.mb_set_sides = gd::api->godot_method_bind_get_method("CSGTorus", "set_sides");
	___mb.mb_set_smooth_faces = gd::api->godot_method_bind_get_method("CSGTorus", "set_smooth_faces");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGTorus");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgtorus *csgtorus::_new()
{
	return (csgtorus *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGTorus")());
}
real_t csgtorus::get_inner_radius() const {
	return ___godot_icall_float(___mb.mb_get_inner_radius, (const object *) this);
}

ref<material> csgtorus::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

real_t csgtorus::get_outer_radius() const {
	return ___godot_icall_float(___mb.mb_get_outer_radius, (const object *) this);
}

int64_t csgtorus::get_ring_sides() const {
	return ___godot_icall_int(___mb.mb_get_ring_sides, (const object *) this);
}

int64_t csgtorus::get_sides() const {
	return ___godot_icall_int(___mb.mb_get_sides, (const object *) this);
}

bool csgtorus::get_smooth_faces() const {
	return ___godot_icall_bool(___mb.mb_get_smooth_faces, (const object *) this);
}

void csgtorus::set_inner_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_inner_radius, (const object *) this, radius);
}

void csgtorus::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgtorus::set_outer_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_outer_radius, (const object *) this, radius);
}

void csgtorus::set_ring_sides(const int64_t sides) {
	___godot_icall_void_int(___mb.mb_set_ring_sides, (const object *) this, sides);
}

void csgtorus::set_sides(const int64_t sides) {
	___godot_icall_void_int(___mb.mb_set_sides, (const object *) this, sides);
}

void csgtorus::set_smooth_faces(const bool smooth_faces) {
	___godot_icall_void_bool(___mb.mb_set_smooth_faces, (const object *) this, smooth_faces);
}

}