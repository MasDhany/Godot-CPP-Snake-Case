#include "line_edit.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "popup_menu.hpp"
#include "texture.hpp"


namespace gd {


line_edit::___method_bindings line_edit::___mb = {};

void *line_edit::_detail_class_tag = nullptr;

void line_edit::___init_method_bindings() {
	___mb.mb__editor_settings_changed = gd::api->godot_method_bind_get_method("LineEdit", "_editor_settings_changed");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("LineEdit", "_gui_input");
	___mb.mb__text_changed = gd::api->godot_method_bind_get_method("LineEdit", "_text_changed");
	___mb.mb__toggle_draw_caret = gd::api->godot_method_bind_get_method("LineEdit", "_toggle_draw_caret");
	___mb.mb_append_at_cursor = gd::api->godot_method_bind_get_method("LineEdit", "append_at_cursor");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("LineEdit", "clear");
	___mb.mb_cursor_get_blink_enabled = gd::api->godot_method_bind_get_method("LineEdit", "cursor_get_blink_enabled");
	___mb.mb_cursor_get_blink_speed = gd::api->godot_method_bind_get_method("LineEdit", "cursor_get_blink_speed");
	___mb.mb_cursor_set_blink_enabled = gd::api->godot_method_bind_get_method("LineEdit", "cursor_set_blink_enabled");
	___mb.mb_cursor_set_blink_speed = gd::api->godot_method_bind_get_method("LineEdit", "cursor_set_blink_speed");
	___mb.mb_delete_char_at_cursor = gd::api->godot_method_bind_get_method("LineEdit", "delete_char_at_cursor");
	___mb.mb_delete_text = gd::api->godot_method_bind_get_method("LineEdit", "delete_text");
	___mb.mb_deselect = gd::api->godot_method_bind_get_method("LineEdit", "deselect");
	___mb.mb_get_align = gd::api->godot_method_bind_get_method("LineEdit", "get_align");
	___mb.mb_get_cursor_position = gd::api->godot_method_bind_get_method("LineEdit", "get_cursor_position");
	___mb.mb_get_expand_to_text_length = gd::api->godot_method_bind_get_method("LineEdit", "get_expand_to_text_length");
	___mb.mb_get_max_length = gd::api->godot_method_bind_get_method("LineEdit", "get_max_length");
	___mb.mb_get_menu = gd::api->godot_method_bind_get_method("LineEdit", "get_menu");
	___mb.mb_get_placeholder = gd::api->godot_method_bind_get_method("LineEdit", "get_placeholder");
	___mb.mb_get_placeholder_alpha = gd::api->godot_method_bind_get_method("LineEdit", "get_placeholder_alpha");
	___mb.mb_get_right_icon = gd::api->godot_method_bind_get_method("LineEdit", "get_right_icon");
	___mb.mb_get_scroll_offset = gd::api->godot_method_bind_get_method("LineEdit", "get_scroll_offset");
	___mb.mb_get_secret_character = gd::api->godot_method_bind_get_method("LineEdit", "get_secret_character");
	___mb.mb_get_selection_from_column = gd::api->godot_method_bind_get_method("LineEdit", "get_selection_from_column");
	___mb.mb_get_selection_to_column = gd::api->godot_method_bind_get_method("LineEdit", "get_selection_to_column");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("LineEdit", "get_text");
	___mb.mb_has_selection = gd::api->godot_method_bind_get_method("LineEdit", "has_selection");
	___mb.mb_is_clear_button_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_clear_button_enabled");
	___mb.mb_is_context_menu_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_context_menu_enabled");
	___mb.mb_is_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_deselect_on_focus_loss_enabled");
	___mb.mb_is_editable = gd::api->godot_method_bind_get_method("LineEdit", "is_editable");
	___mb.mb_is_middle_mouse_paste_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_middle_mouse_paste_enabled");
	___mb.mb_is_secret = gd::api->godot_method_bind_get_method("LineEdit", "is_secret");
	___mb.mb_is_selecting_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_selecting_enabled");
	___mb.mb_is_shortcut_keys_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_shortcut_keys_enabled");
	___mb.mb_is_virtual_keyboard_enabled = gd::api->godot_method_bind_get_method("LineEdit", "is_virtual_keyboard_enabled");
	___mb.mb_menu_option = gd::api->godot_method_bind_get_method("LineEdit", "menu_option");
	___mb.mb_select = gd::api->godot_method_bind_get_method("LineEdit", "select");
	___mb.mb_select_all = gd::api->godot_method_bind_get_method("LineEdit", "select_all");
	___mb.mb_set_align = gd::api->godot_method_bind_get_method("LineEdit", "set_align");
	___mb.mb_set_clear_button_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_clear_button_enabled");
	___mb.mb_set_context_menu_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_context_menu_enabled");
	___mb.mb_set_cursor_position = gd::api->godot_method_bind_get_method("LineEdit", "set_cursor_position");
	___mb.mb_set_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_deselect_on_focus_loss_enabled");
	___mb.mb_set_editable = gd::api->godot_method_bind_get_method("LineEdit", "set_editable");
	___mb.mb_set_expand_to_text_length = gd::api->godot_method_bind_get_method("LineEdit", "set_expand_to_text_length");
	___mb.mb_set_max_length = gd::api->godot_method_bind_get_method("LineEdit", "set_max_length");
	___mb.mb_set_middle_mouse_paste_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_middle_mouse_paste_enabled");
	___mb.mb_set_placeholder = gd::api->godot_method_bind_get_method("LineEdit", "set_placeholder");
	___mb.mb_set_placeholder_alpha = gd::api->godot_method_bind_get_method("LineEdit", "set_placeholder_alpha");
	___mb.mb_set_right_icon = gd::api->godot_method_bind_get_method("LineEdit", "set_right_icon");
	___mb.mb_set_secret = gd::api->godot_method_bind_get_method("LineEdit", "set_secret");
	___mb.mb_set_secret_character = gd::api->godot_method_bind_get_method("LineEdit", "set_secret_character");
	___mb.mb_set_selecting_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_selecting_enabled");
	___mb.mb_set_shortcut_keys_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_shortcut_keys_enabled");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("LineEdit", "set_text");
	___mb.mb_set_virtual_keyboard_enabled = gd::api->godot_method_bind_get_method("LineEdit", "set_virtual_keyboard_enabled");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "LineEdit");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

line_edit *line_edit::_new()
{
	return (line_edit *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"LineEdit")());
}
void line_edit::_editor_settings_changed() {
	___godot_icall_void(___mb.mb__editor_settings_changed, (const object *) this);
}

