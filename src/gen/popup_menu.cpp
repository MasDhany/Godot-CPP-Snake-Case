#include "popup_menu.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "short_cut.hpp"
#include "texture.hpp"


namespace gd {


popup_menu::___method_bindings popup_menu::___mb = {};

void *popup_menu::_detail_class_tag = nullptr;

void popup_menu::___init_method_bindings() {
	___mb.mb__get_items = gd::api->godot_method_bind_get_method("PopupMenu", "_get_items");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("PopupMenu", "_gui_input");
	___mb.mb__set_items = gd::api->godot_method_bind_get_method("PopupMenu", "_set_items");
	___mb.mb__submenu_timeout = gd::api->godot_method_bind_get_method("PopupMenu", "_submenu_timeout");
	___mb.mb_add_check_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_check_item");
	___mb.mb_add_check_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_check_shortcut");
	___mb.mb_add_icon_check_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_check_item");
	___mb.mb_add_icon_check_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_check_shortcut");
	___mb.mb_add_icon_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_item");
	___mb.mb_add_icon_radio_check_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_radio_check_item");
	___mb.mb_add_icon_radio_check_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_radio_check_shortcut");
	___mb.mb_add_icon_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_icon_shortcut");
	___mb.mb_add_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_item");
	___mb.mb_add_multistate_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_multistate_item");
	___mb.mb_add_radio_check_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_radio_check_item");
	___mb.mb_add_radio_check_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_radio_check_shortcut");
	___mb.mb_add_separator = gd::api->godot_method_bind_get_method("PopupMenu", "add_separator");
	___mb.mb_add_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "add_shortcut");
	___mb.mb_add_submenu_item = gd::api->godot_method_bind_get_method("PopupMenu", "add_submenu_item");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("PopupMenu", "clear");
	___mb.mb_get_allow_search = gd::api->godot_method_bind_get_method("PopupMenu", "get_allow_search");
	___mb.mb_get_current_index = gd::api->godot_method_bind_get_method("PopupMenu", "get_current_index");
	___mb.mb_get_item_accelerator = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_accelerator");
	___mb.mb_get_item_count = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_count");
	___mb.mb_get_item_icon = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_icon");
	___mb.mb_get_item_id = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_id");
	___mb.mb_get_item_index = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_index");
	___mb.mb_get_item_metadata = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_metadata");
	___mb.mb_get_item_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_shortcut");
	___mb.mb_get_item_submenu = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_submenu");
	___mb.mb_get_item_text = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_text");
	___mb.mb_get_item_tooltip = gd::api->godot_method_bind_get_method("PopupMenu", "get_item_tooltip");
	___mb.mb_get_submenu_popup_delay = gd::api->godot_method_bind_get_method("PopupMenu", "get_submenu_popup_delay");
	___mb.mb_is_hide_on_checkable_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "is_hide_on_checkable_item_selection");
	___mb.mb_is_hide_on_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "is_hide_on_item_selection");
	___mb.mb_is_hide_on_state_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "is_hide_on_state_item_selection");
	___mb.mb_is_hide_on_window_lose_focus = gd::api->godot_method_bind_get_method("PopupMenu", "is_hide_on_window_lose_focus");
	___mb.mb_is_item_checkable = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_checkable");
	___mb.mb_is_item_checked = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_checked");
	___mb.mb_is_item_disabled = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_disabled");
	___mb.mb_is_item_radio_checkable = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_radio_checkable");
	___mb.mb_is_item_separator = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_separator");
	___mb.mb_is_item_shortcut_disabled = gd::api->godot_method_bind_get_method("PopupMenu", "is_item_shortcut_disabled");
	___mb.mb_remove_item = gd::api->godot_method_bind_get_method("PopupMenu", "remove_item");
	___mb.mb_set_allow_search = gd::api->godot_method_bind_get_method("PopupMenu", "set_allow_search");
	___mb.mb_set_current_index = gd::api->godot_method_bind_get_method("PopupMenu", "set_current_index");
	___mb.mb_set_hide_on_checkable_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "set_hide_on_checkable_item_selection");
	___mb.mb_set_hide_on_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "set_hide_on_item_selection");
	___mb.mb_set_hide_on_state_item_selection = gd::api->godot_method_bind_get_method("PopupMenu", "set_hide_on_state_item_selection");
	___mb.mb_set_hide_on_window_lose_focus = gd::api->godot_method_bind_get_method("PopupMenu", "set_hide_on_window_lose_focus");
	___mb.mb_set_item_accelerator = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_accelerator");
	___mb.mb_set_item_as_checkable = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_as_checkable");
	___mb.mb_set_item_as_radio_checkable = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_as_radio_checkable");
	___mb.mb_set_item_as_separator = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_as_separator");
	___mb.mb_set_item_checked = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_checked");
	___mb.mb_set_item_disabled = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_disabled");
	___mb.mb_set_item_icon = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_icon");
	___mb.mb_set_item_id = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_id");
	___mb.mb_set_item_metadata = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_metadata");
	___mb.mb_set_item_multistate = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_multistate");
	___mb.mb_set_item_shortcut = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_shortcut");
	___mb.mb_set_item_shortcut_disabled = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_shortcut_disabled");
	___mb.mb_set_item_submenu = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_submenu");
	___mb.mb_set_item_text = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_text");
	___mb.mb_set_item_tooltip = gd::api->godot_method_bind_get_method("PopupMenu", "set_item_tooltip");
	___mb.mb_set_submenu_popup_delay = gd::api->godot_method_bind_get_method("PopupMenu", "set_submenu_popup_delay");
	___mb.mb_toggle_item_checked = gd::api->godot_method_bind_get_method("PopupMenu", "toggle_item_checked");
	___mb.mb_toggle_item_multistate = gd::api->godot_method_bind_get_method("PopupMenu", "toggle_item_multistate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PopupMenu");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

