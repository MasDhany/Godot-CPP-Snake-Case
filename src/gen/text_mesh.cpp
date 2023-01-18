#include "text_mesh.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "font.hpp"


namespace gd {


text_mesh::___method_bindings text_mesh::___mb = {};

void *text_mesh::_detail_class_tag = nullptr;

void text_mesh::___init_method_bindings() {
	___mb.mb__font_changed = gd::api->godot_method_bind_get_method("TextMesh", "_font_changed");
	___mb.mb_get_curve_step = gd::api->godot_method_bind_get_method("TextMesh", "get_curve_step");
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("TextMesh", "get_depth");
	___mb.mb_get_font = gd::api->godot_method_bind_get_method("TextMesh", "get_font");
	___mb.mb_get_horizontal_alignment = gd::api->godot_method_bind_get_method("TextMesh", "get_horizontal_alignment");
	___mb.mb_get_pixel_size = gd::api->godot_method_bind_get_method("TextMesh", "get_pixel_size");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("TextMesh", "get_text");
	___mb.mb_is_uppercase = gd::api->godot_method_bind_get_method("TextMesh", "is_uppercase");
	___mb.mb_set_curve_step = gd::api->godot_method_bind_get_method("TextMesh", "set_curve_step");
	___mb.mb_set_depth = gd::api->godot_method_bind_get_method("TextMesh", "set_depth");
	___mb.mb_set_font = gd::api->godot_method_bind_get_method("TextMesh", "set_font");
	___mb.mb_set_horizontal_alignment = gd::api->godot_method_bind_get_method("TextMesh", "set_horizontal_alignment");
	___mb.mb_set_pixel_size = gd::api->godot_method_bind_get_method("TextMesh", "set_pixel_size");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("TextMesh", "set_text");
	___mb.mb_set_uppercase = gd::api->godot_method_bind_get_method("TextMesh", "set_uppercase");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextMesh");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

text_mesh *text_mesh::_new()
{
	return (text_mesh *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextMesh")());
}
void text_mesh::_font_changed() {
	___godot_icall_void(___mb.mb__font_changed, (const object *) this);
}

real_t text_mesh::get_curve_step() const {
	return ___godot_icall_float(___mb.mb_get_curve_step, (const object *) this);
}

real_t text_mesh::get_depth() const {
	return ___godot_icall_float(___mb.mb_get_depth, (const object *) this);
}

ref<font> text_mesh::get_font() const {
	return ref<font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_font, (const object *) this));
}

text_mesh::Align text_mesh::get_horizontal_alignment() const {
	return (text_mesh::Align) ___godot_icall_int(___mb.mb_get_horizontal_alignment, (const object *) this);
}

real_t text_mesh::get_pixel_size() const {
	return ___godot_icall_float(___mb.mb_get_pixel_size, (const object *) this);
}

string text_mesh::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

bool text_mesh::is_uppercase() const {
	return ___godot_icall_bool(___mb.mb_is_uppercase, (const object *) this);
}

void text_mesh::set_curve_step(const real_t curve_step) {
	___godot_icall_void_float(___mb.mb_set_curve_step, (const object *) this, curve_step);
}

void text_mesh::set_depth(const real_t depth) {
	___godot_icall_void_float(___mb.mb_set_depth, (const object *) this, depth);
}

void text_mesh::set_font(const ref<font> font_) {
	___godot_icall_void_Object(___mb.mb_set_font, (const object *) this, font_.ptr());
}

void text_mesh::set_horizontal_alignment(const int64_t alignment) {
	___godot_icall_void_int(___mb.mb_set_horizontal_alignment, (const object *) this, alignment);
}

void text_mesh::set_pixel_size(const real_t pixel_size) {
	___godot_icall_void_float(___mb.mb_set_pixel_size, (const object *) this, pixel_size);
}

void text_mesh::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void text_mesh::set_uppercase(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_uppercase, (const object *) this, enable);
}

}