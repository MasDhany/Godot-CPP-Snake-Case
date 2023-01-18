#include "reflection_probe.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


reflection_probe::___method_bindings reflection_probe::___mb = {};

void *reflection_probe::_detail_class_tag = nullptr;

void reflection_probe::___init_method_bindings() {
	___mb.mb_are_shadows_enabled = gd::api->godot_method_bind_get_method("ReflectionProbe", "are_shadows_enabled");
	___mb.mb_get_cull_mask = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_cull_mask");
	___mb.mb_get_extents = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_extents");
	___mb.mb_get_intensity = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_intensity");
	___mb.mb_get_interior_ambient = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_interior_ambient");
	___mb.mb_get_interior_ambient_energy = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_interior_ambient_energy");
	___mb.mb_get_interior_ambient_probe_contribution = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_interior_ambient_probe_contribution");
	___mb.mb_get_max_distance = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_max_distance");
	___mb.mb_get_origin_offset = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_origin_offset");
	___mb.mb_get_update_mode = gd::api->godot_method_bind_get_method("ReflectionProbe", "get_update_mode");
	___mb.mb_is_box_projection_enabled = gd::api->godot_method_bind_get_method("ReflectionProbe", "is_box_projection_enabled");
	___mb.mb_is_set_as_interior = gd::api->godot_method_bind_get_method("ReflectionProbe", "is_set_as_interior");
	___mb.mb_set_as_interior = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_as_interior");
	___mb.mb_set_cull_mask = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_cull_mask");
	___mb.mb_set_enable_box_projection = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_enable_box_projection");
	___mb.mb_set_enable_shadows = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_enable_shadows");
	___mb.mb_set_extents = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_extents");
	___mb.mb_set_intensity = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_intensity");
	___mb.mb_set_interior_ambient = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_interior_ambient");
	___mb.mb_set_interior_ambient_energy = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_interior_ambient_energy");
	___mb.mb_set_interior_ambient_probe_contribution = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_interior_ambient_probe_contribution");
	___mb.mb_set_max_distance = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_max_distance");
	___mb.mb_set_origin_offset = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_origin_offset");
	___mb.mb_set_update_mode = gd::api->godot_method_bind_get_method("ReflectionProbe", "set_update_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ReflectionProbe");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

reflection_probe *reflection_probe::_new()
{
	return (reflection_probe *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ReflectionProbe")());
}
bool reflection_probe::are_shadows_enabled() const {
	return ___godot_icall_bool(___mb.mb_are_shadows_enabled, (const object *) this);
}

int64_t reflection_probe::get_cull_mask() const {
	return ___godot_icall_int(___mb.mb_get_cull_mask, (const object *) this);
}

vector3 reflection_probe::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const object *) this);
}

real_t reflection_probe::get_intensity() const {
	return ___godot_icall_float(___mb.mb_get_intensity, (const object *) this);
}

color reflection_probe::get_interior_ambient() const {
	return ___godot_icall_Color(___mb.mb_get_interior_ambient, (const object *) this);
}

real_t reflection_probe::get_interior_ambient_energy() const {
	return ___godot_icall_float(___mb.mb_get_interior_ambient_energy, (const object *) this);
}

real_t reflection_probe::get_interior_ambient_probe_contribution() const {
	return ___godot_icall_float(___mb.mb_get_interior_ambient_probe_contribution, (const object *) this);
}

real_t reflection_probe::get_max_distance() const {
	return ___godot_icall_float(___mb.mb_get_max_distance, (const object *) this);
}

vector3 reflection_probe::get_origin_offset() const {
	return ___godot_icall_Vector3(___mb.mb_get_origin_offset, (const object *) this);
}

reflection_probe::UpdateMode reflection_probe::get_update_mode() const {
	return (reflection_probe::UpdateMode) ___godot_icall_int(___mb.mb_get_update_mode, (const object *) this);
}

bool reflection_probe::is_box_projection_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_box_projection_enabled, (const object *) this);
}

bool reflection_probe::is_set_as_interior() const {
	return ___godot_icall_bool(___mb.mb_is_set_as_interior, (const object *) this);
}

void reflection_probe::set_as_interior(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_as_interior, (const object *) this, enable);
}

void reflection_probe::set_cull_mask(const int64_t layers) {
	___godot_icall_void_int(___mb.mb_set_cull_mask, (const object *) this, layers);
}

void reflection_probe::set_enable_box_projection(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_enable_box_projection, (const object *) this, enable);
}

void reflection_probe::set_enable_shadows(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_enable_shadows, (const object *) this, enable);
}

void reflection_probe::set_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const object *) this, extents);
}

void reflection_probe::set_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_intensity, (const object *) this, intensity);
}

void reflection_probe::set_interior_ambient(const color ambient) {
	___godot_icall_void_Color(___mb.mb_set_interior_ambient, (const object *) this, ambient);
}

void reflection_probe::set_interior_ambient_energy(const real_t ambient_energy) {
	___godot_icall_void_float(___mb.mb_set_interior_ambient_energy, (const object *) this, ambient_energy);
}

void reflection_probe::set_interior_ambient_probe_contribution(const real_t ambient_probe_contribution) {
	___godot_icall_void_float(___mb.mb_set_interior_ambient_probe_contribution, (const object *) this, ambient_probe_contribution);
}

void reflection_probe::set_max_distance(const real_t max_distance) {
	___godot_icall_void_float(___mb.mb_set_max_distance, (const object *) this, max_distance);
}

void reflection_probe::set_origin_offset(const vector3 origin_offset) {
	___godot_icall_void_Vector3(___mb.mb_set_origin_offset, (const object *) this, origin_offset);
}

void reflection_probe::set_update_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_update_mode, (const object *) this, mode);
}

}