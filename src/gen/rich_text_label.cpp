#include "rich_text_label.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "font.hpp"
#include "input_event.hpp"
#include "texture.hpp"
#include "vscroll_bar.hpp"


namespace gd {


rich_text_label::___method_bindings rich_text_label::___mb = {};

void *rich_text_label::_detail_class_tag = nullptr;

void rich_text_label::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("RichTextLabel", "_gui_input");
	___mb.mb__scroll_changed = gd::api->godot_method_bind_get_method("RichTextLabel", "_scroll_changed");
	___mb.mb_add_image = gd::api->godot_method_bind_get_method("RichTextLabel", "add_image");
	___mb.mb_add_text = gd::api->godot_method_bind_get_method("RichTextLabel", "add_text");
	___mb.mb_append_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "append_bbcode");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("RichTextLabel", "clear");
	___mb.mb_deselect = gd::api->godot_method_bind_get_method("RichTextLabel", "deselect");
	___mb.mb_get_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "get_bbcode");
	___mb.mb_get_content_height = gd::api->godot_method_bind_get_method("RichTextLabel", "get_content_height");
	___mb.mb_get_effects = gd::api->godot_method_bind_get_method("RichTextLabel", "get_effects");
	___mb.mb_get_line_count = gd::api->godot_method_bind_get_method("RichTextLabel", "get_line_count");
	___mb.mb_get_percent_visible = gd::api->godot_method_bind_get_method("RichTextLabel", "get_percent_visible");
	___mb.mb_get_selected_text = gd::api->godot_method_bind_get_method("RichTextLabel", "get_selected_text");
	___mb.mb_get_tab_size = gd::api->godot_method_bind_get_method("RichTextLabel", "get_tab_size");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("RichTextLabel", "get_text");
	___mb.mb_get_total_character_count = gd::api->godot_method_bind_get_method("RichTextLabel", "get_total_character_count");
	___mb.mb_get_v_scroll = gd::api->godot_method_bind_get_method("RichTextLabel", "get_v_scroll");
	___mb.mb_get_visible_characters = gd::api->godot_method_bind_get_method("RichTextLabel", "get_visible_characters");
	___mb.mb_get_visible_line_count = gd::api->godot_method_bind_get_method("RichTextLabel", "get_visible_line_count");
	___mb.mb_install_effect = gd::api->godot_method_bind_get_method("RichTextLabel", "install_effect");
	___mb.mb_is_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("RichTextLabel", "is_deselect_on_focus_loss_enabled");
	___mb.mb_is_fit_content_height_enabled = gd::api->godot_method_bind_get_method("RichTextLabel", "is_fit_content_height_enabled");
	___mb.mb_is_meta_underlined = gd::api->godot_method_bind_get_method("RichTextLabel", "is_meta_underlined");
	___mb.mb_is_overriding_selected_font_color = gd::api->godot_method_bind_get_method("RichTextLabel", "is_overriding_selected_font_color");
	___mb.mb_is_scroll_active = gd::api->godot_method_bind_get_method("RichTextLabel", "is_scroll_active");
	___mb.mb_is_scroll_following = gd::api->godot_method_bind_get_method("RichTextLabel", "is_scroll_following");
	___mb.mb_is_selection_enabled = gd::api->godot_method_bind_get_method("RichTextLabel", "is_selection_enabled");
	___mb.mb_is_using_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "is_using_bbcode");
	___mb.mb_newline = gd::api->godot_method_bind_get_method("RichTextLabel", "newline");
	___mb.mb_parse_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "parse_bbcode");
	___mb.mb_parse_expressions_for_values = gd::api->godot_method_bind_get_method("RichTextLabel", "parse_expressions_for_values");
	___mb.mb_pop = gd::api->godot_method_bind_get_method("RichTextLabel", "pop");
	___mb.mb_push_align = gd::api->godot_method_bind_get_method("RichTextLabel", "push_align");
	___mb.mb_push_bold = gd::api->godot_method_bind_get_method("RichTextLabel", "push_bold");
	___mb.mb_push_bold_italics = gd::api->godot_method_bind_get_method("RichTextLabel", "push_bold_italics");
	___mb.mb_push_cell = gd::api->godot_method_bind_get_method("RichTextLabel", "push_cell");
	___mb.mb_push_color = gd::api->godot_method_bind_get_method("RichTextLabel", "push_color");
	___mb.mb_push_font = gd::api->godot_method_bind_get_method("RichTextLabel", "push_font");
	___mb.mb_push_indent = gd::api->godot_method_bind_get_method("RichTextLabel", "push_indent");
	___mb.mb_push_italics = gd::api->godot_method_bind_get_method("RichTextLabel", "push_italics");
	___mb.mb_push_list = gd::api->godot_method_bind_get_method("RichTextLabel", "push_list");
	___mb.mb_push_meta = gd::api->godot_method_bind_get_method("RichTextLabel", "push_meta");
	___mb.mb_push_mono = gd::api->godot_method_bind_get_method("RichTextLabel", "push_mono");
	___mb.mb_push_normal = gd::api->godot_method_bind_get_method("RichTextLabel", "push_normal");
	___mb.mb_push_strikethrough = gd::api->godot_method_bind_get_method("RichTextLabel", "push_strikethrough");
	___mb.mb_push_table = gd::api->godot_method_bind_get_method("RichTextLabel", "push_table");
	___mb.mb_push_underline = gd::api->godot_method_bind_get_method("RichTextLabel", "push_underline");
	___mb.mb_remove_line = gd::api->godot_method_bind_get_method("RichTextLabel", "remove_line");
	___mb.mb_scroll_to_line = gd::api->godot_method_bind_get_method("RichTextLabel", "scroll_to_line");
	___mb.mb_set_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "set_bbcode");
	___mb.mb_set_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("RichTextLabel", "set_deselect_on_focus_loss_enabled");
	___mb.mb_set_effects = gd::api->godot_method_bind_get_method("RichTextLabel", "set_effects");
	___mb.mb_set_fit_content_height = gd::api->godot_method_bind_get_method("RichTextLabel", "set_fit_content_height");
	___mb.mb_set_meta_underline = gd::api->godot_method_bind_get_method("RichTextLabel", "set_meta_underline");
	___mb.mb_set_override_selected_font_color = gd::api->godot_method_bind_get_method("RichTextLabel", "set_override_selected_font_color");
	___mb.mb_set_percent_visible = gd::api->godot_method_bind_get_method("RichTextLabel", "set_percent_visible");
	___mb.mb_set_scroll_active = gd::api->godot_method_bind_get_method("RichTextLabel", "set_scroll_active");
	___mb.mb_set_scroll_follow = gd::api->godot_method_bind_get_method("RichTextLabel", "set_scroll_follow");
	___mb.mb_set_selection_enabled = gd::api->godot_method_bind_get_method("RichTextLabel", "set_selection_enabled");
	___mb.mb_set_tab_size = gd::api->godot_method_bind_get_method("RichTextLabel", "set_tab_size");
	___mb.mb_set_table_column_expand = gd::api->godot_method_bind_get_method("RichTextLabel", "set_table_column_expand");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("RichTextLabel", "set_text");
	___mb.mb_set_use_bbcode = gd::api->godot_method_bind_get_method("RichTextLabel", "set_use_bbcode");
	___mb.mb_set_visible_characters = gd::api->godot_method_bind_get_method("RichTextLabel", "set_visible_characters");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RichTextLabel");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

