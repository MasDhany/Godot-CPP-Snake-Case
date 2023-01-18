#include "ray_cast.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


ray_cast::___method_bindings ray_cast::___mb = {};

void *ray_cast::_detail_class_tag = nullptr;

void ray_cast::___init_method_bindings() {
	___mb.mb_add_exception = gd::api->godot_method_bind_get_method("RayCast", "add_exception");
	___mb.mb_add_exception_rid = gd::api->godot_method_bind_get_method("RayCast", "add_exception_rid");
	___mb.mb_clear_exceptions = gd::api->godot_method_bind_get_method("RayCast", "clear_exceptions");
	___mb.mb_force_raycast_update = gd::api->godot_method_bind_get_method("RayCast", "force_raycast_update");
	___mb.mb_get_cast_to = gd::api->godot_method_bind_get_method("RayCast", "get_cast_to");
	___mb.mb_get_collider = gd::api->godot_method_bind_get_method("RayCast", "get_collider");
	___mb.mb_get_collider_shape = gd::api->godot_method_bind_get_method("RayCast", "get_collider_shape");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("RayCast", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("RayCast", "get_collision_mask_bit");
	___mb.mb_get_collision_normal = gd::api->godot_method_bind_get_method("RayCast", "get_collision_normal");
	___mb.mb_get_collision_point = gd::api->godot_method_bind_get_method("RayCast", "get_collision_point");
	___mb.mb_get_debug_shape_custom_color = gd::api->godot_method_bind_get_method("RayCast", "get_debug_shape_custom_color");
	___mb.mb_get_debug_shape_thickness = gd::api->godot_method_bind_get_method("RayCast", "get_debug_shape_thickness");
	___mb.mb_get_exclude_parent_body = gd::api->godot_method_bind_get_method("RayCast", "get_exclude_parent_body");
	___mb.mb_is_collide_with_areas_enabled = gd::api->godot_method_bind_get_method("RayCast", "is_collide_with_areas_enabled");
	___mb.mb_is_collide_with_bodies_enabled = gd::api->godot_method_bind_get_method("RayCast", "is_collide_with_bodies_enabled");
	___mb.mb_is_colliding = gd::api->godot_method_bind_get_method("RayCast", "is_colliding");
	___mb.mb_is_enabled = gd::api->godot_method_bind_get_method("RayCast", "is_enabled");
	___mb.mb_remove_exception = gd::api->godot_method_bind_get_method("RayCast", "remove_exception");
	___mb.mb_remove_exception_rid = gd::api->godot_method_bind_get_method("RayCast", "remove_exception_rid");
	___mb.mb_set_cast_to = gd::api->godot_method_bind_get_method("RayCast", "set_cast_to");
	___mb.mb_set_collide_with_areas = gd::api->godot_method_bind_get_method("RayCast", "set_collide_with_areas");
	___mb.mb_set_collide_with_bodies = gd::api->godot_method_bind_get_method("RayCast", "set_collide_with_bodies");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("RayCast", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("RayCast", "set_collision_mask_bit");
	___mb.mb_set_debug_shape_custom_color = gd::api->godot_method_bind_get_method("RayCast", "set_debug_shape_custom_color");
	___mb.mb_set_debug_shape_thickness = gd::api->godot_method_bind_get_method("RayCast", "set_debug_shape_thickness");
	___mb.mb_set_enabled = gd::api->godot_method_bind_get_method("RayCast", "set_enabled");
	___mb.mb_set_exclude_parent_body = gd::api->godot_method_bind_get_method("RayCast", "set_exclude_parent_body");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RayCast");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ray_cast *ray_cast::_new()
{
	return (ray_cast *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RayCast")());
}
void ray_cast::add_exception(const object *node_) {
	___godot_icall_void_Object(___mb.mb_add_exception, (const object *) this, node_);
}

void ray_cast::add_exception_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_add_exception_rid, (const object *) this, rid_);
}

void ray_cast::clear_exceptions() {
	___godot_icall_void(___mb.mb_clear_exceptions, (const object *) this);
}

void ray_cast::force_raycast_update() {
	___godot_icall_void(___mb.mb_force_raycast_update, (const object *) this);
}

vector3 ray_cast::get_cast_to() const {
	return ___godot_icall_Vector3(___mb.mb_get_cast_to, (const object *) this);
}

object *ray_cast::get_collider() const {
	return (object *) ___godot_icall_Object(___mb.mb_get_collider, (const object *) this);
}

int64_t ray_cast::get_collider_shape() const {
	return ___godot_icall_int(___mb.mb_get_collider_shape, (const object *) this);
}

int64_t ray_cast::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool ray_cast::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

vector3 ray_cast::get_collision_normal() const {
	return ___godot_icall_Vector3(___mb.mb_get_collision_normal, (const object *) this);
}

vector3 ray_cast::get_collision_point() const {
	return ___godot_icall_Vector3(___mb.mb_get_collision_point, (const object *) this);
}

color ray_cast::get_debug_shape_custom_color() const {
	return ___godot_icall_Color(___mb.mb_get_debug_shape_custom_color, (const object *) this);
}

int64_t ray_cast::get_debug_shape_thickness() const {
	return ___godot_icall_int(___mb.mb_get_debug_shape_thickness, (const object *) this);
}

bool ray_cast::get_exclude_parent_body() const {
	return ___godot_icall_bool(___mb.mb_get_exclude_parent_body, (const object *) this);
}

bool ray_cast::is_collide_with_areas_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_collide_with_areas_enabled, (const object *) this);
}

bool ray_cast::is_collide_with_bodies_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_collide_with_bodies_enabled, (const object *) this);
}

bool ray_cast::is_colliding() const {
	return ___godot_icall_bool(___mb.mb_is_colliding, (const object *) this);
}

bool ray_cast::is_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_enabled, (const object *) this);
}

void ray_cast::remove_exception(const object *node_) {
	___godot_icall_void_Object(___mb.mb_remove_exception, (const object *) this, node_);
}

void ray_cast::remove_exception_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_remove_exception_rid, (const object *) this, rid_);
}

void ray_cast::set_cast_to(const vector3 local_point) {
	___godot_icall_void_Vector3(___mb.mb_set_cast_to, (const object *) this, local_point);
}

void ray_cast::set_collide_with_areas(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_collide_with_areas, (const object *) this, enable);
}

void ray_cast::set_collide_with_bodies(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_collide_with_bodies, (const object *) this, enable);
}

void ray_cast::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void ray_cast::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void ray_cast::set_debug_shape_custom_color(const color debug_shape_custom_color) {
	___godot_icall_void_Color(___mb.mb_set_debug_shape_custom_color, (const object *) this, debug_shape_custom_color);
}

void ray_cast::set_debug_shape_thickness(const int64_t debug_shape_thickness) {
	___godot_icall_void_int(___mb.mb_set_debug_shape_thickness, (const object *) this, debug_shape_thickness);
}

void ray_cast::set_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_enabled, (const object *) this, enabled);
}

void ray_cast::set_exclude_parent_body(const bool mask) {
	___godot_icall_void_bool(___mb.mb_set_exclude_parent_body, (const object *) this, mask);
}

}