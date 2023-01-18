#include "text_edit.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "popup_menu.hpp"


namespace gd {


text_edit::___method_bindings text_edit::___mb = {};

void *text_edit::_detail_class_tag = nullptr;

void text_edit::___init_method_bindings() {
	___mb.mb__click_selection_held = gd::api->godot_method_bind_get_method("TextEdit", "_click_selection_held");
	___mb.mb__cursor_changed_emit = gd::api->godot_method_bind_get_method("TextEdit", "_cursor_changed_emit");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("TextEdit", "_gui_input");
	___mb.mb__push_current_op = gd::api->godot_method_bind_get_method("TextEdit", "_push_current_op");
	___mb.mb__scroll_moved = gd::api->godot_method_bind_get_method("TextEdit", "_scroll_moved");
	___mb.mb__text_changed_emit = gd::api->godot_method_bind_get_method("TextEdit", "_text_changed_emit");
	___mb.mb__toggle_draw_caret = gd::api->godot_method_bind_get_method("TextEdit", "_toggle_draw_caret");
	___mb.mb__update_wrap_at = gd::api->godot_method_bind_get_method("TextEdit", "_update_wrap_at");
	___mb.mb__v_scroll_input = gd::api->godot_method_bind_get_method("TextEdit", "_v_scroll_input");
	___mb.mb_add_color_region = gd::api->godot_method_bind_get_method("TextEdit", "add_color_region");
	___mb.mb_add_keyword_color = gd::api->godot_method_bind_get_method("TextEdit", "add_keyword_color");
	___mb.mb_can_fold = gd::api->godot_method_bind_get_method("TextEdit", "can_fold");
	___mb.mb_center_viewport_to_cursor = gd::api->godot_method_bind_get_method("TextEdit", "center_viewport_to_cursor");
	___mb.mb_clear_colors = gd::api->godot_method_bind_get_method("TextEdit", "clear_colors");
	___mb.mb_clear_undo_history = gd::api->godot_method_bind_get_method("TextEdit", "clear_undo_history");
	___mb.mb_copy = gd::api->godot_method_bind_get_method("TextEdit", "copy");
	___mb.mb_cursor_get_blink_enabled = gd::api->godot_method_bind_get_method("TextEdit", "cursor_get_blink_enabled");
	___mb.mb_cursor_get_blink_speed = gd::api->godot_method_bind_get_method("TextEdit", "cursor_get_blink_speed");
	___mb.mb_cursor_get_column = gd::api->godot_method_bind_get_method("TextEdit", "cursor_get_column");
	___mb.mb_cursor_get_line = gd::api->godot_method_bind_get_method("TextEdit", "cursor_get_line");
	___mb.mb_cursor_is_block_mode = gd::api->godot_method_bind_get_method("TextEdit", "cursor_is_block_mode");
	___mb.mb_cursor_set_blink_enabled = gd::api->godot_method_bind_get_method("TextEdit", "cursor_set_blink_enabled");
	___mb.mb_cursor_set_blink_speed = gd::api->godot_method_bind_get_method("TextEdit", "cursor_set_blink_speed");
	___mb.mb_cursor_set_block_mode = gd::api->godot_method_bind_get_method("TextEdit", "cursor_set_block_mode");
	___mb.mb_cursor_set_column = gd::api->godot_method_bind_get_method("TextEdit", "cursor_set_column");
	___mb.mb_cursor_set_line = gd::api->godot_method_bind_get_method("TextEdit", "cursor_set_line");
	___mb.mb_cut = gd::api->godot_method_bind_get_method("TextEdit", "cut");
	___mb.mb_deselect = gd::api->godot_method_bind_get_method("TextEdit", "deselect");
	___mb.mb_draw_minimap = gd::api->godot_method_bind_get_method("TextEdit", "draw_minimap");
	___mb.mb_fold_all_lines = gd::api->godot_method_bind_get_method("TextEdit", "fold_all_lines");
	___mb.mb_fold_line = gd::api->godot_method_bind_get_method("TextEdit", "fold_line");
	___mb.mb_get_breakpoints = gd::api->godot_method_bind_get_method("TextEdit", "get_breakpoints");
	___mb.mb_get_h_scroll = gd::api->godot_method_bind_get_method("TextEdit", "get_h_scroll");
	___mb.mb_get_keyword_color = gd::api->godot_method_bind_get_method("TextEdit", "get_keyword_color");
	___mb.mb_get_line = gd::api->godot_method_bind_get_method("TextEdit", "get_line");
	___mb.mb_get_line_column_at_pos = gd::api->godot_method_bind_get_method("TextEdit", "get_line_column_at_pos");
	___mb.mb_get_line_count = gd::api->godot_method_bind_get_method("TextEdit", "get_line_count");
	___mb.mb_get_line_height = gd::api->godot_method_bind_get_method("TextEdit", "get_line_height");
	___mb.mb_get_line_width = gd::api->godot_method_bind_get_method("TextEdit", "get_line_width");
	___mb.mb_get_line_wrap_count = gd::api->godot_method_bind_get_method("TextEdit", "get_line_wrap_count");
	___mb.mb_get_line_wrapped_text = gd::api->godot_method_bind_get_method("TextEdit", "get_line_wrapped_text");
	___mb.mb_get_menu = gd::api->godot_method_bind_get_method("TextEdit", "get_menu");
	___mb.mb_get_minimap_width = gd::api->godot_method_bind_get_method("TextEdit", "get_minimap_width");
	___mb.mb_get_pos_at_line_column = gd::api->godot_method_bind_get_method("TextEdit", "get_pos_at_line_column");
	___mb.mb_get_rect_at_line_column = gd::api->godot_method_bind_get_method("TextEdit", "get_rect_at_line_column");
	___mb.mb_get_selection_from_column = gd::api->godot_method_bind_get_method("TextEdit", "get_selection_from_column");
	___mb.mb_get_selection_from_line = gd::api->godot_method_bind_get_method("TextEdit", "get_selection_from_line");
	___mb.mb_get_selection_text = gd::api->godot_method_bind_get_method("TextEdit", "get_selection_text");
	___mb.mb_get_selection_to_column = gd::api->godot_method_bind_get_method("TextEdit", "get_selection_to_column");
	___mb.mb_get_selection_to_line = gd::api->godot_method_bind_get_method("TextEdit", "get_selection_to_line");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("TextEdit", "get_text");
	___mb.mb_get_total_gutter_width = gd::api->godot_method_bind_get_method("TextEdit", "get_total_gutter_width");
	___mb.mb_get_total_visible_rows = gd::api->godot_method_bind_get_method("TextEdit", "get_total_visible_rows");
	___mb.mb_get_v_scroll = gd::api->godot_method_bind_get_method("TextEdit", "get_v_scroll");
	___mb.mb_get_v_scroll_speed = gd::api->godot_method_bind_get_method("TextEdit", "get_v_scroll_speed");
	___mb.mb_get_visible_rows = gd::api->godot_method_bind_get_method("TextEdit", "get_visible_rows");
	___mb.mb_get_word_under_cursor = gd::api->godot_method_bind_get_method("TextEdit", "get_word_under_cursor");
	___mb.mb_has_keyword_color = gd::api->godot_method_bind_get_method("TextEdit", "has_keyword_color");
	___mb.mb_has_redo = gd::api->godot_method_bind_get_method("TextEdit", "has_redo");
	___mb.mb_has_undo = gd::api->godot_method_bind_get_method("TextEdit", "has_undo");
	___mb.mb_insert_text_at_cursor = gd::api->godot_method_bind_get_method("TextEdit", "insert_text_at_cursor");
	___mb.mb_is_bookmark_gutter_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_bookmark_gutter_enabled");
	___mb.mb_is_breakpoint_gutter_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_breakpoint_gutter_enabled");
	___mb.mb_is_context_menu_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_context_menu_enabled");
	___mb.mb_is_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_deselect_on_focus_loss_enabled");
	___mb.mb_is_drag_and_drop_selection_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_drag_and_drop_selection_enabled");
	___mb.mb_is_drawing_fold_gutter = gd::api->godot_method_bind_get_method("TextEdit", "is_drawing_fold_gutter");
	___mb.mb_is_drawing_minimap = gd::api->godot_method_bind_get_method("TextEdit", "is_drawing_minimap");
	___mb.mb_is_drawing_spaces = gd::api->godot_method_bind_get_method("TextEdit", "is_drawing_spaces");
	___mb.mb_is_drawing_tabs = gd::api->godot_method_bind_get_method("TextEdit", "is_drawing_tabs");
	___mb.mb_is_folded = gd::api->godot_method_bind_get_method("TextEdit", "is_folded");
	___mb.mb_is_hiding_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_hiding_enabled");
	___mb.mb_is_highlight_all_occurrences_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_highlight_all_occurrences_enabled");
	___mb.mb_is_highlight_current_line_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_highlight_current_line_enabled");
	___mb.mb_is_line_hidden = gd::api->godot_method_bind_get_method("TextEdit", "is_line_hidden");
	___mb.mb_is_line_set_as_bookmark = gd::api->godot_method_bind_get_method("TextEdit", "is_line_set_as_bookmark");
	___mb.mb_is_line_set_as_breakpoint = gd::api->godot_method_bind_get_method("TextEdit", "is_line_set_as_breakpoint");
	___mb.mb_is_line_set_as_safe = gd::api->godot_method_bind_get_method("TextEdit", "is_line_set_as_safe");
	___mb.mb_is_line_wrapped = gd::api->godot_method_bind_get_method("TextEdit", "is_line_wrapped");
	___mb.mb_is_middle_mouse_paste_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_middle_mouse_paste_enabled");
	___mb.mb_is_mouse_over_selection = gd::api->godot_method_bind_get_method("TextEdit", "is_mouse_over_selection");
	___mb.mb_is_overriding_selected_font_color = gd::api->godot_method_bind_get_method("TextEdit", "is_overriding_selected_font_color");
	___mb.mb_is_readonly = gd::api->godot_method_bind_get_method("TextEdit", "is_readonly");
	___mb.mb_is_right_click_moving_caret = gd::api->godot_method_bind_get_method("TextEdit", "is_right_click_moving_caret");
	___mb.mb_is_selecting_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_selecting_enabled");
	___mb.mb_is_selection_active = gd::api->godot_method_bind_get_method("TextEdit", "is_selection_active");
	___mb.mb_is_shortcut_keys_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_shortcut_keys_enabled");
	___mb.mb_is_show_line_numbers_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_show_line_numbers_enabled");
	___mb.mb_is_smooth_scroll_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_smooth_scroll_enabled");
	___mb.mb_is_syntax_coloring_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_syntax_coloring_enabled");
	___mb.mb_is_virtual_keyboard_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_virtual_keyboard_enabled");
	___mb.mb_is_wrap_enabled = gd::api->godot_method_bind_get_method("TextEdit", "is_wrap_enabled");
	___mb.mb_menu_option = gd::api->godot_method_bind_get_method("TextEdit", "menu_option");
	___mb.mb_paste = gd::api->godot_method_bind_get_method("TextEdit", "paste");
	___mb.mb_redo = gd::api->godot_method_bind_get_method("TextEdit", "redo");
	___mb.mb_remove_breakpoints = gd::api->godot_method_bind_get_method("TextEdit", "remove_breakpoints");
	___mb.mb_search = gd::api->godot_method_bind_get_method("TextEdit", "search");
	___mb.mb_select = gd::api->godot_method_bind_get_method("TextEdit", "select");
	___mb.mb_select_all = gd::api->godot_method_bind_get_method("TextEdit", "select_all");
	___mb.mb_set_bookmark_gutter_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_bookmark_gutter_enabled");
	___mb.mb_set_breakpoint_gutter_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_breakpoint_gutter_enabled");
	___mb.mb_set_context_menu_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_context_menu_enabled");
	___mb.mb_set_deselect_on_focus_loss_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_deselect_on_focus_loss_enabled");
	___mb.mb_set_drag_and_drop_selection_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_drag_and_drop_selection_enabled");
	___mb.mb_set_draw_fold_gutter = gd::api->godot_method_bind_get_method("TextEdit", "set_draw_fold_gutter");
	___mb.mb_set_draw_spaces = gd::api->godot_method_bind_get_method("TextEdit", "set_draw_spaces");
	___mb.mb_set_draw_tabs = gd::api->godot_method_bind_get_method("TextEdit", "set_draw_tabs");
	___mb.mb_set_h_scroll = gd::api->godot_method_bind_get_method("TextEdit", "set_h_scroll");
	___mb.mb_set_hiding_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_hiding_enabled");
	___mb.mb_set_highlight_all_occurrences = gd::api->godot_method_bind_get_method("TextEdit", "set_highlight_all_occurrences");
	___mb.mb_set_highlight_current_line = gd::api->godot_method_bind_get_method("TextEdit", "set_highlight_current_line");
	___mb.mb_set_line = gd::api->godot_method_bind_get_method("TextEdit", "set_line");
	___mb.mb_set_line_as_bookmark = gd::api->godot_method_bind_get_method("TextEdit", "set_line_as_bookmark");
	___mb.mb_set_line_as_breakpoint = gd::api->godot_method_bind_get_method("TextEdit", "set_line_as_breakpoint");
	___mb.mb_set_line_as_hidden = gd::api->godot_method_bind_get_method("TextEdit", "set_line_as_hidden");
	___mb.mb_set_line_as_safe = gd::api->godot_method_bind_get_method("TextEdit", "set_line_as_safe");
	___mb.mb_set_middle_mouse_paste_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_middle_mouse_paste_enabled");
	___mb.mb_set_minimap_width = gd::api->godot_method_bind_get_method("TextEdit", "set_minimap_width");
	___mb.mb_set_override_selected_font_color = gd::api->godot_method_bind_get_method("TextEdit", "set_override_selected_font_color");
	___mb.mb_set_readonly = gd::api->godot_method_bind_get_method("TextEdit", "set_readonly");
	___mb.mb_set_right_click_moves_caret = gd::api->godot_method_bind_get_method("TextEdit", "set_right_click_moves_caret");
	___mb.mb_set_selecting_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_selecting_enabled");
	___mb.mb_set_shortcut_keys_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_shortcut_keys_enabled");
	___mb.mb_set_show_line_numbers = gd::api->godot_method_bind_get_method("TextEdit", "set_show_line_numbers");
	___mb.mb_set_smooth_scroll_enable = gd::api->godot_method_bind_get_method("TextEdit", "set_smooth_scroll_enable");
	___mb.mb_set_syntax_coloring = gd::api->godot_method_bind_get_method("TextEdit", "set_syntax_coloring");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("TextEdit", "set_text");
	___mb.mb_set_v_scroll = gd::api->godot_method_bind_get_method("TextEdit", "set_v_scroll");
	___mb.mb_set_v_scroll_speed = gd::api->godot_method_bind_get_method("TextEdit", "set_v_scroll_speed");
	___mb.mb_set_virtual_keyboard_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_virtual_keyboard_enabled");
	___mb.mb_set_wrap_enabled = gd::api->godot_method_bind_get_method("TextEdit", "set_wrap_enabled");
	___mb.mb_toggle_fold_line = gd::api->godot_method_bind_get_method("TextEdit", "toggle_fold_line");
	___mb.mb_undo = gd::api->godot_method_bind_get_method("TextEdit", "undo");
	___mb.mb_unfold_line = gd::api->godot_method_bind_get_method("TextEdit", "unfold_line");
	___mb.mb_unhide_all_lines = gd::api->godot_method_bind_get_method("TextEdit", "unhide_all_lines");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextEdit");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

text_edit *text_edit::_new()
{
	return (text_edit *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextEdit")());
}
void text_edit::_click_selection_held() {
	___godot_icall_void(___mb.mb__click_selection_held, (const object *) this);
}

void text_edit::_cursor_changed_emit() {
	___godot_icall_void(___mb.mb__cursor_changed_emit, (const object *) this);
}

void text_edit::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void text_edit::_push_current_op() {
	___godot_icall_void(___mb.mb__push_current_op, (const object *) this);
}

void text_edit::_scroll_moved(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_moved, (const object *) this, arg0);
}

void text_edit::_text_changed_emit() {
	___godot_icall_void(___mb.mb__text_changed_emit, (const object *) this);
}

void text_edit::_toggle_draw_caret() {
	___godot_icall_void(___mb.mb__toggle_draw_caret, (const object *) this);
}

void text_edit::_update_wrap_at() {
	___godot_icall_void(___mb.mb__update_wrap_at, (const object *) this);
}

void text_edit::_v_scroll_input() {
	___godot_icall_void(___mb.mb__v_scroll_input, (const object *) this);
}

void text_edit::add_color_region(const string begin_key, const string end_key, const color color_, const bool line_only) {
	___godot_icall_void_String_String_Color_bool(___mb.mb_add_color_region, (const object *) this, begin_key, end_key, color_, line_only);
}

void text_edit::add_keyword_color(const string keyword, const color color_) {
	___godot_icall_void_String_Color(___mb.mb_add_keyword_color, (const object *) this, keyword, color_);
}

bool text_edit::can_fold(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_can_fold, (const object *) this, line);
}

void text_edit::center_viewport_to_cursor() {
	___godot_icall_void(___mb.mb_center_viewport_to_cursor, (const object *) this);
}

void text_edit::clear_colors() {
	___godot_icall_void(___mb.mb_clear_colors, (const object *) this);
}

void text_edit::clear_undo_history() {
	___godot_icall_void(___mb.mb_clear_undo_history, (const object *) this);
}

void text_edit::copy() {
	___godot_icall_void(___mb.mb_copy, (const object *) this);
}

bool text_edit::cursor_get_blink_enabled() const {
	return ___godot_icall_bool(___mb.mb_cursor_get_blink_enabled, (const object *) this);
}

real_t text_edit::cursor_get_blink_speed() const {
	return ___godot_icall_float(___mb.mb_cursor_get_blink_speed, (const object *) this);
}

int64_t text_edit::cursor_get_column() const {
	return ___godot_icall_int(___mb.mb_cursor_get_column, (const object *) this);
}

int64_t text_edit::cursor_get_line() const {
	return ___godot_icall_int(___mb.mb_cursor_get_line, (const object *) this);
}

bool text_edit::cursor_is_block_mode() const {
	return ___godot_icall_bool(___mb.mb_cursor_is_block_mode, (const object *) this);
}

void text_edit::cursor_set_blink_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_cursor_set_blink_enabled, (const object *) this, enable);
}

