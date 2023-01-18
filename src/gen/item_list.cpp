#include "item_list.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "texture.hpp"
#include "vscroll_bar.hpp"


namespace gd {


item_list::___method_bindings item_list::___mb = {};

void *item_list::_detail_class_tag = nullptr;

void item_list::___init_method_bindings() {
	___mb.mb__get_items = gd::api->godot_method_bind_get_method("ItemList", "_get_items");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("ItemList", "_gui_input");
	___mb.mb__scroll_changed = gd::api->godot_method_bind_get_method("ItemList", "_scroll_changed");
	___mb.mb__set_items = gd::api->godot_method_bind_get_method("ItemList", "_set_items");
	___mb.mb_add_icon_item = gd::api->godot_method_bind_get_method("ItemList", "add_icon_item");
	___mb.mb_add_item = gd::api->godot_method_bind_get_method("ItemList", "add_item");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("ItemList", "clear");
	___mb.mb_ensure_current_is_visible = gd::api->godot_method_bind_get_method("ItemList", "ensure_current_is_visible");
	___mb.mb_get_allow_reselect = gd::api->godot_method_bind_get_method("ItemList", "get_allow_reselect");
	___mb.mb_get_allow_rmb_select = gd::api->godot_method_bind_get_method("ItemList", "get_allow_rmb_select");
	___mb.mb_get_fixed_column_width = gd::api->godot_method_bind_get_method("ItemList", "get_fixed_column_width");
	___mb.mb_get_fixed_icon_size = gd::api->godot_method_bind_get_method("ItemList", "get_fixed_icon_size");
	___mb.mb_get_icon_mode = gd::api->godot_method_bind_get_method("ItemList", "get_icon_mode");
	___mb.mb_get_icon_scale = gd::api->godot_method_bind_get_method("ItemList", "get_icon_scale");
	___mb.mb_get_item_at_position = gd::api->godot_method_bind_get_method("ItemList", "get_item_at_position");
	___mb.mb_get_item_count = gd::api->godot_method_bind_get_method("ItemList", "get_item_count");
	___mb.mb_get_item_custom_bg_color = gd::api->godot_method_bind_get_method("ItemList", "get_item_custom_bg_color");
	___mb.mb_get_item_custom_fg_color = gd::api->godot_method_bind_get_method("ItemList", "get_item_custom_fg_color");
	___mb.mb_get_item_icon = gd::api->godot_method_bind_get_method("ItemList", "get_item_icon");
	___mb.mb_get_item_icon_modulate = gd::api->godot_method_bind_get_method("ItemList", "get_item_icon_modulate");
	___mb.mb_get_item_icon_region = gd::api->godot_method_bind_get_method("ItemList", "get_item_icon_region");
	___mb.mb_get_item_metadata = gd::api->godot_method_bind_get_method("ItemList", "get_item_metadata");
	___mb.mb_get_item_text = gd::api->godot_method_bind_get_method("ItemList", "get_item_text");
	___mb.mb_get_item_tooltip = gd::api->godot_method_bind_get_method("ItemList", "get_item_tooltip");
	___mb.mb_get_max_columns = gd::api->godot_method_bind_get_method("ItemList", "get_max_columns");
	___mb.mb_get_max_text_lines = gd::api->godot_method_bind_get_method("ItemList", "get_max_text_lines");
	___mb.mb_get_select_mode = gd::api->godot_method_bind_get_method("ItemList", "get_select_mode");
	___mb.mb_get_selected_items = gd::api->godot_method_bind_get_method("ItemList", "get_selected_items");
	___mb.mb_get_v_scroll = gd::api->godot_method_bind_get_method("ItemList", "get_v_scroll");
	___mb.mb_has_auto_height = gd::api->godot_method_bind_get_method("ItemList", "has_auto_height");
	___mb.mb_is_anything_selected = gd::api->godot_method_bind_get_method("ItemList", "is_anything_selected");
	___mb.mb_is_item_disabled = gd::api->godot_method_bind_get_method("ItemList", "is_item_disabled");
	___mb.mb_is_item_icon_transposed = gd::api->godot_method_bind_get_method("ItemList", "is_item_icon_transposed");
	___mb.mb_is_item_selectable = gd::api->godot_method_bind_get_method("ItemList", "is_item_selectable");
	___mb.mb_is_item_tooltip_enabled = gd::api->godot_method_bind_get_method("ItemList", "is_item_tooltip_enabled");
	___mb.mb_is_same_column_width = gd::api->godot_method_bind_get_method("ItemList", "is_same_column_width");
	___mb.mb_is_selected = gd::api->godot_method_bind_get_method("ItemList", "is_selected");
	___mb.mb_move_item = gd::api->godot_method_bind_get_method("ItemList", "move_item");
	___mb.mb_remove_item = gd::api->godot_method_bind_get_method("ItemList", "remove_item");
	___mb.mb_select = gd::api->godot_method_bind_get_method("ItemList", "select");
	___mb.mb_set_allow_reselect = gd::api->godot_method_bind_get_method("ItemList", "set_allow_reselect");
	___mb.mb_set_allow_rmb_select = gd::api->godot_method_bind_get_method("ItemList", "set_allow_rmb_select");
	___mb.mb_set_auto_height = gd::api->godot_method_bind_get_method("ItemList", "set_auto_height");
	___mb.mb_set_fixed_column_width = gd::api->godot_method_bind_get_method("ItemList", "set_fixed_column_width");
	___mb.mb_set_fixed_icon_size = gd::api->godot_method_bind_get_method("ItemList", "set_fixed_icon_size");
	___mb.mb_set_icon_mode = gd::api->godot_method_bind_get_method("ItemList", "set_icon_mode");
	___mb.mb_set_icon_scale = gd::api->godot_method_bind_get_method("ItemList", "set_icon_scale");
	___mb.mb_set_item_custom_bg_color = gd::api->godot_method_bind_get_method("ItemList", "set_item_custom_bg_color");
	___mb.mb_set_item_custom_fg_color = gd::api->godot_method_bind_get_method("ItemList", "set_item_custom_fg_color");
	___mb.mb_set_item_disabled = gd::api->godot_method_bind_get_method("ItemList", "set_item_disabled");
	___mb.mb_set_item_icon = gd::api->godot_method_bind_get_method("ItemList", "set_item_icon");
	___mb.mb_set_item_icon_modulate = gd::api->godot_method_bind_get_method("ItemList", "set_item_icon_modulate");
	___mb.mb_set_item_icon_region = gd::api->godot_method_bind_get_method("ItemList", "set_item_icon_region");
	___mb.mb_set_item_icon_transposed = gd::api->godot_method_bind_get_method("ItemList", "set_item_icon_transposed");
	___mb.mb_set_item_metadata = gd::api->godot_method_bind_get_method("ItemList", "set_item_metadata");
	___mb.mb_set_item_selectable = gd::api->godot_method_bind_get_method("ItemList", "set_item_selectable");
	___mb.mb_set_item_text = gd::api->godot_method_bind_get_method("ItemList", "set_item_text");
	___mb.mb_set_item_tooltip = gd::api->godot_method_bind_get_method("ItemList", "set_item_tooltip");
	___mb.mb_set_item_tooltip_enabled = gd::api->godot_method_bind_get_method("ItemList", "set_item_tooltip_enabled");
	___mb.mb_set_max_columns = gd::api->godot_method_bind_get_method("ItemList", "set_max_columns");
	___mb.mb_set_max_text_lines = gd::api->godot_method_bind_get_method("ItemList", "set_max_text_lines");
	___mb.mb_set_same_column_width = gd::api->godot_method_bind_get_method("ItemList", "set_same_column_width");
	___mb.mb_set_select_mode = gd::api->godot_method_bind_get_method("ItemList", "set_select_mode");
	___mb.mb_sort_items_by_text = gd::api->godot_method_bind_get_method("ItemList", "sort_items_by_text");
	___mb.mb_unselect = gd::api->godot_method_bind_get_method("ItemList", "unselect");
	___mb.mb_unselect_all = gd::api->godot_method_bind_get_method("ItemList", "unselect_all");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ItemList");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

item_list *item_list::_new()
{
	return (item_list *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ItemList")());
}
array item_list::_get_items() const {
	return ___godot_icall_Array(___mb.mb__get_items, (const object *) this);
}

void item_list::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void item_list::_scroll_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_changed, (const object *) this, arg0);
}

void item_list::_set_items(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_items, (const object *) this, arg0);
}

