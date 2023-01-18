#include "file_system_dock.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"
#include "object.hpp"
#include "texture.hpp"


namespace gd {


file_system_dock::___method_bindings file_system_dock::___mb = {};

void *file_system_dock::_detail_class_tag = nullptr;

void file_system_dock::___init_method_bindings() {
	___mb.mb__bw_history = gd::api->godot_method_bind_get_method("FileSystemDock", "_bw_history");
	___mb.mb__duplicate_operation_confirm = gd::api->godot_method_bind_get_method("FileSystemDock", "_duplicate_operation_confirm");
	___mb.mb__feature_profile_changed = gd::api->godot_method_bind_get_method("FileSystemDock", "_feature_profile_changed");
	___mb.mb__file_list_activate_file = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_activate_file");
	___mb.mb__file_list_gui_input = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_gui_input");
	___mb.mb__file_list_rmb_option = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_option");
	___mb.mb__file_list_rmb_pressed = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_pressed");
	___mb.mb__file_list_rmb_select = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_select");
	___mb.mb__file_list_thumbnail_done = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_list_thumbnail_done");
	___mb.mb__file_multi_selected = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_multi_selected");
	___mb.mb__file_removed = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_removed");
	___mb.mb__file_sort_popup = gd::api->godot_method_bind_get_method("FileSystemDock", "_file_sort_popup");
	___mb.mb__folder_removed = gd::api->godot_method_bind_get_method("FileSystemDock", "_folder_removed");
	___mb.mb__fs_changed = gd::api->godot_method_bind_get_method("FileSystemDock", "_fs_changed");
	___mb.mb__fw_history = gd::api->godot_method_bind_get_method("FileSystemDock", "_fw_history");
	___mb.mb__make_dir_confirm = gd::api->godot_method_bind_get_method("FileSystemDock", "_make_dir_confirm");
	___mb.mb__make_scene_confirm = gd::api->godot_method_bind_get_method("FileSystemDock", "_make_scene_confirm");
	___mb.mb__move_operation_confirm = gd::api->godot_method_bind_get_method("FileSystemDock", "_move_operation_confirm");
	___mb.mb__move_with_overwrite = gd::api->godot_method_bind_get_method("FileSystemDock", "_move_with_overwrite");
	___mb.mb__navigate_to_path = gd::api->godot_method_bind_get_method("FileSystemDock", "_navigate_to_path");
	___mb.mb__preview_invalidated = gd::api->godot_method_bind_get_method("FileSystemDock", "_preview_invalidated");
	___mb.mb__rename_operation_confirm = gd::api->godot_method_bind_get_method("FileSystemDock", "_rename_operation_confirm");
	___mb.mb__rescan = gd::api->godot_method_bind_get_method("FileSystemDock", "_rescan");
	___mb.mb__resource_created = gd::api->godot_method_bind_get_method("FileSystemDock", "_resource_created");
	___mb.mb__search_changed = gd::api->godot_method_bind_get_method("FileSystemDock", "_search_changed");
	___mb.mb__select_file = gd::api->godot_method_bind_get_method("FileSystemDock", "_select_file");
	___mb.mb__toggle_file_display = gd::api->godot_method_bind_get_method("FileSystemDock", "_toggle_file_display");
	___mb.mb__toggle_split_mode = gd::api->godot_method_bind_get_method("FileSystemDock", "_toggle_split_mode");
	___mb.mb__tree_activate_file = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_activate_file");
	___mb.mb__tree_empty_selected = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_empty_selected");
	___mb.mb__tree_gui_input = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_gui_input");
	___mb.mb__tree_multi_selected = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_multi_selected");
	___mb.mb__tree_rmb_empty = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_empty");
	___mb.mb__tree_rmb_option = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_option");
	___mb.mb__tree_rmb_select = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_select");
	___mb.mb__tree_thumbnail_done = gd::api->godot_method_bind_get_method("FileSystemDock", "_tree_thumbnail_done");
	___mb.mb__update_import_dock = gd::api->godot_method_bind_get_method("FileSystemDock", "_update_import_dock");
	___mb.mb__update_tree = gd::api->godot_method_bind_get_method("FileSystemDock", "_update_tree");
	___mb.mb_can_drop_data_fw = gd::api->godot_method_bind_get_method("FileSystemDock", "can_drop_data_fw");
	___mb.mb_drop_data_fw = gd::api->godot_method_bind_get_method("FileSystemDock", "drop_data_fw");
	___mb.mb_get_drag_data_fw = gd::api->godot_method_bind_get_method("FileSystemDock", "get_drag_data_fw");
	___mb.mb_navigate_to_path = gd::api->godot_method_bind_get_method("FileSystemDock", "navigate_to_path");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "FileSystemDock");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void file_system_dock::_bw_history() {
	___godot_icall_void(___mb.mb__bw_history, (const object *) this);
}

void file_system_dock::_duplicate_operation_confirm() {
	___godot_icall_void(___mb.mb__duplicate_operation_confirm, (const object *) this);
}

void file_system_dock::_feature_profile_changed() {
	___godot_icall_void(___mb.mb__feature_profile_changed, (const object *) this);
}

void file_system_dock::_file_list_activate_file(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__file_list_activate_file, (const object *) this, arg0);
}

void file_system_dock::_file_list_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__file_list_gui_input, (const object *) this, arg0.ptr());
}

void file_system_dock::_file_list_rmb_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb__file_list_rmb_option, (const object *) this, option);
}