popup_menu *popup_menu::_new()
{
	return (popup_menu *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PopupMenu")());
}
array popup_menu::_get_items() const {
	return ___godot_icall_Array(___mb.mb__get_items, (const object *) this);
}

void popup_menu::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void popup_menu::_set_items(const array arg0) {
	___godot_icall_void_Array(___mb.mb__set_items, (const object *) this, arg0);
}

void popup_menu::_submenu_timeout() {
	___godot_icall_void(___mb.mb__submenu_timeout, (const object *) this);
}

void popup_menu::add_check_item(const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_String_int_int(___mb.mb_add_check_item, (const object *) this, label_, id, accel);
}

void popup_menu::add_check_shortcut(const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_int_bool(___mb.mb_add_check_shortcut, (const object *) this, shortcut.ptr(), id, global);
}

void popup_menu::add_icon_check_item(const ref<texture> texture_, const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_Object_String_int_int(___mb.mb_add_icon_check_item, (const object *) this, texture_.ptr(), label_, id, accel);
}

void popup_menu::add_icon_check_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_Object_int_bool(___mb.mb_add_icon_check_shortcut, (const object *) this, texture_.ptr(), shortcut.ptr(), id, global);
}

void popup_menu::add_icon_item(const ref<texture> texture_, const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_Object_String_int_int(___mb.mb_add_icon_item, (const object *) this, texture_.ptr(), label_, id, accel);
}

void popup_menu::add_icon_radio_check_item(const ref<texture> texture_, const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_Object_String_int_int(___mb.mb_add_icon_radio_check_item, (const object *) this, texture_.ptr(), label_, id, accel);
}

void popup_menu::add_icon_radio_check_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_Object_int_bool(___mb.mb_add_icon_radio_check_shortcut, (const object *) this, texture_.ptr(), shortcut.ptr(), id, global);
}

void popup_menu::add_icon_shortcut(const ref<texture> texture_, const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_Object_int_bool(___mb.mb_add_icon_shortcut, (const object *) this, texture_.ptr(), shortcut.ptr(), id, global);
}

void popup_menu::add_item(const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_String_int_int(___mb.mb_add_item, (const object *) this, label_, id, accel);
}

