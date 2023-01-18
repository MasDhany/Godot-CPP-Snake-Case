#include "large_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


large_texture::___method_bindings large_texture::___mb = {};

void *large_texture::_detail_class_tag = nullptr;

void large_texture::___init_method_bindings() {
	___mb.mb__get_data = gd::api->godot_method_bind_get_method("LargeTexture", "_get_data");
	___mb.mb__set_data = gd::api->godot_method_bind_get_method("LargeTexture", "_set_data");
	___mb.mb_add_piece = gd::api->godot_method_bind_get_method("LargeTexture", "add_piece");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("LargeTexture", "clear");
	___mb.mb_get_piece_count = gd::api->godot_method_bind_get_method("LargeTexture", "get_piece_count");
	___mb.mb_get_piece_offset = gd::api->godot_method_bind_get_method("LargeTexture", "get_piece_offset");
	___mb.mb_get_piece_texture = gd::api->godot_method_bind_get_method("LargeTexture", "get_piece_texture");
	___mb.mb_set_piece_offset = gd::api->godot_method_bind_get_method("LargeTexture", "set_piece_offset");
	___mb.mb_set_piece_texture = gd::api->godot_method_bind_get_method("LargeTexture", "set_piece_texture");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("LargeTexture", "set_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "LargeTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

large_texture *large_texture::_new()
{
	return (large_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"LargeTexture")());
}
array large_texture::_get_data() const {
	return ___godot_icall_Array(___mb.mb__get_data, (const object *) this);
}

void large_texture::_set_data(const array data) {
	___godot_icall_void_Array(___mb.mb__set_data, (const object *) this, data);
}

int64_t large_texture::add_piece(const vector2 ofs, const ref<texture> texture_) {
	return ___godot_icall_int_Vector2_Object(___mb.mb_add_piece, (const object *) this, ofs, texture_.ptr());
}

void large_texture::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

int64_t large_texture::get_piece_count() const {
	return ___godot_icall_int(___mb.mb_get_piece_count, (const object *) this);
}

vector2 large_texture::get_piece_offset(const int64_t idx) const {
	return ___godot_icall_Vector2_int(___mb.mb_get_piece_offset, (const object *) this, idx);
}

ref<texture> large_texture::get_piece_texture(const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_piece_texture, (const object *) this, idx));
}

void large_texture::set_piece_offset(const int64_t idx, const vector2 ofs) {
	___godot_icall_void_int_Vector2(___mb.mb_set_piece_offset, (const object *) this, idx, ofs);
}

void large_texture::set_piece_texture(const int64_t idx, const ref<texture> texture_) {
	___godot_icall_void_int_Object(___mb.mb_set_piece_texture, (const object *) this, idx, texture_.ptr());
}

void large_texture::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

}