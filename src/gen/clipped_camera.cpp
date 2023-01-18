#include "clipped_camera.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


clipped_camera::___method_bindings clipped_camera::___mb = {};

void *clipped_camera::_detail_class_tag = nullptr;

void clipped_camera::___init_method_bindings() {
	___mb.mb_add_exception = gd::api->godot_method_bind_get_method("ClippedCamera", "add_exception");
	___mb.mb_add_exception_rid = gd::api->godot_method_bind_get_method("ClippedCamera", "add_exception_rid");
	___mb.mb_clear_exceptions = gd::api->godot_method_bind_get_method("ClippedCamera", "clear_exceptions");
	___mb.mb_get_clip_offset = gd::api->godot_method_bind_get_method("ClippedCamera", "get_clip_offset");
	___mb.mb_get_collision_mask = gd::api->godot_method_bind_get_method("ClippedCamera", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = gd::api->godot_method_bind_get_method("ClippedCamera", "get_collision_mask_bit");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("ClippedCamera", "get_margin");
	___mb.mb_get_process_mode = gd::api->godot_method_bind_get_method("ClippedCamera", "get_process_mode");
	___mb.mb_is_clip_to_areas_enabled = gd::api->godot_method_bind_get_method("ClippedCamera", "is_clip_to_areas_enabled");
	___mb.mb_is_clip_to_bodies_enabled = gd::api->godot_method_bind_get_method("ClippedCamera", "is_clip_to_bodies_enabled");
	___mb.mb_remove_exception = gd::api->godot_method_bind_get_method("ClippedCamera", "remove_exception");
	___mb.mb_remove_exception_rid = gd::api->godot_method_bind_get_method("ClippedCamera", "remove_exception_rid");
	___mb.mb_set_clip_to_areas = gd::api->godot_method_bind_get_method("ClippedCamera", "set_clip_to_areas");
	___mb.mb_set_clip_to_bodies = gd::api->godot_method_bind_get_method("ClippedCamera", "set_clip_to_bodies");
	___mb.mb_set_collision_mask = gd::api->godot_method_bind_get_method("ClippedCamera", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = gd::api->godot_method_bind_get_method("ClippedCamera", "set_collision_mask_bit");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("ClippedCamera", "set_margin");
	___mb.mb_set_process_mode = gd::api->godot_method_bind_get_method("ClippedCamera", "set_process_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ClippedCamera");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

clipped_camera *clipped_camera::_new()
{
	return (clipped_camera *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ClippedCamera")());
}
void clipped_camera::add_exception(const object *node_) {
	___godot_icall_void_Object(___mb.mb_add_exception, (const object *) this, node_);
}

void clipped_camera::add_exception_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_add_exception_rid, (const object *) this, rid_);
}

void clipped_camera::clear_exceptions() {
	___godot_icall_void(___mb.mb_clear_exceptions, (const object *) this);
}

real_t clipped_camera::get_clip_offset() const {
	return ___godot_icall_float(___mb.mb_get_clip_offset, (const object *) this);
}

int64_t clipped_camera::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const object *) this);
}

bool clipped_camera::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const object *) this, bit);
}

real_t clipped_camera::get_margin() const {
	return ___godot_icall_float(___mb.mb_get_margin, (const object *) this);
}

clipped_camera::ProcessMode clipped_camera::get_process_mode() const {
	return (clipped_camera::ProcessMode) ___godot_icall_int(___mb.mb_get_process_mode, (const object *) this);
}

bool clipped_camera::is_clip_to_areas_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_clip_to_areas_enabled, (const object *) this);
}

bool clipped_camera::is_clip_to_bodies_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_clip_to_bodies_enabled, (const object *) this);
}

void clipped_camera::remove_exception(const object *node_) {
	___godot_icall_void_Object(___mb.mb_remove_exception, (const object *) this, node_);
}

void clipped_camera::remove_exception_rid(const rid rid_) {
	___godot_icall_void_RID(___mb.mb_remove_exception_rid, (const object *) this, rid_);
}

void clipped_camera::set_clip_to_areas(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clip_to_areas, (const object *) this, enable);
}

void clipped_camera::set_clip_to_bodies(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clip_to_bodies, (const object *) this, enable);
}

void clipped_camera::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const object *) this, mask);
}

void clipped_camera::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const object *) this, bit, value);
}

void clipped_camera::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const object *) this, margin);
}

void clipped_camera::set_process_mode(const int64_t process_mode) {
	___godot_icall_void_int(___mb.mb_set_process_mode, (const object *) this, process_mode);
}

}