void line_edit::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void line_edit::_text_changed() {
	___godot_icall_void(___mb.mb__text_changed, (const object *) this);
}

void line_edit::_toggle_draw_caret() {
	___godot_icall_void(___mb.mb__toggle_draw_caret, (const object *) this);
}

void line_edit::append_at_cursor(const string text) {
	___godot_icall_void_String(___mb.mb_append_at_cursor, (const object *) this, text);
}

void line_edit::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

bool line_edit::cursor_get_blink_enabled() const {
	return ___godot_icall_bool(___mb.mb_cursor_get_blink_enabled, (const object *) this);
}

real_t line_edit::cursor_get_blink_speed() const {
	return ___godot_icall_float(___mb.mb_cursor_get_blink_speed, (const object *) this);
}

void line_edit::cursor_set_blink_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_cursor_set_blink_enabled, (const object *) this, enabled);
}

void line_edit::cursor_set_blink_speed(const real_t blink_speed) {
	___godot_icall_void_float(___mb.mb_cursor_set_blink_speed, (const object *) this, blink_speed);
}

void line_edit::delete_char_at_cursor() {
	___godot_icall_void(___mb.mb_delete_char_at_cursor, (const object *) this);
}

void line_edit::delete_text(const int64_t from_column, const int64_t to_column) {
	___godot_icall_void_int_int(___mb.mb_delete_text, (const object *) this, from_column, to_column);
}

void line_edit::deselect() {
	___godot_icall_void(___mb.mb_deselect, (const object *) this);
}

line_edit::Align line_edit::get_align() const {
	return (line_edit::Align) ___godot_icall_int(___mb.mb_get_align, (const object *) this);
}

int64_t line_edit::get_cursor_position() const {
	return ___godot_icall_int(___mb.mb_get_cursor_position, (const object *) this);
}

bool line_edit::get_expand_to_text_length() const {
	return ___godot_icall_bool(___mb.mb_get_expand_to_text_length, (const object *) this);
}

int64_t line_edit::get_max_length() const {
	return ___godot_icall_int(___mb.mb_get_max_length, (const object *) this);
}

popup_menu *line_edit::get_menu() const {
	return (popup_menu *) ___godot_icall_Object(___mb.mb_get_menu, (const object *) this);
}

