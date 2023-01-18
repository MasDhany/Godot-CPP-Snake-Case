#include "spatial.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "spatial.hpp"
#include "spatial_gizmo.hpp"
#include "world.hpp"


namespace gd {


spatial::___method_bindings spatial::___mb = {};

void *spatial::_detail_class_tag = nullptr;

void spatial::___init_method_bindings() {
	___mb.mb__update_gizmo = gd::api->godot_method_bind_get_method("Spatial", "_update_gizmo");
	___mb.mb_force_update_transform = gd::api->godot_method_bind_get_method("Spatial", "force_update_transform");
	___mb.mb_get_gizmo = gd::api->godot_method_bind_get_method("Spatial", "get_gizmo");
	___mb.mb_get_global_rotation = gd::api->godot_method_bind_get_method("Spatial", "get_global_rotation");
	___mb.mb_get_global_transform = gd::api->godot_method_bind_get_method("Spatial", "get_global_transform");
	___mb.mb_get_global_transform_interpolated = gd::api->godot_method_bind_get_method("Spatial", "get_global_transform_interpolated");
	___mb.mb_get_global_translation = gd::api->godot_method_bind_get_method("Spatial", "get_global_translation");
	___mb.mb_get_parent_spatial = gd::api->godot_method_bind_get_method("Spatial", "get_parent_spatial");
	___mb.mb_get_rotation = gd::api->godot_method_bind_get_method("Spatial", "get_rotation");
	___mb.mb_get_rotation_degrees = gd::api->godot_method_bind_get_method("Spatial", "get_rotation_degrees");
	___mb.mb_get_scale = gd::api->godot_method_bind_get_method("Spatial", "get_scale");
	___mb.mb_get_transform = gd::api->godot_method_bind_get_method("Spatial", "get_transform");
	___mb.mb_get_translation = gd::api->godot_method_bind_get_method("Spatial", "get_translation");
	___mb.mb_get_world = gd::api->godot_method_bind_get_method("Spatial", "get_world");
	___mb.mb_global_rotate = gd::api->godot_method_bind_get_method("Spatial", "global_rotate");
	___mb.mb_global_scale = gd::api->godot_method_bind_get_method("Spatial", "global_scale");
	___mb.mb_global_translate = gd::api->godot_method_bind_get_method("Spatial", "global_translate");
	___mb.mb_hide = gd::api->godot_method_bind_get_method("Spatial", "hide");
	___mb.mb_is_local_transform_notification_enabled = gd::api->godot_method_bind_get_method("Spatial", "is_local_transform_notification_enabled");
	___mb.mb_is_scale_disabled = gd::api->godot_method_bind_get_method("Spatial", "is_scale_disabled");
	___mb.mb_is_set_as_toplevel = gd::api->godot_method_bind_get_method("Spatial", "is_set_as_toplevel");
	___mb.mb_is_transform_notification_enabled = gd::api->godot_method_bind_get_method("Spatial", "is_transform_notification_enabled");
	___mb.mb_is_visible = gd::api->godot_method_bind_get_method("Spatial", "is_visible");
	___mb.mb_is_visible_in_tree = gd::api->godot_method_bind_get_method("Spatial", "is_visible_in_tree");
	___mb.mb_look_at = gd::api->godot_method_bind_get_method("Spatial", "look_at");
	___mb.mb_look_at_from_position = gd::api->godot_method_bind_get_method("Spatial", "look_at_from_position");
	___mb.mb_orthonormalize = gd::api->godot_method_bind_get_method("Spatial", "orthonormalize");
	___mb.mb_rotate = gd::api->godot_method_bind_get_method("Spatial", "rotate");
	___mb.mb_rotate_object_local = gd::api->godot_method_bind_get_method("Spatial", "rotate_object_local");
	___mb.mb_rotate_x = gd::api->godot_method_bind_get_method("Spatial", "rotate_x");
	___mb.mb_rotate_y = gd::api->godot_method_bind_get_method("Spatial", "rotate_y");
	___mb.mb_rotate_z = gd::api->godot_method_bind_get_method("Spatial", "rotate_z");
	___mb.mb_scale_object_local = gd::api->godot_method_bind_get_method("Spatial", "scale_object_local");
	___mb.mb_set_as_toplevel = gd::api->godot_method_bind_get_method("Spatial", "set_as_toplevel");
	___mb.mb_set_disable_scale = gd::api->godot_method_bind_get_method("Spatial", "set_disable_scale");
	___mb.mb_set_gizmo = gd::api->godot_method_bind_get_method("Spatial", "set_gizmo");
	___mb.mb_set_global_rotation = gd::api->godot_method_bind_get_method("Spatial", "set_global_rotation");
	___mb.mb_set_global_transform = gd::api->godot_method_bind_get_method("Spatial", "set_global_transform");
	___mb.mb_set_global_translation = gd::api->godot_method_bind_get_method("Spatial", "set_global_translation");
	___mb.mb_set_identity = gd::api->godot_method_bind_get_method("Spatial", "set_identity");
	___mb.mb_set_ignore_transform_notification = gd::api->godot_method_bind_get_method("Spatial", "set_ignore_transform_notification");
	___mb.mb_set_notify_local_transform = gd::api->godot_method_bind_get_method("Spatial", "set_notify_local_transform");
	___mb.mb_set_notify_transform = gd::api->godot_method_bind_get_method("Spatial", "set_notify_transform");
	___mb.mb_set_rotation = gd::api->godot_method_bind_get_method("Spatial", "set_rotation");
	___mb.mb_set_rotation_degrees = gd::api->godot_method_bind_get_method("Spatial", "set_rotation_degrees");
	___mb.mb_set_scale = gd::api->godot_method_bind_get_method("Spatial", "set_scale");
	___mb.mb_set_transform = gd::api->godot_method_bind_get_method("Spatial", "set_transform");
	___mb.mb_set_translation = gd::api->godot_method_bind_get_method("Spatial", "set_translation");
	___mb.mb_set_visible = gd::api->godot_method_bind_get_method("Spatial", "set_visible");
	___mb.mb_show = gd::api->godot_method_bind_get_method("Spatial", "show");
	___mb.mb_to_global = gd::api->godot_method_bind_get_method("Spatial", "to_global");
	___mb.mb_to_local = gd::api->godot_method_bind_get_method("Spatial", "to_local");
	___mb.mb_translate = gd::api->godot_method_bind_get_method("Spatial", "translate");
	___mb.mb_translate_object_local = gd::api->godot_method_bind_get_method("Spatial", "translate_object_local");
	___mb.mb_update_gizmo = gd::api->godot_method_bind_get_method("Spatial", "update_gizmo");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Spatial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

spatial *spatial::_new()
{
	return (spatial *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Spatial")());
}
void spatial::_update_gizmo() {
	___godot_icall_void(___mb.mb__update_gizmo, (const object *) this);
}

void spatial::force_update_transform() {
	___godot_icall_void(___mb.mb_force_update_transform, (const object *) this);
}

ref<spatial_gizmo> spatial::get_gizmo() const {
	return ref<spatial_gizmo>::__internal_constructor(___godot_icall_Object(___mb.mb_get_gizmo, (const object *) this));
}

vector3 spatial::get_global_rotation() const {
	return ___godot_icall_Vector3(___mb.mb_get_global_rotation, (const object *) this);
}

transform spatial::get_global_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_global_transform, (const object *) this);
}

transform spatial::get_global_transform_interpolated() {
	return ___godot_icall_Transform(___mb.mb_get_global_transform_interpolated, (const object *) this);
}

vector3 spatial::get_global_translation() const {
	return ___godot_icall_Vector3(___mb.mb_get_global_translation, (const object *) this);
}

spatial *spatial::get_parent_spatial() const {
	return (spatial *) ___godot_icall_Object(___mb.mb_get_parent_spatial, (const object *) this);
}

vector3 spatial::get_rotation() const {
	return ___godot_icall_Vector3(___mb.mb_get_rotation, (const object *) this);
}

vector3 spatial::get_rotation_degrees() const {
	return ___godot_icall_Vector3(___mb.mb_get_rotation_degrees, (const object *) this);
}

vector3 spatial::get_scale() const {
	return ___godot_icall_Vector3(___mb.mb_get_scale, (const object *) this);
}

transform spatial::get_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_transform, (const object *) this);
}