rich_text_label *rich_text_label::_new()
{
	return (rich_text_label *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RichTextLabel")());
}
void rich_text_label::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void rich_text_label::_scroll_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_changed, (const object *) this, arg0);
}

void rich_text_label::add_image(const ref<texture> image_, const int64_t width, const int64_t height, const int64_t align) {
	___godot_icall_void_Object_int_int_int(___mb.mb_add_image, (const object *) this, image_.ptr(), width, height, align);
}

void rich_text_label::add_text(const string text) {
	___godot_icall_void_String(___mb.mb_add_text, (const object *) this, text);
}

error rich_text_label::append_bbcode(const string bbcode) {
	return (error) ___godot_icall_int_String(___mb.mb_append_bbcode, (const object *) this, bbcode);
}

void rich_text_label::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void rich_text_label::deselect() {
	___godot_icall_void(___mb.mb_deselect, (const object *) this);
}

string rich_text_label::get_bbcode() const {
	return ___godot_icall_String(___mb.mb_get_bbcode, (const object *) this);
}

int64_t rich_text_label::get_content_height() const {
	return ___godot_icall_int(___mb.mb_get_content_height, (const object *) this);
}

array rich_text_label::get_effects() {
	return ___godot_icall_Array(___mb.mb_get_effects, (const object *) this);
}

