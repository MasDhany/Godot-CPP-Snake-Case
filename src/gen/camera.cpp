#include "camera.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "environment.hpp"


namespace gd {


camera::___method_bindings camera::___mb = {};

void *camera::_detail_class_tag = nullptr;

void camera::___init_method_bindings() {
	___mb.mb_clear_current = gd::api->godot_method_bind_get_method("Camera", "clear_current");
	___mb.mb_get_camera_rid = gd::api->godot_method_bind_get_method("Camera", "get_camera_rid");
	___mb.mb_get_camera_transform = gd::api->godot_method_bind_get_method("Camera", "get_camera_transform");
	___mb.mb_get_cull_mask = gd::api->godot_method_bind_get_method("Camera", "get_cull_mask");
	___mb.mb_get_cull_mask_bit = gd::api->godot_method_bind_get_method("Camera", "get_cull_mask_bit");
	___mb.mb_get_doppler_tracking = gd::api->godot_method_bind_get_method("Camera", "get_doppler_tracking");
	___mb.mb_get_environment = gd::api->godot_method_bind_get_method("Camera", "get_environment");
	___mb.mb_get_fov = gd::api->godot_method_bind_get_method("Camera", "get_fov");
	___mb.mb_get_frustum = gd::api->godot_method_bind_get_method("Camera", "get_frustum");
	___mb.mb_get_frustum_offset = gd::api->godot_method_bind_get_method("Camera", "get_frustum_offset");
	___mb.mb_get_h_offset = gd::api->godot_method_bind_get_method("Camera", "get_h_offset");
	___mb.mb_get_keep_aspect_mode = gd::api->godot_method_bind_get_method("Camera", "get_keep_aspect_mode");
	___mb.mb_get_projection = gd::api->godot_method_bind_get_method("Camera", "get_projection");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("Camera", "get_size");
	___mb.mb_get_v_offset = gd::api->godot_method_bind_get_method("Camera", "get_v_offset");
	___mb.mb_get_zfar = gd::api->godot_method_bind_get_method("Camera", "get_zfar");
	___mb.mb_get_znear = gd::api->godot_method_bind_get_method("Camera", "get_znear");
	___mb.mb_is_current = gd::api->godot_method_bind_get_method("Camera", "is_current");
	___mb.mb_is_position_behind = gd::api->godot_method_bind_get_method("Camera", "is_position_behind");
	___mb.mb_make_current = gd::api->godot_method_bind_get_method("Camera", "make_current");
	___mb.mb_project_local_ray_normal = gd::api->godot_method_bind_get_method("Camera", "project_local_ray_normal");
	___mb.mb_project_position = gd::api->godot_method_bind_get_method("Camera", "project_position");
	___mb.mb_project_ray_normal = gd::api->godot_method_bind_get_method("Camera", "project_ray_normal");
	___mb.mb_project_ray_origin = gd::api->godot_method_bind_get_method("Camera", "project_ray_origin");
	___mb.mb_set_cull_mask = gd::api->godot_method_bind_get_method("Camera", "set_cull_mask");
	___mb.mb_set_cull_mask_bit = gd::api->godot_method_bind_get_method("Camera", "set_cull_mask_bit");
	___mb.mb_set_current = gd::api->godot_method_bind_get_method("Camera", "set_current");
	___mb.mb_set_doppler_tracking = gd::api->godot_method_bind_get_method("Camera", "set_doppler_tracking");
	___mb.mb_set_environment = gd::api->godot_method_bind_get_method("Camera", "set_environment");
	___mb.mb_set_fov = gd::api->godot_method_bind_get_method("Camera", "set_fov");
	___mb.mb_set_frustum = gd::api->godot_method_bind_get_method("Camera", "set_frustum");
	___mb.mb_set_frustum_offset = gd::api->godot_method_bind_get_method("Camera", "set_frustum_offset");
	___mb.mb_set_h_offset = gd::api->godot_method_bind_get_method("Camera", "set_h_offset");
	___mb.mb_set_keep_aspect_mode = gd::api->godot_method_bind_get_method("Camera", "set_keep_aspect_mode");
	___mb.mb_set_orthogonal = gd::api->godot_method_bind_get_method("Camera", "set_orthogonal");
	___mb.mb_set_perspective = gd::api->godot_method_bind_get_method("Camera", "set_perspective");
	___mb.mb_set_projection = gd::api->godot_method_bind_get_method("Camera", "set_projection");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("Camera", "set_size");
	___mb.mb_set_v_offset = gd::api->godot_method_bind_get_method("Camera", "set_v_offset");
	___mb.mb_set_zfar = gd::api->godot_method_bind_get_method("Camera", "set_zfar");
	___mb.mb_set_znear = gd::api->godot_method_bind_get_method("Camera", "set_znear");
	___mb.mb_unproject_position = gd::api->godot_method_bind_get_method("Camera", "unproject_position");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Camera");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

camera *camera::_new()
{
	return (camera *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Camera")());
}
void camera::clear_current(const bool enable_next) {
	___godot_icall_void_bool(___mb.mb_clear_current, (const object *) this, enable_next);
}

rid camera::get_camera_rid() const {
	return ___godot_icall_RID(___mb.mb_get_camera_rid, (const object *) this);
}

transform camera::get_camera_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_camera_transform, (const object *) this);
}

int64_t camera::get_cull_mask() const {
	return ___godot_icall_int(___mb.mb_get_cull_mask, (const object *) this);
}

bool camera::get_cull_mask_bit(const int64_t layer) const {
	return ___godot_icall_bool_int(___mb.mb_get_cull_mask_bit, (const object *) this, layer);
}

camera::DopplerTracking camera::get_doppler_tracking() const {
	return (camera::DopplerTracking) ___godot_icall_int(___mb.mb_get_doppler_tracking, (const object *) this);
}

ref<environment> camera::get_environment() const {
	return ref<environment>::__internal_constructor(___godot_icall_Object(___mb.mb_get_environment, (const object *) this));
}

real_t camera::get_fov() const {
	return ___godot_icall_float(___mb.mb_get_fov, (const object *) this);
}

array camera::get_frustum() const {
	return ___godot_icall_Array(___mb.mb_get_frustum, (const object *) this);
}

vector2 camera::get_frustum_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_frustum_offset, (const object *) this);
}

