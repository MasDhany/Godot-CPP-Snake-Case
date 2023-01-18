#include "cpuparticles2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve.hpp"
#include "gradient.hpp"
#include "node.hpp"
#include "texture.hpp"


namespace gd {


cpuparticles2d::___method_bindings cpuparticles2d::___mb = {};

void *cpuparticles2d::_detail_class_tag = nullptr;

void cpuparticles2d::___init_method_bindings() {
	___mb.mb__texture_changed = gd::api->godot_method_bind_get_method("CPUParticles2D", "_texture_changed");
	___mb.mb__update_render_thread = gd::api->godot_method_bind_get_method("CPUParticles2D", "_update_render_thread");
	___mb.mb_convert_from_particles = gd::api->godot_method_bind_get_method("CPUParticles2D", "convert_from_particles");
	___mb.mb_get_amount = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_amount");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_color");
	___mb.mb_get_color_initial_ramp = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_color_initial_ramp");
	___mb.mb_get_color_ramp = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_color_ramp");
	___mb.mb_get_direction = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_direction");
	___mb.mb_get_draw_order = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_draw_order");
	___mb.mb_get_emission_colors = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_colors");
	___mb.mb_get_emission_normals = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_normals");
	___mb.mb_get_emission_points = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_points");
	___mb.mb_get_emission_rect_extents = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_rect_extents");
	___mb.mb_get_emission_shape = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_shape");
	___mb.mb_get_emission_sphere_radius = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_sphere_radius");
	___mb.mb_get_explosiveness_ratio = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_explosiveness_ratio");
	___mb.mb_get_fixed_fps = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_fixed_fps");
	___mb.mb_get_fractional_delta = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_fractional_delta");
	___mb.mb_get_gravity = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_gravity");
	___mb.mb_get_lifetime = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_lifetime");
	___mb.mb_get_lifetime_randomness = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_lifetime_randomness");
	___mb.mb_get_normalmap = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_normalmap");
	___mb.mb_get_one_shot = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_one_shot");
	___mb.mb_get_param = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_param");
	___mb.mb_get_param_curve = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_param_curve");
	___mb.mb_get_param_randomness = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_param_randomness");
	___mb.mb_get_particle_flag = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_particle_flag");
	___mb.mb_get_pre_process_time = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_pre_process_time");
	___mb.mb_get_randomness_ratio = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_randomness_ratio");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_speed_scale");
	___mb.mb_get_spread = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_spread");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_texture");
	___mb.mb_get_use_local_coordinates = gd::api->godot_method_bind_get_method("CPUParticles2D", "get_use_local_coordinates");
	___mb.mb_is_emitting = gd::api->godot_method_bind_get_method("CPUParticles2D", "is_emitting");
	___mb.mb_restart = gd::api->godot_method_bind_get_method("CPUParticles2D", "restart");
	___mb.mb_set_amount = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_amount");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_color");
	___mb.mb_set_color_initial_ramp = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_color_initial_ramp");
	___mb.mb_set_color_ramp = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_color_ramp");
	___mb.mb_set_direction = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_direction");
	___mb.mb_set_draw_order = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_draw_order");
	___mb.mb_set_emission_colors = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_colors");
	___mb.mb_set_emission_normals = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_normals");
	___mb.mb_set_emission_points = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_points");
	___mb.mb_set_emission_rect_extents = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_rect_extents");
	___mb.mb_set_emission_shape = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_shape");
	___mb.mb_set_emission_sphere_radius = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_sphere_radius");
	___mb.mb_set_emitting = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_emitting");
	___mb.mb_set_explosiveness_ratio = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_explosiveness_ratio");
	___mb.mb_set_fixed_fps = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_fixed_fps");
	___mb.mb_set_fractional_delta = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_fractional_delta");
	___mb.mb_set_gravity = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_gravity");
	___mb.mb_set_lifetime = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_lifetime");
	___mb.mb_set_lifetime_randomness = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_lifetime_randomness");
	___mb.mb_set_normalmap = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_normalmap");
	___mb.mb_set_one_shot = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_one_shot");
	___mb.mb_set_param = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_param");
	___mb.mb_set_param_curve = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_param_curve");
	___mb.mb_set_param_randomness = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_param_randomness");
	___mb.mb_set_particle_flag = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_particle_flag");
	___mb.mb_set_pre_process_time = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_pre_process_time");
	___mb.mb_set_randomness_ratio = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_randomness_ratio");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_speed_scale");
	___mb.mb_set_spread = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_spread");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_texture");
	___mb.mb_set_use_local_coordinates = gd::api->godot_method_bind_get_method("CPUParticles2D", "set_use_local_coordinates");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CPUParticles2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

