#include "file_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "line_edit.hpp"
#include "object.hpp"
#include "vbox_container.hpp"


namespace gd {


file_dialog::___method_bindings file_dialog::___mb = {};

void *file_dialog::_detail_class_tag = nullptr;

void file_dialog::___init_method_bindings() {
	___mb.mb__action_pressed = gd::api->godot_method_bind_get_method("FileDialog", "_action_pressed");
	___mb.mb__cancel_pressed = gd::api->godot_method_bind_get_method("FileDialog", "_cancel_pressed");
	___mb.mb__dir_entered = gd::api->godot_method_bind_get_method("FileDialog", "_dir_entered");
	___mb.mb__file_entered = gd::api->godot_method_bind_get_method("FileDialog", "_file_entered");
	___mb.mb__filter_selected = gd::api->godot_method_bind_get_method("FileDialog", "_filter_selected");
	___mb.mb__go_up = gd::api->godot_method_bind_get_method("FileDialog", "_go_up");
	___mb.mb__make_dir = gd::api->godot_method_bind_get_method("FileDialog", "_make_dir");
	___mb.mb__make_dir_confirm = gd::api->godot_method_bind_get_method("FileDialog", "_make_dir_confirm");
	___mb.mb__save_confirm_pressed = gd::api->godot_method_bind_get_method("FileDialog", "_save_confirm_pressed");
	___mb.mb__select_drive = gd::api->godot_method_bind_get_method("FileDialog", "_select_drive");
	___mb.mb__tree_item_activated = gd::api->godot_method_bind_get_method("FileDialog", "_tree_item_activated");
	___mb.mb__tree_multi_selected = gd::api->godot_method_bind_get_method("FileDialog", "_tree_multi_selected");
	___mb.mb__tree_selected = gd::api->godot_method_bind_get_method("FileDialog", "_tree_selected");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("FileDialog", "_unhandled_input");
	___mb.mb__update_dir = gd::api->godot_method_bind_get_method("FileDialog", "_update_dir");
	___mb.mb__update_file_list = gd::api->godot_method_bind_get_method("FileDialog", "_update_file_list");
	___mb.mb__update_file_name = gd::api->godot_method_bind_get_method("FileDialog", "_update_file_name");
	___mb.mb_add_filter = gd::api->godot_method_bind_get_method("FileDialog", "add_filter");
	___mb.mb_clear_filters = gd::api->godot_method_bind_get_method("FileDialog", "clear_filters");
	___mb.mb_deselect_items = gd::api->godot_method_bind_get_method("FileDialog", "deselect_items");
	___mb.mb_get_access = gd::api->godot_method_bind_get_method("FileDialog", "get_access");
	___mb.mb_get_current_dir = gd::api->godot_method_bind_get_method("FileDialog", "get_current_dir");
	___mb.mb_get_current_file = gd::api->godot_method_bind_get_method("FileDialog", "get_current_file");
	___mb.mb_get_current_path = gd::api->godot_method_bind_get_method("FileDialog", "get_current_path");
	___mb.mb_get_filters = gd::api->godot_method_bind_get_method("FileDialog", "get_filters");
	___mb.mb_get_line_edit = gd::api->godot_method_bind_get_method("FileDialog", "get_line_edit");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("FileDialog", "get_mode");
	___mb.mb_get_vbox = gd::api->godot_method_bind_get_method("FileDialog", "get_vbox");
	___mb.mb_invalidate = gd::api->godot_method_bind_get_method("FileDialog", "invalidate");
	___mb.mb_is_mode_overriding_title = gd::api->godot_method_bind_get_method("FileDialog", "is_mode_overriding_title");
	___mb.mb_is_showing_hidden_files = gd::api->godot_method_bind_get_method("FileDialog", "is_showing_hidden_files");
	___mb.mb_set_access = gd::api->godot_method_bind_get_method("FileDialog", "set_access");
	___mb.mb_set_current_dir = gd::api->godot_method_bind_get_method("FileDialog", "set_current_dir");
	___mb.mb_set_current_file = gd::api->godot_method_bind_get_method("FileDialog", "set_current_file");
	___mb.mb_set_current_path = gd::api->godot_method_bind_get_method("FileDialog", "set_current_path");
	___mb.mb_set_filters = gd::api->godot_method_bind_get_method("FileDialog", "set_filters");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("FileDialog", "set_mode");
	___mb.mb_set_mode_overrides_title = gd::api->godot_method_bind_get_method("FileDialog", "set_mode_overrides_title");
	___mb.mb_set_show_hidden_files = gd::api->godot_method_bind_get_method("FileDialog", "set_show_hidden_files");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "FileDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

file_dialog *file_dialog::_new()
{
	return (file_dialog *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"FileDialog")());
}
void file_dialog::_action_pressed() {
	___godot_icall_void(___mb.mb__action_pressed, (const object *) this);
}

void file_dialog::_cancel_pressed() {
	___godot_icall_void(___mb.mb__cancel_pressed, (const object *) this);
}

void file_dialog::_dir_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__dir_entered, (const object *) this, arg0);
}

