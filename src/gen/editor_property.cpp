#include "editor_property.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"
#include "object.hpp"


namespace gd {


editor_property::___method_bindings editor_property::___mb = {};

void *editor_property::_detail_class_tag = nullptr;

void editor_property::___init_method_bindings() {
	___mb.mb__focusable_focused = gd::api->godot_method_bind_get_method("EditorProperty", "_focusable_focused");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("EditorProperty", "_gui_input");
	___mb.mb__menu_option = gd::api->godot_method_bind_get_method("EditorProperty", "_menu_option");
	___mb.mb__unhandled_key_input = gd::api->godot_method_bind_get_method("EditorProperty", "_unhandled_key_input");
	___mb.mb__update_revert_and_pin_status = gd::api->godot_method_bind_get_method("EditorProperty", "_update_revert_and_pin_status");
	___mb.mb_add_focusable = gd::api->godot_method_bind_get_method("EditorProperty", "add_focusable");
	___mb.mb_emit_changed = gd::api->godot_method_bind_get_method("EditorProperty", "emit_changed");
	___mb.mb_get_edited_object = gd::api->godot_method_bind_get_method("EditorProperty", "get_edited_object");
	___mb.mb_get_edited_property = gd::api->godot_method_bind_get_method("EditorProperty", "get_edited_property");
	___mb.mb_get_label = gd::api->godot_method_bind_get_method("EditorProperty", "get_label");
	___mb.mb_get_tooltip_text = gd::api->godot_method_bind_get_method("EditorProperty", "get_tooltip_text");
	___mb.mb_is_checkable = gd::api->godot_method_bind_get_method("EditorProperty", "is_checkable");
	___mb.mb_is_checked = gd::api->godot_method_bind_get_method("EditorProperty", "is_checked");
	___mb.mb_is_draw_red = gd::api->godot_method_bind_get_method("EditorProperty", "is_draw_red");
	___mb.mb_is_keying = gd::api->godot_method_bind_get_method("EditorProperty", "is_keying");
	___mb.mb_is_read_only = gd::api->godot_method_bind_get_method("EditorProperty", "is_read_only");
	___mb.mb_set_bottom_editor = gd::api->godot_method_bind_get_method("EditorProperty", "set_bottom_editor");
	___mb.mb_set_checkable = gd::api->godot_method_bind_get_method("EditorProperty", "set_checkable");
	___mb.mb_set_checked = gd::api->godot_method_bind_get_method("EditorProperty", "set_checked");
	___mb.mb_set_draw_red = gd::api->godot_method_bind_get_method("EditorProperty", "set_draw_red");
	___mb.mb_set_keying = gd::api->godot_method_bind_get_method("EditorProperty", "set_keying");
	___mb.mb_set_label = gd::api->godot_method_bind_get_method("EditorProperty", "set_label");
	___mb.mb_set_read_only = gd::api->godot_method_bind_get_method("EditorProperty", "set_read_only");
	___mb.mb_update_property = gd::api->godot_method_bind_get_method("EditorProperty", "update_property");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorProperty");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_property::_focusable_focused(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__focusable_focused, (const object *) this, arg0);
}

void editor_property::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void editor_property::_menu_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb__menu_option, (const object *) this, option);
}

void editor_property::_unhandled_key_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_key_input, (const object *) this, arg0.ptr());
}

void editor_property::_update_revert_and_pin_status() {
	___godot_icall_void(___mb.mb__update_revert_and_pin_status, (const object *) this);
}

void editor_property::add_focusable(const control *control_) {
	___godot_icall_void_Object(___mb.mb_add_focusable, (const object *) this, control_);
}

void editor_property::emit_changed(const string property, const variant value, const string field, const bool changing) {
	___godot_icall_void_String_Variant_String_bool(___mb.mb_emit_changed, (const object *) this, property, value, field, changing);
}

object *editor_property::get_edited_object() {
	return (object *) ___godot_icall_Object(___mb.mb_get_edited_object, (const object *) this);
}

string editor_property::get_edited_property() {
	return ___godot_icall_String(___mb.mb_get_edited_property, (const object *) this);
}

string editor_property::get_label() const {
	return ___godot_icall_String(___mb.mb_get_label, (const object *) this);
}

string editor_property::get_tooltip_text() const {
	return ___godot_icall_String(___mb.mb_get_tooltip_text, (const object *) this);
}

bool editor_property::is_checkable() const {
	return ___godot_icall_bool(___mb.mb_is_checkable, (const object *) this);
}

bool editor_property::is_checked() const {
	return ___godot_icall_bool(___mb.mb_is_checked, (const object *) this);
}

bool editor_property::is_draw_red() const {
	return ___godot_icall_bool(___mb.mb_is_draw_red, (const object *) this);
}

bool editor_property::is_keying() const {
	return ___godot_icall_bool(___mb.mb_is_keying, (const object *) this);
}

bool editor_property::is_read_only() const {
	return ___godot_icall_bool(___mb.mb_is_read_only, (const object *) this);
}

void editor_property::set_bottom_editor(const control *editor) {
	___godot_icall_void_Object(___mb.mb_set_bottom_editor, (const object *) this, editor);
}

void editor_property::set_checkable(const bool checkable) {
	___godot_icall_void_bool(___mb.mb_set_checkable, (const object *) this, checkable);
}

void editor_property::set_checked(const bool checked) {
	___godot_icall_void_bool(___mb.mb_set_checked, (const object *) this, checked);
}

void editor_property::set_draw_red(const bool draw_red) {
	___godot_icall_void_bool(___mb.mb_set_draw_red, (const object *) this, draw_red);
}

void editor_property::set_keying(const bool keying) {
	___godot_icall_void_bool(___mb.mb_set_keying, (const object *) this, keying);
}

void editor_property::set_label(const string text) {
	___godot_icall_void_String(___mb.mb_set_label, (const object *) this, text);
}

void editor_property::set_read_only(const bool read_only) {
	___godot_icall_void_bool(___mb.mb_set_read_only, (const object *) this, read_only);
}

void editor_property::update_property() {
	___godot_icall_void(___mb.mb_update_property, (const object *) this);
}

}