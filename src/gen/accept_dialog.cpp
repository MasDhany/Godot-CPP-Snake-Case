#include "accept_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "button.hpp"
#include "control.hpp"
#include "label.hpp"
#include "node.hpp"


namespace gd {


accept_dialog::___method_bindings accept_dialog::___mb = {};

void *accept_dialog::_detail_class_tag = nullptr;

void accept_dialog::___init_method_bindings() {
	___mb.mb__builtin_text_entered = gd::api->godot_method_bind_get_method("AcceptDialog", "_builtin_text_entered");
	___mb.mb__custom_action = gd::api->godot_method_bind_get_method("AcceptDialog", "_custom_action");
	___mb.mb__ok = gd::api->godot_method_bind_get_method("AcceptDialog", "_ok");
	___mb.mb_add_button = gd::api->godot_method_bind_get_method("AcceptDialog", "add_button");
	___mb.mb_add_cancel = gd::api->godot_method_bind_get_method("AcceptDialog", "add_cancel");
	___mb.mb_get_hide_on_ok = gd::api->godot_method_bind_get_method("AcceptDialog", "get_hide_on_ok");
	___mb.mb_get_label = gd::api->godot_method_bind_get_method("AcceptDialog", "get_label");
	___mb.mb_get_ok = gd::api->godot_method_bind_get_method("AcceptDialog", "get_ok");
	___mb.mb_get_text = gd::api->godot_method_bind_get_method("AcceptDialog", "get_text");
	___mb.mb_has_autowrap = gd::api->godot_method_bind_get_method("AcceptDialog", "has_autowrap");
	___mb.mb_register_text_enter = gd::api->godot_method_bind_get_method("AcceptDialog", "register_text_enter");
	___mb.mb_remove_button = gd::api->godot_method_bind_get_method("AcceptDialog", "remove_button");
	___mb.mb_set_autowrap = gd::api->godot_method_bind_get_method("AcceptDialog", "set_autowrap");
	___mb.mb_set_hide_on_ok = gd::api->godot_method_bind_get_method("AcceptDialog", "set_hide_on_ok");
	___mb.mb_set_text = gd::api->godot_method_bind_get_method("AcceptDialog", "set_text");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AcceptDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

accept_dialog *accept_dialog::_new()
{
	return (accept_dialog *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AcceptDialog")());
}
void accept_dialog::_builtin_text_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__builtin_text_entered, (const object *) this, arg0);
}

void accept_dialog::_custom_action(const string arg0) {
	___godot_icall_void_String(___mb.mb__custom_action, (const object *) this, arg0);
}

void accept_dialog::_ok() {
	___godot_icall_void(___mb.mb__ok, (const object *) this);
}

button *accept_dialog::add_button(const string text, const bool right, const string action) {
	return (button *) ___godot_icall_Object_String_bool_String(___mb.mb_add_button, (const object *) this, text, right, action);
}

button *accept_dialog::add_cancel(const string name) {
	return (button *) ___godot_icall_Object_String(___mb.mb_add_cancel, (const object *) this, name);
}

bool accept_dialog::get_hide_on_ok() const {
	return ___godot_icall_bool(___mb.mb_get_hide_on_ok, (const object *) this);
}

label *accept_dialog::get_label() {
	return (label *) ___godot_icall_Object(___mb.mb_get_label, (const object *) this);
}

button *accept_dialog::get_ok() {
	return (button *) ___godot_icall_Object(___mb.mb_get_ok, (const object *) this);
}

string accept_dialog::get_text() const {
	return ___godot_icall_String(___mb.mb_get_text, (const object *) this);
}

bool accept_dialog::has_autowrap() {
	return ___godot_icall_bool(___mb.mb_has_autowrap, (const object *) this);
}

void accept_dialog::register_text_enter(const node *line_edit_) {
	___godot_icall_void_Object(___mb.mb_register_text_enter, (const object *) this, line_edit_);
}

void accept_dialog::remove_button(const control *button_) {
	___godot_icall_void_Object(___mb.mb_remove_button, (const object *) this, button_);
}

void accept_dialog::set_autowrap(const bool autowrap) {
	___godot_icall_void_bool(___mb.mb_set_autowrap, (const object *) this, autowrap);
}

void accept_dialog::set_hide_on_ok(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_hide_on_ok, (const object *) this, enabled);
}

void accept_dialog::set_text(const string text) {
	___godot_icall_void_String(___mb.mb_set_text, (const object *) this, text);
}

}