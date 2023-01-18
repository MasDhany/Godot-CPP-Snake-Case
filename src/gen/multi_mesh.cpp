#include "multi_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"


namespace gd {


multi_mesh::___method_bindings multi_mesh::___mb = {};

void *multi_mesh::_detail_class_tag = nullptr;

void multi_mesh::___init_method_bindings() {
	___mb.mb__get_color_array = gd::api->godot_method_bind_get_method("MultiMesh", "_get_color_array");
	___mb.mb__get_custom_data_array = gd::api->godot_method_bind_get_method("MultiMesh", "_get_custom_data_array");
	___mb.mb__get_transform_2d_array = gd::api->godot_method_bind_get_method("MultiMesh", "_get_transform_2d_array");
	___mb.mb__get_transform_array = gd::api->godot_method_bind_get_method("MultiMesh", "_get_transform_array");
	___mb.mb__set_color_array = gd::api->godot_method_bind_get_method("MultiMesh", "_set_color_array");
	___mb.mb__set_custom_data_array = gd::api->godot_method_bind_get_method("MultiMesh", "_set_custom_data_array");
	___mb.mb__set_transform_2d_array = gd::api->godot_method_bind_get_method("MultiMesh", "_set_transform_2d_array");
	___mb.mb__set_transform_array = gd::api->godot_method_bind_get_method("MultiMesh", "_set_transform_array");
	___mb.mb_get_aabb = gd::api->godot_method_bind_get_method("MultiMesh", "get_aabb");
	___mb.mb_get_color_format = gd::api->godot_method_bind_get_method("MultiMesh", "get_color_format");
	___mb.mb_get_custom_data_format = gd::api->godot_method_bind_get_method("MultiMesh", "get_custom_data_format");
	___mb.mb_get_instance_color = gd::api->godot_method_bind_get_method("MultiMesh", "get_instance_color");
	___mb.mb_get_instance_count = gd::api->godot_method_bind_get_method("MultiMesh", "get_instance_count");
	___mb.mb_get_instance_custom_data = gd::api->godot_method_bind_get_method("MultiMesh", "get_instance_custom_data");
	___mb.mb_get_instance_transform = gd::api->godot_method_bind_get_method("MultiMesh", "get_instance_transform");
	___mb.mb_get_instance_transform_2d = gd::api->godot_method_bind_get_method("MultiMesh", "get_instance_transform_2d");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("MultiMesh", "get_mesh");
	___mb.mb_get_physics_interpolation_quality = gd::api->godot_method_bind_get_method("MultiMesh", "get_physics_interpolation_quality");
	___mb.mb_get_transform_format = gd::api->godot_method_bind_get_method("MultiMesh", "get_transform_format");
	___mb.mb_get_visible_instance_count = gd::api->godot_method_bind_get_method("MultiMesh", "get_visible_instance_count");
	___mb.mb_reset_instance_physics_interpolation = gd::api->godot_method_bind_get_method("MultiMesh", "reset_instance_physics_interpolation");
	___mb.mb_set_as_bulk_array = gd::api->godot_method_bind_get_method("MultiMesh", "set_as_bulk_array");
	___mb.mb_set_as_bulk_array_interpolated = gd::api->godot_method_bind_get_method("MultiMesh", "set_as_bulk_array_interpolated");
	___mb.mb_set_color_format = gd::api->godot_method_bind_get_method("MultiMesh", "set_color_format");
	___mb.mb_set_custom_data_format = gd::api->godot_method_bind_get_method("MultiMesh", "set_custom_data_format");
	___mb.mb_set_instance_color = gd::api->godot_method_bind_get_method("MultiMesh", "set_instance_color");
	___mb.mb_set_instance_count = gd::api->godot_method_bind_get_method("MultiMesh", "set_instance_count");
	___mb.mb_set_instance_custom_data = gd::api->godot_method_bind_get_method("MultiMesh", "set_instance_custom_data");
	___mb.mb_set_instance_transform = gd::api->godot_method_bind_get_method("MultiMesh", "set_instance_transform");
	___mb.mb_set_instance_transform_2d = gd::api->godot_method_bind_get_method("MultiMesh", "set_instance_transform_2d");
	___mb.mb_set_mesh = gd::api->godot_method_bind_get_method("MultiMesh", "set_mesh");
	___mb.mb_set_physics_interpolation_quality = gd::api->godot_method_bind_get_method("MultiMesh", "set_physics_interpolation_quality");
	___mb.mb_set_transform_format = gd::api->godot_method_bind_get_method("MultiMesh", "set_transform_format");
	___mb.mb_set_visible_instance_count = gd::api->godot_method_bind_get_method("MultiMesh", "set_visible_instance_count");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "MultiMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

multi_mesh *multi_mesh::_new()
{
	return (multi_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"MultiMesh")());
}
pool_color_array multi_mesh::_get_color_array() const {
	return ___godot_icall_PoolColorArray(___mb.mb__get_color_array, (const object *) this);
}

pool_color_array multi_mesh::_get_custom_data_array() const {
	return ___godot_icall_PoolColorArray(___mb.mb__get_custom_data_array, (const object *) this);
}

pool_vector2_array multi_mesh::_get_transform_2d_array() const {
	return ___godot_icall_PoolVector2Array(___mb.mb__get_transform_2d_array, (const object *) this);
}

pool_vector3_array multi_mesh::_get_transform_array() const {
	return ___godot_icall_PoolVector3Array(___mb.mb__get_transform_array, (const object *) this);
}

void multi_mesh::_set_color_array(const pool_color_array arg0) {
	___godot_icall_void_PoolColorArray(___mb.mb__set_color_array, (const object *) this, arg0);
}

void multi_mesh::_set_custom_data_array(const pool_color_array arg0) {
	___godot_icall_void_PoolColorArray(___mb.mb__set_custom_data_array, (const object *) this, arg0);
}

void multi_mesh::_set_transform_2d_array(const pool_vector2_array arg0) {
	___godot_icall_void_PoolVector2Array(___mb.mb__set_transform_2d_array, (const object *) this, arg0);
}

void multi_mesh::_set_transform_array(const pool_vector3_array arg0) {
	___godot_icall_void_PoolVector3Array(___mb.mb__set_transform_array, (const object *) this, arg0);
}

aabb multi_mesh::get_aabb() const {
	return ___godot_icall_AABB(___mb.mb_get_aabb, (const object *) this);
}

multi_mesh::ColorFormat multi_mesh::get_color_format() const {
	return (multi_mesh::ColorFormat) ___godot_icall_int(___mb.mb_get_color_format, (const object *) this);
}

multi_mesh::CustomDataFormat multi_mesh::get_custom_data_format() const {
	return (multi_mesh::CustomDataFormat) ___godot_icall_int(___mb.mb_get_custom_data_format, (const object *) this);
}

color multi_mesh::get_instance_color(const int64_t instance) const {
	return ___godot_icall_Color_int(___mb.mb_get_instance_color, (const object *) this, instance);
}

int64_t multi_mesh::get_instance_count() const {
	return ___godot_icall_int(___mb.mb_get_instance_count, (const object *) this);
}

color multi_mesh::get_instance_custom_data(const int64_t instance) const {
	return ___godot_icall_Color_int(___mb.mb_get_instance_custom_data, (const object *) this, instance);
}

transform multi_mesh::get_instance_transform(const int64_t instance) const {
	return ___godot_icall_Transform_int(___mb.mb_get_instance_transform, (const object *) this, instance);
}

transform2d multi_mesh::get_instance_transform_2d(const int64_t instance) const {
	return ___godot_icall_Transform2D_int(___mb.mb_get_instance_transform_2d, (const object *) this, instance);
}

ref<mesh> multi_mesh::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

multi_mesh::PhysicsInterpolationQuality multi_mesh::get_physics_interpolation_quality() const {
	return (multi_mesh::PhysicsInterpolationQuality) ___godot_icall_int(___mb.mb_get_physics_interpolation_quality, (const object *) this);
}

multi_mesh::TransformFormat multi_mesh::get_transform_format() const {
	return (multi_mesh::TransformFormat) ___godot_icall_int(___mb.mb_get_transform_format, (const object *) this);
}

int64_t multi_mesh::get_visible_instance_count() const {
	return ___godot_icall_int(___mb.mb_get_visible_instance_count, (const object *) this);
}

void multi_mesh::reset_instance_physics_interpolation(const int64_t instance) {
	___godot_icall_void_int(___mb.mb_reset_instance_physics_interpolation, (const object *) this, instance);
}

void multi_mesh::set_as_bulk_array(const pool_real_array array_) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_as_bulk_array, (const object *) this, array_);
}