void item_list::add_icon_item(const ref<texture> icon, const bool selectable) {
	___godot_icall_void_Object_bool(___mb.mb_add_icon_item, (const object *) this, icon.ptr(), selectable);
}

void item_list::add_item(const string text, const ref<texture> icon, const bool selectable) {
	___godot_icall_void_String_Object_bool(___mb.mb_add_item, (const object *) this, text, icon.ptr(), selectable);
}

void item_list::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void item_list::ensure_current_is_visible() {
	___godot_icall_void(___mb.mb_ensure_current_is_visible, (const object *) this);
}

bool item_list::get_allow_reselect() const {
	return ___godot_icall_bool(___mb.mb_get_allow_reselect, (const object *) this);
}

bool item_list::get_allow_rmb_select() const {
	return ___godot_icall_bool(___mb.mb_get_allow_rmb_select, (const object *) this);
}

int64_t item_list::get_fixed_column_width() const {
	return ___godot_icall_int(___mb.mb_get_fixed_column_width, (const object *) this);
}

vector2 item_list::get_fixed_icon_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_fixed_icon_size, (const object *) this);
}

item_list::IconMode item_list::get_icon_mode() const {
	return (item_list::IconMode) ___godot_icall_int(___mb.mb_get_icon_mode, (const object *) this);
}