string line_edit::get_placeholder() const {
	return ___godot_icall_String(___mb.mb_get_placeholder, (const object *) this);
}

real_t line_edit::get_placeholder_alpha() const {
	return ___godot_icall_float(___mb.mb_get_placeholder_alpha, (const object *) this);
}

ref<texture> line_edit::get_right_icon() {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_right_icon, (const object *) this));
}

int64_t line_edit::get_scroll_offset() const {
	return ___godot_icall_int(___mb.mb_get_scroll_offset, (const object *) this);
}

string line_edit::get_secret_character() const {
	return ___godot_icall_String(___mb.mb_get_secret_character, (const object *) this);
}

int64_t line_edit::get_selection_from_column() const {
	return ___godot_icall_int(___mb.mb_get_selection_from_column, (const object *) this);
}

int64_t line_edit::get_selection_to_column() const {
	return ___godot_icall_int(___mb.mb_get_selection_to_column, (const object *) this);
}

string line_edit::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

bool line_edit::has_selection() const {
	return ___godot_icall_bool(___mb.mb_has_selection, (const object *) this);
}

bool line_edit::is_clear_button_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_clear_button_enabled, (const object *) this);
}

bool line_edit::is_context_menu_enabled() {
	return ___godot_icall_bool(___mb.mb_is_context_menu_enabled, (const object *) this);
}

bool line_edit::is_deselect_on_focus_loss_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_deselect_on_focus_loss_enabled, (const object *) this);
}

bool line_edit::is_editable() const {
	return ___godot_icall_bool(___mb.mb_is_editable, (const object *) this);
}

bool line_edit::is_middle_mouse_paste_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_middle_mouse_paste_enabled, (const object *) this);
}

bool line_edit::is_secret() const {
	return ___godot_icall_bool(___mb.mb_is_secret, (const object *) this);
}

bool line_edit::is_selecting_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_selecting_enabled, (const object *) this);
}

bool line_edit::is_shortcut_keys_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_shortcut_keys_enabled, (const object *) this);
}

bool line_edit::is_virtual_keyboard_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_virtual_keyboard_enabled, (const object *) this);
}

void line_edit::menu_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb_menu_option, (const object *) this, option);
}

void line_edit::select(const int64_t from, const int64_t to) {
	___godot_icall_void_int_int(___mb.mb_select, (const object *) this, from, to);
}

void line_edit::select_all() {
	___godot_icall_void(___mb.mb_select_all, (const object *) this);
}

void line_edit::set_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_align, (const object *) this, align);
}

void line_edit::set_clear_button_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_clear_button_enabled, (const object *) this, enable);
}

void line_edit::set_context_menu_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_context_menu_enabled, (const object *) this, enable);
}

void line_edit::set_cursor_position(const int64_t position) {
	___godot_icall_void_int(___mb.mb_set_cursor_position, (const object *) this, position);
}

void line_edit::set_deselect_on_focus_loss_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_deselect_on_focus_loss_enabled, (const object *) this, enable);
}

void line_edit::set_editable(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_editable, (const object *) this, enabled);
}

void line_edit::set_expand_to_text_length(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_expand_to_text_length, (const object *) this, enabled);
}

void line_edit::set_max_length(const int64_t chars) {
	___godot_icall_void_int(___mb.mb_set_max_length, (const object *) this, chars);
}

void line_edit::set_middle_mouse_paste_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_middle_mouse_paste_enabled, (const object *) this, enable);
}

void line_edit::set_placeholder(const string text) {
	___godot_icall_void_String(___mb.mb_set_placeholder, (const object *) this, text);
}

void line_edit::set_placeholder_alpha(const real_t alpha) {
	___godot_icall_void_float(___mb.mb_set_placeholder_alpha, (const object *) this, alpha);
}

void line_edit::set_right_icon(const ref<texture> icon) {
	___godot_icall_void_Object(___mb.mb_set_right_icon, (const object *) this, icon.ptr());
}

void line_edit::set_secret(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_secret, (const object *) this, enabled);
}

void line_edit::set_secret_character(const string character) {
	___godot_icall_void_String(___mb.mb_set_secret_character, (const object *) this, character);
}

void line_edit::set_selecting_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_selecting_enabled, (const object *) this, enable);
}

void line_edit::set_shortcut_keys_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_shortcut_keys_enabled, (const object *) this, enable);
}

void line_edit::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void line_edit::set_virtual_keyboard_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_virtual_keyboard_enabled, (const object *) this, enable);
}

}