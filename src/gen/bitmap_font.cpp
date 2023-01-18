#include "bitmap_font.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "bitmap_font.hpp"
#include "texture.hpp"


namespace gd {


bitmap_font::___method_bindings bitmap_font::___mb = {};

void *bitmap_font::_detail_class_tag = nullptr;

void bitmap_font::___init_method_bindings() {
	___mb.mb__get_chars = gd::api->godot_method_bind_get_method("BitmapFont", "_get_chars");
	___mb.mb__get_kernings = gd::api->godot_method_bind_get_method("BitmapFont", "_get_kernings");
	___mb.mb__get_textures = gd::api->godot_method_bind_get_method("BitmapFont", "_get_textures");
	___mb.mb__set_chars = gd::api->godot_method_bind_get_method("BitmapFont", "_set_chars");
	___mb.mb__set_kernings = gd::api->godot_method_bind_get_method("BitmapFont", "_set_kernings");
	___mb.mb__set_textures = gd::api->godot_method_bind_get_method("BitmapFont", "_set_textures");
	___mb.mb_add_char = gd::api->godot_method_bind_get_method("BitmapFont", "add_char");
	___mb.mb_add_kerning_pair = gd::api->godot_method_bind_get_method("BitmapFont", "add_kerning_pair");
	___mb.mb_add_texture = gd::api->godot_method_bind_get_method("BitmapFont", "add_texture");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("BitmapFont", "clear");
	___mb.mb_create_from_fnt = gd::api->godot_method_bind_get_method("BitmapFont", "create_from_fnt");
	___mb.mb_get_fallback = gd::api->godot_method_bind_get_method("BitmapFont", "get_fallback");
	___mb.mb_get_kerning_pair = gd::api->godot_method_bind_get_method("BitmapFont", "get_kerning_pair");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("BitmapFont", "get_texture");
	___mb.mb_get_texture_count = gd::api->godot_method_bind_get_method("BitmapFont", "get_texture_count");
	___mb.mb_set_ascent = gd::api->godot_method_bind_get_method("BitmapFont", "set_ascent");
	___mb.mb_set_distance_field_hint = gd::api->godot_method_bind_get_method("BitmapFont", "set_distance_field_hint");
	___mb.mb_set_fallback = gd::api->godot_method_bind_get_method("BitmapFont", "set_fallback");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("BitmapFont", "set_height");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BitmapFont");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bitmap_font *bitmap_font::_new()
{
	return (bitmap_font *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BitmapFont")());
}
pool_int_array bitmap_font::_get_chars() const {
	return ___godot_icall_PoolIntArray(___mb.mb__get_chars, (const object *) this);
}

pool_int_array bitmap_font::_get_kernings() const {
	return ___godot_icall_PoolIntArray(___mb.mb__get_kernings, (const object *) this);
}

array bitmap_font::_get_textures() const {
	return ___godot_icall_Array(___mb.mb__get_textures, (const object *) this);
}

void bitmap_font::_set_chars(const pool_int_array arg0) {
	___godot_icall_void_PoolIntArray(___mb.mb__set_chars, (const object *) this, arg0);
}

void bitmap_font::_set_kernings(const pool_int_array arg0) {
	___godot_icall_void_PoolIntArray(___mb.mb__set_kernings, (const object *) this, arg0);
}

void bitmap_font::_set_textures(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_textures, (const object *) this, arg0);
}

void bitmap_font::add_char(const int64_t character, const int64_t texture_, const rect2 rect, const vector2 align, const real_t advance) {
	___godot_icall_void_int_int_Rect2_Vector2_float(___mb.mb_add_char, (const object *) this, character, texture_, rect, align, advance);
}

void bitmap_font::add_kerning_pair(const int64_t char_a, const int64_t char_b, const int64_t kerning) {
	___godot_icall_void_int_int_int(___mb.mb_add_kerning_pair, (const object *) this, char_a, char_b, kerning);
}

void bitmap_font::add_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_add_texture, (const object *) this, texture_.ptr());
}

void bitmap_font::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

error bitmap_font::create_from_fnt(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_create_from_fnt, (const object *) this, path_);
}

ref<bitmap_font> bitmap_font::get_fallback() const {
	return ref<bitmap_font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_fallback, (const object *) this));
}

int64_t bitmap_font::get_kerning_pair(const int64_t char_a, const int64_t char_b) const {
	return ___godot_icall_int_int_int(___mb.mb_get_kerning_pair, (const object *) this, char_a, char_b);
}

ref<texture> bitmap_font::get_texture(const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_texture, (const object *) this, idx));
}

int64_t bitmap_font::get_texture_count() const {
	return ___godot_icall_int(___mb.mb_get_texture_count, (const object *) this);
}

void bitmap_font::set_ascent(const real_t px) {
	___godot_icall_void_float(___mb.mb_set_ascent, (const object *) this, px);
}

void bitmap_font::set_distance_field_hint(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_distance_field_hint, (const object *) this, enable);
}

void bitmap_font::set_fallback(const ref<bitmap_font> fallback) {
	___godot_icall_void_Object(___mb.mb_set_fallback, (const object *) this, fallback.ptr());
}

void bitmap_font::set_height(const real_t px) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, px);
}

}