real_t item_list::get_icon_scale() const {
	return ___godot_icall_float(___mb.mb_get_icon_scale, (const object *) this);
}

int64_t item_list::get_item_at_position(const vector2 position, const bool exact) const {
	return ___godot_icall_int_Vector2_bool(___mb.mb_get_item_at_position, (const object *) this, position, exact);
}

int64_t item_list::get_item_count() const {
	return ___godot_icall_int(___mb.mb_get_item_count, (const object *) this);
}

color item_list::get_item_custom_bg_color(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_item_custom_bg_color, (const object *) this, idx);
}

color item_list::get_item_custom_fg_color(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_item_custom_fg_color, (const object *) this, idx);
}

ref<texture> item_list::get_item_icon(const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_icon, (const object *) this, idx));
}

color item_list::get_item_icon_modulate(const int64_t idx) const {
	return ___godot_icall_Color_int(___mb.mb_get_item_icon_modulate, (const object *) this, idx);
}

rect2 item_list::get_item_icon_region(const int64_t idx) const {
	return ___godot_icall_Rect2_int(___mb.mb_get_item_icon_region, (const object *) this, idx);
}

variant item_list::get_item_metadata(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_item_metadata, (const object *) this, idx);
}

string item_list::get_item_text(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_text, (const object *) this, idx);
}

string item_list::get_item_tooltip(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_tooltip, (const object *) this, idx);
}

int64_t item_list::get_max_columns() const {
	return ___godot_icall_int(___mb.mb_get_max_columns, (const object *) this);
}

int64_t item_list::get_max_text_lines() const {
	return ___godot_icall_int(___mb.mb_get_max_text_lines, (const object *) this);
}

item_list::SelectMode item_list::get_select_mode() const {
	return (item_list::SelectMode) ___godot_icall_int(___mb.mb_get_select_mode, (const object *) this);
}

pool_int_array item_list::get_selected_items() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_selected_items, (const object *) this);
}

vscroll_bar *item_list::get_v_scroll() {
	return (vscroll_bar *) ___godot_icall_Object(___mb.mb_get_v_scroll, (const object *) this);
}

bool item_list::has_auto_height() const {
	return ___godot_icall_bool(___mb.mb_has_auto_height, (const object *) this);
}

bool item_list::is_anything_selected() {
	return ___godot_icall_bool(___mb.mb_is_anything_selected, (const object *) this);
}

bool item_list::is_item_disabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_disabled, (const object *) this, idx);
}

bool item_list::is_item_icon_transposed(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_icon_transposed, (const object *) this, idx);
}

bool item_list::is_item_selectable(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_selectable, (const object *) this, idx);
}

bool item_list::is_item_tooltip_enabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_tooltip_enabled, (const object *) this, idx);
}

bool item_list::is_same_column_width() const {
	return ___godot_icall_bool(___mb.mb_is_same_column_width, (const object *) this);
}