void popup_menu::add_multistate_item(const string label_, const int64_t max_states, const int64_t default_state, const int64_t id, const int64_t accel) {
	___godot_icall_void_String_int_int_int_int(___mb.mb_add_multistate_item, (const object *) this, label_, max_states, default_state, id, accel);
}

void popup_menu::add_radio_check_item(const string label_, const int64_t id, const int64_t accel) {
	___godot_icall_void_String_int_int(___mb.mb_add_radio_check_item, (const object *) this, label_, id, accel);
}

void popup_menu::add_radio_check_shortcut(const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_int_bool(___mb.mb_add_radio_check_shortcut, (const object *) this, shortcut.ptr(), id, global);
}

void popup_menu::add_separator(const string label_, const int64_t id) {
	___godot_icall_void_String_int(___mb.mb_add_separator, (const object *) this, label_, id);
}

void popup_menu::add_shortcut(const ref<short_cut> shortcut, const int64_t id, const bool global) {
	___godot_icall_void_Object_int_bool(___mb.mb_add_shortcut, (const object *) this, shortcut.ptr(), id, global);
}

void popup_menu::add_submenu_item(const string label_, const string submenu, const int64_t id) {
	___godot_icall_void_String_String_int(___mb.mb_add_submenu_item, (const object *) this, label_, submenu, id);
}

void popup_menu::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

bool popup_menu::get_allow_search() const {
	return ___godot_icall_bool(___mb.mb_get_allow_search, (const object *) this);
}

int64_t popup_menu::get_current_index() const {
	return ___godot_icall_int(___mb.mb_get_current_index, (const object *) this);
}

int64_t popup_menu::get_item_accelerator(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_item_accelerator, (const object *) this, idx);
}

int64_t popup_menu::get_item_count() const {
	return ___godot_icall_int(___mb.mb_get_item_count, (const object *) this);
}

ref<texture> popup_menu::get_item_icon(const int64_t idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_icon, (const object *) this, idx));
}

int64_t popup_menu::get_item_id(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_item_id, (const object *) this, idx);
}

int64_t popup_menu::get_item_index(const int64_t id) const {
	return ___godot_icall_int_int(___mb.mb_get_item_index, (const object *) this, id);
}

variant popup_menu::get_item_metadata(const int64_t idx) const {
	return ___godot_icall_Variant_int(___mb.mb_get_item_metadata, (const object *) this, idx);
}

ref<short_cut> popup_menu::get_item_shortcut(const int64_t idx) const {
	return ref<short_cut>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_item_shortcut, (const object *) this, idx));
}

string popup_menu::get_item_submenu(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_submenu, (const object *) this, idx);
}

string popup_menu::get_item_text(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_text, (const object *) this, idx);
}

string popup_menu::get_item_tooltip(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_item_tooltip, (const object *) this, idx);
}

real_t popup_menu::get_submenu_popup_delay() const {
	return ___godot_icall_float(___mb.mb_get_submenu_popup_delay, (const object *) this);
}

bool popup_menu::is_hide_on_checkable_item_selection() const {
	return ___godot_icall_bool(___mb.mb_is_hide_on_checkable_item_selection, (const object *) this);
}

bool popup_menu::is_hide_on_item_selection() const {
	return ___godot_icall_bool(___mb.mb_is_hide_on_item_selection, (const object *) this);
}

bool popup_menu::is_hide_on_state_item_selection() const {
	return ___godot_icall_bool(___mb.mb_is_hide_on_state_item_selection, (const object *) this);
}

bool popup_menu::is_hide_on_window_lose_focus() const {
	return ___godot_icall_bool(___mb.mb_is_hide_on_window_lose_focus, (const object *) this);
}

bool popup_menu::is_item_checkable(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_checkable, (const object *) this, idx);
}

bool popup_menu::is_item_checked(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_checked, (const object *) this, idx);
}

bool popup_menu::is_item_disabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_disabled, (const object *) this, idx);
}

bool popup_menu::is_item_radio_checkable(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_radio_checkable, (const object *) this, idx);
}

