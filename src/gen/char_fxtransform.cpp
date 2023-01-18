#include "char_fxtransform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


char_fxtransform::___method_bindings char_fxtransform::___mb = {};

void *char_fxtransform::_detail_class_tag = nullptr;

void char_fxtransform::___init_method_bindings() {
	___mb.mb_get_absolute_index = gd::api->godot_method_bind_get_method("CharFXTransform", "get_absolute_index");
	___mb.mb_get_character = gd::api->godot_method_bind_get_method("CharFXTransform", "get_character");
	___mb.mb_get_color = gd::api->godot_method_bind_get_method("CharFXTransform", "get_color");
	___mb.mb_get_elapsed_time = gd::api->godot_method_bind_get_method("CharFXTransform", "get_elapsed_time");
	___mb.mb_get_environment = gd::api->godot_method_bind_get_method("CharFXTransform", "get_environment");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("CharFXTransform", "get_offset");
	___mb.mb_get_relative_index = gd::api->godot_method_bind_get_method("CharFXTransform", "get_relative_index");
	___mb.mb_is_visible = gd::api->godot_method_bind_get_method("CharFXTransform", "is_visible");
	___mb.mb_set_absolute_index = gd::api->godot_method_bind_get_method("CharFXTransform", "set_absolute_index");
	___mb.mb_set_character = gd::api->godot_method_bind_get_method("CharFXTransform", "set_character");
	___mb.mb_set_color = gd::api->godot_method_bind_get_method("CharFXTransform", "set_color");
	___mb.mb_set_elapsed_time = gd::api->godot_method_bind_get_method("CharFXTransform", "set_elapsed_time");
	___mb.mb_set_environment = gd::api->godot_method_bind_get_method("CharFXTransform", "set_environment");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("CharFXTransform", "set_offset");
	___mb.mb_set_relative_index = gd::api->godot_method_bind_get_method("CharFXTransform", "set_relative_index");
	___mb.mb_set_visibility = gd::api->godot_method_bind_get_method("CharFXTransform", "set_visibility");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CharFXTransform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

char_fxtransform *char_fxtransform::_new()
{
	return (char_fxtransform *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CharFXTransform")());
}
int64_t char_fxtransform::get_absolute_index() {
	return ___godot_icall_int(___mb.mb_get_absolute_index, (const object *) this);
}

int64_t char_fxtransform::get_character() {
	return ___godot_icall_int(___mb.mb_get_character, (const object *) this);
}

color char_fxtransform::get_color() {
	return ___godot_icall_Color(___mb.mb_get_color, (const object *) this);
}

real_t char_fxtransform::get_elapsed_time() {
	return ___godot_icall_float(___mb.mb_get_elapsed_time, (const object *) this);
}

dictionary char_fxtransform::get_environment() {
	return ___godot_icall_Dictionary(___mb.mb_get_environment, (const object *) this);
}

vector2 char_fxtransform::get_offset() {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

int64_t char_fxtransform::get_relative_index() {
	return ___godot_icall_int(___mb.mb_get_relative_index, (const object *) this);
}

bool char_fxtransform::is_visible() {
	return ___godot_icall_bool(___mb.mb_is_visible, (const object *) this);
}

void char_fxtransform::set_absolute_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_absolute_index, (const object *) this, index);
}

void char_fxtransform::set_character(const int64_t character) {
	___godot_icall_void_int(___mb.mb_set_character, (const object *) this, character);
}

void char_fxtransform::set_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_color, (const object *) this, color_);
}

void char_fxtransform::set_elapsed_time(const real_t time_) {
	___godot_icall_void_float(___mb.mb_set_elapsed_time, (const object *) this, time_);
}

void char_fxtransform::set_environment(const dictionary environment_) {
	___godot_icall_void_Dictionary(___mb.mb_set_environment, (const object *) this, environment_);
}

void char_fxtransform::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void char_fxtransform::set_relative_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_relative_index, (const object *) this, index);
}

void char_fxtransform::set_visibility(const bool visibility) {
	___godot_icall_void_bool(___mb.mb_set_visibility, (const object *) this, visibility);
}

}