bool item_list::is_selected(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_selected, (const object *) this, idx);
}

void item_list::move_item(const int64_t from_idx, const int64_t to_idx) {
	___godot_icall_void_int_int(___mb.mb_move_item, (const object *) this, from_idx, to_idx);
}

void item_list::remove_item(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_item, (const object *) this, idx);
}

void item_list::select(const int64_t idx, const bool single) {
	___godot_icall_void_int_bool(___mb.mb_select, (const object *) this, idx, single);
}

void item_list::set_allow_reselect(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_reselect, (const object *) this, allow);
}

void item_list::set_allow_rmb_select(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_rmb_select, (const object *) this, allow);
}

void item_list::set_auto_height(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_auto_height, (const object *) this, enable);
}

void item_list::set_fixed_column_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_fixed_column_width, (const object *) this, width);
}

void item_list::set_fixed_icon_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_fixed_icon_size, (const object *) this, size);
}

void item_list::set_icon_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_icon_mode, (const object *) this, mode);
}

void item_list::set_icon_scale(const real_t scale) {
	___godot_icall_void_float(___mb.mb_set_icon_scale, (const object *) this, scale);
}

void item_list::set_item_custom_bg_color(const int64_t idx, const color custom_bg_color) {
	___godot_icall_void_int_Color(___mb.mb_set_item_custom_bg_color, (const object *) this, idx, custom_bg_color);
}

void item_list::set_item_custom_fg_color(const int64_t idx, const color custom_fg_color) {
	___godot_icall_void_int_Color(___mb.mb_set_item_custom_fg_color, (const object *) this, idx, custom_fg_color);
}

void item_list::set_item_disabled(const int64_t idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_item_disabled, (const object *) this, idx, disabled);
}

void item_list::set_item_icon(const int64_t idx, const ref<texture> icon) {
	___godot_icall_void_int_Object(___mb.mb_set_item_icon, (const object *) this, idx, icon.ptr());
}

void item_list::set_item_icon_modulate(const int64_t idx, const color modulate) {
	___godot_icall_void_int_Color(___mb.mb_set_item_icon_modulate, (const object *) this, idx, modulate);
}

void item_list::set_item_icon_region(const int64_t idx, const rect2 rect) {
	___godot_icall_void_int_Rect2(___mb.mb_set_item_icon_region, (const object *) this, idx, rect);
}

void item_list::set_item_icon_transposed(const int64_t idx, const bool transposed) {
	___godot_icall_void_int_bool(___mb.mb_set_item_icon_transposed, (const object *) this, idx, transposed);
}

void item_list::set_item_metadata(const int64_t idx, const variant metadata) {
	___godot_icall_void_int_Variant(___mb.mb_set_item_metadata, (const object *) this, idx, metadata);
}

void item_list::set_item_selectable(const int64_t idx, const bool selectable) {
	___godot_icall_void_int_bool(___mb.mb_set_item_selectable, (const object *) this, idx, selectable);
}

void item_list::set_item_text(const int64_t idx, const string text) {
	___godot_icall_void_int_String(___mb.mb_set_item_text, (const object *) this, idx, text);
}

void item_list::set_item_tooltip(const int64_t idx, const string tooltip) {
	___godot_icall_void_int_String(___mb.mb_set_item_tooltip, (const object *) this, idx, tooltip);
}

void item_list::set_item_tooltip_enabled(const int64_t idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_item_tooltip_enabled, (const object *) this, idx, enable);
}

void item_list::set_max_columns(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_max_columns, (const object *) this, amount);
}

void item_list::set_max_text_lines(const int64_t lines) {
	___godot_icall_void_int(___mb.mb_set_max_text_lines, (const object *) this, lines);
}

void item_list::set_same_column_width(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_same_column_width, (const object *) this, enable);
}

void item_list::set_select_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_select_mode, (const object *) this, mode);
}

void item_list::sort_items_by_text() {
	___godot_icall_void(___mb.mb_sort_items_by_text, (const object *) this);
}

void item_list::unselect(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_unselect, (const object *) this, idx);
}

void item_list::unselect_all() {
	___godot_icall_void(___mb.mb_unselect_all, (const object *) this);
}

}