cpuparticles2d *cpuparticles2d::_new()
{
	return (cpuparticles2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CPUParticles2D")());
}
void cpuparticles2d::_texture_changed() {
	___godot_icall_void(___mb.mb__texture_changed, (const object *) this);
}

void cpuparticles2d::_update_render_thread() {
	___godot_icall_void(___mb.mb__update_render_thread, (const object *) this);
}

void cpuparticles2d::convert_from_particles(const node *particles_) {
	___godot_icall_void_Object(___mb.mb_convert_from_particles, (const object *) this, particles_);
}

int64_t cpuparticles2d::get_amount() const {
	return ___godot_icall_int(___mb.mb_get_amount, (const object *) this);
}

color cpuparticles2d::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

ref<gradient> cpuparticles2d::get_color_initial_ramp() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_initial_ramp, (const object *) this));
}

ref<gradient> cpuparticles2d::get_color_ramp() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_color_ramp, (const object *) this));
}

vector2 cpuparticles2d::get_direction() const {
	return ___godot_icall_Vector2(___mb.mb_get_direction, (const object *) this);
}

cpuparticles2d::DrawOrder cpuparticles2d::get_draw_order() const {
	return (cpuparticles2d::DrawOrder) ___godot_icall_int(___mb.mb_get_draw_order, (const object *) this);
}

pool_color_array cpuparticles2d::get_emission_colors() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_emission_colors, (const object *) this);
}

pool_vector2_array cpuparticles2d::get_emission_normals() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_emission_normals, (const object *) this);
}

pool_vector2_array cpuparticles2d::get_emission_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_emission_points, (const object *) this);
}

vector2 cpuparticles2d::get_emission_rect_extents() const {
	return ___godot_icall_Vector2(___mb.mb_get_emission_rect_extents, (const object *) this);
}

cpuparticles2d::EmissionShape cpuparticles2d::get_emission_shape() const {
	return (cpuparticles2d::EmissionShape) ___godot_icall_int(___mb.mb_get_emission_shape, (const object *) this);
}

real_t cpuparticles2d::get_emission_sphere_radius() const {
	return ___godot_icall_float(___mb.mb_get_emission_sphere_radius, (const object *) this);
}

real_t cpuparticles2d::get_explosiveness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_explosiveness_ratio, (const object *) this);
}

int64_t cpuparticles2d::get_fixed_fps() const {
	return ___godot_icall_int(___mb.mb_get_fixed_fps, (const object *) this);
}

bool cpuparticles2d::get_fractional_delta() const {
	return ___godot_icall_bool(___mb.mb_get_fractional_delta, (const object *) this);
}

vector2 cpuparticles2d::get_gravity() const {
	return ___godot_icall_Vector2(___mb.mb_get_gravity, (const object *) this);
}

real_t cpuparticles2d::get_lifetime() const {
	return ___godot_icall_float(___mb.mb_get_lifetime, (const object *) this);
}

real_t cpuparticles2d::get_lifetime_randomness() const {
	return ___godot_icall_float(___mb.mb_get_lifetime_randomness, (const object *) this);
}

ref<texture> cpuparticles2d::get_normalmap() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normalmap, (const object *) this));
}

bool cpuparticles2d::get_one_shot() const {
	return ___godot_icall_bool(___mb.mb_get_one_shot, (const object *) this);
}

real_t cpuparticles2d::get_param(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param, (const object *) this, param);
}

ref<curve> cpuparticles2d::get_param_curve(const int64_t param) const {
	return ref<curve>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_param_curve, (const object *) this, param));
}

real_t cpuparticles2d::get_param_randomness(const int64_t param) const {
	return ___godot_icall_float_int(___mb.mb_get_param_randomness, (const object *) this, param);
}

bool cpuparticles2d::get_particle_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_particle_flag, (const object *) this, flag);
}

real_t cpuparticles2d::get_pre_process_time() const {
	return ___godot_icall_float(___mb.mb_get_pre_process_time, (const object *) this);
}

real_t cpuparticles2d::get_randomness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_randomness_ratio, (const object *) this);
}

real_t cpuparticles2d::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

real_t cpuparticles2d::get_spread() const {
	return ___godot_icall_float(___mb.mb_get_spread, (const object *) this);
}

ref<texture> cpuparticles2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

bool cpuparticles2d::get_use_local_coordinates() const {
	return ___godot_icall_bool(___mb.mb_get_use_local_coordinates, (const object *) this);
}