void file_system_dock::_file_list_rmb_pressed(const vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__file_list_rmb_pressed, (const object *) this, arg0);
}

void file_system_dock::_file_list_rmb_select(const int64_t arg0, const vector2 arg1) {
	___godot_icall_void_int_Vector2(___mb.mb__file_list_rmb_select, (const object *) this, arg0, arg1);
}

void file_system_dock::_file_list_thumbnail_done(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__file_list_thumbnail_done, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void file_system_dock::_file_multi_selected(const int64_t arg0, const bool arg1) {
	___godot_icall_void_int_bool(___mb.mb__file_multi_selected, (const object *) this, arg0, arg1);
}

void file_system_dock::_file_removed(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_removed, (const object *) this, arg0);
}

void file_system_dock::_file_sort_popup(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__file_sort_popup, (const object *) this, arg0);
}

void file_system_dock::_folder_removed(const string arg0) {
	___godot_icall_void_String(___mb.mb__folder_removed, (const object *) this, arg0);
}

void file_system_dock::_fs_changed() {
	___godot_icall_void(___mb.mb__fs_changed, (const object *) this);
}

void file_system_dock::_fw_history() {
	___godot_icall_void(___mb.mb__fw_history, (const object *) this);
}

void file_system_dock::_make_dir_confirm() {
	___godot_icall_void(___mb.mb__make_dir_confirm, (const object *) this);
}

void file_system_dock::_make_scene_confirm() {
	___godot_icall_void(___mb.mb__make_scene_confirm, (const object *) this);
}

void file_system_dock::_move_operation_confirm(const string to_path, const bool overwrite) {
	___godot_icall_void_String_bool(___mb.mb__move_operation_confirm, (const object *) this, to_path, overwrite);
}

void file_system_dock::_move_with_overwrite() {
	___godot_icall_void(___mb.mb__move_with_overwrite, (const object *) this);
}

void file_system_dock::_navigate_to_path(const string arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__navigate_to_path, (const object *) this, arg0, arg1);
}

void file_system_dock::_preview_invalidated(const string arg0) {
	___godot_icall_void_String(___mb.mb__preview_invalidated, (const object *) this, arg0);
}

void file_system_dock::_rename_operation_confirm() {
	___godot_icall_void(___mb.mb__rename_operation_confirm, (const object *) this);
}

void file_system_dock::_rescan() {
	___godot_icall_void(___mb.mb__rescan, (const object *) this);
}

void file_system_dock::_resource_created() const {
	___godot_icall_void(___mb.mb__resource_created, (const object *) this);
}

void file_system_dock::_search_changed(const string arg0, const control *arg1) {
	___godot_icall_void_String_Object(___mb.mb__search_changed, (const object *) this, arg0, arg1);
}

void file_system_dock::_select_file(const string arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__select_file, (const object *) this, arg0, arg1);
}

void file_system_dock::_toggle_file_display() {
	___godot_icall_void(___mb.mb__toggle_file_display, (const object *) this);
}

void file_system_dock::_toggle_split_mode(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__toggle_split_mode, (const object *) this, arg0);
}

void file_system_dock::_tree_activate_file() {
	___godot_icall_void(___mb.mb__tree_activate_file, (const object *) this);
}

void file_system_dock::_tree_empty_selected() {
	___godot_icall_void(___mb.mb__tree_empty_selected, (const object *) this);
}

void file_system_dock::_tree_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__tree_gui_input, (const object *) this, arg0.ptr());
}

void file_system_dock::_tree_multi_selected(const object *arg0, const int64_t arg1, const bool arg2) {
	___godot_icall_void_Object_int_bool(___mb.mb__tree_multi_selected, (const object *) this, arg0, arg1, arg2);
}

void file_system_dock::_tree_rmb_empty(const vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__tree_rmb_empty, (const object *) this, arg0);
}

void file_system_dock::_tree_rmb_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb__tree_rmb_option, (const object *) this, option);
}

void file_system_dock::_tree_rmb_select(const vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__tree_rmb_select, (const object *) this, arg0);
}

void file_system_dock::_tree_thumbnail_done(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__tree_thumbnail_done, (const object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void file_system_dock::_update_import_dock() {
	___godot_icall_void(___mb.mb__update_import_dock, (const object *) this);
}

void file_system_dock::_update_tree(const pool_string_array arg0, const bool arg1, const bool arg2, const bool arg3) {
	___godot_icall_void_PoolStringArray_bool_bool_bool(___mb.mb__update_tree, (const object *) this, arg0, arg1, arg2, arg3);
}

bool file_system_dock::can_drop_data_fw(const vector2 point, const variant data, const control *from) const {
	return ___godot_icall_bool_Vector2_Variant_Object(___mb.mb_can_drop_data_fw, (const object *) this, point, data, from);
}

void file_system_dock::drop_data_fw(const vector2 point, const variant data, const control *from) {
	___godot_icall_void_Vector2_Variant_Object(___mb.mb_drop_data_fw, (const object *) this, point, data, from);
}

variant file_system_dock::get_drag_data_fw(const vector2 point, const control *from) {
	return ___godot_icall_Variant_Vector2_Object(___mb.mb_get_drag_data_fw, (const object *) this, point, from);
}

void file_system_dock::navigate_to_path(const string path_) {
	___godot_icall_void_String(___mb.mb_navigate_to_path, (const object *) this, path_);
}

}