void text_edit::cursor_set_blink_speed(const real_t blink_speed) {
	___godot_icall_void_float(___mb.mb_cursor_set_blink_speed, (const object *) this, blink_speed);
}

void text_edit::cursor_set_block_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_cursor_set_block_mode, (const object *) this, enable);
}

void text_edit::cursor_set_column(const int64_t column, const bool adjust_viewport) {
	___godot_icall_void_int_bool(___mb.mb_cursor_set_column, (const object *) this, column, adjust_viewport);
}

void text_edit::cursor_set_line(const int64_t line, const bool adjust_viewport, const bool can_be_hidden, const int64_t wrap_index) {
	___godot_icall_void_int_bool_bool_int(___mb.mb_cursor_set_line, (const object *) this, line, adjust_viewport, can_be_hidden, wrap_index);
}

void text_edit::cut() {
	___godot_icall_void(___mb.mb_cut, (const object *) this);
}

void text_edit::deselect() {
	___godot_icall_void(___mb.mb_deselect, (const object *) this);
}

void text_edit::draw_minimap(const bool draw) {
	___godot_icall_void_bool(___mb.mb_draw_minimap, (const object *) this, draw);
}

void text_edit::fold_all_lines() {
	___godot_icall_void(___mb.mb_fold_all_lines, (const object *) this);
}