real_t camera::get_h_offset() const {
	return ___godot_icall_float(___mb.mb_get_h_offset, (const object *) this);
}

camera::KeepAspect camera::get_keep_aspect_mode() const {
	return (camera::KeepAspect) ___godot_icall_int(___mb.mb_get_keep_aspect_mode, (const object *) this);
}

camera::Projection camera::get_projection() const {
	return (camera::Projection) ___godot_icall_int(___mb.mb_get_projection, (const object *) this);
}

real_t camera::get_size() const {
	return ___godot_icall_float(___mb.mb_get_size, (const object *) this);
}

real_t camera::get_v_offset() const {
	return ___godot_icall_float(___mb.mb_get_v_offset, (const object *) this);
}

real_t camera::get_zfar() const {
	return ___godot_icall_float(___mb.mb_get_zfar, (const object *) this);
}

real_t camera::get_znear() const {
	return ___godot_icall_float(___mb.mb_get_znear, (const object *) this);
}

bool camera::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const object *) this);
}

bool camera::is_position_behind(const vector3 world_point) const {
	return ___godot_icall_bool_Vector3(___mb.mb_is_position_behind, (const object *) this, world_point);
}

void camera::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const object *) this);
}

vector3 camera::project_local_ray_normal(const vector2 screen_point) const {
	return ___godot_icall_Vector3_Vector2(___mb.mb_project_local_ray_normal, (const object *) this, screen_point);
}

vector3 camera::project_position(const vector2 screen_point, const real_t z_depth) const {
	return ___godot_icall_Vector3_Vector2_float(___mb.mb_project_position, (const object *) this, screen_point, z_depth);
}

vector3 camera::project_ray_normal(const vector2 screen_point) const {
	return ___godot_icall_Vector3_Vector2(___mb.mb_project_ray_normal, (const object *) this, screen_point);
}

vector3 camera::project_ray_origin(const vector2 screen_point) const {
	return ___godot_icall_Vector3_Vector2(___mb.mb_project_ray_origin, (const object *) this, screen_point);
}

void camera::set_cull_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_cull_mask, (const object *) this, mask);
}

void camera::set_cull_mask_bit(const int64_t layer, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_cull_mask_bit, (const object *) this, layer, enable);
}

void camera::set_current(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_current, (const object *) this, enable);
}

void camera::set_doppler_tracking(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_doppler_tracking, (const object *) this, mode);
}

void camera::set_environment(const ref<environment> env) {
	___godot_icall_void_Object(___mb.mb_set_environment, (const object *) this, env.ptr());
}

void camera::set_fov(const real_t fov) {
	___godot_icall_void_float(___mb.mb_set_fov, (const object *) this, fov);
}

void camera::set_frustum(const real_t size, const vector2 offset, const real_t z_near, const real_t z_far) {
	___godot_icall_void_float_Vector2_float_float(___mb.mb_set_frustum, (const object *) this, size, offset, z_near, z_far);
}

void camera::set_frustum_offset(const vector2 frustum_offset) {
	___godot_icall_void_Vector2(___mb.mb_set_frustum_offset, (const object *) this, frustum_offset);
}

void camera::set_h_offset(const real_t ofs) {
	___godot_icall_void_float(___mb.mb_set_h_offset, (const object *) this, ofs);
}

void camera::set_keep_aspect_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_keep_aspect_mode, (const object *) this, mode);
}

void camera::set_orthogonal(const real_t size, const real_t z_near, const real_t z_far) {
	___godot_icall_void_float_float_float(___mb.mb_set_orthogonal, (const object *) this, size, z_near, z_far);
}

void camera::set_perspective(const real_t fov, const real_t z_near, const real_t z_far) {
	___godot_icall_void_float_float_float(___mb.mb_set_perspective, (const object *) this, fov, z_near, z_far);
}

void camera::set_projection(const int64_t projection) {
	___godot_icall_void_int(___mb.mb_set_projection, (const object *) this, projection);
}

void camera::set_size(const real_t size) {
	___godot_icall_void_float(___mb.mb_set_size, (const object *) this, size);
}

void camera::set_v_offset(const real_t ofs) {
	___godot_icall_void_float(___mb.mb_set_v_offset, (const object *) this, ofs);
}

void camera::set_zfar(const real_t zfar) {
	___godot_icall_void_float(___mb.mb_set_zfar, (const object *) this, zfar);
}

void camera::set_znear(const real_t znear) {
	___godot_icall_void_float(___mb.mb_set_znear, (const object *) this, znear);
}

vector2 camera::unproject_position(const vector3 world_point) const {
	return ___godot_icall_Vector2_Vector3(___mb.mb_unproject_position, (const object *) this, world_point);
}

}