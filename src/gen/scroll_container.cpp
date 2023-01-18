#include "scroll_container.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "hscroll_bar.hpp"
#include "input_event.hpp"
#include "vscroll_bar.hpp"


namespace gd {


scroll_container::___method_bindings scroll_container::___mb = {};

void *scroll_container::_detail_class_tag = nullptr;

void scroll_container::___init_method_bindings() {
	___mb.mb__gui_focus_changed = gd::api->godot_method_bind_get_method("ScrollContainer", "_gui_focus_changed");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("ScrollContainer", "_gui_input");
	___mb.mb__scroll_moved = gd::api->godot_method_bind_get_method("ScrollContainer", "_scroll_moved");
	___mb.mb__update_scrollbar_position = gd::api->godot_method_bind_get_method("ScrollContainer", "_update_scrollbar_position");
	___mb.mb_ensure_control_visible = gd::api->godot_method_bind_get_method("ScrollContainer", "ensure_control_visible");
	___mb.mb_get_deadzone = gd::api->godot_method_bind_get_method("ScrollContainer", "get_deadzone");
	___mb.mb_get_h_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "get_h_scroll");
	___mb.mb_get_h_scrollbar = gd::api->godot_method_bind_get_method("ScrollContainer", "get_h_scrollbar");
	___mb.mb_get_v_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "get_v_scroll");
	___mb.mb_get_v_scrollbar = gd::api->godot_method_bind_get_method("ScrollContainer", "get_v_scrollbar");
	___mb.mb_is_following_focus = gd::api->godot_method_bind_get_method("ScrollContainer", "is_following_focus");
	___mb.mb_is_h_scroll_enabled = gd::api->godot_method_bind_get_method("ScrollContainer", "is_h_scroll_enabled");
	___mb.mb_is_v_scroll_enabled = gd::api->godot_method_bind_get_method("ScrollContainer", "is_v_scroll_enabled");
	___mb.mb_set_deadzone = gd::api->godot_method_bind_get_method("ScrollContainer", "set_deadzone");
	___mb.mb_set_enable_h_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "set_enable_h_scroll");
	___mb.mb_set_enable_v_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "set_enable_v_scroll");
	___mb.mb_set_follow_focus = gd::api->godot_method_bind_get_method("ScrollContainer", "set_follow_focus");
	___mb.mb_set_h_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "set_h_scroll");
	___mb.mb_set_v_scroll = gd::api->godot_method_bind_get_method("ScrollContainer", "set_v_scroll");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ScrollContainer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

scroll_container *scroll_container::_new()
{
	return (scroll_container *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ScrollContainer")());
}
void scroll_container::_gui_focus_changed(const control *arg0) {
	___godot_icall_void_Object(___mb.mb__gui_focus_changed, (const object *) this, arg0);
}

void scroll_container::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void scroll_container::_scroll_moved(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__scroll_moved, (const object *) this, arg0);
}

void scroll_container::_update_scrollbar_position() {
	___godot_icall_void(___mb.mb__update_scrollbar_position, (const object *) this);
}

void scroll_container::ensure_control_visible(const control *control_) {
	___godot_icall_void_Object(___mb.mb_ensure_control_visible, (const object *) this, control_);
}

int64_t scroll_container::get_deadzone() const {
	return ___godot_icall_int(___mb.mb_get_deadzone, (const object *) this);
}

int64_t scroll_container::get_h_scroll() const {
	return ___godot_icall_int(___mb.mb_get_h_scroll, (const object *) this);
}

hscroll_bar *scroll_container::get_h_scrollbar() {
	return (hscroll_bar *) ___godot_icall_Object(___mb.mb_get_h_scrollbar, (const object *) this);
}

int64_t scroll_container::get_v_scroll() const {
	return ___godot_icall_int(___mb.mb_get_v_scroll, (const object *) this);
}

vscroll_bar *scroll_container::get_v_scrollbar() {
	return (vscroll_bar *) ___godot_icall_Object(___mb.mb_get_v_scrollbar, (const object *) this);
}

bool scroll_container::is_following_focus() const {
	return ___godot_icall_bool(___mb.mb_is_following_focus, (const object *) this);
}

bool scroll_container::is_h_scroll_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_h_scroll_enabled, (const object *) this);
}

bool scroll_container::is_v_scroll_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_v_scroll_enabled, (const object *) this);
}

void scroll_container::set_deadzone(const int64_t deadzone) {
	___godot_icall_void_int(___mb.mb_set_deadzone, (const object *) this, deadzone);
}

void scroll_container::set_enable_h_scroll(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_enable_h_scroll, (const object *) this, enable);
}

void scroll_container::set_enable_v_scroll(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_enable_v_scroll, (const object *) this, enable);
}

void scroll_container::set_follow_focus(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_follow_focus, (const object *) this, enabled);
}

void scroll_container::set_h_scroll(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_h_scroll, (const object *) this, value);
}

void scroll_container::set_v_scroll(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_v_scroll, (const object *) this, value);
}

}