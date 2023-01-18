#include "spin_box.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "line_edit.hpp"


namespace gd {


spin_box::___method_bindings spin_box::___mb = {};

void *spin_box::_detail_class_tag = nullptr;

void spin_box::___init_method_bindings() {
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("SpinBox", "_gui_input");
	___mb.mb__line_edit_focus_exit = gd::api->godot_method_bind_get_method("SpinBox", "_line_edit_focus_exit");
	___mb.mb__line_edit_input = gd::api->godot_method_bind_get_method("SpinBox", "_line_edit_input");
	___mb.mb__range_click_timeout = gd::api->godot_method_bind_get_method("SpinBox", "_range_click_timeout");
	___mb.mb__text_entered = gd::api->godot_method_bind_get_method("SpinBox", "_text_entered");
	___mb.mb_apply = gd::api->godot_method_bind_get_method("SpinBox", "apply");
	___mb.mb_get_align = gd::api->godot_method_bind_get_method("SpinBox", "get_align");
	___mb.mb_get_line_edit = gd::api->godot_method_bind_get_method("SpinBox", "get_line_edit");
	___mb.mb_get_prefix = gd::api->godot_method_bind_get_method("SpinBox", "get_prefix");
	___mb.mb_get_suffix = gd::api->godot_method_bind_get_method("SpinBox", "get_suffix");
	___mb.mb_is_editable = gd::api->godot_method_bind_get_method("SpinBox", "is_editable");
	___mb.mb_set_align = gd::api->godot_method_bind_get_method("SpinBox", "set_align");
	___mb.mb_set_editable = gd::api->godot_method_bind_get_method("SpinBox", "set_editable");
	___mb.mb_set_prefix = gd::api->godot_method_bind_get_method("SpinBox", "set_prefix");
	___mb.mb_set_suffix = gd::api->godot_method_bind_get_method("SpinBox", "set_suffix");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "SpinBox");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

spin_box *spin_box::_new()
{
	return (spin_box *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"SpinBox")());
}
void spin_box::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

void spin_box::_line_edit_focus_exit() {
	___godot_icall_void(___mb.mb__line_edit_focus_exit, (const object *) this);
}

void spin_box::_line_edit_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__line_edit_input, (const object *) this, arg0.ptr());
}

void spin_box::_range_click_timeout() {
	___godot_icall_void(___mb.mb__range_click_timeout, (const object *) this);
}

void spin_box::_text_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__text_entered, (const object *) this, arg0);
}

void spin_box::apply() {
	___godot_icall_void(___mb.mb_apply, (const object *) this);
}

line_edit::Align spin_box::get_align() const {
	return (line_edit::Align) ___godot_icall_int(___mb.mb_get_align, (const object *) this);
}

line_edit *spin_box::get_line_edit() {
	return (line_edit *) ___godot_icall_Object(___mb.mb_get_line_edit, (const object *) this);
}

string spin_box::get_prefix() const {
	return ___godot_icall_String(___mb.mb_get_prefix, (const object *) this);
}

string spin_box::get_suffix() const {
	return ___godot_icall_String(___mb.mb_get_suffix, (const object *) this);
}

bool spin_box::is_editable() const {
	return ___godot_icall_bool(___mb.mb_is_editable, (const object *) this);
}

void spin_box::set_align(const int64_t align) {
	___godot_icall_void_int(___mb.mb_set_align, (const object *) this, align);
}

void spin_box::set_editable(const bool editable) {
	___godot_icall_void_bool(___mb.mb_set_editable, (const object *) this, editable);
}

void spin_box::set_prefix(const string prefix) {
	___godot_icall_void_String(___mb.mb_set_prefix, (const object *) this, prefix);
}

void spin_box::set_suffix(const string suffix) {
	___godot_icall_void_String(___mb.mb_set_suffix, (const object *) this, suffix);
}

}