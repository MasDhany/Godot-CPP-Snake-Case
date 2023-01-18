#include "label3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "font.hpp"
#include "triangle_mesh.hpp"


namespace gd {


label3d::___method_bindings label3d::___mb = {};

void *label3d::_detail_class_tag = nullptr;

void label3d::___init_method_bindings() {
	___mb.mb__font_changed = gd::api->godot_method_bind_get_method("Label3D", "_font_changed");
	___mb.mb__im_update = gd::api->godot_method_bind_get_method("Label3D", "_im_update");
	___mb.mb__queue_update = gd::api->godot_method_bind_get_method("Label3D", "_queue_update");
	___mb.mb_generate_triangle_mesh = gd::api->godot_method_bind_get_method("Label3D", "generate_triangle_mesh");
	___mb.mb_get_alpha_cut_mode = gd::api->godot_method_bind_get_method("Label3D", "get_alpha_cut_mode");
	___mb.mb_get_alpha_scissor_threshold = gd::api->godot_method_bind_get_method("Label3D", "get_alpha_scissor_threshold");
	___mb.mb_get_autowrap = gd::api->godot_method_bind_get_method("Label3D", "get_autowrap");
	___mb.mb_get_billboard_mode = gd::api->godot_method_bind_get_method("Label3D", "get_billboard_mode");
	___mb.mb_get_draw_flag = gd::api->godot_method_bind_get_method("Label3D", "get_draw_flag");
	___mb.mb_get_font = gd::api->godot_method_bind_get_method("Label3D", "get_font");
	___mb.mb_get_horizontal_alignment = gd::api->godot_method_bind_get_method("Label3D", "get_horizontal_alignment");
	___mb.mb_get_line_spacing = gd::api->godot_method_bind_get_method("Label3D", "get_line_spacing");
	___mb.mb_get_modulate = gd::api->godot_method_bind_get_method("Label3D", "get_modulate");
	___mb.mb_get_offset = gd::api->godot_method_bind_get_method("Label3D", "get_offset");
	___mb.mb_get_outline_modulate = gd::api->godot_method_bind_get_method("Label3D", "get_outline_modulate");
	___mb.mb_get_outline_render_priority = gd::api->godot_method_bind_get_method("Label3D", "get_outline_render_priority");
	___mb.mb_get_pixel_size = gd::api->godot_method_bind_get_method("Label3D", "get_pixel_size");
	___mb.mb_get_render_priority = gd::api->godot_method_bind_get_method("Label3D", "get_render_priority");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("Label3D", "get_text");
	___mb.mb_get_vertical_alignment = gd::api->godot_method_bind_get_method("Label3D", "get_vertical_alignment");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("Label3D", "get_width");
	___mb.mb_is_uppercase = gd::api->godot_method_bind_get_method("Label3D", "is_uppercase");
	___mb.mb_set_alpha_cut_mode = gd::api->godot_method_bind_get_method("Label3D", "set_alpha_cut_mode");
	___mb.mb_set_alpha_scissor_threshold = gd::api->godot_method_bind_get_method("Label3D", "set_alpha_scissor_threshold");
	___mb.mb_set_autowrap = gd::api->godot_method_bind_get_method("Label3D", "set_autowrap");
	___mb.mb_set_billboard_mode = gd::api->godot_method_bind_get_method("Label3D", "set_billboard_mode");
	___mb.mb_set_draw_flag = gd::api->godot_method_bind_get_method("Label3D", "set_draw_flag");
	___mb.mb_set_font = gd::api->godot_method_bind_get_method("Label3D", "set_font");
	___mb.mb_set_horizontal_alignment = gd::api->godot_method_bind_get_method("Label3D", "set_horizontal_alignment");
	___mb.mb_set_line_spacing = gd::api->godot_method_bind_get_method("Label3D", "set_line_spacing");
	___mb.mb_set_modulate = gd::api->godot_method_bind_get_method("Label3D", "set_modulate");
	___mb.mb_set_offset = gd::api->godot_method_bind_get_method("Label3D", "set_offset");
	___mb.mb_set_outline_modulate = gd::api->godot_method_bind_get_method("Label3D", "set_outline_modulate");
	___mb.mb_set_outline_render_priority = gd::api->godot_method_bind_get_method("Label3D", "set_outline_render_priority");
	___mb.mb_set_pixel_size = gd::api->godot_method_bind_get_method("Label3D", "set_pixel_size");
	___mb.mb_set_render_priority = gd::api->godot_method_bind_get_method("Label3D", "set_render_priority");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("Label3D", "set_text");
	___mb.mb_set_uppercase = gd::api->godot_method_bind_get_method("Label3D", "set_uppercase");
	___mb.mb_set_vertical_alignment = gd::api->godot_method_bind_get_method("Label3D", "set_vertical_alignment");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("Label3D", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Label3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

label3d *label3d::_new()
{
	return (label3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Label3D")());
}
void label3d::_font_changed() {
	___godot_icall_void(___mb.mb__font_changed, (const object *) this);
}

void label3d::_im_update() {
	___godot_icall_void(___mb.mb__im_update, (const object *) this);
}

void label3d::_queue_update() {
	___godot_icall_void(___mb.mb__queue_update, (const object *) this);
}

ref<triangle_mesh> label3d::generate_triangle_mesh() const {
	return ref<triangle_mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_generate_triangle_mesh, (const object *) this));
}

label3d::AlphaCutMode label3d::get_alpha_cut_mode() const {
	return (label3d::AlphaCutMode) ___godot_icall_int(___mb.mb_get_alpha_cut_mode, (const object *) this);
}

real_t label3d::get_alpha_scissor_threshold() const {
	return ___godot_icall_float(___mb.mb_get_alpha_scissor_threshold, (const object *) this);
}

bool label3d::get_autowrap() const {
	return ___godot_icall_bool(___mb.mb_get_autowrap, (const object *) this);
}

spatial_material::BillboardMode label3d::get_billboard_mode() const {
	return (spatial_material::BillboardMode) ___godot_icall_int(___mb.mb_get_billboard_mode, (const object *) this);
}

bool label3d::get_draw_flag(const int64_t flag) const {
	return ___godot_icall_bool_int(___mb.mb_get_draw_flag, (const object *) this, flag);
}

ref<font> label3d::get_font() const {
	return ref<font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_font, (const object *) this));
}

