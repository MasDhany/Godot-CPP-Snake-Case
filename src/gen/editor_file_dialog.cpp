#include "editor_file_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"
#include "texture.hpp"
#include "vbox_container.hpp"


namespace gd {


editor_file_dialog::___method_bindings editor_file_dialog::___mb = {};

void *editor_file_dialog::_detail_class_tag = nullptr;

void editor_file_dialog::___init_method_bindings() {
	___mb.mb__action_pressed = gd::api->godot_method_bind_get_method("EditorFileDialog", "_action_pressed");
	___mb.mb__cancel_pressed = gd::api->godot_method_bind_get_method("EditorFileDialog", "_cancel_pressed");
	___mb.mb__dir_entered = gd::api->godot_method_bind_get_method("EditorFileDialog", "_dir_entered");
	___mb.mb__favorite_move_down = gd::api->godot_method_bind_get_method("EditorFileDialog", "_favorite_move_down");
	___mb.mb__favorite_move_up = gd::api->godot_method_bind_get_method("EditorFileDialog", "_favorite_move_up");
	___mb.mb__favorite_pressed = gd::api->godot_method_bind_get_method("EditorFileDialog", "_favorite_pressed");
	___mb.mb__favorite_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_favorite_selected");
	___mb.mb__file_entered = gd::api->godot_method_bind_get_method("EditorFileDialog", "_file_entered");
	___mb.mb__filter_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_filter_selected");
	___mb.mb__go_back = gd::api->godot_method_bind_get_method("EditorFileDialog", "_go_back");
	___mb.mb__go_forward = gd::api->godot_method_bind_get_method("EditorFileDialog", "_go_forward");
	___mb.mb__go_up = gd::api->godot_method_bind_get_method("EditorFileDialog", "_go_up");
	___mb.mb__item_db_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_item_db_selected");
	___mb.mb__item_list_item_rmb_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_item_list_item_rmb_selected");
	___mb.mb__item_list_rmb_clicked = gd::api->godot_method_bind_get_method("EditorFileDialog", "_item_list_rmb_clicked");
	___mb.mb__item_menu_id_pressed = gd::api->godot_method_bind_get_method("EditorFileDialog", "_item_menu_id_pressed");
	___mb.mb__item_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_item_selected");
	___mb.mb__items_clear_selection = gd::api->godot_method_bind_get_method("EditorFileDialog", "_items_clear_selection");
	___mb.mb__make_dir = gd::api->godot_method_bind_get_method("EditorFileDialog", "_make_dir");
	___mb.mb__make_dir_confirm = gd::api->godot_method_bind_get_method("EditorFileDialog", "_make_dir_confirm");
	___mb.mb__multi_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_multi_selected");
	___mb.mb__recent_selected = gd::api->godot_method_bind_get_method("EditorFileDialog", "_recent_selected");
	___mb.mb__save_confirm_pressed = gd::api->godot_method_bind_get_method("EditorFileDialog", "_save_confirm_pressed");
	___mb.mb__select_drive = gd::api->godot_method_bind_get_method("EditorFileDialog", "_select_drive");
	___mb.mb__thumbnail_done = gd::api->godot_method_bind_get_method("EditorFileDialog", "_thumbnail_done");
	___mb.mb__thumbnail_result = gd::api->godot_method_bind_get_method("EditorFileDialog", "_thumbnail_result");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("EditorFileDialog", "_unhandled_input");
	___mb.mb__update_dir = gd::api->godot_method_bind_get_method("EditorFileDialog", "_update_dir");
	___mb.mb__update_file_list = gd::api->godot_method_bind_get_method("EditorFileDialog", "_update_file_list");
	___mb.mb__update_file_name = gd::api->godot_method_bind_get_method("EditorFileDialog", "_update_file_name");
	___mb.mb_add_filter = gd::api->godot_method_bind_get_method("EditorFileDialog", "add_filter");
	___mb.mb_clear_filters = gd::api->godot_method_bind_get_method("EditorFileDialog", "clear_filters");
	___mb.mb_get_access = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_access");
	___mb.mb_get_current_dir = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_current_dir");
	___mb.mb_get_current_file = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_current_file");
	___mb.mb_get_current_path = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_current_path");
	___mb.mb_get_display_mode = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_display_mode");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_mode");
	___mb.mb_get_vbox = gd::api->godot_method_bind_get_method("EditorFileDialog", "get_vbox");
	___mb.mb_invalidate = gd::api->godot_method_bind_get_method("EditorFileDialog", "invalidate");
	___mb.mb_is_overwrite_warning_disabled = gd::api->godot_method_bind_get_method("EditorFileDialog", "is_overwrite_warning_disabled");
	___mb.mb_is_showing_hidden_files = gd::api->godot_method_bind_get_method("EditorFileDialog", "is_showing_hidden_files");
	___mb.mb_set_access = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_access");
	___mb.mb_set_current_dir = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_current_dir");
	___mb.mb_set_current_file = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_current_file");
	___mb.mb_set_current_path = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_current_path");
	___mb.mb_set_disable_overwrite_warning = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_disable_overwrite_warning");
	___mb.mb_set_display_mode = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_display_mode");
	___mb.mb_set_mode = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_mode");
	___mb.mb_set_show_hidden_files = gd::api->godot_method_bind_get_method("EditorFileDialog", "set_show_hidden_files");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorFileDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_file_dialog::_action_pressed() {
	___godot_icall_void(___mb.mb__action_pressed, (const object *) this);
}

void editor_file_dialog::_cancel_pressed() {
	___godot_icall_void(___mb.mb__cancel_pressed, (const object *) this);
}

void editor_file_dialog::_dir_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__dir_entered, (const object *) this, arg0);
}

