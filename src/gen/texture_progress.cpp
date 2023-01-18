#include "texture_progress.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


texture_progress::___method_bindings texture_progress::___mb = {};

void *texture_progress::_detail_class_tag = nullptr;

void texture_progress::___init_method_bindings() {
	___mb.mb_get_fill_degrees = gd::api->godot_method_bind_get_method("TextureProgress", "get_fill_degrees");
	___mb.mb_get_fill_mode = gd::api->godot_method_bind_get_method("TextureProgress", "get_fill_mode");
	___mb.mb_get_nine_patch_stretch = gd::api->godot_method_bind_get_method("TextureProgress", "get_nine_patch_stretch");
	___mb.mb_get_over_texture = gd::api->godot_method_bind_get_method("TextureProgress", "get_over_texture");
	___mb.mb_get_progress_texture = gd::api->godot_method_bind_get_method("TextureProgress", "get_progress_texture");
	___mb.mb_get_radial_center_offset = gd::api->godot_method_bind_get_method("TextureProgress", "get_radial_center_offset");
	___mb.mb_get_radial_initial_angle = gd::api->godot_method_bind_get_method("TextureProgress", "get_radial_initial_angle");
	___mb.mb_get_stretch_margin = gd::api->godot_method_bind_get_method("TextureProgress", "get_stretch_margin");
	___mb.mb_get_texture_progress_offset = gd::api->godot_method_bind_get_method("TextureProgress", "get_texture_progress_offset");
	___mb.mb_get_tint_over = gd::api->godot_method_bind_get_method("TextureProgress", "get_tint_over");
	___mb.mb_get_tint_progress = gd::api->godot_method_bind_get_method("TextureProgress", "get_tint_progress");
	___mb.mb_get_tint_under = gd::api->godot_method_bind_get_method("TextureProgress", "get_tint_under");
	___mb.mb_get_under_texture = gd::api->godot_method_bind_get_method("TextureProgress", "get_under_texture");
	___mb.mb_set_fill_degrees = gd::api->godot_method_bind_get_method("TextureProgress", "set_fill_degrees");
	___mb.mb_set_fill_mode = gd::api->godot_method_bind_get_method("TextureProgress", "set_fill_mode");
	___mb.mb_set_nine_patch_stretch = gd::api->godot_method_bind_get_method("TextureProgress", "set_nine_patch_stretch");
	___mb.mb_set_over_texture = gd::api->godot_method_bind_get_method("TextureProgress", "set_over_texture");
	___mb.mb_set_progress_texture = gd::api->godot_method_bind_get_method("TextureProgress", "set_progress_texture");
	___mb.mb_set_radial_center_offset = gd::api->godot_method_bind_get_method("TextureProgress", "set_radial_center_offset");
	___mb.mb_set_radial_initial_angle = gd::api->godot_method_bind_get_method("TextureProgress", "set_radial_initial_angle");
	___mb.mb_set_stretch_margin = gd::api->godot_method_bind_get_method("TextureProgress", "set_stretch_margin");
	___mb.mb_set_texture_progress_offset = gd::api->godot_method_bind_get_method("TextureProgress", "set_texture_progress_offset");
	___mb.mb_set_tint_over = gd::api->godot_method_bind_get_method("TextureProgress", "set_tint_over");
	___mb.mb_set_tint_progress = gd::api->godot_method_bind_get_method("TextureProgress", "set_tint_progress");
	___mb.mb_set_tint_under = gd::api->godot_method_bind_get_method("TextureProgress", "set_tint_under");
	___mb.mb_set_under_texture = gd::api->godot_method_bind_get_method("TextureProgress", "set_under_texture");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextureProgress");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

texture_progress *texture_progress::_new()
{
	return (texture_progress *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextureProgress")());
}
real_t texture_progress::get_fill_degrees() {
	return ___godot_icall_float(___mb.mb_get_fill_degrees, (const object *) this);
}

int64_t texture_progress::get_fill_mode() {
	return ___godot_icall_int(___mb.mb_get_fill_mode, (const object *) this);
}

bool texture_progress::get_nine_patch_stretch() const {
	return ___godot_icall_bool(___mb.mb_get_nine_patch_stretch, (const object *) this);
}

ref<texture> texture_progress::get_over_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_over_texture, (const object *) this));
}

ref<texture> texture_progress::get_progress_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_progress_texture, (const object *) this));
}

vector2 texture_progress::get_radial_center_offset() {
	return ___godot_icall_Vector2(___mb.mb_get_radial_center_offset, (const object *) this);
}

real_t texture_progress::get_radial_initial_angle() {
	return ___godot_icall_float(___mb.mb_get_radial_initial_angle, (const object *) this);
}

int64_t texture_progress::get_stretch_margin(const int64_t margin) const {
	return ___godot_icall_int_int(___mb.mb_get_stretch_margin, (const object *) this, margin);
}

vector2 texture_progress::get_texture_progress_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_texture_progress_offset, (const object *) this);
}

color texture_progress::get_tint_over() const {
	return ___godot_icall_Color(___mb.mb_get_tint_over, (const object *) this);
}

color texture_progress::get_tint_progress() const {
	return ___godot_icall_Color(___mb.mb_get_tint_progress, (const object *) this);
}

color texture_progress::get_tint_under() const {
	return ___godot_icall_Color(___mb.mb_get_tint_under, (const object *) this);
}

ref<texture> texture_progress::get_under_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_under_texture, (const object *) this));
}

void texture_progress::set_fill_degrees(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_fill_degrees, (const object *) this, mode);
}

void texture_progress::set_fill_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_fill_mode, (const object *) this, mode);
}

void texture_progress::set_nine_patch_stretch(const bool stretch) {
	___godot_icall_void_bool(___mb.mb_set_nine_patch_stretch, (const object *) this, stretch);
}

void texture_progress::set_over_texture(const ref<texture> tex) {
	___godot_icall_void_Object(___mb.mb_set_over_texture, (const object *) this, tex.ptr());
}

void texture_progress::set_progress_texture(const ref<texture> tex) {
	___godot_icall_void_Object(___mb.mb_set_progress_texture, (const object *) this, tex.ptr());
}

void texture_progress::set_radial_center_offset(const vector2 mode) {
	___godot_icall_void_Vector2(___mb.mb_set_radial_center_offset, (const object *) this, mode);
}

void texture_progress::set_radial_initial_angle(const real_t mode) {
	___godot_icall_void_float(___mb.mb_set_radial_initial_angle, (const object *) this, mode);
}

void texture_progress::set_stretch_margin(const int64_t margin, const int64_t value) {
	___godot_icall_void_int_int(___mb.mb_set_stretch_margin, (const object *) this, margin, value);
}

void texture_progress::set_texture_progress_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_texture_progress_offset, (const object *) this, offset);
}

void texture_progress::set_tint_over(const color tint) {
	___godot_icall_void_Color(___mb.mb_set_tint_over, (const object *) this, tint);
}

void texture_progress::set_tint_progress(const color tint) {
	___godot_icall_void_Color(___mb.mb_set_tint_progress, (const object *) this, tint);
}

void texture_progress::set_tint_under(const color tint) {
	___godot_icall_void_Color(___mb.mb_set_tint_under, (const object *) this, tint);
}

void texture_progress::set_under_texture(const ref<texture> tex) {
	___godot_icall_void_Object(___mb.mb_set_under_texture, (const object *) this, tex.ptr());
}

}