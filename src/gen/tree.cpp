#include "tree.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "object.hpp"
#include "tree_item.hpp"


namespace gd {


tree::___method_bindings tree::___mb = {};

void *tree::_detail_class_tag = nullptr;

void tree::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("Tree", "_gui_input");
	___mb.mb__popup_select = gd::api->godot_method_bind_get_method("Tree", "_popup_select");
	___mb.mb__range_click_timeout = gd::api->godot_method_bind_get_method("Tree", "_range_click_timeout");
	___mb.mb__scroll_moved = gd::api->godot_method_bind_get_method("Tree", "_scroll_moved");
	___mb.mb__text_editor_enter = gd::api->godot_method_bind_get_method("Tree", "_text_editor_enter");
	___mb.mb__text_editor_modal_close = gd::api->godot_method_bind_get_method("Tree", "_text_editor_modal_close");
	___mb.mb__value_editor_changed = gd::api->godot_method_bind_get_method("Tree", "_value_editor_changed");
	___mb.mb_are_column_titles_visible = gd::api->godot_method_bind_get_method("Tree", "are_column_titles_visible");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("Tree", "clear");
	___mb.mb_create_item = gd::api->godot_method_bind_get_method("Tree", "create_item");
	___mb.mb_edit_selected = gd::api->godot_method_bind_get_method("Tree", "edit_selected");
	___mb.mb_ensure_cursor_is_visible = gd::api->godot_method_bind_get_method("Tree", "ensure_cursor_is_visible");
	___mb.mb_get_allow_reselect = gd::api->godot_method_bind_get_method("Tree", "get_allow_reselect");
	___mb.mb_get_allow_rmb_select = gd::api->godot_method_bind_get_method("Tree", "get_allow_rmb_select");
	___mb.mb_get_button_id_at_position = gd::api->godot_method_bind_get_method("Tree", "get_button_id_at_position");
	___mb.mb_get_column_at_position = gd::api->godot_method_bind_get_method("Tree", "get_column_at_position");
	___mb.mb_get_column_title = gd::api->godot_method_bind_get_method("Tree", "get_column_title");
	___mb.mb_get_column_width = gd::api->godot_method_bind_get_method("Tree", "get_column_width");
	___mb.mb_get_columns = gd::api->godot_method_bind_get_method("Tree", "get_columns");
	___mb.mb_get_custom_popup_rect = gd::api->godot_method_bind_get_method("Tree", "get_custom_popup_rect");
	___mb.mb_get_drop_mode_flags = gd::api->godot_method_bind_get_method("Tree", "get_drop_mode_flags");
	___mb.mb_get_drop_section_at_position = gd::api->godot_method_bind_get_method("Tree", "get_drop_section_at_position");
	___mb.mb_get_edited = gd::api->godot_method_bind_get_method("Tree", "get_edited");
	___mb.mb_get_edited_column = gd::api->godot_method_bind_get_method("Tree", "get_edited_column");
	___mb.mb_get_item_area_rect = gd::api->godot_method_bind_get_method("Tree", "get_item_area_rect");
	___mb.mb_get_item_at_position = gd::api->godot_method_bind_get_method("Tree", "get_item_at_position");
	___mb.mb_get_next_selected = gd::api->godot_method_bind_get_method("Tree", "get_next_selected");
	___mb.mb_get_pressed_button = gd::api->godot_method_bind_get_method("Tree", "get_pressed_button");
	___mb.mb_get_root = gd::api->godot_method_bind_get_method("Tree", "get_root");
	___mb.mb_get_scroll = gd::api->godot_method_bind_get_method("Tree", "get_scroll");
	___mb.mb_get_select_mode = gd::api->godot_method_bind_get_method("Tree", "get_select_mode");
	___mb.mb_get_selected = gd::api->godot_method_bind_get_method("Tree", "get_selected");
	___mb.mb_get_selected_column = gd::api->godot_method_bind_get_method("Tree", "get_selected_column");
	___mb.mb_is_folding_hidden = gd::api->godot_method_bind_get_method("Tree", "is_folding_hidden");
	___mb.mb_is_root_hidden = gd::api->godot_method_bind_get_method("Tree", "is_root_hidden");
	___mb.mb_scroll_to_item = gd::api->godot_method_bind_get_method("Tree", "scroll_to_item");
	___mb.mb_set_allow_reselect = gd::api->godot_method_bind_get_method("Tree", "set_allow_reselect");
	___mb.mb_set_allow_rmb_select = gd::api->godot_method_bind_get_method("Tree", "set_allow_rmb_select");
	___mb.mb_set_column_expand = gd::api->godot_method_bind_get_method("Tree", "set_column_expand");
	___mb.mb_set_column_min_width = gd::api->godot_method_bind_get_method("Tree", "set_column_min_width");
	___mb.mb_set_column_title = gd::api->godot_method_bind_get_method("Tree", "set_column_title");
	___mb.mb_set_column_titles_visible = gd::api->godot_method_bind_get_method("Tree", "set_column_titles_visible");
	___mb.mb_set_columns = gd::api->godot_method_bind_get_method("Tree", "set_columns");
	___mb.mb_set_drop_mode_flags = gd::api->godot_method_bind_get_method("Tree", "set_drop_mode_flags");
	___mb.mb_set_hide_folding = gd::api->godot_method_bind_get_method("Tree", "set_hide_folding");
	___mb.mb_set_hide_root = gd::api->godot_method_bind_get_method("Tree", "set_hide_root");
	___mb.mb_set_select_mode = gd::api->godot_method_bind_get_method("Tree", "set_select_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Tree");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tree *tree::_new()
{
	return (tree *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Tree")());
}
void tree::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void tree::_popup_select(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__popup_select, (const object *) this, arg0);
}

void tree::_range_click_timeout() {
	___godot_icall_void(___mb.mb__range_click_timeout, (const object *) this);
}

void tree::_scroll_moved(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_moved, (const object *) this, arg0);
}