void editor_file_dialog::_favorite_move_down() {
	___godot_icall_void(___mb.mb__favorite_move_down, (const object *) this);
}

void editor_file_dialog::_favorite_move_up() {
	___godot_icall_void(___mb.mb__favorite_move_up, (const object *) this);
}

void editor_file_dialog::_favorite_pressed() {
	___godot_icall_void(___mb.mb__favorite_pressed, (const object *) this);
}

void editor_file_dialog::_favorite_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__favorite_selected, (const object *) this, arg0);
}

void editor_file_dialog::_file_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_entered, (const object *) this, arg0);
}

void editor_file_dialog::_filter_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__filter_selected, (const object *) this, arg0);
}

void editor_file_dialog::_go_back() {
	___godot_icall_void(___mb.mb__go_back, (const object *) this);
}

void editor_file_dialog::_go_forward() {
	___godot_icall_void(___mb.mb__go_forward, (const object *) this);
}

void editor_file_dialog::_go_up() {
	___godot_icall_void(___mb.mb__go_up, (const object *) this);
}

void editor_file_dialog::_item_db_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__item_db_selected, (const object *) this, arg0);
}

void editor_file_dialog::_item_list_item_rmb_selected(const int64_t arg0, const vector2 arg1) {
	___godot_icall_void_int_Vector2(___mb.mb__item_list_item_rmb_selected, (const object *) this, arg0, arg1);
}

void editor_file_dialog::_item_list_rmb_clicked(const vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__item_list_rmb_clicked, (const object *) this, arg0);
}

void editor_file_dialog::_item_menu_id_pressed(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__item_menu_id_pressed, (const object *) this, arg0);
}

void editor_file_dialog::_item_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__item_selected, (const object *) this, arg0);
}

void editor_file_dialog::_items_clear_selection() {
	___godot_icall_void(___mb.mb__items_clear_selection, (const object *) this);
}

void editor_file_dialog::_make_dir() {
	___godot_icall_void(___mb.mb__make_dir, (const object *) this);
}

void editor_file_dialog::_make_dir_confirm() {
	___godot_icall_void(___mb.mb__make_dir_confirm, (const object *) this);
}

