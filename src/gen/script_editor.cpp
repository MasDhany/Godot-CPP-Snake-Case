#include "script_editor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "input_event.hpp"
#include "node.hpp"
#include "object.hpp"
#include "reference.hpp"
#include "resource.hpp"
#include "script.hpp"


namespace gd {


script_editor::___method_bindings script_editor::___mb = {};

void *script_editor::_detail_class_tag = nullptr;

void script_editor::___init_method_bindings() {
	___mb.mb__add_callback = gd::api->godot_method_bind_get_method("ScriptEditor", "_add_callback");
	___mb.mb__autosave_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "_autosave_scripts");
	___mb.mb__breaked = gd::api->godot_method_bind_get_method("ScriptEditor", "_breaked");
	___mb.mb__clear_execution = gd::api->godot_method_bind_get_method("ScriptEditor", "_clear_execution");
	___mb.mb__close_all_tabs = gd::api->godot_method_bind_get_method("ScriptEditor", "_close_all_tabs");
	___mb.mb__close_current_tab = gd::api->godot_method_bind_get_method("ScriptEditor", "_close_current_tab");
	___mb.mb__close_discard_current_tab = gd::api->godot_method_bind_get_method("ScriptEditor", "_close_discard_current_tab");
	___mb.mb__close_docs_tab = gd::api->godot_method_bind_get_method("ScriptEditor", "_close_docs_tab");
	___mb.mb__close_other_tabs = gd::api->godot_method_bind_get_method("ScriptEditor", "_close_other_tabs");
	___mb.mb__copy_script_path = gd::api->godot_method_bind_get_method("ScriptEditor", "_copy_script_path");
	___mb.mb__editor_pause = gd::api->godot_method_bind_get_method("ScriptEditor", "_editor_pause");
	___mb.mb__editor_play = gd::api->godot_method_bind_get_method("ScriptEditor", "_editor_play");
	___mb.mb__editor_settings_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_editor_settings_changed");
	___mb.mb__editor_stop = gd::api->godot_method_bind_get_method("ScriptEditor", "_editor_stop");
	___mb.mb__file_dialog_action = gd::api->godot_method_bind_get_method("ScriptEditor", "_file_dialog_action");
	___mb.mb__filter_methods_text_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_filter_methods_text_changed");
	___mb.mb__filter_scripts_text_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_filter_scripts_text_changed");
	___mb.mb__get_debug_tooltip = gd::api->godot_method_bind_get_method("ScriptEditor", "_get_debug_tooltip");
	___mb.mb__goto_script_line = gd::api->godot_method_bind_get_method("ScriptEditor", "_goto_script_line");
	___mb.mb__goto_script_line2 = gd::api->godot_method_bind_get_method("ScriptEditor", "_goto_script_line2");
	___mb.mb__help_class_goto = gd::api->godot_method_bind_get_method("ScriptEditor", "_help_class_goto");
	___mb.mb__help_class_open = gd::api->godot_method_bind_get_method("ScriptEditor", "_help_class_open");
	___mb.mb__help_overview_selected = gd::api->godot_method_bind_get_method("ScriptEditor", "_help_overview_selected");
	___mb.mb__help_search = gd::api->godot_method_bind_get_method("ScriptEditor", "_help_search");
	___mb.mb__history_back = gd::api->godot_method_bind_get_method("ScriptEditor", "_history_back");
	___mb.mb__history_forward = gd::api->godot_method_bind_get_method("ScriptEditor", "_history_forward");
	___mb.mb__input = gd::api->godot_method_bind_get_method("ScriptEditor", "_input");
	___mb.mb__live_auto_reload_running_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "_live_auto_reload_running_scripts");
	___mb.mb__members_overview_selected = gd::api->godot_method_bind_get_method("ScriptEditor", "_members_overview_selected");
	___mb.mb__menu_option = gd::api->godot_method_bind_get_method("ScriptEditor", "_menu_option");
	___mb.mb__on_find_in_files_modified_files = gd::api->godot_method_bind_get_method("ScriptEditor", "_on_find_in_files_modified_files");
	___mb.mb__on_find_in_files_requested = gd::api->godot_method_bind_get_method("ScriptEditor", "_on_find_in_files_requested");
	___mb.mb__on_find_in_files_result_selected = gd::api->godot_method_bind_get_method("ScriptEditor", "_on_find_in_files_result_selected");
	___mb.mb__on_replace_in_files_requested = gd::api->godot_method_bind_get_method("ScriptEditor", "_on_replace_in_files_requested");
	___mb.mb__open_recent_script = gd::api->godot_method_bind_get_method("ScriptEditor", "_open_recent_script");
	___mb.mb__prepare_file_menu = gd::api->godot_method_bind_get_method("ScriptEditor", "_prepare_file_menu");
	___mb.mb__queue_close_tabs = gd::api->godot_method_bind_get_method("ScriptEditor", "_queue_close_tabs");
	___mb.mb__request_help = gd::api->godot_method_bind_get_method("ScriptEditor", "_request_help");
	___mb.mb__res_saved_callback = gd::api->godot_method_bind_get_method("ScriptEditor", "_res_saved_callback");
	___mb.mb__resave_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "_resave_scripts");
	___mb.mb__save_history = gd::api->godot_method_bind_get_method("ScriptEditor", "_save_history");
	___mb.mb__scene_saved_callback = gd::api->godot_method_bind_get_method("ScriptEditor", "_scene_saved_callback");
	___mb.mb__script_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_script_changed");
	___mb.mb__script_created = gd::api->godot_method_bind_get_method("ScriptEditor", "_script_created");
	___mb.mb__script_list_gui_input = gd::api->godot_method_bind_get_method("ScriptEditor", "_script_list_gui_input");
	___mb.mb__script_selected = gd::api->godot_method_bind_get_method("ScriptEditor", "_script_selected");
	___mb.mb__script_split_dragged = gd::api->godot_method_bind_get_method("ScriptEditor", "_script_split_dragged");
	___mb.mb__set_execution = gd::api->godot_method_bind_get_method("ScriptEditor", "_set_execution");
	___mb.mb__show_debugger = gd::api->godot_method_bind_get_method("ScriptEditor", "_show_debugger");
	___mb.mb__start_find_in_files = gd::api->godot_method_bind_get_method("ScriptEditor", "_start_find_in_files");
	___mb.mb__tab_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_tab_changed");
	___mb.mb__theme_option = gd::api->godot_method_bind_get_method("ScriptEditor", "_theme_option");
	___mb.mb__toggle_members_overview_alpha_sort = gd::api->godot_method_bind_get_method("ScriptEditor", "_toggle_members_overview_alpha_sort");
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("ScriptEditor", "_tree_changed");
	___mb.mb__unhandled_input = gd::api->godot_method_bind_get_method("ScriptEditor", "_unhandled_input");
	___mb.mb__update_autosave_timer = gd::api->godot_method_bind_get_method("ScriptEditor", "_update_autosave_timer");
	___mb.mb__update_members_overview = gd::api->godot_method_bind_get_method("ScriptEditor", "_update_members_overview");
	___mb.mb__update_recent_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "_update_recent_scripts");
	___mb.mb__update_script_connections = gd::api->godot_method_bind_get_method("ScriptEditor", "_update_script_connections");
	___mb.mb__update_script_names = gd::api->godot_method_bind_get_method("ScriptEditor", "_update_script_names");
	___mb.mb_can_drop_data_fw = gd::api->godot_method_bind_get_method("ScriptEditor", "can_drop_data_fw");
	___mb.mb_drop_data_fw = gd::api->godot_method_bind_get_method("ScriptEditor", "drop_data_fw");
	___mb.mb_get_current_script = gd::api->godot_method_bind_get_method("ScriptEditor", "get_current_script");
	___mb.mb_get_drag_data_fw = gd::api->godot_method_bind_get_method("ScriptEditor", "get_drag_data_fw");
	___mb.mb_get_open_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "get_open_scripts");
	___mb.mb_goto_line = gd::api->godot_method_bind_get_method("ScriptEditor", "goto_line");
	___mb.mb_open_script_create_dialog = gd::api->godot_method_bind_get_method("ScriptEditor", "open_script_create_dialog");
	___mb.mb_reload_scripts = gd::api->godot_method_bind_get_method("ScriptEditor", "reload_scripts");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ScriptEditor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void script_editor::_add_callback(const object *arg0, const string arg1, const pool_string_array arg2) {
	___godot_icall_void_Object_String_PoolStringArray(___mb.mb__add_callback, (const object *) this, arg0, arg1, arg2);
}

