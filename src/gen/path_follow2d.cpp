#include "path_follow2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


path_follow2d::___method_bindings path_follow2d::___mb = {};

void *path_follow2d::_detail_class_tag = nullptr;

void path_follow2d::___init_method_bindings() {
	___mb.mb_get_cubic_interpolation = gd::api->godot_method_bind_get_method("PathFollow2D", "get_cubic_interpolation");
	___mb.mb_get_h_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "get_h_offset");
	___mb.mb_get_lookahead = gd::api->godot_method_bind_get_method("PathFollow2D", "get_lookahead");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "get_offset");
	___mb.mb_get_unit_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "get_unit_offset");
	___mb.mb_get_v_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "get_v_offset");
	___mb.mb_has_loop = gd::api->godot_method_bind_get_method("PathFollow2D", "has_loop");
	___mb.mb_is_rotating = gd::api->godot_method_bind_get_method("PathFollow2D", "is_rotating");
	___mb.mb_set_cubic_interpolation = gd::api->godot_method_bind_get_method("PathFollow2D", "set_cubic_interpolation");
	___mb.mb_set_h_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "set_h_offset");
	___mb.mb_set_lookahead = gd::api->godot_method_bind_get_method("PathFollow2D", "set_lookahead");
	___mb.mb_set_loop = gd::api->godot_method_bind_get_method("PathFollow2D", "set_loop");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "set_offset");
	___mb.mb_set_rotate = gd::api->godot_method_bind_get_method("PathFollow2D", "set_rotate");
	___mb.mb_set_unit_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "set_unit_offset");
	___mb.mb_set_v_offset = gd::api->godot_method_bind_get_method("PathFollow2D", "set_v_offset");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PathFollow2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

path_follow2d *path_follow2d::_new()
{
	return (path_follow2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PathFollow2D")());
}
bool path_follow2d::get_cubic_interpolation() const {
	return ___godot_icall_bool(___mb.mb_get_cubic_interpolation, (const object *) this);
}

real_t path_follow2d::get_h_offset() const {
	return ___godot_icall_float(___mb.mb_get_h_offset, (const object *) this);
}

real_t path_follow2d::get_lookahead() const {
	return ___godot_icall_float(___mb.mb_get_lookahead, (const object *) this);
}

real_t path_follow2d::get_offset() const {
	return ___godot_icall_float(___mb.mb_get_offset, (const object *) this);
}

real_t path_follow2d::get_unit_offset() const {
	return ___godot_icall_float(___mb.mb_get_unit_offset, (const object *) this);
}

real_t path_follow2d::get_v_offset() const {
	return ___godot_icall_float(___mb.mb_get_v_offset, (const object *) this);
}

bool path_follow2d::has_loop() const {
	return ___godot_icall_bool(___mb.mb_has_loop, (const object *) this);
}

bool path_follow2d::is_rotating() const {
	return ___godot_icall_bool(___mb.mb_is_rotating, (const object *) this);
}

void path_follow2d::set_cubic_interpolation(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_cubic_interpolation, (const object *) this, enable);
}

void path_follow2d::set_h_offset(const real_t h_offset) {
	___godot_icall_void_float(___mb.mb_set_h_offset, (const object *) this, h_offset);
}

void path_follow2d::set_lookahead(const real_t lookahead) {
	___godot_icall_void_float(___mb.mb_set_lookahead, (const object *) this, lookahead);
}

void path_follow2d::set_loop(const bool loop) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const object *) this, loop);
}

void path_follow2d::set_offset(const real_t offset) {
	___godot_icall_void_float(___mb.mb_set_offset, (const object *) this, offset);
}

void path_follow2d::set_rotate(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_rotate, (const object *) this, enable);
}

void path_follow2d::set_unit_offset(const real_t unit_offset) {
	___godot_icall_void_float(___mb.mb_set_unit_offset, (const object *) this, unit_offset);
}

void path_follow2d::set_v_offset(const real_t v_offset) {
	___godot_icall_void_float(___mb.mb_set_v_offset, (const object *) this, v_offset);
}

}