void multi_mesh::set_as_bulk_array_interpolated(const pool_real_array array_current, const pool_real_array array_previous) {
	___godot_icall_void_PoolRealArray_PoolRealArray(___mb.mb_set_as_bulk_array_interpolated, (const object *) this, array_current, array_previous);
}

void multi_mesh::set_color_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_color_format, (const object *) this, format);
}

void multi_mesh::set_custom_data_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_custom_data_format, (const object *) this, format);
}

void multi_mesh::set_instance_color(const int64_t instance, const color color_) {
	___godot_icall_void_int_Color(___mb.mb_set_instance_color, (const object *) this, instance, color_);
}

void multi_mesh::set_instance_count(const int64_t count) {
	___godot_icall_void_int(___mb.mb_set_instance_count, (const object *) this, count);
}

void multi_mesh::set_instance_custom_data(const int64_t instance, const color custom_data) {
	___godot_icall_void_int_Color(___mb.mb_set_instance_custom_data, (const object *) this, instance, custom_data);
}

void multi_mesh::set_instance_transform(const int64_t instance, const transform transform_) {
	___godot_icall_void_int_Transform(___mb.mb_set_instance_transform, (const object *) this, instance, transform_);
}

void multi_mesh::set_instance_transform_2d(const int64_t instance, const transform2d transform_) {
	___godot_icall_void_int_Transform2D(___mb.mb_set_instance_transform_2d, (const object *) this, instance, transform_);
}

void multi_mesh::set_mesh(const ref<mesh> mesh_) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const object *) this, mesh_.ptr());
}

void multi_mesh::set_physics_interpolation_quality(const int64_t quality) {
	___godot_icall_void_int(___mb.mb_set_physics_interpolation_quality, (const object *) this, quality);
}

void multi_mesh::set_transform_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_transform_format, (const object *) this, format);
}

void multi_mesh::set_visible_instance_count(const int64_t count) {
	___godot_icall_void_int(___mb.mb_set_visible_instance_count, (const object *) this, count);
}

}