void script_editor::_autosave_scripts() {
	___godot_icall_void(___mb.mb__autosave_scripts, (const object *) this);
}

void script_editor::_breaked(const bool arg0, const bool arg1) {
	___godot_icall_void_bool_bool(___mb.mb__breaked, (const object *) this, arg0, arg1);
}

void script_editor::_clear_execution(const ref<reference> arg0) {
	___godot_icall_void_Object(___mb.mb__clear_execution, (const object *) this, arg0.ptr());
}

void script_editor::_close_all_tabs() {
	___godot_icall_void(___mb.mb__close_all_tabs, (const object *) this);
}

void script_editor::_close_current_tab(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__close_current_tab, (const object *) this, arg0);
}

void script_editor::_close_discard_current_tab(const string arg0) {
	___godot_icall_void_String(___mb.mb__close_discard_current_tab, (const object *) this, arg0);
}

void script_editor::_close_docs_tab() {
	___godot_icall_void(___mb.mb__close_docs_tab, (const object *) this);
}

void script_editor::_close_other_tabs() {
	___godot_icall_void(___mb.mb__close_other_tabs, (const object *) this);
}

void script_editor::_copy_script_path() {
	___godot_icall_void(___mb.mb__copy_script_path, (const object *) this);
}

void script_editor::_editor_pause() {
	___godot_icall_void(___mb.mb__editor_pause, (const object *) this);
}