void text_edit::fold_line(const int64_t line) {
	___godot_icall_void_int(___mb.mb_fold_line, (const object *) this, line);
}

array text_edit::get_breakpoints() const {
	return ___godot_icall_Array(___mb.mb_get_breakpoints, (const object *) this);
}

int64_t text_edit::get_h_scroll() const {
	return ___godot_icall_int(___mb.mb_get_h_scroll, (const object *) this);
}

color text_edit::get_keyword_color(const string keyword) const {
	return ___godot_icall_Color_String(___mb.mb_get_keyword_color, (const object *) this, keyword);
}

string text_edit::get_line(const int64_t line) const {
	return ___godot_icall_String_int(___mb.mb_get_line, (const object *) this, line);
}

vector2 text_edit::get_line_column_at_pos(const vector2 position) const {
	return ___godot_icall_Vector2_Vector2(___mb.mb_get_line_column_at_pos, (const object *) this, position);
}

int64_t text_edit::get_line_count() const {
	return ___godot_icall_int(___mb.mb_get_line_count, (const object *) this);
}

int64_t text_edit::get_line_height() const {
	return ___godot_icall_int(___mb.mb_get_line_height, (const object *) this);
}

int64_t text_edit::get_line_width(const int64_t line, const int64_t wrap_index) const {
	return ___godot_icall_int_int_int(___mb.mb_get_line_width, (const object *) this, line, wrap_index);
}