int64_t rich_text_label::get_line_count() const {
	return ___godot_icall_int(___mb.mb_get_line_count, (const object *) this);
}

real_t rich_text_label::get_percent_visible() const {
	return ___godot_icall_float(___mb.mb_get_percent_visible, (const object *) this);
}

string rich_text_label::get_selected_text() {
	return ___godot_icall_String(___mb.mb_get_selected_text, (const object *) this);
}

int64_t rich_text_label::get_tab_size() const {
	return ___godot_icall_int(___mb.mb_get_tab_size, (const object *) this);
}

string rich_text_label::get_text() {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

int64_t rich_text_label::get_total_character_count() const {
	return ___godot_icall_int(___mb.mb_get_total_character_count, (const object *) this);
}

vscroll_bar *rich_text_label::get_v_scroll() {
	return (vscroll_bar *) ___godot_icall_Object(___mb.mb_get_v_scroll, (const object *) this);
}

int64_t rich_text_label::get_visible_characters() const {
	return ___godot_icall_int(___mb.mb_get_visible_characters, (const object *) this);
}

int64_t rich_text_label::get_visible_line_count() const {
	return ___godot_icall_int(___mb.mb_get_visible_line_count, (const object *) this);
}

void rich_text_label::install_effect(const variant effect) {
	___godot_icall_void_Variant(___mb.mb_install_effect, (const object *) this, effect);
}

bool rich_text_label::is_deselect_on_focus_loss_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_deselect_on_focus_loss_enabled, (const object *) this);
}

bool rich_text_label::is_fit_content_height_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_fit_content_height_enabled, (const object *) this);
}

bool rich_text_label::is_meta_underlined() const {
	return ___godot_icall_bool(___mb.mb_is_meta_underlined, (const object *) this);
}

bool rich_text_label::is_overriding_selected_font_color() const {
	return ___godot_icall_bool(___mb.mb_is_overriding_selected_font_color, (const object *) this);
}

bool rich_text_label::is_scroll_active() const {
	return ___godot_icall_bool(___mb.mb_is_scroll_active, (const object *) this);
}

bool rich_text_label::is_scroll_following() const {
	return ___godot_icall_bool(___mb.mb_is_scroll_following, (const object *) this);
}

bool rich_text_label::is_selection_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_selection_enabled, (const object *) this);
}

bool rich_text_label::is_using_bbcode() const {
	return ___godot_icall_bool(___mb.mb_is_using_bbcode, (const object *) this);
}

void rich_text_label::newline() {
	___godot_icall_void(___mb.mb_newline, (const object *) this);
}

error rich_text_label::parse_bbcode(const string bbcode) {
	return (error) ___godot_icall_int_String(___mb.mb_parse_bbcode, (const object *) this, bbcode);
}

dictionary rich_text_label::parse_expressions_for_values(const pool_string_array expressions) {
	return ___godot_icall_Dictionary_PoolStringArray(___mb.mb_parse_expressions_for_values, (const object *) this, expressions);
}

void rich_text_label::pop() {
	___godot_icall_void(___mb.mb_pop, (const object *) this);
}

void rich_text_label::push_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_push_align, (const object *) this, align);
}

void rich_text_label::push_bold() {
	___godot_icall_void(___mb.mb_push_bold, (const object *) this);
}

