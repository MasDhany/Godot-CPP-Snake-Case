#include "path_follow.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


path_follow::___method_bindings path_follow::___mb = {};

void *path_follow::_detail_class_tag = nullptr;

void path_follow::___init_method_bindings() {
	___mb.mb_get_cubic_interpolation = gd::api->godot_method_bind_get_method("PathFollow", "get_cubic_interpolation");
	___mb.mb_get_h_offset = gd::api->godot_method_bind_get_method("PathFollow", "get_h_offset");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("PathFollow", "get_offset");
	___mb.mb_get_rotation_mode = gd::api->godot_method_bind_get_method("PathFollow", "get_rotation_mode");
	___mb.mb_get_unit_offset = gd::api->godot_method_bind_get_method("PathFollow", "get_unit_offset");
	___mb.mb_get_v_offset = gd::api->godot_method_bind_get_method("PathFollow", "get_v_offset");
	___mb.mb_has_loop = gd::api->godot_method_bind_get_method("PathFollow", "has_loop");
	___mb.mb_set_cubic_interpolation = gd::api->godot_method_bind_get_method("PathFollow", "set_cubic_interpolation");
	___mb.mb_set_h_offset = gd::api->godot_method_bind_get_method("PathFollow", "set_h_offset");
	___mb.mb_set_loop = gd::api->godot_method_bind_get_method("PathFollow", "set_loop");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("PathFollow", "set_offset");
	___mb.mb_set_rotation_mode = gd::api->godot_method_bind_get_method("PathFollow", "set_rotation_mode");
	___mb.mb_set_unit_offset = gd::api->godot_method_bind_get_method("PathFollow", "set_unit_offset");
	___mb.mb_set_v_offset = gd::api->godot_method_bind_get_method("PathFollow", "set_v_offset");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PathFollow");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

path_follow *path_follow::_new()
{
	return (path_follow *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PathFollow")());
}
bool path_follow::get_cubic_interpolation() const {
	return ___godot_icall_bool(___mb.mb_get_cubic_interpolation, (const object *) this);
}

real_t path_follow::get_h_offset() const {
	return ___godot_icall_float(___mb.mb_get_h_offset, (const object *) this);
}

real_t path_follow::get_offset() const {
	return ___godot_icall_float(___mb.mb_get_offset, (const object *) this);
}

path_follow::RotationMode path_follow::get_rotation_mode() const {
	return (path_follow::RotationMode) ___godot_icall_int(___mb.mb_get_rotation_mode, (const object *) this);
}

real_t path_follow::get_unit_offset() const {
	return ___godot_icall_float(___mb.mb_get_unit_offset, (const object *) this);
}

real_t path_follow::get_v_offset() const {
	return ___godot_icall_float(___mb.mb_get_v_offset, (const object *) this);
}

bool path_follow::has_loop() const {
	return ___godot_icall_bool(___mb.mb_has_loop, (const object *) this);
}

void path_follow::set_cubic_interpolation(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_cubic_interpolation, (const object *) this, enable);
}

void path_follow::set_h_offset(const real_t h_offset) {
	___godot_icall_void_float(___mb.mb_set_h_offset, (const object *) this, h_offset);
}

void path_follow::set_loop(const bool loop) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const object *) this, loop);
}

void path_follow::set_offset(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_offset, (const object *) this, offset);
}

void path_follow::set_rotation_mode(const int64_t rotation_mode) {
	___godot_icall_void_int(___mb.mb_set_rotation_mode, (const object *) this, rotation_mode);
}

void path_follow::set_unit_offset(const real_t unit_offset) {
	___godot_icall_void_float(___mb.mb_set_unit_offset, (const object *) this, unit_offset);
}

void path_follow::set_v_offset(const real_t v_offset) {
	___godot_icall_void_float(___mb.mb_set_v_offset, (const object *) this, v_offset);
}

}