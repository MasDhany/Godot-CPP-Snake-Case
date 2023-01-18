#include "base_button.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "button_group.hpp"
#include "input_event.hpp"
#include "short_cut.hpp"


namespace gd {


base_button::___method_bindings base_button::___mb = {};

void *base_button::_detail_class_tag = nullptr;

void base_button::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("BaseButton", "_gui_input");
	___mb.mb__pressed = gd::api->godot_method_bind_get_method("BaseButton", "_pressed");
	___mb.mb__toggled = gd::api->godot_method_bind_get_method("BaseButton", "_toggled");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("BaseButton", "_unhandled_input");
	___mb.mb_get_action_mode = gd::api->godot_method_bind_get_method("BaseButton", "get_action_mode");
	___mb.mb_get_button_group = gd::api->godot_method_bind_get_method("BaseButton", "get_button_group");
	___mb.mb_get_button_mask = gd::api->godot_method_bind_get_method("BaseButton", "get_button_mask");
	___mb.mb_get_draw_mode = gd::api->godot_method_bind_get_method("BaseButton", "get_draw_mode");
	___mb.mb_get_enabled_focus_mode = gd::api->godot_method_bind_get_method("BaseButton", "get_enabled_focus_mode");
	___mb.mb_get_shortcut = gd::api->godot_method_bind_get_method("BaseButton", "get_shortcut");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("BaseButton", "is_disabled");
	___mb.mb_is_hovered = gd::api->godot_method_bind_get_method("BaseButton", "is_hovered");
	___mb.mb_is_keep_pressed_outside = gd::api->godot_method_bind_get_method("BaseButton", "is_keep_pressed_outside");
	___mb.mb_is_pressed = gd::api->godot_method_bind_get_method("BaseButton", "is_pressed");
	___mb.mb_is_shortcut_in_tooltip_enabled = gd::api->godot_method_bind_get_method("BaseButton", "is_shortcut_in_tooltip_enabled");
	___mb.mb_is_toggle_mode = gd::api->godot_method_bind_get_method("BaseButton", "is_toggle_mode");
	___mb.mb_set_action_mode = gd::api->godot_method_bind_get_method("BaseButton", "set_action_mode");
	___mb.mb_set_button_group = gd::api->godot_method_bind_get_method("BaseButton", "set_button_group");
	___mb.mb_set_button_mask = gd::api->godot_method_bind_get_method("BaseButton", "set_button_mask");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("BaseButton", "set_disabled");
	___mb.mb_set_enabled_focus_mode = gd::api->godot_method_bind_get_method("BaseButton", "set_enabled_focus_mode");
	___mb.mb_set_keep_pressed_outside = gd::api->godot_method_bind_get_method("BaseButton", "set_keep_pressed_outside");
	___mb.mb_set_pressed = gd::api->godot_method_bind_get_method("BaseButton", "set_pressed");
	___mb.mb_set_pressed_no_signal = gd::api->godot_method_bind_get_method("BaseButton", "set_pressed_no_signal");
	___mb.mb_set_shortcut = gd::api->godot_method_bind_get_method("BaseButton", "set_shortcut");
	___mb.mb_set_shortcut_in_tooltip = gd::api->godot_method_bind_get_method("BaseButton", "set_shortcut_in_tooltip");
	___mb.mb_set_toggle_mode = gd::api->godot_method_bind_get_method("BaseButton", "set_toggle_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BaseButton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void base_button::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void base_button::_pressed() {
	___godot_icall_void(___mb.mb__pressed, (const object *) this);
}

void base_button::_toggled(const bool button_pressed) {
	___godot_icall_void_bool(___mb.mb__toggled, (const object *) this, button_pressed);
}

void base_button::_unhandled_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, arg0.ptr());
}

base_button::ActionMode base_button::get_action_mode() const {
	return (base_button::ActionMode) ___godot_icall_int(___mb.mb_get_action_mode, (const object *) this);
}

ref<button_group> base_button::get_button_group() const {
	return ref<button_group>::__internal_constructor(___godot_icall_Object(___mb.mb_get_button_group, (const object *) this));
}

int64_t base_button::get_button_mask() const {
	return ___godot_icall_int(___mb.mb_get_button_mask, (const object *) this);
}

base_button::DrawMode base_button::get_draw_mode() const {
	return (base_button::DrawMode) ___godot_icall_int(___mb.mb_get_draw_mode, (const object *) this);
}

control::FocusMode base_button::get_enabled_focus_mode() const {
	return (control::FocusMode) ___godot_icall_int(___mb.mb_get_enabled_focus_mode, (const object *) this);
}

ref<short_cut> base_button::get_shortcut() const {
	return ref<short_cut>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shortcut, (const object *) this));
}

bool base_button::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

bool base_button::is_hovered() const {
	return ___godot_icall_bool(___mb.mb_is_hovered, (const object *) this);
}

bool base_button::is_keep_pressed_outside() const {
	return ___godot_icall_bool(___mb.mb_is_keep_pressed_outside, (const object *) this);
}

bool base_button::is_pressed() const {
	return ___godot_icall_bool(___mb.mb_is_pressed, (const object *) this);
}

bool base_button::is_shortcut_in_tooltip_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_shortcut_in_tooltip_enabled, (const object *) this);
}

bool base_button::is_toggle_mode() const {
	return ___godot_icall_bool(___mb.mb_is_toggle_mode, (const object *) this);
}

void base_button::set_action_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_action_mode, (const object *) this, mode);
}

void base_button::set_button_group(const ref<button_group> button_group_) {
	___godot_icall_void_Object(___mb.mb_set_button_group, (const object *) this, button_group_.ptr());
}

void base_button::set_button_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_button_mask, (const object *) this, mask);
}

void base_button::set_disabled(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, disabled);
}

void base_button::set_enabled_focus_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_enabled_focus_mode, (const object *) this, mode);
}

void base_button::set_keep_pressed_outside(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_keep_pressed_outside, (const object *) this, enabled);
}

void base_button::set_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed, (const object *) this, pressed);
}

void base_button::set_pressed_no_signal(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_pressed_no_signal, (const object *) this, pressed);
}

void base_button::set_shortcut(const ref<short_cut> shortcut) {
	___godot_icall_void_Object(___mb.mb_set_shortcut, (const object *) this, shortcut.ptr());
}

void base_button::set_shortcut_in_tooltip(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_shortcut_in_tooltip, (const object *) this, enabled);
}

void base_button::set_toggle_mode(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_toggle_mode, (const object *) this, enabled);
}

}