int64_t text_edit::get_line_wrap_count(const int64_t line) const {
	return ___godot_icall_int_int(___mb.mb_get_line_wrap_count, (const object *) this, line);
}

pool_string_array text_edit::get_line_wrapped_text(const int64_t line) const {
	return ___godot_icall_PoolStringArray_int(___mb.mb_get_line_wrapped_text, (const object *) this, line);
}

popup_menu *text_edit::get_menu() const {
	return (popup_menu *) ___godot_icall_Object(___mb.mb_get_menu, (const object *) this);
}

int64_t text_edit::get_minimap_width() const {
	return ___godot_icall_int(___mb.mb_get_minimap_width, (const object *) this);
}

vector2 text_edit::get_pos_at_line_column(const int64_t line, const int64_t column) const {
	return ___godot_icall_Vector2_int_int(___mb.mb_get_pos_at_line_column, (const object *) this, line, column);
}

rect2 text_edit::get_rect_at_line_column(const int64_t line, const int64_t column) const {
	return ___godot_icall_Rect2_int_int(___mb.mb_get_rect_at_line_column, (const object *) this, line, column);
}

int64_t text_edit::get_selection_from_column() const {
	return ___godot_icall_int(___mb.mb_get_selection_from_column, (const object *) this);
}

int64_t text_edit::get_selection_from_line() const {
	return ___godot_icall_int(___mb.mb_get_selection_from_line, (const object *) this);
}