void tree::_text_editor_enter(const string arg0) {
	___godot_icall_void_String(___mb.mb__text_editor_enter, (const object *) this, arg0);
}

void tree::_text_editor_modal_close() {
	___godot_icall_void(___mb.mb__text_editor_modal_close, (const object *) this);
}

void tree::_value_editor_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__value_editor_changed, (const object *) this, arg0);
}

bool tree::are_column_titles_visible() const {
	return ___godot_icall_bool(___mb.mb_are_column_titles_visible, (const object *) this);
}

void tree::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

tree_item *tree::create_item(const object *parent, const int64_t idx) {
	return (tree_item *) ___godot_icall_Object_Object_int(___mb.mb_create_item, (const object *) this, parent, idx);
}

bool tree::edit_selected() {
	return ___godot_icall_bool(___mb.mb_edit_selected, (const object *) this);
}

void tree::ensure_cursor_is_visible() {
	___godot_icall_void(___mb.mb_ensure_cursor_is_visible, (const object *) this);
}

bool tree::get_allow_reselect() const {
	return ___godot_icall_bool(___mb.mb_get_allow_reselect, (const object *) this);
}

bool tree::get_allow_rmb_select() const {
	return ___godot_icall_bool(___mb.mb_get_allow_rmb_select, (const object *) this);
}

int64_t tree::get_button_id_at_position(const vector2 position) const {
	return ___godot_icall_int_Vector2(___mb.mb_get_button_id_at_position, (const object *) this, position);
}

int64_t tree::get_column_at_position(const vector2 position) const {
	return ___godot_icall_int_Vector2(___mb.mb_get_column_at_position, (const object *) this, position);
}

string tree::get_column_title(const int64_t column) const {
	return ___godot_icall_String_int(___mb.mb_get_column_title, (const object *) this, column);
}

int64_t tree::get_column_width(const int64_t column) const {
	return ___godot_icall_int_int(___mb.mb_get_column_width, (const object *) this, column);
}