label3d::Align label3d::get_horizontal_alignment() const {
	return (label3d::Align) ___godot_icall_int(___mb.mb_get_horizontal_alignment, (const object *) this);
}

real_t label3d::get_line_spacing() const {
	return ___godot_icall_float(___mb.mb_get_line_spacing, (const object *) this);
}

color label3d::get_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_modulate, (const object *) this);
}

vector2 label3d::get_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_offset, (const object *) this);
}

color label3d::get_outline_modulate() const {
	return ___godot_icall_Color(___mb.mb_get_outline_modulate, (const object *) this);
}

int64_t label3d::get_outline_render_priority() const {
	return ___godot_icall_int(___mb.mb_get_outline_render_priority, (const object *) this);
}

real_t label3d::get_pixel_size() const {
	return ___godot_icall_float(___mb.mb_get_pixel_size, (const object *) this);
}

int64_t label3d::get_render_priority() const {
	return ___godot_icall_int(___mb.mb_get_render_priority, (const object *) this);
}

string label3d::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

label3d::VAlign label3d::get_vertical_alignment() const {
	return (label3d::VAlign) ___godot_icall_int(___mb.mb_get_vertical_alignment, (const object *) this);
}

real_t label3d::get_width() const {
	return ___godot_icall_float(___mb.mb_get_width, (const object *) this);
}

bool label3d::is_uppercase() const {
	return ___godot_icall_bool(___mb.mb_is_uppercase, (const object *) this);
}

void label3d::set_alpha_cut_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_alpha_cut_mode, (const object *) this, mode);
}

void label3d::set_alpha_scissor_threshold(const real_t threshold) {
	___godot_icall_void_float(___mb.mb_set_alpha_scissor_threshold, (const object *) this, threshold);
}

void label3d::set_autowrap(const bool autowrap_mode) {
	___godot_icall_void_bool(___mb.mb_set_autowrap, (const object *) this, autowrap_mode);
}

void label3d::set_billboard_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_billboard_mode, (const object *) this, mode);
}

void label3d::set_draw_flag(const int64_t flag, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_draw_flag, (const object *) this, flag, enabled);
}

void label3d::set_font(const ref<font> font_) {
	___godot_icall_void_Object(___mb.mb_set_font, (const object *) this, font_.ptr());
}

void label3d::set_horizontal_alignment(const int64_t alignment) {
	___godot_icall_void_int(___mb.mb_set_horizontal_alignment, (const object *) this, alignment);
}

void label3d::set_line_spacing(const real_t line_spacing) {
	___godot_icall_void_float(___mb.mb_set_line_spacing, (const object *) this, line_spacing);
}

void label3d::set_modulate(const color modulate) {
	___godot_icall_void_Color(___mb.mb_set_modulate, (const object *) this, modulate);
}

void label3d::set_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_offset, (const object *) this, offset);
}

void label3d::set_outline_modulate(const color modulate) {
	___godot_icall_void_Color(___mb.mb_set_outline_modulate, (const object *) this, modulate);
}

void label3d::set_outline_render_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_outline_render_priority, (const object *) this, priority);
}

void label3d::set_pixel_size(const real_t pixel_size) {
	___godot_icall_void_float(___mb.mb_set_pixel_size, (const object *) this, pixel_size);
}

void label3d::set_render_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_render_priority, (const object *) this, priority);
}

void label3d::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void label3d::set_uppercase(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_uppercase, (const object *) this, enable);
}

void label3d::set_vertical_alignment(const int64_t alignment) {
	___godot_icall_void_int(___mb.mb_set_vertical_alignment, (const object *) this, alignment);
}

void label3d::set_width(const real_t width) {
	___godot_icall_void_float(___mb.mb_set_width, (const object *) this, width);
}

}