string text_edit::get_selection_text() const {
	return ___godot_icall_String(___mb.mb_get_selection_text, (const object *) this);
}

int64_t text_edit::get_selection_to_column() const {
	return ___godot_icall_int(___mb.mb_get_selection_to_column, (const object *) this);
}

int64_t text_edit::get_selection_to_line() const {
	return ___godot_icall_int(___mb.mb_get_selection_to_line, (const object *) this);
}

string text_edit::get_text() {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

int64_t text_edit::get_total_gutter_width() const {
	return ___godot_icall_int(___mb.mb_get_total_gutter_width, (const object *) this);
}

int64_t text_edit::get_total_visible_rows() const {
	return ___godot_icall_int(___mb.mb_get_total_visible_rows, (const object *) this);
}

real_t text_edit::get_v_scroll() const {
	return ___godot_icall_float(___mb.mb_get_v_scroll, (const object *) this);
}

real_t text_edit::get_v_scroll_speed() const {
	return ___godot_icall_float(___mb.mb_get_v_scroll_speed, (const object *) this);
}

int64_t text_edit::get_visible_rows() const {
	return ___godot_icall_int(___mb.mb_get_visible_rows, (const object *) this);
}

string text_edit::get_word_under_cursor() const {
	return ___godot_icall_String(___mb.mb_get_word_under_cursor, (const object *) this);
}

bool text_edit::has_keyword_color(const string keyword) const {
	return ___godot_icall_bool_String(___mb.mb_has_keyword_color, (const object *) this, keyword);
}

bool text_edit::has_redo() const {
	return ___godot_icall_bool(___mb.mb_has_redo, (const object *) this);
}

bool text_edit::has_undo() const {
	return ___godot_icall_bool(___mb.mb_has_undo, (const object *) this);
}

void text_edit::insert_text_at_cursor(const string text) {
	___godot_icall_void_String(___mb.mb_insert_text_at_cursor, (const object *) this, text);
}

bool text_edit::is_bookmark_gutter_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_bookmark_gutter_enabled, (const object *) this);
}

