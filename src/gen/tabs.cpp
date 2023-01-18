#include "tabs.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "texture.hpp"


namespace gd {


tabs::___method_bindings tabs::___mb = {};

void *tabs::_detail_class_tag = nullptr;

void tabs::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("Tabs", "_gui_input");
	___mb.mb__on_mouse_exited = gd::api->godot_method_bind_get_method("Tabs", "_on_mouse_exited");
	___mb.mb__update_hover = gd::api->godot_method_bind_get_method("Tabs", "_update_hover");
	___mb.mb_add_tab = gd::api->godot_method_bind_get_method("Tabs", "add_tab");
	___mb.mb_ensure_tab_visible = gd::api->godot_method_bind_get_method("Tabs", "ensure_tab_visible");
	___mb.mb_get_current_tab = gd::api->godot_method_bind_get_method("Tabs", "get_current_tab");
	___mb.mb_get_drag_to_rearrange_enabled = gd::api->godot_method_bind_get_method("Tabs", "get_drag_to_rearrange_enabled");
	___mb.mb_get_offset_buttons_visible = gd::api->godot_method_bind_get_method("Tabs", "get_offset_buttons_visible");
	___mb.mb_get_previous_tab = gd::api->godot_method_bind_get_method("Tabs", "get_previous_tab");
	___mb.mb_get_scrolling_enabled = gd::api->godot_method_bind_get_method("Tabs", "get_scrolling_enabled");
	___mb.mb_get_select_with_rmb = gd::api->godot_method_bind_get_method("Tabs", "get_select_with_rmb");
	___mb.mb_get_tab_align = gd::api->godot_method_bind_get_method("Tabs", "get_tab_align");
	___mb.mb_get_tab_button_icon = gd::api->godot_method_bind_get_method("Tabs", "get_tab_button_icon");
	___mb.mb_get_tab_close_display_policy = gd::api->godot_method_bind_get_method("Tabs", "get_tab_close_display_policy");
	___mb.mb_get_tab_count = gd::api->godot_method_bind_get_method("Tabs", "get_tab_count");
	___mb.mb_get_tab_disabled = gd::api->godot_method_bind_get_method("Tabs", "get_tab_disabled");
	___mb.mb_get_tab_icon = gd::api->godot_method_bind_get_method("Tabs", "get_tab_icon");
	___mb.mb_get_tab_offset = gd::api->godot_method_bind_get_method("Tabs", "get_tab_offset");
	___mb.mb_get_tab_rect = gd::api->godot_method_bind_get_method("Tabs", "get_tab_rect");
	___mb.mb_get_tab_title = gd::api->godot_method_bind_get_method("Tabs", "get_tab_title");
	___mb.mb_get_tabs_rearrange_group = gd::api->godot_method_bind_get_method("Tabs", "get_tabs_rearrange_group");
	___mb.mb_move_tab = gd::api->godot_method_bind_get_method("Tabs", "move_tab");
	___mb.mb_remove_tab = gd::api->godot_method_bind_get_method("Tabs", "remove_tab");
	___mb.mb_set_current_tab = gd::api->godot_method_bind_get_method("Tabs", "set_current_tab");
	___mb.mb_set_drag_to_rearrange_enabled = gd::api->godot_method_bind_get_method("Tabs", "set_drag_to_rearrange_enabled");
	___mb.mb_set_scrolling_enabled = gd::api->godot_method_bind_get_method("Tabs", "set_scrolling_enabled");
	___mb.mb_set_select_with_rmb = gd::api->godot_method_bind_get_method("Tabs", "set_select_with_rmb");
	___mb.mb_set_tab_align = gd::api->godot_method_bind_get_method("Tabs", "set_tab_align");
	___mb.mb_set_tab_button_icon = gd::api->godot_method_bind_get_method("Tabs", "set_tab_button_icon");
	___mb.mb_set_tab_close_display_policy = gd::api->godot_method_bind_get_method("Tabs", "set_tab_close_display_policy");
	___mb.mb_set_tab_disabled = gd::api->godot_method_bind_get_method("Tabs", "set_tab_disabled");
	___mb.mb_set_tab_icon = gd::api->godot_method_bind_get_method("Tabs", "set_tab_icon");
	___mb.mb_set_tab_title = gd::api->godot_method_bind_get_method("Tabs", "set_tab_title");
	___mb.mb_set_tabs_rearrange_group = gd::api->godot_method_bind_get_method("Tabs", "set_tabs_rearrange_group");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Tabs");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tabs *tabs::_new()
{
	return (tabs *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Tabs")());
}
void tabs::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void tabs::_on_mouse_exited() {
	___godot_icall_void(___mb.mb__on_mouse_exited, (const object *) this);
}

void tabs::_update_hover() {
	___godot_icall_void(___mb.mb__update_hover, (const object *) this);
}

void tabs::add_tab(const string title, const ref<texture> icon) {
	___godot_icall_void_String_Object(___mb.mb_add_tab, (const object *) this, title, icon.ptr());
}

void tabs::ensure_tab_visible(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_ensure_tab_visible, (const object *) this, idx);
}

int64_t tabs::get_current_tab() const {
	return ___godot_icall_int(___mb.mb_get_current_tab, (const object *) this);
}

bool tabs::get_drag_to_rearrange_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_drag_to_rearrange_enabled, (const object *) this);
}