void rich_text_label::push_bold_italics() {
	___godot_icall_void(___mb.mb_push_bold_italics, (const object *) this);
}

void rich_text_label::push_cell() {
	___godot_icall_void(___mb.mb_push_cell, (const object *) this);
}

void rich_text_label::push_color(const color color_) {
	___godot_icall_void_Color(___mb.mb_push_color, (const object *) this, color_);
}

void rich_text_label::push_font(const ref<font> font_) {
	___godot_icall_void_Object(___mb.mb_push_font, (const object *) this, font_.ptr());
}

void rich_text_label::push_indent(const int64_t level) {
	___godot_icall_void_int(___mb.mb_push_indent, (const object *) this, level);
}

void rich_text_label::push_italics() {
	___godot_icall_void(___mb.mb_push_italics, (const object *) this);
}

void rich_text_label::push_list(const int64_t type) {
	___godot_icall_void_int(___mb.mb_push_list, (const object *) this, type);
}

void rich_text_label::push_meta(const variant data) {
	___godot_icall_void_Variant(___mb.mb_push_meta, (const object *) this, data);
}

void rich_text_label::push_mono() {
	___godot_icall_void(___mb.mb_push_mono, (const object *) this);
}

void rich_text_label::push_normal() {
	___godot_icall_void(___mb.mb_push_normal, (const object *) this);
}

void rich_text_label::push_strikethrough() {
	___godot_icall_void(___mb.mb_push_strikethrough, (const object *) this);
}

void rich_text_label::push_table(const int64_t columns) {
	___godot_icall_void_int(___mb.mb_push_table, (const object *) this, columns);
}

void rich_text_label::push_underline() {
	___godot_icall_void(___mb.mb_push_underline, (const object *) this);
}

bool rich_text_label::remove_line(const int64_t line) {
	return ___godot_icall_bool_int(___mb.mb_remove_line, (const object *) this, line);
}

void rich_text_label::scroll_to_line(const int64_t line) {
	___godot_icall_void_int(___mb.mb_scroll_to_line, (const object *) this, line);
}

void rich_text_label::set_bbcode(const string text) {
	___godot_icall_void_String(___mb.mb_set_bbcode, (const object *) this, text);
}

void rich_text_label::set_deselect_on_focus_loss_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_deselect_on_focus_loss_enabled, (const object *) this, enable);
}

void rich_text_label::set_effects(const array effects) {
	___godot_icall_void_Array(___mb.mb_set_effects, (const object *) this, effects);
}

void rich_text_label::set_fit_content_height(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_fit_content_height, (const object *) this, enabled);
}

void rich_text_label::set_meta_underline(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_meta_underline, (const object *) this, enable);
}

void rich_text_label::set_override_selected_font_color(const bool override) {
	___godot_icall_void_bool(___mb.mb_set_override_selected_font_color, (const object *) this, override);
}

void rich_text_label::set_percent_visible(const real_t percent_visible) {
	___godot_icall_void_float(___mb.mb_set_percent_visible, (const object *) this, percent_visible);
}

void rich_text_label::set_scroll_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_set_scroll_active, (const object *) this, active);
}

void rich_text_label::set_scroll_follow(const bool follow) {
	___godot_icall_void_bool(___mb.mb_set_scroll_follow, (const object *) this, follow);
}

void rich_text_label::set_selection_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_selection_enabled, (const object *) this, enabled);
}

void rich_text_label::set_tab_size(const int64_t spaces) {
	___godot_icall_void_int(___mb.mb_set_tab_size, (const object *) this, spaces);
}

void rich_text_label::set_table_column_expand(const int64_t column, const bool expand, const int64_t ratio) {
	___godot_icall_void_int_bool_int(___mb.mb_set_table_column_expand, (const object *) this, column, expand, ratio);
}

void rich_text_label::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void rich_text_label::set_use_bbcode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_bbcode, (const object *) this, enable);
}

void rich_text_label::set_visible_characters(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_visible_characters, (const object *) this, amount);
}

}