bool text_edit::is_breakpoint_gutter_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_breakpoint_gutter_enabled, (const object *) this);
}

bool text_edit::is_context_menu_enabled() {
	return ___godot_icall_bool(___mb.mb_is_context_menu_enabled, (const object *) this);
}

bool text_edit::is_deselect_on_focus_loss_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_deselect_on_focus_loss_enabled, (const object *) this);
}

bool text_edit::is_drag_and_drop_selection_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_drag_and_drop_selection_enabled, (const object *) this);
}

bool text_edit::is_drawing_fold_gutter() const {
	return ___godot_icall_bool(___mb.mb_is_drawing_fold_gutter, (const object *) this);
}

bool text_edit::is_drawing_minimap() const {
	return ___godot_icall_bool(___mb.mb_is_drawing_minimap, (const object *) this);
}

bool text_edit::is_drawing_spaces() const {
	return ___godot_icall_bool(___mb.mb_is_drawing_spaces, (const object *) this);
}

bool text_edit::is_drawing_tabs() const {
	return ___godot_icall_bool(___mb.mb_is_drawing_tabs, (const object *) this);
}

bool text_edit::is_folded(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_folded, (const object *) this, line);
}

bool text_edit::is_hiding_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_hiding_enabled, (const object *) this);
}

bool text_edit::is_highlight_all_occurrences_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_highlight_all_occurrences_enabled, (const object *) this);
}