bool popup_menu::is_item_separator(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_separator, (const object *) this, idx);
}

bool popup_menu::is_item_shortcut_disabled(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_is_item_shortcut_disabled, (const object *) this, idx);
}

void popup_menu::remove_item(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_item, (const object *) this, idx);
}

void popup_menu::set_allow_search(const bool allow) {
	___godot_icall_void_bool(___mb.mb_set_allow_search, (const object *) this, allow);
}

void popup_menu::set_current_index(const int64_t index) {
	___godot_icall_void_int(___mb.mb_set_current_index, (const object *) this, index);
}

void popup_menu::set_hide_on_checkable_item_selection(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hide_on_checkable_item_selection, (const object *) this, enable);
}

void popup_menu::set_hide_on_item_selection(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hide_on_item_selection, (const object *) this, enable);
}

void popup_menu::set_hide_on_state_item_selection(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hide_on_state_item_selection, (const object *) this, enable);
}

void popup_menu::set_hide_on_window_lose_focus(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_hide_on_window_lose_focus, (const object *) this, enable);
}

void popup_menu::set_item_accelerator(const int64_t idx, const int64_t accel) {
	___godot_icall_void_int_int(___mb.mb_set_item_accelerator, (const object *) this, idx, accel);
}

void popup_menu::set_item_as_checkable(const int64_t idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_item_as_checkable, (const object *) this, idx, enable);
}

void popup_menu::set_item_as_radio_checkable(const int64_t idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_item_as_radio_checkable, (const object *) this, idx, enable);
}

void popup_menu::set_item_as_separator(const int64_t idx, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_item_as_separator, (const object *) this, idx, enable);
}

void popup_menu::set_item_checked(const int64_t idx, const bool checked) {
	___godot_icall_void_int_bool(___mb.mb_set_item_checked, (const object *) this, idx, checked);
}

void popup_menu::set_item_disabled(const int64_t idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_item_disabled, (const object *) this, idx, disabled);
}

void popup_menu::set_item_icon(const int64_t idx, const ref<texture> icon) {
	___godot_icall_void_int_Object(___mb.mb_set_item_icon, (const object *) this, idx, icon.ptr());
}

void popup_menu::set_item_id(const int64_t idx, const int64_t id) {
	___godot_icall_void_int_int(___mb.mb_set_item_id, (const object *) this, idx, id);
}

void popup_menu::set_item_metadata(const int64_t idx, const variant metadata) {
	___godot_icall_void_int_Variant(___mb.mb_set_item_metadata, (const object *) this, idx, metadata);
}

void popup_menu::set_item_multistate(const int64_t idx, const int64_t state) {
	___godot_icall_void_int_int(___mb.mb_set_item_multistate, (const object *) this, idx, state);
}

void popup_menu::set_item_shortcut(const int64_t idx, const ref<short_cut> shortcut, const bool global) {
	___godot_icall_void_int_Object_bool(___mb.mb_set_item_shortcut, (const object *) this, idx, shortcut.ptr(), global);
}

void popup_menu::set_item_shortcut_disabled(const int64_t idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_item_shortcut_disabled, (const object *) this, idx, disabled);
}

void popup_menu::set_item_submenu(const int64_t idx, const string submenu) {
	___godot_icall_void_int_String(___mb.mb_set_item_submenu, (const object *) this, idx, submenu);
}

void popup_menu::set_item_text(const int64_t idx, const string text) {
	___godot_icall_void_int_String(___mb.mb_set_item_text, (const object *) this, idx, text);
}

void popup_menu::set_item_tooltip(const int64_t idx, const string tooltip) {
	___godot_icall_void_int_String(___mb.mb_set_item_tooltip, (const object *) this, idx, tooltip);
}

void popup_menu::set_submenu_popup_delay(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_submenu_popup_delay, (const object *) this, seconds);
}

void popup_menu::toggle_item_checked(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_toggle_item_checked, (const object *) this, idx);
}

void popup_menu::toggle_item_multistate(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_toggle_item_multistate, (const object *) this, idx);
}

}