void script_editor::_editor_play() {
	___godot_icall_void(___mb.mb__editor_play, (const object *) this);
}

void script_editor::_editor_settings_changed() {
	___godot_icall_void(___mb.mb__editor_settings_changed, (const object *) this);
}

void script_editor::_editor_stop() {
	___godot_icall_void(___mb.mb__editor_stop, (const object *) this);
}

void script_editor::_file_dialog_action(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_dialog_action, (const object *) this, arg0);
}

void script_editor::_filter_methods_text_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__filter_methods_text_changed, (const object *) this, arg0);
}

void script_editor::_filter_scripts_text_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__filter_scripts_text_changed, (const object *) this, arg0);
}

string script_editor::_get_debug_tooltip(const string arg0, const node *arg1) {
	return ___godot_icall_String_String_Object(___mb.mb__get_debug_tooltip, (const object *) this, arg0, arg1);
}

void script_editor::_goto_script_line(const ref<reference> arg0, const int64_t arg1) {
	___godot_icall_void_Object_int(___mb.mb__goto_script_line, (const object *) this, arg0.ptr(), arg1);
}

void script_editor::_goto_script_line2(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__goto_script_line2, (const object *) this, arg0);
}

void script_editor::_help_class_goto(const string arg0) {
	___godot_icall_void_String(___mb.mb__help_class_goto, (const object *) this, arg0);
}

void script_editor::_help_class_open(const string arg0) {
	___godot_icall_void_String(___mb.mb__help_class_open, (const object *) this, arg0);
}

void script_editor::_help_overview_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__help_overview_selected, (const object *) this, arg0);
}

void script_editor::_help_search(const string arg0) {
	___godot_icall_void_String(___mb.mb__help_search, (const object *) this, arg0);
}

void script_editor::_history_back() {
	___godot_icall_void(___mb.mb__history_back, (const object *) this);
}

void script_editor::_history_forward() {
	___godot_icall_void(___mb.mb__history_forward, (const object *) this);
}

void script_editor::_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__input, (const object *) this, arg0.ptr());
}

void script_editor::_live_auto_reload_running_scripts() {
	___godot_icall_void(___mb.mb__live_auto_reload_running_scripts, (const object *) this);
}

void script_editor::_members_overview_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__members_overview_selected, (const object *) this, arg0);
}

void script_editor::_menu_option(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__menu_option, (const object *) this, arg0);
}

void script_editor::_on_find_in_files_modified_files(const pool_string_array arg0) {
	___godot_icall_void_PoolStringArray(___mb.mb__on_find_in_files_modified_files, (const object *) this, arg0);
}

void script_editor::_on_find_in_files_requested(const string arg0) {
	___godot_icall_void_String(___mb.mb__on_find_in_files_requested, (const object *) this, arg0);
}

void script_editor::_on_find_in_files_result_selected(const string arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
	___godot_icall_void_String_int_int_int(___mb.mb__on_find_in_files_result_selected, (const object *) this, arg0, arg1, arg2, arg3);
}

void script_editor::_on_replace_in_files_requested(const string arg0) {
	___godot_icall_void_String(___mb.mb__on_replace_in_files_requested, (const object *) this, arg0);
}

void script_editor::_open_recent_script(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__open_recent_script, (const object *) this, arg0);
}

void script_editor::_prepare_file_menu() {
	___godot_icall_void(___mb.mb__prepare_file_menu, (const object *) this);
}

