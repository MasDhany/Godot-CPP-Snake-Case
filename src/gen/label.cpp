#include "label.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


label::___method_bindings label::___mb = {};

void *label::_detail_class_tag = nullptr;

void label::___init_method_bindings() {
	___mb.mb_get_align = gd::api->godot_method_bind_get_method("Label", "get_align");
	___mb.mb_get_line_count = gd::api->godot_method_bind_get_method("Label", "get_line_count");
	___mb.mb_get_line_height = gd::api->godot_method_bind_get_method("Label", "get_line_height");
	___mb.mb_get_lines_skipped = gd::api->godot_method_bind_get_method("Label", "get_lines_skipped");
	___mb.mb_get_max_lines_visible = gd::api->godot_method_bind_get_method("Label", "get_max_lines_visible");
	___mb.mb_get_percent_visible = gd::api->godot_method_bind_get_method("Label", "get_percent_visible");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("Label", "get_text");
	___mb.mb_get_total_character_count = gd::api->godot_method_bind_get_method("Label", "get_total_character_count");
	___mb.mb_get_valign = gd::api->godot_method_bind_get_method("Label", "get_valign");
	___mb.mb_get_visible_characters = gd::api->godot_method_bind_get_method("Label", "get_visible_characters");
	___mb.mb_get_visible_line_count = gd::api->godot_method_bind_get_method("Label", "get_visible_line_count");
	___mb.mb_has_autowrap = gd::api->godot_method_bind_get_method("Label", "has_autowrap");
	___mb.mb_is_clipping_text = gd::api->godot_method_bind_get_method("Label", "is_clipping_text");
	___mb.mb_is_uppercase = gd::api->godot_method_bind_get_method("Label", "is_uppercase");
	___mb.mb_set_align = gd::api->godot_method_bind_get_method("Label", "set_align");
	___mb.mb_set_autowrap = gd::api->godot_method_bind_get_method("Label", "set_autowrap");
	___mb.mb_set_clip_text = gd::api->godot_method_bind_get_method("Label", "set_clip_text");
	___mb.mb_set_lines_skipped = gd::api->godot_method_bind_get_method("Label", "set_lines_skipped");
	___mb.mb_set_max_lines_visible = gd::api->godot_method_bind_get_method("Label", "set_max_lines_visible");
	___mb.mb_set_percent_visible = gd::api->godot_method_bind_get_method("Label", "set_percent_visible");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("Label", "set_text");
	___mb.mb_set_uppercase = gd::api->godot_method_bind_get_method("Label", "set_uppercase");
	___mb.mb_set_valign = gd::api->godot_method_bind_get_method("Label", "set_valign");
	___mb.mb_set_visible_characters = gd::api->godot_method_bind_get_method("Label", "set_visible_characters");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Label");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

label *label::_new()
{
	return (label *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Label")());
}
label::Align label::get_align() const {
	return (label::Align) ___godot_icall_int(___mb.mb_get_align, (const object *) this);
}

int64_t label::get_line_count() const {
	return ___godot_icall_int(___mb.mb_get_line_count, (const object *) this);
}

int64_t label::get_line_height() const {
	return ___godot_icall_int(___mb.mb_get_line_height, (const object *) this);
}

int64_t label::get_lines_skipped() const {
	return ___godot_icall_int(___mb.mb_get_lines_skipped, (const object *) this);
}

int64_t label::get_max_lines_visible() const {
	return ___godot_icall_int(___mb.mb_get_max_lines_visible, (const object *) this);
}

real_t label::get_percent_visible() const {
	return ___godot_icall_float(___mb.mb_get_percent_visible, (const object *) this);
}

string label::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

int64_t label::get_total_character_count() const {
	return ___godot_icall_int(___mb.mb_get_total_character_count, (const object *) this);
}

label::VAlign label::get_valign() const {
	return (label::VAlign) ___godot_icall_int(___mb.mb_get_valign, (const object *) this);
}

int64_t label::get_visible_characters() const {
	return ___godot_icall_int(___mb.mb_get_visible_characters, (const object *) this);
}

int64_t label::get_visible_line_count() const {
	return ___godot_icall_int(___mb.mb_get_visible_line_count, (const object *) this);
}

bool label::has_autowrap() const {
	return ___godot_icall_bool(___mb.mb_has_autowrap, (const object *) this);
}

bool label::is_clipping_text() const {
	return ___godot_icall_bool(___mb.mb_is_clipping_text, (const object *) this);
}

bool label::is_uppercase() const {
	return ___godot_icall_bool(___mb.mb_is_uppercase, (const object *) this);
}

void label::set_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_align, (const object *) this, align);
}

void label::set_autowrap(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_autowrap, (const object *) this, enable);
}

void label::set_clip_text(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clip_text, (const object *) this, enable);
}

void label::set_lines_skipped(const int64_t lines_skipped) {
	___godot_icall_void_int(___mb.mb_set_lines_skipped, (const object *) this, lines_skipped);
}

void label::set_max_lines_visible(const int64_t lines_visible) {
	___godot_icall_void_int(___mb.mb_set_max_lines_visible, (const object *) this, lines_visible);
}

void label::set_percent_visible(const real_t percent_visible) {
	___godot_icall_void_float(___mb.mb_set_percent_visible, (const object *) this, percent_visible);
}

void label::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void label::set_uppercase(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_uppercase, (const object *) this, enable);
}

void label::set_valign(const int64_t valign) {
	___godot_icall_void_int(___mb.mb_set_valign, (const object *) this, valign);
}

void label::set_visible_characters(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_visible_characters, (const object *) this, amount);
}

}