vector3 spatial::get_translation() const {
	return ___godot_icall_Vector3(___mb.mb_get_translation, (const object *) this);
}

ref<world> spatial::get_world() const {
	return ref<world>::__internal_constructor(___godot_icall_Object(___mb.mb_get_world, (const object *) this));
}

void spatial::global_rotate(const vector3 axis, const real_t angle) {
	___godot_icall_void_Vector3_float(___mb.mb_global_rotate, (const object *) this, axis, angle);
}

void spatial::global_scale(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_global_scale, (const object *) this, scale);
}

void spatial::global_translate(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_global_translate, (const object *) this, offset);
}

void spatial::hide() {
	___godot_icall_void(___mb.mb_hide, (const object *) this);
}

bool spatial::is_local_transform_notification_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_local_transform_notification_enabled, (const object *) this);
}

bool spatial::is_scale_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_scale_disabled, (const object *) this);
}

bool spatial::is_set_as_toplevel() const {
	return ___godot_icall_bool(___mb.mb_is_set_as_toplevel, (const object *) this);
}

bool spatial::is_transform_notification_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_transform_notification_enabled, (const object *) this);
}

bool spatial::is_visible() const {
	return ___godot_icall_bool(___mb.mb_is_visible, (const object *) this);
}

bool spatial::is_visible_in_tree() const {
	return ___godot_icall_bool(___mb.mb_is_visible_in_tree, (const object *) this);
}

