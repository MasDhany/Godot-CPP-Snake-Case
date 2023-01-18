#include "cpuparticles.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve.hpp"
#include "gradient.hpp"
#include "mesh.hpp"
#include "node.hpp"


namespace gd {


cpuparticles::___method_bindings cpuparticles::___mb = {};

void *cpuparticles::_detail_class_tag = nullptr;

void cpuparticles::___init_method_bindings() {
	___mb.mb__update_render_thread = gd::api->godot_method_bind_get_method("CPUParticles", "_update_render_thread");
	___mb.mb_convert_from_particles = gd::api->godot_method_bind_get_method("CPUParticles", "convert_from_particles");
	___mb.mb_get_amount = gd::api->godot_method_bind_get_method("CPUParticles", "get_amount");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("CPUParticles", "get_color");
	___mb.mb_get_color_initial_ramp = gd::api->godot_method_bind_get_method("CPUParticles", "get_color_initial_ramp");
	___mb.mb_get_color_ramp = gd::api->godot_method_bind_get_method("CPUParticles", "get_color_ramp");
	___mb.mb_get_direction = gd::api->godot_method_bind_get_method("CPUParticles", "get_direction");
	___mb.mb_get_draw_order = gd::api->godot_method_bind_get_method("CPUParticles", "get_draw_order");
	___mb.mb_get_emission_box_extents = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_box_extents");
	___mb.mb_get_emission_colors = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_colors");
	___mb.mb_get_emission_normals = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_normals");
	___mb.mb_get_emission_points = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_points");
	___mb.mb_get_emission_ring_axis = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_ring_axis");
	___mb.mb_get_emission_ring_height = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_ring_height");
	___mb.mb_get_emission_ring_inner_radius = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_ring_inner_radius");
	___mb.mb_get_emission_ring_radius = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_ring_radius");
	___mb.mb_get_emission_shape = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_shape");
	___mb.mb_get_emission_sphere_radius = gd::api->godot_method_bind_get_method("CPUParticles", "get_emission_sphere_radius");
	___mb.mb_get_explosiveness_ratio = gd::api->godot_method_bind_get_method("CPUParticles", "get_explosiveness_ratio");
	___mb.mb_get_fixed_fps = gd::api->godot_method_bind_get_method("CPUParticles", "get_fixed_fps");
	___mb.mb_get_flatness = gd::api->godot_method_bind_get_method("CPUParticles", "get_flatness");
	___mb.mb_get_fractional_delta = gd::api->godot_method_bind_get_method("CPUParticles", "get_fractional_delta");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("CPUParticles", "get_gravity");
	___mb.mb_get_lifetime = gd::api->godot_method_bind_get_method("CPUParticles", "get_lifetime");
	___mb.mb_get_lifetime_randomness = gd::api->godot_method_bind_get_method("CPUParticles", "get_lifetime_randomness");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("CPUParticles", "get_mesh");
	___mb.mb_get_one_shot = gd::api->godot_method_bind_get_method("CPUParticles", "get_one_shot");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("CPUParticles", "get_param");
	___mb.mb_get_param_curve = gd::api->godot_method_bind_get_method("CPUParticles", "get_param_curve");
	___mb.mb_get_param_randomness = gd::api->godot_method_bind_get_method("CPUParticles", "get_param_randomness");
	___mb.mb_get_particle_flag = gd::api->godot_method_bind_get_method("CPUParticles", "get_particle_flag");
	___mb.mb_get_pre_process_time = gd::api->godot_method_bind_get_method("CPUParticles", "get_pre_process_time");
	___mb.mb_get_randomness_ratio = gd::api->godot_method_bind_get_method("CPUParticles", "get_randomness_ratio");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("CPUParticles", "get_speed_scale");
	___mb.mb_get_spread = gd::api->godot_method_bind_get_method("CPUParticles", "get_spread");
	___mb.mb_get_use_local_coordinates = gd::api->godot_method_bind_get_method("CPUParticles", "get_use_local_coordinates");
	___mb.mb_is_emitting = gd::api->godot_method_bind_get_method("CPUParticles", "is_emitting");
	___mb.mb_restart = gd::api->godot_method_bind_get_method("CPUParticles", "restart");
	___mb.mb_set_amount = gd::api->godot_method_bind_get_method("CPUParticles", "set_amount");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("CPUParticles", "set_color");
	___mb.mb_set_color_initial_ramp = gd::api->godot_method_bind_get_method("CPUParticles", "set_color_initial_ramp");
	___mb.mb_set_color_ramp = gd::api->godot_method_bind_get_method("CPUParticles", "set_color_ramp");
	___mb.mb_set_direction = gd::api->godot_method_bind_get_method("CPUParticles", "set_direction");
	___mb.mb_set_draw_order = gd::api->godot_method_bind_get_method("CPUParticles", "set_draw_order");
	___mb.mb_set_emission_box_extents = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_box_extents");
	___mb.mb_set_emission_colors = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_colors");
	___mb.mb_set_emission_normals = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_normals");
	___mb.mb_set_emission_points = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_points");
	___mb.mb_set_emission_ring_axis = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_ring_axis");
	___mb.mb_set_emission_ring_height = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_ring_height");
	___mb.mb_set_emission_ring_inner_radius = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_ring_inner_radius");
	___mb.mb_set_emission_ring_radius = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_ring_radius");
	___mb.mb_set_emission_shape = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_shape");
	___mb.mb_set_emission_sphere_radius = gd::api->godot_method_bind_get_method("CPUParticles", "set_emission_sphere_radius");
	___mb.mb_set_emitting = gd::api->godot_method_bind_get_method("CPUParticles", "set_emitting");
	___mb.mb_set_explosiveness_ratio = gd::api->godot_method_bind_get_method("CPUParticles", "set_explosiveness_ratio");
	___mb.mb_set_fixed_fps = gd::api->godot_method_bind_get_method("CPUParticles", "set_fixed_fps");
	___mb.mb_set_flatness = gd::api->godot_method_bind_get_method("CPUParticles", "set_flatness");
	___mb.mb_set_fractional_delta = gd::api->godot_method_bind_get_method("CPUParticles", "set_fractional_delta");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("CPUParticles", "set_gravity");
	___mb.mb_set_lifetime = gd::api->godot_method_bind_get_method("CPUParticles", "set_lifetime");
	___mb.mb_set_lifetime_randomness = gd::api->godot_method_bind_get_method("CPUParticles", "set_lifetime_randomness");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("CPUParticles", "set_mesh");
	___mb.mb_set_one_shot = gd::api->godot_method_bind_get_method("CPUParticles", "set_one_shot");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("CPUParticles", "set_param");
	___mb.mb_set_param_curve = gd::api->godot_method_bind_get_method("CPUParticles", "set_param_curve");
	___mb.mb_set_param_randomness = gd::api->godot_method_bind_get_method("CPUParticles", "set_param_randomness");
	___mb.mb_set_particle_flag = gd::api->godot_method_bind_get_method("CPUParticles", "set_particle_flag");
	___mb.mb_set_pre_process_time = gd::api->godot_method_bind_get_method("CPUParticles", "set_pre_process_time");
	___mb.mb_set_randomness_ratio = gd::api->godot_method_bind_get_method("CPUParticles", "set_randomness_ratio");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("CPUParticles", "set_speed_scale");
	___mb.mb_set_spread = gd::api->godot_method_bind_get_method("CPUParticles", "set_spread");
	___mb.mb_set_use_local_coordinates = gd::api->godot_method_bind_get_method("CPUParticles", "set_use_local_coordinates");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CPUParticles");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cpuparticles *cpuparticles::_new()
{
	return (cpuparticles *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CPUParticles")());
}
void cpuparticles::_update_render_thread() {
	___godot_icall_void(___mb.mb__update_render_thread, (const object *) this);
}

void cpuparticles::convert_from_particles(const node *particles_) {
	___godot_icall_void_Object(___mb.mb_convert_from_particles, (const object *) this, particles_);
}

int64_t cpuparticles::get_amount() const {
	return ___godot_icall_int(___mb.mb_get_amount, (const object *) this);
}

color cpuparticles::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

ref<gradient> cpuparticles::get_color_initial_ramp() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_initial_ramp, (const object *) this));
}

