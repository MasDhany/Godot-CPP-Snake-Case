#include "texture_rect.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


texture_rect::___method_bindings texture_rect::___mb = {};

void *texture_rect::_detail_class_tag = nullptr;

void texture_rect::___init_method_bindings() {
	___mb.mb__texture_changed = gd::api->godot_method_bind_get_method("TextureRect", "_texture_changed");
	___mb.mb_get_stretch_mode = gd::api->godot_method_bind_get_method("TextureRect", "get_stretch_mode");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("TextureRect", "get_texture");
	___mb.mb_has_expand = gd::api->godot_method_bind_get_method("TextureRect", "has_expand");
	___mb.mb_is_flipped_h = gd::api->godot_method_bind_get_method("TextureRect", "is_flipped_h");
	___mb.mb_is_flipped_v = gd::api->godot_method_bind_get_method("TextureRect", "is_flipped_v");
	___mb.mb_set_expand = gd::api->godot_method_bind_get_method("TextureRect", "set_expand");
	___mb.mb_set_flip_h = gd::api->godot_method_bind_get_method("TextureRect", "set_flip_h");
	___mb.mb_set_flip_v = gd::api->godot_method_bind_get_method("TextureRect", "set_flip_v");
	___mb.mb_set_stretch_mode = gd::api->godot_method_bind_get_method("TextureRect", "set_stretch_mode");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("TextureRect", "set_texture");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextureRect");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

texture_rect *texture_rect::_new()
{
	return (texture_rect *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextureRect")());
}
void texture_rect::_texture_changed() {
	___godot_icall_void(___mb.mb__texture_changed, (const object *) this);
}

texture_rect::StretchMode texture_rect::get_stretch_mode() const {
	return (texture_rect::StretchMode) ___godot_icall_int(___mb.mb_get_stretch_mode, (const object *) this);
}

ref<texture> texture_rect::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

bool texture_rect::has_expand() const {
	return ___godot_icall_bool(___mb.mb_has_expand, (const object *) this);
}

bool texture_rect::is_flipped_h() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_h, (const object *) this);
}

bool texture_rect::is_flipped_v() const {
	return ___godot_icall_bool(___mb.mb_is_flipped_v, (const object *) this);
}

void texture_rect::set_expand(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_expand, (const object *) this, enable);
}

void texture_rect::set_flip_h(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_flip_h, (const object *) this, enable);
}

void texture_rect::set_flip_v(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_flip_v, (const object *) this, enable);
}

void texture_rect::set_stretch_mode(const int64_t stretch_mode) {
	___godot_icall_void_int(___mb.mb_set_stretch_mode, (const object *) this, stretch_mode);
}

void texture_rect::set_texture(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, texture_.ptr());
}

}