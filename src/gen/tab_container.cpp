#include "tab_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"
#include "node.hpp"
#include "popup.hpp"
#include "texture.hpp"


namespace gd {


tab_container::___method_bindings tab_container::___mb = {};

void *tab_container::_detail_class_tag = nullptr;

void tab_container::___init_method_bindings() {
	___mb.mb__child_renamed_callback = gd::api->godot_method_bind_get_method("TabContainer", "_child_renamed_callback");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("TabContainer", "_gui_input");
	___mb.mb__on_mouse_exited = gd::api->godot_method_bind_get_method("TabContainer", "_on_mouse_exited");
	___mb.mb__on_theme_changed = gd::api->godot_method_bind_get_method("TabContainer", "_on_theme_changed");
	___mb.mb__repaint = gd::api->godot_method_bind_get_method("TabContainer", "_repaint");
	___mb.mb__update_current_tab = gd::api->godot_method_bind_get_method("TabContainer", "_update_current_tab");
	___mb.mb_are_tabs_visible = gd::api->godot_method_bind_get_method("TabContainer", "are_tabs_visible");
	___mb.mb_get_current_tab = gd::api->godot_method_bind_get_method("TabContainer", "get_current_tab");
	___mb.mb_get_current_tab_control = gd::api->godot_method_bind_get_method("TabContainer", "get_current_tab_control");
	___mb.mb_get_drag_to_rearrange_enabled = gd::api->godot_method_bind_get_method("TabContainer", "get_drag_to_rearrange_enabled");
	___mb.mb_get_popup = gd::api->godot_method_bind_get_method("TabContainer", "get_popup");
	___mb.mb_get_previous_tab = gd::api->godot_method_bind_get_method("TabContainer", "get_previous_tab");
	___mb.mb_get_tab_align = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_align");
	___mb.mb_get_tab_control = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_control");
	___mb.mb_get_tab_count = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_count");
	___mb.mb_get_tab_disabled = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_disabled");
	___mb.mb_get_tab_hidden = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_hidden");
	___mb.mb_get_tab_icon = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_icon");
	___mb.mb_get_tab_idx_at_point = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_idx_at_point");
	___mb.mb_get_tab_title = gd::api->godot_method_bind_get_method("TabContainer", "get_tab_title");
	___mb.mb_get_tabs_rearrange_group = gd::api->godot_method_bind_get_method("TabContainer", "get_tabs_rearrange_group");
	___mb.mb_get_use_hidden_tabs_for_min_size = gd::api->godot_method_bind_get_method("TabContainer", "get_use_hidden_tabs_for_min_size");
	___mb.mb_is_all_tabs_in_front = gd::api->godot_method_bind_get_method("TabContainer", "is_all_tabs_in_front");
	___mb.mb_set_all_tabs_in_front = gd::api->godot_method_bind_get_method("TabContainer", "set_all_tabs_in_front");
	___mb.mb_set_current_tab = gd::api->godot_method_bind_get_method("TabContainer", "set_current_tab");
	___mb.mb_set_drag_to_rearrange_enabled = gd::api->godot_method_bind_get_method("TabContainer", "set_drag_to_rearrange_enabled");
	___mb.mb_set_popup = gd::api->godot_method_bind_get_method("TabContainer", "set_popup");
	___mb.mb_set_tab_align = gd::api->godot_method_bind_get_method("TabContainer", "set_tab_align");
	___mb.mb_set_tab_disabled = gd::api->godot_method_bind_get_method("TabContainer", "set_tab_disabled");
	___mb.mb_set_tab_hidden = gd::api->godot_method_bind_get_method("TabContainer", "set_tab_hidden");
	___mb.mb_set_tab_icon = gd::api->godot_method_bind_get_method("TabContainer", "set_tab_icon");
	___mb.mb_set_tab_title = gd::api->godot_method_bind_get_method("TabContainer", "set_tab_title");
	___mb.mb_set_tabs_rearrange_group = gd::api->godot_method_bind_get_method("TabContainer", "set_tabs_rearrange_group");
	___mb.mb_set_tabs_visible = gd::api->godot_method_bind_get_method("TabContainer", "set_tabs_visible");
	___mb.mb_set_use_hidden_tabs_for_min_size = gd::api->godot_method_bind_get_method("TabContainer", "set_use_hidden_tabs_for_min_size");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TabContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

tab_container *tab_container::_new()
{
	return (tab_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TabContainer")());
}
void tab_container::_child_renamed_callback() {
	___godot_icall_void(___mb.mb__child_renamed_callback, (const object *) this);
}

void tab_container::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void tab_container::_on_mouse_exited() {
	___godot_icall_void(___mb.mb__on_mouse_exited, (const object *) this);
}

void tab_container::_on_theme_changed() {
	___godot_icall_void(___mb.mb__on_theme_changed, (const object *) this);
}

void tab_container::_repaint() {
	___godot_icall_void(___mb.mb__repaint, (const object *) this);
}

void tab_container::_update_current_tab() {
	___godot_icall_void(___mb.mb__update_current_tab, (const object *) this);
}

bool tab_container::are_tabs_visible() const {
	return ___godot_icall_bool(___mb.mb_are_tabs_visible, (const object *) this);
}

int64_t tab_container::get_current_tab() const {
	return ___godot_icall_int(___mb.mb_get_current_tab, (const object *) this);
}

control *tab_container::get_current_tab_control() const {
	return (control *) ___godot_icall_Object(___mb.mb_get_current_tab_control, (const object *) this);
}

bool tab_container::get_drag_to_rearrange_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_drag_to_rearrange_enabled, (const object *) this);
}

popup *tab_container::get_popup() const {
	return (popup *) ___godot_icall_Object(___mb.mb_get_popup, (const object *) this);
}

int64_t tab_container::get_previous_tab() const {
	return ___godot_icall_int(___mb.mb_get_previous_tab, (const object *) this);
}

tab_container::TabAlign tab_container::get_tab_align() const {
	return (tab_container::TabAlign) ___godot_icall_int(___mb.mb_get_tab_align, (const object *) this);
}

control *tab_container::get_tab_control(const int64_t tab_idx) const {
	return (control *) ___godot_icall_Object_int(___mb.mb_get_tab_control, (const object *) this, tab_idx);
}

int64_t tab_container::get_tab_count() const {
	return ___godot_icall_int(___mb.mb_get_tab_count, (const object *) this);
}

bool tab_container::get_tab_disabled(const int64_t tab_idx) const {
	return ___godot_icall_bool_int(___mb.mb_get_tab_disabled, (const object *) this, tab_idx);
}

bool tab_container::get_tab_hidden(const int64_t tab_idx) const {
	return ___godot_icall_bool_int(___mb.mb_get_tab_hidden, (const object *) this, tab_idx);
}

ref<texture> tab_container::get_tab_icon(const int64_t tab_idx) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_tab_icon, (const object *) this, tab_idx));
}