int64_t tree::get_columns() const {
	return ___godot_icall_int(___mb.mb_get_columns, (const object *) this);
}

rect2 tree::get_custom_popup_rect() const {
	return ___godot_icall_Rect2(___mb.mb_get_custom_popup_rect, (const object *) this);
}

int64_t tree::get_drop_mode_flags() const {
	return ___godot_icall_int(___mb.mb_get_drop_mode_flags, (const object *) this);
}

int64_t tree::get_drop_section_at_position(const vector2 position) const {
	return ___godot_icall_int_Vector2(___mb.mb_get_drop_section_at_position, (const object *) this, position);
}

tree_item *tree::get_edited() const {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_edited, (const object *) this);
}

int64_t tree::get_edited_column() const {
	return ___godot_icall_int(___mb.mb_get_edited_column, (const object *) this);
}

rect2 tree::get_item_area_rect(const object *item, const int64_t column) const {
	return ___godot_icall_Rect2_Object_int(___mb.mb_get_item_area_rect, (const object *) this, item, column);
}

tree_item *tree::get_item_at_position(const vector2 position) const {
	return (tree_item *) ___godot_icall_Object_Vector2(___mb.mb_get_item_at_position, (const object *) this, position);
}

tree_item *tree::get_next_selected(const object *from) {
	return (tree_item *) ___godot_icall_Object_Object(___mb.mb_get_next_selected, (const object *) this, from);
}

int64_t tree::get_pressed_button() const {
	return ___godot_icall_int(___mb.mb_get_pressed_button, (const object *) this);
}

tree_item *tree::get_root() {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_root, (const object *) this);
}

vector2 tree::get_scroll() const {
	return ___godot_icall_Vector2(___mb.mb_get_scroll, (const object *) this);
}

tree::SelectMode tree::get_select_mode() const {
	return (tree::SelectMode) ___godot_icall_int(___mb.mb_get_select_mode, (const object *) this);
}

tree_item *tree::get_selected() const {
	return (tree_item *) ___godot_icall_Object(___mb.mb_get_selected, (const object *) this);
}

int64_t tree::get_selected_column() const {
	return ___godot_icall_int(___mb.mb_get_selected_column, (const object *) this);
}

bool tree::is_folding_hidden() const {
	return ___godot_icall_bool(___mb.mb_is_folding_hidden, (const object *) this);
}

bool tree::is_root_hidden() const {
	return ___godot_icall_bool(___mb.mb_is_root_hidden, (const object *) this);
}

void tree::scroll_to_item(const object *item) {
	___godot_icall_void_Object(___mb.mb_scroll_to_item, (const object *) this, item);
}

void tree::set_allow_reselect(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_reselect, (const object *) this, allow);
}

void tree::set_allow_rmb_select(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_rmb_select, (const object *) this, allow);
}

void tree::set_column_expand(const int64_t column, const bool expand) {
	___godot_icall_void_int_bool(___mb.mb_set_column_expand, (const object *) this, column, expand);
}

void tree::set_column_min_width(const int64_t column, const int64_t min_width) {
	___godot_icall_void_int_int(___mb.mb_set_column_min_width, (const object *) this, column, min_width);
}

void tree::set_column_title(const int64_t column, const string title) {
	___godot_icall_void_int_String(___mb.mb_set_column_title, (const object *) this, column, title);
}

void tree::set_column_titles_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_column_titles_visible, (const object *) this, visible);
}

void tree::set_columns(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_columns, (const object *) this, amount);
}

void tree::set_drop_mode_flags(const int64_t flags) {
	___godot_icall_void_int(___mb.mb_set_drop_mode_flags, (const object *) this, flags);
}

void tree::set_hide_folding(const bool hide) {
	___godot_icall_void_bool(___mb.mb_set_hide_folding, (const object *) this, hide);
}

void tree::set_hide_root(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hide_root, (const object *) this, enable);
}

void tree::set_select_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_select_mode, (const object *) this, mode);
}

}