bool cpuparticles2d::is_emitting() const {
	return ___godot_icall_bool(___mb.mb_is_emitting, (const object *) this);
}

void cpuparticles2d::restart() {
	___godot_icall_void(___mb.mb_restart, (const object *) this);
}

void cpuparticles2d::set_amount(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_amount, (const object *) this, amount);
}

void cpuparticles2d::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void cpuparticles2d::set_color_initial_ramp(const ref<gradient> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_initial_ramp, (const object *) this, ramp.ptr());
}

void cpuparticles2d::set_color_ramp(const ref<gradient> ramp) {
	___godot_icall_void_Object(___mb.mb_set_color_ramp, (const object *) this, ramp.ptr());
}

void cpuparticles2d::set_direction(const vector2 direction) {
	___godot_icall_void_Vector2(___mb.mb_set_direction, (const object *) this, direction);
}

void cpuparticles2d::set_draw_order(const int64_t order) {
	___godot_icall_void_int(___mb.mb_set_draw_order, (const object *) this, order);
}

void cpuparticles2d::set_emission_colors(const pool_color_array array_) {
	___godot_icall_void_PoolColorArray(___mb.mb_set_emission_colors, (const object *) this, array_);
}

void cpuparticles2d::set_emission_normals(const pool_vector2_array array_) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_emission_normals, (const object *) this, array_);
}

void cpuparticles2d::set_emission_points(const pool_vector2_array array_) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_emission_points, (const object *) this, array_);
}

void cpuparticles2d::set_emission_rect_extents(const vector2 extents) {
	___godot_icall_void_Vector2(___mb.mb_set_emission_rect_extents, (const object *) this, extents);
}

void cpuparticles2d::set_emission_shape(const int64_t shape_) {
	___godot_icall_void_int(___mb.mb_set_emission_shape, (const object *) this, shape_);
}

void cpuparticles2d::set_emission_sphere_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_emission_sphere_radius, (const object *) this, radius);
}

void cpuparticles2d::set_emitting(const bool emitting) {
	___godot_icall_void_bool(___mb.mb_set_emitting, (const object *) this, emitting);
}

void cpuparticles2d::set_explosiveness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_explosiveness_ratio, (const object *) this, ratio);
}

void cpuparticles2d::set_fixed_fps(const int64_t fps) {
	___godot_icall_void_int(___mb.mb_set_fixed_fps, (const object *) this, fps);
}

void cpuparticles2d::set_fractional_delta(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_fractional_delta, (const object *) this, enable);
}

void cpuparticles2d::set_gravity(const vector2 accel_vec) {
	___godot_icall_void_Vector2(___mb.mb_set_gravity, (const object *) this, accel_vec);
}

void cpuparticles2d::set_lifetime(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_lifetime, (const object *) this, secs);
}

void cpuparticles2d::set_lifetime_randomness(const real_t random) {
	___godot_icall_void_float(___mb.mb_set_lifetime_randomness, (const object *) this, random);
}

void cpuparticles2d::set_normalmap(const ref<texture> normalmap) {
	___godot_icall_void_Object(___mb.mb_set_normalmap, (const object *) this, normalmap.ptr());
}

void cpuparticles2d::set_one_shot(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_one_shot, (const object *) this, enable);
}

void cpuparticles2d::set_param(const int64_t param, const real_t value) {
	___godot_icall_void_int_float(___mb.mb_set_param, (const object *) this, param, value);
}

void cpuparticles2d::set_param_curve(const int64_t param, const ref<curve> curve_) {
	___godot_icall_void_int_Object(___mb.mb_set_param_curve, (const object *) this, param, curve_.ptr());
}

void cpuparticles2d::set_param_randomness(const int64_t param, const real_t randomness) {
	___godot_icall_void_int_float(___mb.mb_set_param_randomness, (const object *) this, param, randomness);
}

void cpuparticles2d::set_particle_flag(const int64_t flag, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_particle_flag, (const object *) this, flag, enable);
}

void cpuparticles2d::set_pre_process_time(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_pre_process_time, (const object *) this, secs);
}

void cpuparticles2d::set_randomness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_randomness_ratio, (const object *) this, ratio);
}

void cpuparticles2d::set_speed_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, scale);
}

void cpuparticles2d::set_spread(const real_t degrees) {
	___godot_icall_void_float(___mb.mb_set_spread, (const object *) this, degrees);
}

void cpuparticles2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void cpuparticles2d::set_use_local_coordinates(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_local_coordinates, (const object *) this, enable);
}

}