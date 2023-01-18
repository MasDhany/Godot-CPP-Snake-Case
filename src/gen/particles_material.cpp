#include "particles_material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve_texture.hpp"
#include "gradient_texture.hpp"
#include "texture.hpp"


namespace gd {


particles_material::___method_bindings particles_material::___mb = {};

void *particles_material::_detail_class_tag = nullptr;

void particles_material::___init_method_bindings() {
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_color");
	___mb.mb_get_color_initial_ramp = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_color_initial_ramp");
	___mb.mb_get_color_ramp = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_color_ramp");
	___mb.mb_get_direction = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_direction");
	___mb.mb_get_emission_box_extents = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_box_extents");
	___mb.mb_get_emission_color_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_color_texture");
	___mb.mb_get_emission_normal_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_normal_texture");
	___mb.mb_get_emission_point_count = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_point_count");
	___mb.mb_get_emission_point_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_point_texture");
	___mb.mb_get_emission_ring_axis = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_ring_axis");
	___mb.mb_get_emission_ring_height = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_ring_height");
	___mb.mb_get_emission_ring_inner_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_ring_inner_radius");
	___mb.mb_get_emission_ring_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_ring_radius");
	___mb.mb_get_emission_shape = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_shape");
	___mb.mb_get_emission_sphere_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_emission_sphere_radius");
	___mb.mb_get_flag = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_flag");
	___mb.mb_get_flatness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_flatness");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_gravity");
	___mb.mb_get_lifetime_randomness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_lifetime_randomness");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_param");
	___mb.mb_get_param_randomness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_param_randomness");
	___mb.mb_get_param_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_param_texture");
	___mb.mb_get_spread = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_spread");
	___mb.mb_get_trail_color_modifier = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_trail_color_modifier");
	___mb.mb_get_trail_divisor = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_trail_divisor");
	___mb.mb_get_trail_size_modifier = gd::api->godot_method_bind_get_method("ParticlesMaterial", "get_trail_size_modifier");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_color");
	___mb.mb_set_color_initial_ramp = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_color_initial_ramp");
	___mb.mb_set_color_ramp = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_color_ramp");
	___mb.mb_set_direction = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_direction");
	___mb.mb_set_emission_box_extents = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_box_extents");
	___mb.mb_set_emission_color_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_color_texture");
	___mb.mb_set_emission_normal_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_normal_texture");
	___mb.mb_set_emission_point_count = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_point_count");
	___mb.mb_set_emission_point_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_point_texture");
	___mb.mb_set_emission_ring_axis = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_ring_axis");
	___mb.mb_set_emission_ring_height = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_ring_height");
	___mb.mb_set_emission_ring_inner_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_ring_inner_radius");
	___mb.mb_set_emission_ring_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_ring_radius");
	___mb.mb_set_emission_shape = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_shape");
	___mb.mb_set_emission_sphere_radius = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_emission_sphere_radius");
	___mb.mb_set_flag = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_flag");
	___mb.mb_set_flatness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_flatness");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_gravity");
	___mb.mb_set_lifetime_randomness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_lifetime_randomness");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_param");
	___mb.mb_set_param_randomness = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_param_randomness");
	___mb.mb_set_param_texture = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_param_texture");
	___mb.mb_set_spread = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_spread");
	___mb.mb_set_trail_color_modifier = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_trail_color_modifier");
	___mb.mb_set_trail_divisor = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_trail_divisor");
	___mb.mb_set_trail_size_modifier = gd::api->godot_method_bind_get_method("ParticlesMaterial", "set_trail_size_modifier");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ParticlesMaterial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

particles_material *particles_material::_new()
{
	return (particles_material *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ParticlesMaterial")());
}
color particles_material::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

ref<texture> particles_material::get_color_initial_ramp() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_initial_ramp, (const object *) this));
}

ref<texture> particles_material::get_color_ramp() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_ramp, (const object *) this));
}

vector3 particles_material::get_direction() const {
	return ___godot_icall_Vector3(___mb.mb_get_direction, (const object *) this);
}

vector3 particles_material::get_emission_box_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_emission_box_extents, (const object *) this);
}

ref<texture> particles_material::get_emission_color_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_emission_color_texture, (const object *) this));
}

ref<texture> particles_material::get_emission_normal_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_emission_normal_texture, (const object *) this));
}

int64_t particles_material::get_emission_point_count() const {
	return ___godot_icall_int(___mb.mb_get_emission_point_count, (const object *) this);
}

ref<texture> particles_material::get_emission_point_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_emission_point_texture, (const object *) this));
}

vector3 particles_material::get_emission_ring_axis() const {
	return ___godot_icall_Vector3(___mb.mb_get_emission_ring_axis, (const object *) this);
}

real_t particles_material::get_emission_ring_height() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_height, (const object *) this);
}