void editor_file_dialog::_multi_selected(const int64_t arg0, const bool arg1) {
	___godot_icall_void_int_bool(___mb.mb__multi_selected, (const object *) this, arg0, arg1);
}

void editor_file_dialog::_recent_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__recent_selected, (const object *) this, arg0);
}

void editor_file_dialog::_save_confirm_pressed() {
	___godot_icall_void(___mb.mb__save_confirm_pressed, (const object *) this);
}

void editor_file_dialog::_select_drive(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__select_drive, (const object *) this, arg0);
}

void editor_file_dialog::_thumbnail_done(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__thumbnail_done, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void editor_file_dialog::_thumbnail_result(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__thumbnail_result, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void editor_file_dialog::_unhandled_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, arg0.ptr());
}

void editor_file_dialog::_update_dir() {
	___godot_icall_void(___mb.mb__update_dir, (const object *) this);
}

void editor_file_dialog::_update_file_list() {
	___godot_icall_void(___mb.mb__update_file_list, (const object *) this);
}

void editor_file_dialog::_update_file_name() {
	___godot_icall_void(___mb.mb__update_file_name, (const object *) this);
}

void editor_file_dialog::add_filter(const string filter) {
	___godot_icall_void_String(___mb.mb_add_filter, (const object *) this, filter);
}

void editor_file_dialog::clear_filters() {
	___godot_icall_void(___mb.mb_clear_filters, (const object *) this);
}

editor_file_dialog::Access editor_file_dialog::get_access() const {
	return (editor_file_dialog::Access) ___godot_icall_int(___mb.mb_get_access, (const object *) this);
}

string editor_file_dialog::get_current_dir() const {
	return ___godot_icall_String(___mb.mb_get_current_dir, (const object *) this);
}

string editor_file_dialog::get_current_file() const {
	return ___godot_icall_String(___mb.mb_get_current_file, (const object *) this);
}

string editor_file_dialog::get_current_path() const {
	return ___godot_icall_String(___mb.mb_get_current_path, (const object *) this);
}

editor_file_dialog::DisplayMode editor_file_dialog::get_display_mode() const {
	return (editor_file_dialog::DisplayMode) ___godot_icall_int(___mb.mb_get_display_mode, (const object *) this);
}

editor_file_dialog::Mode editor_file_dialog::get_mode() const {
	return (editor_file_dialog::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

vbox_container *editor_file_dialog::get_vbox() {
	return (vbox_container *) ___godot_icall_Object(___mb.mb_get_vbox, (const object *) this);
}

void editor_file_dialog::invalidate() {
	___godot_icall_void(___mb.mb_invalidate, (const object *) this);
}

bool editor_file_dialog::is_overwrite_warning_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_overwrite_warning_disabled, (const object *) this);
}

bool editor_file_dialog::is_showing_hidden_files() const {
	return ___godot_icall_bool(___mb.mb_is_showing_hidden_files, (const object *) this);
}

void editor_file_dialog::set_access(const int64_t access) {
	___godot_icall_void_int(___mb.mb_set_access, (const object *) this, access);
}

void editor_file_dialog::set_current_dir(const string dir) {
	___godot_icall_void_String(___mb.mb_set_current_dir, (const object *) this, dir);
}

void editor_file_dialog::set_current_file(const string file_) {
	___godot_icall_void_String(___mb.mb_set_current_file, (const object *) this, file_);
}

void editor_file_dialog::set_current_path(const string path_) {
	___godot_icall_void_String(___mb.mb_set_current_path, (const object *) this, path_);
}

void editor_file_dialog::set_disable_overwrite_warning(const bool disable) {
	___godot_icall_void_bool(___mb.mb_set_disable_overwrite_warning, (const object *) this, disable);
}

void editor_file_dialog::set_display_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_display_mode, (const object *) this, mode);
}

void editor_file_dialog::set_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_mode, (const object *) this, mode);
}

void editor_file_dialog::set_show_hidden_files(const bool show) {
	___godot_icall_void_bool(___mb.mb_set_show_hidden_files, (const object *) this, show);
}

}