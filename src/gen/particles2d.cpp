#include "particles2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"
#include "texture.hpp"


namespace gd {


particles2d::___method_bindings particles2d::___mb = {};

void *particles2d::_detail_class_tag = nullptr;

void particles2d::___init_method_bindings() {
	___mb.mb_capture_rect = gd::api->godot_method_bind_get_method("Particles2D", "capture_rect");
	___mb.mb_get_amount = gd::api->godot_method_bind_get_method("Particles2D", "get_amount");
	___mb.mb_get_draw_order = gd::api->godot_method_bind_get_method("Particles2D", "get_draw_order");
	___mb.mb_get_explosiveness_ratio = gd::api->godot_method_bind_get_method("Particles2D", "get_explosiveness_ratio");
	___mb.mb_get_fixed_fps = gd::api->godot_method_bind_get_method("Particles2D", "get_fixed_fps");
	___mb.mb_get_fractional_delta = gd::api->godot_method_bind_get_method("Particles2D", "get_fractional_delta");
	___mb.mb_get_lifetime = gd::api->godot_method_bind_get_method("Particles2D", "get_lifetime");
	___mb.mb_get_normal_map = gd::api->godot_method_bind_get_method("Particles2D", "get_normal_map");
	___mb.mb_get_one_shot = gd::api->godot_method_bind_get_method("Particles2D", "get_one_shot");
	___mb.mb_get_pre_process_time = gd::api->godot_method_bind_get_method("Particles2D", "get_pre_process_time");
	___mb.mb_get_process_material = gd::api->godot_method_bind_get_method("Particles2D", "get_process_material");
	___mb.mb_get_randomness_ratio = gd::api->godot_method_bind_get_method("Particles2D", "get_randomness_ratio");
	___mb.mb_get_speed_scale = gd::api->godot_method_bind_get_method("Particles2D", "get_speed_scale");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("Particles2D", "get_texture");
	___mb.mb_get_use_local_coordinates = gd::api->godot_method_bind_get_method("Particles2D", "get_use_local_coordinates");
	___mb.mb_get_visibility_rect = gd::api->godot_method_bind_get_method("Particles2D", "get_visibility_rect");
	___mb.mb_is_emitting = gd::api->godot_method_bind_get_method("Particles2D", "is_emitting");
	___mb.mb_restart = gd::api->godot_method_bind_get_method("Particles2D", "restart");
	___mb.mb_set_amount = gd::api->godot_method_bind_get_method("Particles2D", "set_amount");
	___mb.mb_set_draw_order = gd::api->godot_method_bind_get_method("Particles2D", "set_draw_order");
	___mb.mb_set_emitting = gd::api->godot_method_bind_get_method("Particles2D", "set_emitting");
	___mb.mb_set_explosiveness_ratio = gd::api->godot_method_bind_get_method("Particles2D", "set_explosiveness_ratio");
	___mb.mb_set_fixed_fps = gd::api->godot_method_bind_get_method("Particles2D", "set_fixed_fps");
	___mb.mb_set_fractional_delta = gd::api->godot_method_bind_get_method("Particles2D", "set_fractional_delta");
	___mb.mb_set_lifetime = gd::api->godot_method_bind_get_method("Particles2D", "set_lifetime");
	___mb.mb_set_normal_map = gd::api->godot_method_bind_get_method("Particles2D", "set_normal_map");
	___mb.mb_set_one_shot = gd::api->godot_method_bind_get_method("Particles2D", "set_one_shot");
	___mb.mb_set_pre_process_time = gd::api->godot_method_bind_get_method("Particles2D", "set_pre_process_time");
	___mb.mb_set_process_material = gd::api->godot_method_bind_get_method("Particles2D", "set_process_material");
	___mb.mb_set_randomness_ratio = gd::api->godot_method_bind_get_method("Particles2D", "set_randomness_ratio");
	___mb.mb_set_speed_scale = gd::api->godot_method_bind_get_method("Particles2D", "set_speed_scale");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("Particles2D", "set_texture");
	___mb.mb_set_use_local_coordinates = gd::api->godot_method_bind_get_method("Particles2D", "set_use_local_coordinates");
	___mb.mb_set_visibility_rect = gd::api->godot_method_bind_get_method("Particles2D", "set_visibility_rect");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Particles2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

particles2d *particles2d::_new()
{
	return (particles2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Particles2D")());
}
rect2 particles2d::capture_rect() const {
	return ___godot_icall_Rect2(___mb.mb_capture_rect, (const object *) this);
}

int64_t particles2d::get_amount() const {
	return ___godot_icall_int(___mb.mb_get_amount, (const object *) this);
}

particles2d::DrawOrder particles2d::get_draw_order() const {
	return (particles2d::DrawOrder) ___godot_icall_int(___mb.mb_get_draw_order, (const object *) this);
}

real_t particles2d::get_explosiveness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_explosiveness_ratio, (const object *) this);
}

int64_t particles2d::get_fixed_fps() const {
	return ___godot_icall_int(___mb.mb_get_fixed_fps, (const object *) this);
}

bool particles2d::get_fractional_delta() const {
	return ___godot_icall_bool(___mb.mb_get_fractional_delta, (const object *) this);
}

real_t particles2d::get_lifetime() const {
	return ___godot_icall_float(___mb.mb_get_lifetime, (const object *) this);
}

ref<texture> particles2d::get_normal_map() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_map, (const object *) this));
}