void file_dialog::_file_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_entered, (const object *) this, arg0);
}

void file_dialog::_filter_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__filter_selected, (const object *) this, arg0);
}

void file_dialog::_go_up() {
	___godot_icall_void(___mb.mb__go_up, (const object *) this);
}

void file_dialog::_make_dir() {
	___godot_icall_void(___mb.mb__make_dir, (const object *) this);
}

void file_dialog::_make_dir_confirm() {
	___godot_icall_void(___mb.mb__make_dir_confirm, (const object *) this);
}

void file_dialog::_save_confirm_pressed() {
	___godot_icall_void(___mb.mb__save_confirm_pressed, (const object *) this);
}

void file_dialog::_select_drive(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__select_drive, (const object *) this, arg0);
}

void file_dialog::_tree_item_activated() {
	___godot_icall_void(___mb.mb__tree_item_activated, (const object *) this);
}

void file_dialog::_tree_multi_selected(const object *arg0, const int64_t arg1, const bool arg2) {
	___godot_icall_void_Object_int_bool(___mb.mb__tree_multi_selected, (const object *) this, arg0, arg1, arg2);
}

void file_dialog::_tree_selected() {
	___godot_icall_void(___mb.mb__tree_selected, (const object *) this);
}

void file_dialog::_unhandled_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, arg0.ptr());
}

void file_dialog::_update_dir() {
	___godot_icall_void(___mb.mb__update_dir, (const object *) this);
}

void file_dialog::_update_file_list() {
	___godot_icall_void(___mb.mb__update_file_list, (const object *) this);
}

void file_dialog::_update_file_name() {
	___godot_icall_void(___mb.mb__update_file_name, (const object *) this);
}

void file_dialog::add_filter(const string filter) {
	___godot_icall_void_String(___mb.mb_add_filter, (const object *) this, filter);
}

void file_dialog::clear_filters() {
	___godot_icall_void(___mb.mb_clear_filters, (const object *) this);
}

void file_dialog::deselect_items() {
	___godot_icall_void(___mb.mb_deselect_items, (const object *) this);
}

file_dialog::Access file_dialog::get_access() const {
	return (file_dialog::Access) ___godot_icall_int(___mb.mb_get_access, (const object *) this);
}

string file_dialog::get_current_dir() const {
	return ___godot_icall_String(___mb.mb_get_current_dir, (const object *) this);
}

string file_dialog::get_current_file() const {
	return ___godot_icall_String(___mb.mb_get_current_file, (const object *) this);
}

string file_dialog::get_current_path() const {
	return ___godot_icall_String(___mb.mb_get_current_path, (const object *) this);
}

pool_string_array file_dialog::get_filters() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_filters, (const object *) this);
}

line_edit *file_dialog::get_line_edit() {
	return (line_edit *) ___godot_icall_Object(___mb.mb_get_line_edit, (const object *) this);
}

file_dialog::Mode file_dialog::get_mode() const {
	return (file_dialog::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

vbox_container *file_dialog::get_vbox() {
	return (vbox_container *) ___godot_icall_Object(___mb.mb_get_vbox, (const object *) this);
}

void file_dialog::invalidate() {
	___godot_icall_void(___mb.mb_invalidate, (const object *) this);
}

bool file_dialog::is_mode_overriding_title() const {
	return ___godot_icall_bool(___mb.mb_is_mode_overriding_title, (const object *) this);
}

bool file_dialog::is_showing_hidden_files() const {
	return ___godot_icall_bool(___mb.mb_is_showing_hidden_files, (const object *) this);
}

void file_dialog::set_access(const int64_t access) {
	___godot_icall_void_int(___mb.mb_set_access, (const object *) this, access);
}

void file_dialog::set_current_dir(const string dir) {
	___godot_icall_void_String(___mb.mb_set_current_dir, (const object *) this, dir);
}

void file_dialog::set_current_file(const string file_) {
	___godot_icall_void_String(___mb.mb_set_current_file, (const object *) this, file_);
}

void file_dialog::set_current_path(const string path_) {
	___godot_icall_void_String(___mb.mb_set_current_path, (const object *) this, path_);
}

void file_dialog::set_filters(const pool_string_array filters) {
	___godot_icall_void_PoolStringArray(___mb.mb_set_filters, (const object *) this, filters);
}

void file_dialog::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void file_dialog::set_mode_overrides_title(const bool override) {
	___godot_icall_void_bool(___mb.mb_set_mode_overrides_title, (const object *) this, override);
}

void file_dialog::set_show_hidden_files(const bool show) {
	___godot_icall_void_bool(___mb.mb_set_show_hidden_files, (const object *) this, show);
}

}