bool text_edit::is_highlight_current_line_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_highlight_current_line_enabled, (const object *) this);
}

bool text_edit::is_line_hidden(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_line_hidden, (const object *) this, line);
}

bool text_edit::is_line_set_as_bookmark(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_line_set_as_bookmark, (const object *) this, line);
}

bool text_edit::is_line_set_as_breakpoint(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_line_set_as_breakpoint, (const object *) this, line);
}

bool text_edit::is_line_set_as_safe(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_line_set_as_safe, (const object *) this, line);
}

bool text_edit::is_line_wrapped(const int64_t line) const {
	return ___godot_icall_bool_int(___mb.mb_is_line_wrapped, (const object *) this, line);
}

bool text_edit::is_middle_mouse_paste_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_middle_mouse_paste_enabled, (const object *) this);
}

bool text_edit::is_mouse_over_selection(const bool edges) const {
	return ___godot_icall_bool_bool(___mb.mb_is_mouse_over_selection, (const object *) this, edges);
}

bool text_edit::is_overriding_selected_font_color() const {
	return ___godot_icall_bool(___mb.mb_is_overriding_selected_font_color, (const object *) this);
}

bool text_edit::is_readonly() const {
	return ___godot_icall_bool(___mb.mb_is_readonly, (const object *) this);
}

bool text_edit::is_right_click_moving_caret() const {
	return ___godot_icall_bool(___mb.mb_is_right_click_moving_caret, (const object *) this);
}

bool text_edit::is_selecting_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_selecting_enabled, (const object *) this);
}

bool text_edit::is_selection_active() const {
	return ___godot_icall_bool(___mb.mb_is_selection_active, (const object *) this);
}

bool text_edit::is_shortcut_keys_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_shortcut_keys_enabled, (const object *) this);
}

bool text_edit::is_show_line_numbers_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_show_line_numbers_enabled, (const object *) this);
}

bool text_edit::is_smooth_scroll_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_smooth_scroll_enabled, (const object *) this);
}

bool text_edit::is_syntax_coloring_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_syntax_coloring_enabled, (const object *) this);
}

bool text_edit::is_virtual_keyboard_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_virtual_keyboard_enabled, (const object *) this);
}

bool text_edit::is_wrap_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_wrap_enabled, (const object *) this);
}

void text_edit::menu_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb_menu_option, (const object *) this, option);
}

void text_edit::paste() {
	___godot_icall_void(___mb.mb_paste, (const object *) this);
}

void text_edit::redo() {
	___godot_icall_void(___mb.mb_redo, (const object *) this);
}

void text_edit::remove_breakpoints() {
	___godot_icall_void(___mb.mb_remove_breakpoints, (const object *) this);
}

pool_int_array text_edit::search(const string key, const int64_t flags, const int64_t from_line, const int64_t from_column) const {
	return ___godot_icall_PoolIntArray_String_int_int_int(___mb.mb_search, (const object *) this, key, flags, from_line, from_column);
}

void text_edit::select(const int64_t from_line, const int64_t from_column, const int64_t to_line, const int64_t to_column) {
	___godot_icall_void_int_int_int_int(___mb.mb_select, (const object *) this, from_line, from_column, to_line, to_column);
}

void text_edit::select_all() {
	___godot_icall_void(___mb.mb_select_all, (const object *) this);
}