real_t particles_material::get_emission_ring_inner_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_inner_radius, (const object *) this);
}

real_t particles_material::get_emission_ring_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_radius, (const object *) this);
}

particles_material::EmissionShape particles_material::get_emission_shape() const {
	return (particles_material::EmissionShape) ___godot_icall_int(___mb.mb_get_emission_shape, (const object *) this);
}

real_t particles_material::get_emission_sphere_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_sphere_radius, (const object *) this);
}

bool particles_material::get_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_flag, (const object *) this, flag);
}

real_t particles_material::get_flatness() const {
	return ___godot_icall_float(___mb.mb_get_flatness, (const object *) this);
}

vector3 particles_material::get_gravity() const {
	return ___godot_icall_Vector3(___mb.mb_get_gravity, (const object *) this);
}

real_t particles_material::get_lifetime_randomness() const {
	return ___godot_icall_float(___mb.mb_get_lifetime_randomness, (const object *) this);
}

real_t particles_material::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

real_t particles_material::get_param_randomness(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_randomness, (const object *) this, param);
}

ref<texture> particles_material::get_param_texture(const int64_t param) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_param_texture, (const object *) this, param));
}

real_t particles_material::get_spread() const {
	return ___godot_icall_float(___mb.mb_get_spread, (const object *) this);
}

ref<gradient_texture> particles_material::get_trail_color_modifier() const {
	return ref<gradient_texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_trail_color_modifier, (const object *) this));
}

int64_t particles_material::get_trail_divisor() const {
	return ___godot_icall_int(___mb.mb_get_trail_divisor, (const object *) this);
}

ref<curve_texture> particles_material::get_trail_size_modifier() const {
	return ref<curve_texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_trail_size_modifier, (const object *) this));
}

void particles_material::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void particles_material::set_color_initial_ramp(const ref<texture> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_initial_ramp, (const object *) this, ramp.ptr());
}

void particles_material::set_color_ramp(const ref<texture> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_ramp, (const object *) this, ramp.ptr());
}

void particles_material::set_direction(const vector3 degrees) {
	___godot_icall_void_Vector3(___mb.mb_set_direction, (const object *) this, degrees);
}

void particles_material::set_emission_box_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_emission_box_extents, (const object *) this, extents);
}

void particles_material::set_emission_color_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_emission_color_texture, (const object *) this, texture_.ptr());
}

void particles_material::set_emission_normal_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_emission_normal_texture, (const object *) this, texture_.ptr());
}

void particles_material::set_emission_point_count(const int64_t point_count) {
	___godot_icall_void_int(___mb.mb_set_emission_point_count, (const object *) this, point_count);
}

void particles_material::set_emission_point_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_emission_point_texture, (const object *) this, texture_.ptr());
}

void particles_material::set_emission_ring_axis(const vector3 axis) {
	___godot_icall_void_Vector3(___mb.mb_set_emission_ring_axis, (const object *) this, axis);
}

void particles_material::set_emission_ring_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_height, (const object *) this, height);
}

void particles_material::set_emission_ring_inner_radius(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_inner_radius, (const object *) this, offset);
}

void particles_material::set_emission_ring_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_radius, (const object *) this, radius);
}

void particles_material::set_emission_shape(const int64_t shape_) {
	___godot_icall_void_int(___mb.mb_set_emission_shape, (const object *) this, shape_);
}

void particles_material::set_emission_sphere_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_emission_sphere_radius, (const object *) this, radius);
}

void particles_material::set_flag(const int64_t flag, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_flag, (const object *) this, flag, enable);
}

void particles_material::set_flatness(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_flatness, (const object *) this, amount);
}

void particles_material::set_gravity(const vector3 accel_vec) {
	___godot_icall_void_Vector3(___mb.mb_set_gravity, (const object *) this, accel_vec);
}

void particles_material::set_lifetime_randomness(const real_t randomness) {
	___godot_icall_void_float(___mb.mb_set_lifetime_randomness, (const object *) this, randomness);
}

void particles_material::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

void particles_material::set_param_randomness(const int64_t param, const real_t randomness) {
	___godot_icall_void_int_float(___mb.mb_set_param_randomness, (const object *) this, param, randomness);
}

void particles_material::set_param_texture(const int64_t param, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_param_texture, (const object *) this, param, texture_.ptr());
}

void particles_material::set_spread(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_spread, (const object *) this, degrees);
}

void particles_material::set_trail_color_modifier(const ref<gradient_texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_trail_color_modifier, (const object *) this, texture_.ptr());
}

void particles_material::set_trail_divisor(const int64_t divisor) {
	___godot_icall_void_int(___mb.mb_set_trail_divisor, (const object *) this, divisor);
}

void particles_material::set_trail_size_modifier(const ref<curve_texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_trail_size_modifier, (const object *) this, texture_.ptr());
}

}