bool tabs::get_offset_buttons_visible() const {
	return ___godot_icall_bool(___mb.mb_get_offset_buttons_visible, (const object *) this);
}

int64_t tabs::get_previous_tab() const {
	return ___godot_icall_int(___mb.mb_get_previous_tab, (const object *) this);
}

bool tabs::get_scrolling_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_scrolling_enabled, (const object *) this);
}

bool tabs::get_select_with_rmb() const {
	return ___godot_icall_bool(___mb.mb_get_select_with_rmb, (const object *) this);
}

tabs::TabAlign tabs::get_tab_align() const {
	return (tabs::TabAlign) ___godot_icall_int(___mb.mb_get_tab_align, (const object *) this);
}

ref<texture> tabs::get_tab_button_icon(const int64_t tab_idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_tab_button_icon, (const object *) this, tab_idx));
}

tabs::CloseButtonDisplayPolicy tabs::get_tab_close_display_policy() const {
	return (tabs::CloseButtonDisplayPolicy) ___godot_icall_int(___mb.mb_get_tab_close_display_policy, (const object *) this);
}

int64_t tabs::get_tab_count() const {
	return ___godot_icall_int(___mb.mb_get_tab_count, (const object *) this);
}

bool tabs::get_tab_disabled(const int64_t tab_idx) const {
	return ___godot_icall_bool_int(___mb.mb_get_tab_disabled, (const object *) this, tab_idx);
}

ref<texture> tabs::get_tab_icon(const int64_t tab_idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_tab_icon, (const object *) this, tab_idx));
}

int64_t tabs::get_tab_offset() const {
	return ___godot_icall_int(___mb.mb_get_tab_offset, (const object *) this);
}

rect2 tabs::get_tab_rect(const int64_t tab_idx) const {
	return ___godot_icall_Rect2_int(___mb.mb_get_tab_rect, (const object *) this, tab_idx);
}

string tabs::get_tab_title(const int64_t tab_idx) const {
	return ___godot_icall_String_int(___mb.mb_get_tab_title, (const object *) this, tab_idx);
}

int64_t tabs::get_tabs_rearrange_group() const {
	return ___godot_icall_int(___mb.mb_get_tabs_rearrange_group, (const object *) this);
}

void tabs::move_tab(const int64_t from, const int64_t to) {
	___godot_icall_void_int_int(___mb.mb_move_tab, (const object *) this, from, to);
}

void tabs::remove_tab(const int64_t tab_idx) {
	___godot_icall_void_int(___mb.mb_remove_tab, (const object *) this, tab_idx);
}

void tabs::set_current_tab(const int64_t tab_idx) {
	___godot_icall_void_int(___mb.mb_set_current_tab, (const object *) this, tab_idx);
}

void tabs::set_drag_to_rearrange_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_drag_to_rearrange_enabled, (const object *) this, enabled);
}

void tabs::set_scrolling_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_scrolling_enabled, (const object *) this, enabled);
}

void tabs::set_select_with_rmb(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_select_with_rmb, (const object *) this, enabled);
}

void tabs::set_tab_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_tab_align, (const object *) this, align);
}

void tabs::set_tab_button_icon(const int64_t tab_idx, const ref<texture> icon) {
	___godot_icall_void_int_Object(___mb.mb_set_tab_button_icon, (const object *) this, tab_idx, icon.ptr());
}

void tabs::set_tab_close_display_policy(const int64_t policy) {
	___godot_icall_void_int(___mb.mb_set_tab_close_display_policy, (const object *) this, policy);
}

void tabs::set_tab_disabled(const int64_t tab_idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_tab_disabled, (const object *) this, tab_idx, disabled);
}

void tabs::set_tab_icon(const int64_t tab_idx, const ref<texture> icon) {
	___godot_icall_void_int_Object(___mb.mb_set_tab_icon, (const object *) this, tab_idx, icon.ptr());
}

void tabs::set_tab_title(const int64_t tab_idx, const string title) {
	___godot_icall_void_int_String(___mb.mb_set_tab_title, (const object *) this, tab_idx, title);
}

void tabs::set_tabs_rearrange_group(const int64_t group_id) {
	___godot_icall_void_int(___mb.mb_set_tabs_rearrange_group, (const object *) this, group_id);
}

}