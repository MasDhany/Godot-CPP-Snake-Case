#include "parallax_background.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


parallax_background::___method_bindings parallax_background::___mb = {};

void *parallax_background::_detail_class_tag = nullptr;

void parallax_background::___init_method_bindings() {
	___mb.mb__camera_moved = gd::api->godot_method_bind_get_method("ParallaxBackground", "_camera_moved");
	___mb.mb_get_limit_begin = gd::api->godot_method_bind_get_method("ParallaxBackground", "get_limit_begin");
	___mb.mb_get_limit_end = gd::api->godot_method_bind_get_method("ParallaxBackground", "get_limit_end");
	___mb.mb_get_scroll_base_offset = gd::api->godot_method_bind_get_method("ParallaxBackground", "get_scroll_base_offset");
	___mb.mb_get_scroll_base_scale = gd::api->godot_method_bind_get_method("ParallaxBackground", "get_scroll_base_scale");
	___mb.mb_get_scroll_offset = gd::api->godot_method_bind_get_method("ParallaxBackground", "get_scroll_offset");
	___mb.mb_is_ignore_camera_zoom = gd::api->godot_method_bind_get_method("ParallaxBackground", "is_ignore_camera_zoom");
	___mb.mb_set_ignore_camera_zoom = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_ignore_camera_zoom");
	___mb.mb_set_limit_begin = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_limit_begin");
	___mb.mb_set_limit_end = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_limit_end");
	___mb.mb_set_scroll_base_offset = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_scroll_base_offset");
	___mb.mb_set_scroll_base_scale = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_scroll_base_scale");
	___mb.mb_set_scroll_offset = gd::api->godot_method_bind_get_method("ParallaxBackground", "set_scroll_offset");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ParallaxBackground");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

parallax_background *parallax_background::_new()
{
	return (parallax_background *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ParallaxBackground")());
}
void parallax_background::_camera_moved(const transform2d arg0, const vector2 arg1) {
	___godot_icall_void_Transform2D_Vector2(___mb.mb__camera_moved, (const object *) this, arg0, arg1);
}

vector2 parallax_background::get_limit_begin() const {
	return ___godot_icall_Vector2(___mb.mb_get_limit_begin, (const object *) this);
}

vector2 parallax_background::get_limit_end() const {
	return ___godot_icall_Vector2(___mb.mb_get_limit_end, (const object *) this);
}

vector2 parallax_background::get_scroll_base_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_scroll_base_offset, (const object *) this);
}

vector2 parallax_background::get_scroll_base_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_scroll_base_scale, (const object *) this);
}

vector2 parallax_background::get_scroll_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_scroll_offset, (const object *) this);
}

bool parallax_background::is_ignore_camera_zoom() {
	return ___godot_icall_bool(___mb.mb_is_ignore_camera_zoom, (const object *) this);
}

void parallax_background::set_ignore_camera_zoom(const bool ignore) {
	___godot_icall_void_bool(___mb.mb_set_ignore_camera_zoom, (const object *) this, ignore);
}

void parallax_background::set_limit_begin(const vector2 ofs) {
	___godot_icall_void_Vector2(___mb.mb_set_limit_begin, (const object *) this, ofs);
}

void parallax_background::set_limit_end(const vector2 ofs) {
	___godot_icall_void_Vector2(___mb.mb_set_limit_end, (const object *) this, ofs);
}

void parallax_background::set_scroll_base_offset(const vector2 ofs) {
	___godot_icall_void_Vector2(___mb.mb_set_scroll_base_offset, (const object *) this, ofs);
}

void parallax_background::set_scroll_base_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_scroll_base_scale, (const object *) this, scale);
}

void parallax_background::set_scroll_offset(const vector2 ofs) {
	___godot_icall_void_Vector2(___mb.mb_set_scroll_offset, (const object *) this, ofs);
}

}