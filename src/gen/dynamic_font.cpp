#include "dynamic_font.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "dynamic_font_data.hpp"


namespace gd {


dynamic_font::___method_bindings dynamic_font::___mb = {};

void *dynamic_font::_detail_class_tag = nullptr;

void dynamic_font::___init_method_bindings() {
	___mb.mb_add_fallback = gd::api->godot_method_bind_get_method("DynamicFont", "add_fallback");
	___mb.mb_get_available_chars = gd::api->godot_method_bind_get_method("DynamicFont", "get_available_chars");
	___mb.mb_get_fallback = gd::api->godot_method_bind_get_method("DynamicFont", "get_fallback");
	___mb.mb_get_fallback_count = gd::api->godot_method_bind_get_method("DynamicFont", "get_fallback_count");
	___mb.mb_get_font_data = gd::api->godot_method_bind_get_method("DynamicFont", "get_font_data");
	___mb.mb_get_outline_color = gd::api->godot_method_bind_get_method("DynamicFont", "get_outline_color");
	___mb.mb_get_outline_size = gd::api->godot_method_bind_get_method("DynamicFont", "get_outline_size");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("DynamicFont", "get_size");
	___mb.mb_get_spacing = gd::api->godot_method_bind_get_method("DynamicFont", "get_spacing");
	___mb.mb_get_use_filter = gd::api->godot_method_bind_get_method("DynamicFont", "get_use_filter");
	___mb.mb_get_use_mipmaps = gd::api->godot_method_bind_get_method("DynamicFont", "get_use_mipmaps");
	___mb.mb_remove_fallback = gd::api->godot_method_bind_get_method("DynamicFont", "remove_fallback");
	___mb.mb_set_fallback = gd::api->godot_method_bind_get_method("DynamicFont", "set_fallback");
	___mb.mb_set_font_data = gd::api->godot_method_bind_get_method("DynamicFont", "set_font_data");
	___mb.mb_set_outline_color = gd::api->godot_method_bind_get_method("DynamicFont", "set_outline_color");
	___mb.mb_set_outline_size = gd::api->godot_method_bind_get_method("DynamicFont", "set_outline_size");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("DynamicFont", "set_size");
	___mb.mb_set_spacing = gd::api->godot_method_bind_get_method("DynamicFont", "set_spacing");
	___mb.mb_set_use_filter = gd::api->godot_method_bind_get_method("DynamicFont", "set_use_filter");
	___mb.mb_set_use_mipmaps = gd::api->godot_method_bind_get_method("DynamicFont", "set_use_mipmaps");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "DynamicFont");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dynamic_font *dynamic_font::_new()
{
	return (dynamic_font *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"DynamicFont")());
}
void dynamic_font::add_fallback(const ref<dynamic_font_data> data) {
	___godot_icall_void_Object(___mb.mb_add_fallback, (const object *) this, data.ptr());
}

string dynamic_font::get_available_chars() const {
	return ___godot_icall_String(___mb.mb_get_available_chars, (const object *) this);
}

ref<dynamic_font_data> dynamic_font::get_fallback(const int64_t idx) const {
	return ref<dynamic_font_data>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_fallback, (const object *) this, idx));
}

int64_t dynamic_font::get_fallback_count() const {
	return ___godot_icall_int(___mb.mb_get_fallback_count, (const object *) this);
}

ref<dynamic_font_data> dynamic_font::get_font_data() const {
	return ref<dynamic_font_data>::__internal_constructor(___godot_icall_Object(___mb.mb_get_font_data, (const object *) this));
}

color dynamic_font::get_outline_color() const {
	return ___godot_icall_Color(___mb.mb_get_outline_color, (const object *) this);
}

int64_t dynamic_font::get_outline_size() const {
	return ___godot_icall_int(___mb.mb_get_outline_size, (const object *) this);
}

int64_t dynamic_font::get_size() const {
	return ___godot_icall_int(___mb.mb_get_size, (const object *) this);
}

int64_t dynamic_font::get_spacing(const int64_t type) const {
	return ___godot_icall_int_int(___mb.mb_get_spacing, (const object *) this, type);
}

bool dynamic_font::get_use_filter() const {
	return ___godot_icall_bool(___mb.mb_get_use_filter, (const object *) this);
}

bool dynamic_font::get_use_mipmaps() const {
	return ___godot_icall_bool(___mb.mb_get_use_mipmaps, (const object *) this);
}

void dynamic_font::remove_fallback(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_fallback, (const object *) this, idx);
}

void dynamic_font::set_fallback(const int64_t idx, const ref<dynamic_font_data> data) {
	___godot_icall_void_int_Object(___mb.mb_set_fallback, (const object *) this, idx, data.ptr());
}

void dynamic_font::set_font_data(const ref<dynamic_font_data> data) {
	___godot_icall_void_Object(___mb.mb_set_font_data, (const object *) this, data.ptr());
}

void dynamic_font::set_outline_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_set_outline_color, (const object *) this, color_);
}

void dynamic_font::set_outline_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_outline_size, (const object *) this, size);
}

void dynamic_font::set_size(const int64_t data) {
	___godot_icall_void_int(___mb.mb_set_size, (const object *) this, data);
}

void dynamic_font::set_spacing(const int64_t type, const int64_t value) {
	___godot_icall_void_int_int(___mb.mb_set_spacing, (const object *) this, type, value);
}

void dynamic_font::set_use_filter(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_filter, (const object *) this, enable);
}

void dynamic_font::set_use_mipmaps(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_mipmaps, (const object *) this, enable);
}

}