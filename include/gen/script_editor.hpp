#ifndef GODOT_CPP_SCRIPTEDITOR_HPP
#define GODOT_CPP_SCRIPTEDITOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "panel_container.hpp"
namespace gd {

class control;
class input_event;
class node;
class object;
class reference;
class resource;
class script;

class script_editor : public panel_container {
	struct ___method_bindings {
		godot_method_bind *mb__add_callback;
		godot_method_bind *mb__autosave_scripts;
		godot_method_bind *mb__breaked;
		godot_method_bind *mb__clear_execution;
		godot_method_bind *mb__close_all_tabs;
		godot_method_bind *mb__close_current_tab;
		godot_method_bind *mb__close_discard_current_tab;
		godot_method_bind *mb__close_docs_tab;
		godot_method_bind *mb__close_other_tabs;
		godot_method_bind *mb__copy_script_path;
		godot_method_bind *mb__editor_pause;
		godot_method_bind *mb__editor_play;
		godot_method_bind *mb__editor_settings_changed;
		godot_method_bind *mb__editor_stop;
		godot_method_bind *mb__file_dialog_action;
		godot_method_bind *mb__filter_methods_text_changed;
		godot_method_bind *mb__filter_scripts_text_changed;
		godot_method_bind *mb__get_debug_tooltip;
		godot_method_bind *mb__goto_script_line;
		godot_method_bind *mb__goto_script_line2;
		godot_method_bind *mb__help_class_goto;
		godot_method_bind *mb__help_class_open;
		godot_method_bind *mb__help_overview_selected;
		godot_method_bind *mb__help_search;
		godot_method_bind *mb__history_back;
		godot_method_bind *mb__history_forward;
		godot_method_bind *mb__input;
		godot_method_bind *mb__live_auto_reload_running_scripts;
		godot_method_bind *mb__members_overview_selected;
		godot_method_bind *mb__menu_option;
		godot_method_bind *mb__on_find_in_files_modified_files;
		godot_method_bind *mb__on_find_in_files_requested;
		godot_method_bind *mb__on_find_in_files_result_selected;
		godot_method_bind *mb__on_replace_in_files_requested;
		godot_method_bind *mb__open_recent_script;
		godot_method_bind *mb__prepare_file_menu;
		godot_method_bind *mb__queue_close_tabs;
		godot_method_bind *mb__request_help;
		godot_method_bind *mb__res_saved_callback;
		godot_method_bind *mb__resave_scripts;
		godot_method_bind *mb__save_history;
		godot_method_bind *mb__scene_saved_callback;
		godot_method_bind *mb__script_changed;
		godot_method_bind *mb__script_created;
		godot_method_bind *mb__script_list_gui_input;
		godot_method_bind *mb__script_selected;
		godot_method_bind *mb__script_split_dragged;
		godot_method_bind *mb__set_execution;
		godot_method_bind *mb__show_debugger;
		godot_method_bind *mb__start_find_in_files;
		godot_method_bind *mb__tab_changed;
		godot_method_bind *mb__theme_option;
		godot_method_bind *mb__toggle_members_overview_alpha_sort;
		godot_method_bind *mb__tree_changed;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb__update_autosave_timer;
		godot_method_bind *mb__update_members_overview;
		godot_method_bind *mb__update_recent_scripts;
		godot_method_bind *mb__update_script_connections;
		godot_method_bind *mb__update_script_names;
		godot_method_bind *mb_can_drop_data_fw;
		godot_method_bind *mb_drop_data_fw;
		godot_method_bind *mb_get_current_script;
		godot_method_bind *mb_get_drag_data_fw;
		godot_method_bind *mb_get_open_scripts;
		godot_method_bind *mb_goto_line;
		godot_method_bind *mb_open_script_create_dialog;
		godot_method_bind *mb_reload_scripts;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ScriptEditor"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ScriptEditor"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _add_callback(const object *arg0, const string arg1, const pool_string_array arg2);
	void _autosave_scripts();
	void _breaked(const bool arg0, const bool arg1);
	void _clear_execution(const ref<reference> arg0);
	void _close_all_tabs();
	void _close_current_tab(const bool arg0);
	void _close_discard_current_tab(const string arg0);
	void _close_docs_tab();
	void _close_other_tabs();
	void _copy_script_path();
	void _editor_pause();
	void _editor_play();
	void _editor_settings_changed();
	void _editor_stop();
	void _file_dialog_action(const string arg0);
	void _filter_methods_text_changed(const string arg0);
	void _filter_scripts_text_changed(const string arg0);
	string _get_debug_tooltip(const string arg0, const node *arg1);
	void _goto_script_line(const ref<reference> arg0, const int64_t arg1);
	void _goto_script_line2(const int64_t arg0);
	void _help_class_goto(const string arg0);
	void _help_class_open(const string arg0);
	void _help_overview_selected(const int64_t arg0);
	void _help_search(const string arg0);
	void _history_back();
	void _history_forward();
	void _input(const ref<input_event> arg0);
	void _live_auto_reload_running_scripts();
	void _members_overview_selected(const int64_t arg0);
	void _menu_option(const int64_t arg0);
	void _on_find_in_files_modified_files(const pool_string_array arg0);
	void _on_find_in_files_requested(const string arg0);
	void _on_find_in_files_result_selected(const string arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3);
	void _on_replace_in_files_requested(const string arg0);
	void _open_recent_script(const int64_t arg0);
	void _prepare_file_menu();
	void _queue_close_tabs();
	void _request_help(const string arg0);
	void _res_saved_callback(const ref<resource> arg0);
	void _resave_scripts(const string arg0);
	void _save_history();
	void _scene_saved_callback(const string arg0);
	void _script_changed();
	void _script_created(const ref<script> arg0);
	void _script_list_gui_input(const ref<input_event> arg0);
	void _script_selected(const int64_t arg0);
	void _script_split_dragged(const real_t arg0);
	void _set_execution(const ref<reference> arg0, const int64_t arg1);
	void _show_debugger(const bool arg0);
	void _start_find_in_files(const bool arg0);
	void _tab_changed(const int64_t arg0);
	void _theme_option(const int64_t arg0);
	void _toggle_members_overview_alpha_sort(const bool arg0);
	void _tree_changed();
	void _unhandled_input(const ref<input_event> arg0);
	void _update_autosave_timer();
	void _update_members_overview();
	void _update_recent_scripts();
	void _update_script_connections();
	void _update_script_names();
	bool can_drop_data_fw(const vector2 point, const variant data, const control *from) const;
	void drop_data_fw(const vector2 point, const variant data, const control *from);
	ref<script> get_current_script();
	variant get_drag_data_fw(const vector2 point, const control *from);
	array get_open_scripts() const;
	void goto_line(const int64_t line_number);
	void open_script_create_dialog(const string base_name, const string base_path);
	void reload_scripts();

};

}

#endif