ref<gradient> cpuparticles::get_color_ramp() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_ramp, (const object *) this));
}

vector3 cpuparticles::get_direction() const {
	return ___godot_icall_Vector3(___mb.mb_get_direction, (const object *) this);
}

cpuparticles::DrawOrder cpuparticles::get_draw_order() const {
	return (cpuparticles::DrawOrder) ___godot_icall_int(___mb.mb_get_draw_order, (const object *) this);
}

vector3 cpuparticles::get_emission_box_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_emission_box_extents, (const object *) this);
}

pool_color_array cpuparticles::get_emission_colors() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_emission_colors, (const object *) this);
}

pool_vector3_array cpuparticles::get_emission_normals() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_emission_normals, (const object *) this);
}

pool_vector3_array cpuparticles::get_emission_points() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_emission_points, (const object *) this);
}

vector3 cpuparticles::get_emission_ring_axis() const {
	return ___godot_icall_Vector3(___mb.mb_get_emission_ring_axis, (const object *) this);
}

real_t cpuparticles::get_emission_ring_height() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_height, (const object *) this);
}

real_t cpuparticles::get_emission_ring_inner_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_inner_radius, (const object *) this);
}

real_t cpuparticles::get_emission_ring_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_ring_radius, (const object *) this);
}

cpuparticles::EmissionShape cpuparticles::get_emission_shape() const {
	return (cpuparticles::EmissionShape) ___godot_icall_int(___mb.mb_get_emission_shape, (const object *) this);
}

