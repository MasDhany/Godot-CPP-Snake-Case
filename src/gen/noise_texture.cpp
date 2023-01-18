#include "noise_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"
#include "open_simplex_noise.hpp"


namespace gd {


noise_texture::___method_bindings noise_texture::___mb = {};

void *noise_texture::_detail_class_tag = nullptr;

void noise_texture::___init_method_bindings() {
	___mb.mb__generate_texture = gd::api->godot_method_bind_get_method("NoiseTexture", "_generate_texture");
	___mb.mb__queue_update = gd::api->godot_method_bind_get_method("NoiseTexture", "_queue_update");
	___mb.mb__thread_done = gd::api->godot_method_bind_get_method("NoiseTexture", "_thread_done");
	___mb.mb__update_texture = gd::api->godot_method_bind_get_method("NoiseTexture", "_update_texture");
	___mb.mb_get_bump_strength = gd::api->godot_method_bind_get_method("NoiseTexture", "get_bump_strength");
	___mb.mb_get_noise = gd::api->godot_method_bind_get_method("NoiseTexture", "get_noise");
	___mb.mb_get_noise_offset = gd::api->godot_method_bind_get_method("NoiseTexture", "get_noise_offset");
	___mb.mb_get_seamless = gd::api->godot_method_bind_get_method("NoiseTexture", "get_seamless");
	___mb.mb_is_normalmap = gd::api->godot_method_bind_get_method("NoiseTexture", "is_normalmap");
	___mb.mb_set_as_normalmap = gd::api->godot_method_bind_get_method("NoiseTexture", "set_as_normalmap");
	___mb.mb_set_bump_strength = gd::api->godot_method_bind_get_method("NoiseTexture", "set_bump_strength");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("NoiseTexture", "set_height");
	___mb.mb_set_noise = gd::api->godot_method_bind_get_method("NoiseTexture", "set_noise");
	___mb.mb_set_noise_offset = gd::api->godot_method_bind_get_method("NoiseTexture", "set_noise_offset");
	___mb.mb_set_seamless = gd::api->godot_method_bind_get_method("NoiseTexture", "set_seamless");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("NoiseTexture", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "NoiseTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

noise_texture *noise_texture::_new()
{
	return (noise_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"NoiseTexture")());
}
ref<image> noise_texture::_generate_texture() {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb__generate_texture, (const object *) this));
}

void noise_texture::_queue_update() {
	___godot_icall_void(___mb.mb__queue_update, (const object *) this);
}

void noise_texture::_thread_done(const ref<image> image_) {
	___godot_icall_void_Object(___mb.mb__thread_done, (const object *) this, image_.ptr());
}

void noise_texture::_update_texture() {
	___godot_icall_void(___mb.mb__update_texture, (const object *) this);
}

real_t noise_texture::get_bump_strength() {
	return ___godot_icall_float(___mb.mb_get_bump_strength, (const object *) this);
}

ref<open_simplex_noise> noise_texture::get_noise() {
	return ref<open_simplex_noise>::__internal_constructor(___godot_icall_Object(___mb.mb_get_noise, (const object *) this));
}

vector2 noise_texture::get_noise_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_noise_offset, (const object *) this);
}

bool noise_texture::get_seamless() {
	return ___godot_icall_bool(___mb.mb_get_seamless, (const object *) this);
}

bool noise_texture::is_normalmap() {
	return ___godot_icall_bool(___mb.mb_is_normalmap, (const object *) this);
}

void noise_texture::set_as_normalmap(const bool as_normalmap) {
	___godot_icall_void_bool(___mb.mb_set_as_normalmap, (const object *) this, as_normalmap);
}

void noise_texture::set_bump_strength(const real_t bump_strength) {
	___godot_icall_void_float(___mb.mb_set_bump_strength, (const object *) this, bump_strength);
}

void noise_texture::set_height(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_height, (const object *) this, height);
}

void noise_texture::set_noise(const ref<open_simplex_noise> noise) {
	___godot_icall_void_Object(___mb.mb_set_noise, (const object *) this, noise.ptr());
}

void noise_texture::set_noise_offset(const vector2 noise_offset) {
	___godot_icall_void_Vector2(___mb.mb_set_noise_offset, (const object *) this, noise_offset);
}

void noise_texture::set_seamless(const bool seamless) {
	___godot_icall_void_bool(___mb.mb_set_seamless, (const object *) this, seamless);
}

void noise_texture::set_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_width, (const object *) this, width);
}

}