void script_editor::_queue_close_tabs() {
	___godot_icall_void(___mb.mb__queue_close_tabs, (const object *) this);
}

void script_editor::_request_help(const string arg0) {
	___godot_icall_void_String(___mb.mb__request_help, (const object *) this, arg0);
}

void script_editor::_res_saved_callback(const ref<resource> arg0) {
	___godot_icall_void_Object(___mb.mb__res_saved_callback, (const object *) this, arg0.ptr());
}

void script_editor::_resave_scripts(const string arg0) {
	___godot_icall_void_String(___mb.mb__resave_scripts, (const object *) this, arg0);
}

void script_editor::_save_history() {
	___godot_icall_void(___mb.mb__save_history, (const object *) this);
}

void script_editor::_scene_saved_callback(const string arg0) {
	___godot_icall_void_String(___mb.mb__scene_saved_callback, (const object *) this, arg0);
}

void script_editor::_script_changed() {
	___godot_icall_void(___mb.mb__script_changed, (const object *) this);
}

void script_editor::_script_created(const ref<script> arg0) {
	___godot_icall_void_Object(___mb.mb__script_created, (const object *) this, arg0.ptr());
}

void script_editor::_script_list_gui_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__script_list_gui_input, (const object *) this, arg0.ptr());
}

void script_editor::_script_selected(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__script_selected, (const object *) this, arg0);
}

void script_editor::_script_split_dragged(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__script_split_dragged, (const object *) this, arg0);
}

void script_editor::_set_execution(const ref<reference> arg0, const int64_t arg1) {
	___godot_icall_void_Object_int(___mb.mb__set_execution, (const object *) this, arg0.ptr(), arg1);
}

void script_editor::_show_debugger(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__show_debugger, (const object *) this, arg0);
}

void script_editor::_start_find_in_files(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__start_find_in_files, (const object *) this, arg0);
}

void script_editor::_tab_changed(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__tab_changed, (const object *) this, arg0);
}

void script_editor::_theme_option(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__theme_option, (const object *) this, arg0);
}

void script_editor::_toggle_members_overview_alpha_sort(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__toggle_members_overview_alpha_sort, (const object *) this, arg0);
}

void script_editor::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void script_editor::_unhandled_input(const ref<input_event> arg0) {
	___godot_icall_void_Object(___mb.mb__unhandled_input, (const object *) this, arg0.ptr());
}

void script_editor::_update_autosave_timer() {
	___godot_icall_void(___mb.mb__update_autosave_timer, (const object *) this);
}

void script_editor::_update_members_overview() {
	___godot_icall_void(___mb.mb__update_members_overview, (const object *) this);
}

void script_editor::_update_recent_scripts() {
	___godot_icall_void(___mb.mb__update_recent_scripts, (const object *) this);
}

void script_editor::_update_script_connections() {
	___godot_icall_void(___mb.mb__update_script_connections, (const object *) this);
}

void script_editor::_update_script_names() {
	___godot_icall_void(___mb.mb__update_script_names, (const object *) this);
}

bool script_editor::can_drop_data_fw(const vector2 point, const variant data, const control *from) const {
	return ___godot_icall_bool_Vector2_Variant_Object(___mb.mb_can_drop_data_fw, (const object *) this, point, data, from);
}

void script_editor::drop_data_fw(const vector2 point, const variant data, const control *from) {
	___godot_icall_void_Vector2_Variant_Object(___mb.mb_drop_data_fw, (const object *) this, point, data, from);
}

ref<script> script_editor::get_current_script() {
	return ref<script>::__internal_constructor(___godot_icall_Object(___mb.mb_get_current_script, (const object *) this));
}

variant script_editor::get_drag_data_fw(const vector2 point, const control *from) {
	return ___godot_icall_Variant_Vector2_Object(___mb.mb_get_drag_data_fw, (const object *) this, point, from);
}

array script_editor::get_open_scripts() const {
	return ___godot_icall_Array(___mb.mb_get_open_scripts, (const object *) this);
}

void script_editor::goto_line(const int64_t line_number) {
	___godot_icall_void_int(___mb.mb_goto_line, (const object *) this, line_number);
}

void script_editor::open_script_create_dialog(const string base_name, const string base_path) {
	___godot_icall_void_String_String(___mb.mb_open_script_create_dialog, (const object *) this, base_name, base_path);
}

void script_editor::reload_scripts() {
	___godot_icall_void(___mb.mb_reload_scripts, (const object *) this);
}

}