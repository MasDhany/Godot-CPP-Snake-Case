#include "particles.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"
#include "mesh.hpp"


namespace gd {


particles::___method_bindings particles::___mb = {};

void *particles::_detail_class_tag = nullptr;

void particles::___init_method_bindings() {
	___mb.mb_capture_aabb = gd::api->godot_method_bind_get_method("Particles", "capture_aabb");
	___mb.mb_get_amount = gd::api->godot_method_bind_get_method("Particles", "get_amount");
	___mb.mb_get_draw_order = gd::api->godot_method_bind_get_method("Particles", "get_draw_order");
	___mb.mb_get_draw_pass_mesh = gd::api->godot_method_bind_get_method("Particles", "get_draw_pass_mesh");
	___mb.mb_get_draw_passes = gd::api->godot_method_bind_get_method("Particles", "get_draw_passes");
	___mb.mb_get_explosiveness_ratio = gd::api->godot_method_bind_get_method("Particles", "get_explosiveness_ratio");
	___mb.mb_get_fixed_fps = gd::api->godot_method_bind_get_method("Particles", "get_fixed_fps");
	___mb.mb_get_fractional_delta = gd::api->godot_method_bind_get_method("Particles", "get_fractional_delta");
	___mb.mb_get_lifetime = gd::api->godot_method_bind_get_method("Particles", "get_lifetime");
	___mb.mb_get_one_shot = gd::api->godot_method_bind_get_method("Particles", "get_one_shot");
	___mb.mb_get_pre_process_time = gd::api->godot_method_bind_get_method("Particles", "get_pre_process_time");
	___mb.mb_get_process_material = gd::api->godot_method_bind_get_method("Particles", "get_process_material");
	___mb.mb_get_randomness_ratio = gd::api->godot_method_bind_get_method("Particles", "get_randomness_ratio");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("Particles", "get_speed_scale");
	___mb.mb_get_use_local_coordinates = gd::api->godot_method_bind_get_method("Particles", "get_use_local_coordinates");
	___mb.mb_get_visibility_aabb = gd::api->godot_method_bind_get_method("Particles", "get_visibility_aabb");
	___mb.mb_is_emitting = gd::api->godot_method_bind_get_method("Particles", "is_emitting");
	___mb.mb_restart = gd::api->godot_method_bind_get_method("Particles", "restart");
	___mb.mb_set_amount = gd::api->godot_method_bind_get_method("Particles", "set_amount");
	___mb.mb_set_draw_order = gd::api->godot_method_bind_get_method("Particles", "set_draw_order");
	___mb.mb_set_draw_pass_mesh = gd::api->godot_method_bind_get_method("Particles", "set_draw_pass_mesh");
	___mb.mb_set_draw_passes = gd::api->godot_method_bind_get_method("Particles", "set_draw_passes");
	___mb.mb_set_emitting = gd::api->godot_method_bind_get_method("Particles", "set_emitting");
	___mb.mb_set_explosiveness_ratio = gd::api->godot_method_bind_get_method("Particles", "set_explosiveness_ratio");
	___mb.mb_set_fixed_fps = gd::api->godot_method_bind_get_method("Particles", "set_fixed_fps");
	___mb.mb_set_fractional_delta = gd::api->godot_method_bind_get_method("Particles", "set_fractional_delta");
	___mb.mb_set_lifetime = gd::api->godot_method_bind_get_method("Particles", "set_lifetime");
	___mb.mb_set_one_shot = gd::api->godot_method_bind_get_method("Particles", "set_one_shot");
	___mb.mb_set_pre_process_time = gd::api->godot_method_bind_get_method("Particles", "set_pre_process_time");
	___mb.mb_set_process_material = gd::api->godot_method_bind_get_method("Particles", "set_process_material");
	___mb.mb_set_randomness_ratio = gd::api->godot_method_bind_get_method("Particles", "set_randomness_ratio");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("Particles", "set_speed_scale");
	___mb.mb_set_use_local_coordinates = gd::api->godot_method_bind_get_method("Particles", "set_use_local_coordinates");
	___mb.mb_set_visibility_aabb = gd::api->godot_method_bind_get_method("Particles", "set_visibility_aabb");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Particles");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

particles *particles::_new()
{
	return (particles *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Particles")());
}
aabb particles::capture_aabb() const {
	return ___godot_icall_AABB(___mb.mb_capture_aabb, (const object *) this);
}

int64_t particles::get_amount() const {
	return ___godot_icall_int(___mb.mb_get_amount, (const object *) this);
}

particles::DrawOrder particles::get_draw_order() const {
	return (particles::DrawOrder) ___godot_icall_int(___mb.mb_get_draw_order, (const object *) this);
}

ref<mesh> particles::get_draw_pass_mesh(const int64_t pass) const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_draw_pass_mesh, (const object *) this, pass));
}