int64_t tab_container::get_tab_idx_at_point(const vector2 point) const {
	return ___godot_icall_int_Vector2(___mb.mb_get_tab_idx_at_point, (const object *) this, point);
}

string tab_container::get_tab_title(const int64_t tab_idx) const {
	return ___godot_icall_String_int(___mb.mb_get_tab_title, (const object *) this, tab_idx);
}

int64_t tab_container::get_tabs_rearrange_group() const {
	return ___godot_icall_int(___mb.mb_get_tabs_rearrange_group, (const object *) this);
}

bool tab_container::get_use_hidden_tabs_for_min_size() const {
	return ___godot_icall_bool(___mb.mb_get_use_hidden_tabs_for_min_size, (const object *) this);
}

bool tab_container::is_all_tabs_in_front() const {
	return ___godot_icall_bool(___mb.mb_is_all_tabs_in_front, (const object *) this);
}

void tab_container::set_all_tabs_in_front(const bool is_front) {
	___godot_icall_void_bool(___mb.mb_set_all_tabs_in_front, (const object *) this, is_front);
}

void tab_container::set_current_tab(const int64_t tab_idx) {
	___godot_icall_void_int(___mb.mb_set_current_tab, (const object *) this, tab_idx);
}

void tab_container::set_drag_to_rearrange_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_drag_to_rearrange_enabled, (const object *) this, enabled);
}

void tab_container::set_popup(const node *popup_) {
	___godot_icall_void_Object(___mb.mb_set_popup, (const object *) this, popup_);
}

void tab_container::set_tab_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_tab_align, (const object *) this, align);
}

void tab_container::set_tab_disabled(const int64_t tab_idx, const bool disabled) {
	___godot_icall_void_int_bool(___mb.mb_set_tab_disabled, (const object *) this, tab_idx, disabled);
}

void tab_container::set_tab_hidden(const int64_t tab_idx, const bool hidden) {
	___godot_icall_void_int_bool(___mb.mb_set_tab_hidden, (const object *) this, tab_idx, hidden);
}

void tab_container::set_tab_icon(const int64_t tab_idx, const ref<texture> icon) {
	___godot_icall_void_int_Object(___mb.mb_set_tab_icon, (const object *) this, tab_idx, icon.ptr());
}

void tab_container::set_tab_title(const int64_t tab_idx, const string title) {
	___godot_icall_void_int_String(___mb.mb_set_tab_title, (const object *) this, tab_idx, title);
}

void tab_container::set_tabs_rearrange_group(const int64_t group_id) {
	___godot_icall_void_int(___mb.mb_set_tabs_rearrange_group, (const object *) this, group_id);
}

void tab_container::set_tabs_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_tabs_visible, (const object *) this, visible);
}

void tab_container::set_use_hidden_tabs_for_min_size(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_use_hidden_tabs_for_min_size, (const object *) this, enabled);
}

}