void spatial::look_at(const vector3 target, const vector3 up) {
	___godot_icall_void_Vector3_Vector3(___mb.mb_look_at, (const object *) this, target, up);
}

void spatial::look_at_from_position(const vector3 position, const vector3 target, const vector3 up) {
	___godot_icall_void_Vector3_Vector3_Vector3(___mb.mb_look_at_from_position, (const object *) this, position, target, up);
}

void spatial::orthonormalize() {
	___godot_icall_void(___mb.mb_orthonormalize, (const object *) this);
}

void spatial::rotate(const vector3 axis, const real_t angle) {
	___godot_icall_void_Vector3_float(___mb.mb_rotate, (const object *) this, axis, angle);
}

void spatial::rotate_object_local(const vector3 axis, const real_t angle) {
	___godot_icall_void_Vector3_float(___mb.mb_rotate_object_local, (const object *) this, axis, angle);
}

void spatial::rotate_x(const real_t angle) {
	___godot_icall_void_float(___mb.mb_rotate_x, (const object *) this, angle);
}

void spatial::rotate_y(const real_t angle) {
	___godot_icall_void_float(___mb.mb_rotate_y, (const object *) this, angle);
}

void spatial::rotate_z(const real_t angle) {
	___godot_icall_void_float(___mb.mb_rotate_z, (const object *) this, angle);
}

void spatial::scale_object_local(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_scale_object_local, (const object *) this, scale);
}

void spatial::set_as_toplevel(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_as_toplevel, (const object *) this, enable);
}

void spatial::set_disable_scale(const bool disable) {
	___godot_icall_void_bool(___mb.mb_set_disable_scale, (const object *) this, disable);
}

void spatial::set_gizmo(const ref<spatial_gizmo> gizmo) {
	___godot_icall_void_Object(___mb.mb_set_gizmo, (const object *) this, gizmo.ptr());
}

void spatial::set_global_rotation(const vector3 radians) {
	___godot_icall_void_Vector3(___mb.mb_set_global_rotation, (const object *) this, radians);
}

void spatial::set_global_transform(const transform global) {
	___godot_icall_void_Transform(___mb.mb_set_global_transform, (const object *) this, global);
}

void spatial::set_global_translation(const vector3 translation_) {
	___godot_icall_void_Vector3(___mb.mb_set_global_translation, (const object *) this, translation_);
}

void spatial::set_identity() {
	___godot_icall_void(___mb.mb_set_identity, (const object *) this);
}

void spatial::set_ignore_transform_notification(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_ignore_transform_notification, (const object *) this, enabled);
}

void spatial::set_notify_local_transform(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_notify_local_transform, (const object *) this, enable);
}

void spatial::set_notify_transform(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_notify_transform, (const object *) this, enable);
}

void spatial::set_rotation(const vector3 euler) {
	___godot_icall_void_Vector3(___mb.mb_set_rotation, (const object *) this, euler);
}

void spatial::set_rotation_degrees(const vector3 euler_degrees) {
	___godot_icall_void_Vector3(___mb.mb_set_rotation_degrees, (const object *) this, euler_degrees);
}

void spatial::set_scale(const vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_set_scale, (const object *) this, scale);
}

void spatial::set_transform(const transform local) {
	___godot_icall_void_Transform(___mb.mb_set_transform, (const object *) this, local);
}

void spatial::set_translation(const vector3 translation_) {
	___godot_icall_void_Vector3(___mb.mb_set_translation, (const object *) this, translation_);
}

void spatial::set_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_visible, (const object *) this, visible);
}

void spatial::show() {
	___godot_icall_void(___mb.mb_show, (const object *) this);
}

vector3 spatial::to_global(const vector3 local_point) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_to_global, (const object *) this, local_point);
}

vector3 spatial::to_local(const vector3 global_point) const {
	return ___godot_icall_Vector3_Vector3(___mb.mb_to_local, (const object *) this, global_point);
}

void spatial::translate(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_translate, (const object *) this, offset);
}

void spatial::translate_object_local(const vector3 offset) {
	___godot_icall_void_Vector3(___mb.mb_translate_object_local, (const object *) this, offset);
}

void spatial::update_gizmo() {
	___godot_icall_void(___mb.mb_update_gizmo, (const object *) this);
}

}