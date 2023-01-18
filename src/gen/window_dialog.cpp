#include "window_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "texture_button.hpp"


namespace gd {


window_dialog::___method_bindings window_dialog::___mb = {};

void *window_dialog::_detail_class_tag = nullptr;

void window_dialog::___init_method_bindings() {
	___mb.mb__closed = gd::api->godot_method_bind_get_method("WindowDialog", "_closed");
	___mb.mb__gui_input = gd::api->godot_method_bind_get_method("WindowDialog", "_gui_input");
	___mb.mb_get_close_button = gd::api->godot_method_bind_get_method("WindowDialog", "get_close_button");
	___mb.mb_get_resizable = gd::api->godot_method_bind_get_method("WindowDialog", "get_resizable");
	___mb.mb_get_title = gd::api->godot_method_bind_get_method("WindowDialog", "get_title");
	___mb.mb_set_resizable = gd::api->godot_method_bind_get_method("WindowDialog", "set_resizable");
	___mb.mb_set_title = gd::api->godot_method_bind_get_method("WindowDialog", "set_title");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WindowDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

window_dialog *window_dialog::_new()
{
	return (window_dialog *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WindowDialog")());
}
void window_dialog::_closed() {
	___godot_icall_void(___mb.mb__closed, (const object *) this);
}

void window_dialog::_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__gui_input, (const object *) this, arg0.ptr());
}

texture_button *window_dialog::get_close_button() {
	return (texture_button *) ___godot_icall_Object(___mb.mb_get_close_button, (const object *) this);
}

bool window_dialog::get_resizable() const {
	return ___godot_icall_bool(___mb.mb_get_resizable, (const object *) this);
}

string window_dialog::get_title() const {
	return ___godot_icall_String(___mb.mb_get_title, (const object *) this);
}

void window_dialog::set_resizable(const bool resizable) {
	___godot_icall_void_bool(___mb.mb_set_resizable, (const object *) this, resizable);
}

void window_dialog::set_title(const string title) {
	___godot_icall_void_String(___mb.mb_set_title, (const object *) this, title);
}

}