real_t cpuparticles::get_emission_sphere_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_sphere_radius, (const object *) this);
}

real_t cpuparticles::get_explosiveness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_explosiveness_ratio, (const object *) this);
}

int64_t cpuparticles::get_fixed_fps() const {
	return ___godot_icall_int(___mb.mb_get_fixed_fps, (const object *) this);
}

real_t cpuparticles::get_flatness() const {
	return ___godot_icall_float(___mb.mb_get_flatness, (const object *) this);
}

bool cpuparticles::get_fractional_delta() const {
	return ___godot_icall_bool(___mb.mb_get_fractional_delta, (const object *) this);
}

vector3 cpuparticles::get_gravity() const {
	return ___godot_icall_Vector3(___mb.mb_get_gravity, (const object *) this);
}

real_t cpuparticles::get_lifetime() const {
	return ___godot_icall_float(___mb.mb_get_lifetime, (const object *) this);
}

real_t cpuparticles::get_lifetime_randomness() const {
	return ___godot_icall_float(___mb.mb_get_lifetime_randomness, (const object *) this);
}

ref<mesh> cpuparticles::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

bool cpuparticles::get_one_shot() const {
	return ___godot_icall_bool(___mb.mb_get_one_shot, (const object *) this);
}

real_t cpuparticles::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

ref<curve> cpuparticles::get_param_curve(const int64_t param) const {
	return ref<curve>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_param_curve, (const object *) this, param));
}

real_t cpuparticles::get_param_randomness(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_randomness, (const object *) this, param);
}

bool cpuparticles::get_particle_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_particle_flag, (const object *) this, flag);
}

real_t cpuparticles::get_pre_process_time() const {
	return ___godot_icall_float(___mb.mb_get_pre_process_time, (const object *) this);
}

real_t cpuparticles::get_randomness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_randomness_ratio, (const object *) this);
}

real_t cpuparticles::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

real_t cpuparticles::get_spread() const {
	return ___godot_icall_float(___mb.mb_get_spread, (const object *) this);
}

bool cpuparticles::get_use_local_coordinates() const {
	return ___godot_icall_bool(___mb.mb_get_use_local_coordinates, (const object *) this);
}

bool cpuparticles::is_emitting() const {
	return ___godot_icall_bool(___mb.mb_is_emitting, (const object *) this);
}

void cpuparticles::restart() {
	___godot_icall_void(___mb.mb_restart, (const object *) this);
}

void cpuparticles::set_amount(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_amount, (const object *) this, amount);
}