int64_t particles::get_draw_passes() const {
	return ___godot_icall_int(___mb.mb_get_draw_passes, (const object *) this);
}

real_t particles::get_explosiveness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_explosiveness_ratio, (const object *) this);
}

int64_t particles::get_fixed_fps() const {
	return ___godot_icall_int(___mb.mb_get_fixed_fps, (const object *) this);
}

bool particles::get_fractional_delta() const {
	return ___godot_icall_bool(___mb.mb_get_fractional_delta, (const object *) this);
}

real_t particles::get_lifetime() const {
	return ___godot_icall_float(___mb.mb_get_lifetime, (const object *) this);
}

bool particles::get_one_shot() const {
	return ___godot_icall_bool(___mb.mb_get_one_shot, (const object *) this);
}

real_t particles::get_pre_process_time() const {
	return ___godot_icall_float(___mb.mb_get_pre_process_time, (const object *) this);
}

ref<material> particles::get_process_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_process_material, (const object *) this));
}

real_t particles::get_randomness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_randomness_ratio, (const object *) this);
}

real_t particles::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

bool particles::get_use_local_coordinates() const {
	return ___godot_icall_bool(___mb.mb_get_use_local_coordinates, (const object *) this);
}

aabb particles::get_visibility_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_visibility_aabb, (const object *) this);
}

bool particles::is_emitting() const {
	return ___godot_icall_bool(___mb.mb_is_emitting, (const object *) this);
}

void particles::restart() {
	___godot_icall_void(___mb.mb_restart, (const object *) this);
}

void particles::set_amount(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_amount, (const object *) this, amount);
}

void particles::set_draw_order(const int64_t order) {
	___godot_icall_void_int(___mb.mb_set_draw_order, (const object *) this, order);
}

void particles::set_draw_pass_mesh(const int64_t pass, const ref<mesh> mesh_) {
	___godot_icall_void_int_Object(___mb.mb_set_draw_pass_mesh, (const object *) this, pass, mesh_.ptr());
}

void particles::set_draw_passes(const int64_t passes) {
	___godot_icall_void_int(___mb.mb_set_draw_passes, (const object *) this, passes);
}

void particles::set_emitting(const bool emitting) {
	___godot_icall_void_bool(___mb.mb_set_emitting, (const object *) this, emitting);
}

void particles::set_explosiveness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_explosiveness_ratio, (const object *) this, ratio);
}

void particles::set_fixed_fps(const int64_t fps) {
	___godot_icall_void_int(___mb.mb_set_fixed_fps, (const object *) this, fps);
}

void particles::set_fractional_delta(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_fractional_delta, (const object *) this, enable);
}

void particles::set_lifetime(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_lifetime, (const object *) this, secs);
}

void particles::set_one_shot(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_one_shot, (const object *) this, enable);
}

void particles::set_pre_process_time(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_pre_process_time, (const object *) this, secs);
}

void particles::set_process_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_process_material, (const object *) this, material_.ptr());
}

void particles::set_randomness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_randomness_ratio, (const object *) this, ratio);
}

void particles::set_speed_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, scale);
}

void particles::set_use_local_coordinates(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_local_coordinates, (const object *) this, enable);
}

void particles::set_visibility_aabb(const aabb aabb_) {
	___godot_icall_void_AABB(___mb.mb_set_visibility_aabb, (const object *) this, aabb_);
}

}