bool particles2d::get_one_shot() const {
	return ___godot_icall_bool(___mb.mb_get_one_shot, (const object *) this);
}

real_t particles2d::get_pre_process_time() const {
	return ___godot_icall_float(___mb.mb_get_pre_process_time, (const object *) this);
}

ref<material> particles2d::get_process_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_process_material, (const object *) this));
}

real_t particles2d::get_randomness_ratio() const {
	return ___godot_icall_float(___mb.mb_get_randomness_ratio, (const object *) this);
}

real_t particles2d::get_speed_scale() const {
	return ___godot_icall_float(___mb.mb_get_speed_scale, (const object *) this);
}

ref<texture> particles2d::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

bool particles2d::get_use_local_coordinates() const {
	return ___godot_icall_bool(___mb.mb_get_use_local_coordinates, (const object *) this);
}

rect2 particles2d::get_visibility_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_visibility_rect, (const object *) this);
}

bool particles2d::is_emitting() const {
	return ___godot_icall_bool(___mb.mb_is_emitting, (const object *) this);
}

void particles2d::restart() {
	___godot_icall_void(___mb.mb_restart, (const object *) this);
}

void particles2d::set_amount(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_amount, (const object *) this, amount);
}

void particles2d::set_draw_order(const int64_t order) {
	___godot_icall_void_int(___mb.mb_set_draw_order, (const object *) this, order);
}

void particles2d::set_emitting(const bool emitting) {
	___godot_icall_void_bool(___mb.mb_set_emitting, (const object *) this, emitting);
}

void particles2d::set_explosiveness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_explosiveness_ratio, (const object *) this, ratio);
}

void particles2d::set_fixed_fps(const int64_t fps) {
	___godot_icall_void_int(___mb.mb_set_fixed_fps, (const object *) this, fps);
}

void particles2d::set_fractional_delta(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_fractional_delta, (const object *) this, enable);
}

void particles2d::set_lifetime(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_lifetime, (const object *) this, secs);
}

void particles2d::set_normal_map(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_normal_map, (const object *) this, texture_.ptr());
}

void particles2d::set_one_shot(const bool secs) {
	___godot_icall_void_bool(___mb.mb_set_one_shot, (const object *) this, secs);
}

void particles2d::set_pre_process_time(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_pre_process_time, (const object *) this, secs);
}

void particles2d::set_process_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_process_material, (const object *) this, material_.ptr());
}

void particles2d::set_randomness_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_randomness_ratio, (const object *) this, ratio);
}

void particles2d::set_speed_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_speed_scale, (const object *) this, scale);
}

void particles2d::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

void particles2d::set_use_local_coordinates(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_local_coordinates, (const object *) this, enable);
}

void particles2d::set_visibility_rect(const rect2 visibility_rect) {
	___godot_icall_void_Rect2(___mb.mb_set_visibility_rect, (const object *) this, visibility_rect);
}

}