void cpuparticles::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void cpuparticles::set_color_initial_ramp(const ref<gradient> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_initial_ramp, (const object *) this, ramp.ptr());
}

void cpuparticles::set_color_ramp(const ref<gradient> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_ramp, (const object *) this, ramp.ptr());
}

void cpuparticles::set_direction(const vector3 direction) {
	___godot_icall_void_Vector3(___mb.mb_set_direction, (const object *) this, direction);
}

void cpuparticles::set_draw_order(const int64_t order) {
	___godot_icall_void_int(___mb.mb_set_draw_order, (const object *) this, order);
}

void cpuparticles::set_emission_box_extents(const vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_emission_box_extents, (const object *) this, extents);
}

void cpuparticles::set_emission_colors(const pool_color_array array_) {
	___godot_icall_void_PoolColorArray(___mb.mb_set_emission_colors, (const object *) this, array_);
}

void cpuparticles::set_emission_normals(const pool_vector3_array array_) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_emission_normals, (const object *) this, array_);
}

void cpuparticles::set_emission_points(const pool_vector3_array array_) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_emission_points, (const object *) this, array_);
}

void cpuparticles::set_emission_ring_axis(const vector3 axis) {
	___godot_icall_void_Vector3(___mb.mb_set_emission_ring_axis, (const object *) this, axis);
}

void cpuparticles::set_emission_ring_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_height, (const object *) this, height);
}

void cpuparticles::set_emission_ring_inner_radius(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_inner_radius, (const object *) this, offset);
}

void cpuparticles::set_emission_ring_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_emission_ring_radius, (const object *) this, radius);
}

void cpuparticles::set_emission_shape(const int64_t shape_) {
	___godot_icall_void_int(___mb.mb_set_emission_shape, (const object *) this, shape_);
}

void cpuparticles::set_emission_sphere_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_emission_sphere_radius, (const object *) this, radius);
}

void cpuparticles::set_emitting(const bool emitting) {
	___godot_icall_void_bool(___mb.mb_set_emitting, (const object *) this, emitting);
}

void cpuparticles::set_explosiveness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_explosiveness_ratio, (const object *) this, ratio);
}

void cpuparticles::set_fixed_fps(const int64_t fps) {
	___godot_icall_void_int(___mb.mb_set_fixed_fps, (const object *) this, fps);
}

void cpuparticles::set_flatness(const real_t amount) {
	___godot_icall_void_float(___mb.mb_set_flatness, (const object *) this, amount);
}

void cpuparticles::set_fractional_delta(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_fractional_delta, (const object *) this, enable);
}

void cpuparticles::set_gravity(const vector3 accel_vec) {
	___godot_icall_void_Vector3(___mb.mb_set_gravity, (const object *) this, accel_vec);
}

void cpuparticles::set_lifetime(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_lifetime, (const object *) this, secs);
}

void cpuparticles::set_lifetime_randomness(const real_t random) {
	___godot_icall_void_float(___mb.mb_set_lifetime_randomness, (const object *) this, random);
}

void cpuparticles::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

void cpuparticles::set_one_shot(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_one_shot, (const object *) this, enable);
}

void cpuparticles::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

void cpuparticles::set_param_curve(const int64_t param, const ref<curve> curve_) {
	___godot_icall_void_int_Object(___mb.mb_set_param_curve, (const object *) this, param, curve_.ptr());
}

void cpuparticles::set_param_randomness(const int64_t param, const real_t randomness) {
	___godot_icall_void_int_float(___mb.mb_set_param_randomness, (const object *) this, param, randomness);
}

void cpuparticles::set_particle_flag(const int64_t flag, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_particle_flag, (const object *) this, flag, enable);
}

void cpuparticles::set_pre_process_time(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_pre_process_time, (const object *) this, secs);
}

void cpuparticles::set_randomness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_randomness_ratio, (const object *) this, ratio);
}

void cpuparticles::set_speed_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, scale);
}

void cpuparticles::set_spread(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_spread, (const object *) this, degrees);
}

void cpuparticles::set_use_local_coordinates(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_local_coordinates, (const object *) this, enable);
}

}