void text_edit::set_bookmark_gutter_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_bookmark_gutter_enabled, (const object *) this, enable);
}

void text_edit::set_breakpoint_gutter_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_breakpoint_gutter_enabled, (const object *) this, enable);
}

void text_edit::set_context_menu_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_context_menu_enabled, (const object *) this, enable);
}

void text_edit::set_deselect_on_focus_loss_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_deselect_on_focus_loss_enabled, (const object *) this, enable);
}

void text_edit::set_drag_and_drop_selection_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_drag_and_drop_selection_enabled, (const object *) this, enable);
}

void text_edit::set_draw_fold_gutter(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_draw_fold_gutter, (const object *) this, enable);
}

void text_edit::set_draw_spaces(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_draw_spaces, (const object *) this, enable);
}

void text_edit::set_draw_tabs(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_draw_tabs, (const object *) this, enable);
}

void text_edit::set_h_scroll(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_h_scroll, (const object *) this, value);
}

void text_edit::set_hiding_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hiding_enabled, (const object *) this, enable);
}

void text_edit::set_highlight_all_occurrences(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_highlight_all_occurrences, (const object *) this, enable);
}

void text_edit::set_highlight_current_line(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_highlight_current_line, (const object *) this, enabled);
}

void text_edit::set_line(const int64_t line, const string new_text) {
	___godot_icall_void_int_String(___mb.mb_set_line, (const object *) this, line, new_text);
}

void text_edit::set_line_as_bookmark(const int64_t line, const bool bookmark) {
	___godot_icall_void_int_bool(___mb.mb_set_line_as_bookmark, (const object *) this, line, bookmark);
}

void text_edit::set_line_as_breakpoint(const int64_t line, const bool breakpoint) {
	___godot_icall_void_int_bool(___mb.mb_set_line_as_breakpoint, (const object *) this, line, breakpoint);
}

void text_edit::set_line_as_hidden(const int64_t line, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_line_as_hidden, (const object *) this, line, enable);
}

void text_edit::set_line_as_safe(const int64_t line, const bool safe) {
	___godot_icall_void_int_bool(___mb.mb_set_line_as_safe, (const object *) this, line, safe);
}

void text_edit::set_middle_mouse_paste_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_middle_mouse_paste_enabled, (const object *) this, enable);
}

void text_edit::set_minimap_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_minimap_width, (const object *) this, width);
}

void text_edit::set_override_selected_font_color(const bool override) {
	___godot_icall_void_bool(___mb.mb_set_override_selected_font_color, (const object *) this, override);
}

void text_edit::set_readonly(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_readonly, (const object *) this, enable);
}

void text_edit::set_right_click_moves_caret(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_right_click_moves_caret, (const object *) this, enable);
}

void text_edit::set_selecting_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_selecting_enabled, (const object *) this, enable);
}

void text_edit::set_shortcut_keys_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_shortcut_keys_enabled, (const object *) this, enable);
}

void text_edit::set_show_line_numbers(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_show_line_numbers, (const object *) this, enable);
}

void text_edit::set_smooth_scroll_enable(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_smooth_scroll_enable, (const object *) this, enable);
}

void text_edit::set_syntax_coloring(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_syntax_coloring, (const object *) this, enable);
}

void text_edit::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

void text_edit::set_v_scroll(const real_t value) {
	___godot_icall_void_float(___mb.mb_set_v_scroll, (const object *) this, value);
}

void text_edit::set_v_scroll_speed(const real_t speed) {
	___godot_icall_void_float(___mb.mb_set_v_scroll_speed, (const object *) this, speed);
}

void text_edit::set_virtual_keyboard_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_virtual_keyboard_enabled, (const object *) this, enable);
}

void text_edit::set_wrap_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_wrap_enabled, (const object *) this, enable);
}

void text_edit::toggle_fold_line(const int64_t line) {
	___godot_icall_void_int(___mb.mb_toggle_fold_line, (const object *) this, line);
}

void text_edit::undo() {
	___godot_icall_void(___mb.mb_undo, (const object *) this);
}

void text_edit::unfold_line(const int64_t line) {
	___godot_icall_void_int(___mb.mb_unfold_line, (const object *) this, line);
}

void text_edit::unhide_all_lines() {
	___godot_icall_void(___mb.mb_unhide_all_lines, (const object *) this);
}

}