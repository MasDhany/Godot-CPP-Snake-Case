#include "texture_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "bit_map.hpp"
#include "texture.hpp"


namespace gd {


texture_button::___method_bindings texture_button::___mb = {};

void *texture_button::_detail_class_tag = nullptr;

void texture_button::___init_method_bindings() {
	___mb.mb_get_click_mask = gd::api->godot_method_bind_get_method("TextureButton", "get_click_mask");
	___mb.mb_get_disabled_texture = gd::api->godot_method_bind_get_method("TextureButton", "get_disabled_texture");
	___mb.mb_get_expand = gd::api->godot_method_bind_get_method("TextureButton", "get_expand");
	___mb.mb_get_focused_texture = gd::api->godot_method_bind_get_method("TextureButton", "get_focused_texture");
	___mb.mb_get_hover_texture = gd::api->godot_method_bind_get_method("TextureButton", "get_hover_texture");
	___mb.mb_get_normal_texture = gd::api->godot_method_bind_get_method("TextureButton", "get_normal_texture");
	___mb.mb_get_pressed_texture = gd::api->godot_method_bind_get_method("TextureButton", "get_pressed_texture");
	___mb.mb_get_stretch_mode = gd::api->godot_method_bind_get_method("TextureButton", "get_stretch_mode");
	___mb.mb_is_flipped_h = gd::api->godot_method_bind_get_method("TextureButton", "is_flipped_h");
	___mb.mb_is_flipped_v = gd::api->godot_method_bind_get_method("TextureButton", "is_flipped_v");
	___mb.mb_set_click_mask = gd::api->godot_method_bind_get_method("TextureButton", "set_click_mask");
	___mb.mb_set_disabled_texture = gd::api->godot_method_bind_get_method("TextureButton", "set_disabled_texture");
	___mb.mb_set_expand = gd::api->godot_method_bind_get_method("TextureButton", "set_expand");
	___mb.mb_set_flip_h = gd::api->godot_method_bind_get_method("TextureButton", "set_flip_h");
	___mb.mb_set_flip_v = gd::api->godot_method_bind_get_method("TextureButton", "set_flip_v");
	___mb.mb_set_focused_texture = gd::api->godot_method_bind_get_method("TextureButton", "set_focused_texture");
	___mb.mb_set_hover_texture = gd::api->godot_method_bind_get_method("TextureButton", "set_hover_texture");
	___mb.mb_set_normal_texture = gd::api->godot_method_bind_get_method("TextureButton", "set_normal_texture");
	___mb.mb_set_pressed_texture = gd::api->godot_method_bind_get_method("TextureButton", "set_pressed_texture");
	___mb.mb_set_stretch_mode = gd::api->godot_method_bind_get_method("TextureButton", "set_stretch_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextureButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

texture_button *texture_button::_new()
{
	return (texture_button *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextureButton")());
}
ref<bit_map> texture_button::get_click_mask() const {
	return ref<bit_map>::__internal_constructor(___godot_icall_Object(___mb.mb_get_click_mask, (const object *) this));
}

ref<texture> texture_button::get_disabled_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_disabled_texture, (const object *) this));
}

bool texture_button::get_expand() const {
	return ___godot_icall_bool(___mb.mb_get_expand, (const object *) this);
}

ref<texture> texture_button::get_focused_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_focused_texture, (const object *) this));
}

ref<texture> texture_button::get_hover_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_hover_texture, (const object *) this));
}

ref<texture> texture_button::get_normal_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_normal_texture, (const object *) this));
}

ref<texture> texture_button::get_pressed_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_pressed_texture, (const object *) this));
}

texture_button::StretchMode texture_button::get_stretch_mode() const {
	return (texture_button::StretchMode) ___godot_icall_int(___mb.mb_get_stretch_mode, (const object *) this);
}

bool texture_button::is_flipped_h() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_h, (const object *) this);
}

bool texture_button::is_flipped_v() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_v, (const object *) this);
}

void texture_button::set_click_mask(const ref<bit_map> mask) {
	___godot_icall_void_Object(___mb.mb_set_click_mask, (const object *) this, mask.ptr());
}

void texture_button::set_disabled_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_disabled_texture, (const object *) this, texture_.ptr());
}

void texture_button::set_expand(const bool p_expand) {
	___godot_icall_void_bool(___mb.mb_set_expand, (const object *) this, p_expand);
}

void texture_button::set_flip_h(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_flip_h, (const object *) this, enable);
}

void texture_button::set_flip_v(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_flip_v, (const object *) this, enable);
}

void texture_button::set_focused_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_focused_texture, (const object *) this, texture_.ptr());
}

void texture_button::set_hover_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_hover_texture, (const object *) this, texture_.ptr());
}

void texture_button::set_normal_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_normal_texture, (const object *) this, texture_.ptr());
}

void texture_button::set_pressed_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_pressed_texture, (const object *) this, texture_.ptr());
}

void texture_button::set_stretch_mode(const int64_t p_mode) {
	___godot_icall_void_int(___mb.mb_set_stretch_mode, (const object *) this, p_mode);
}

}