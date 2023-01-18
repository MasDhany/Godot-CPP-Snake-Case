#ifndef GODOT_CPP_EDITORPLUGIN_HPP
#define GODOT_CPP_EDITORPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class camera;
class config_file;
class control;
class editor_export_plugin;
class editor_import_plugin;
class editor_inspector_plugin;
class editor_interface;
class editor_scene_importer;
class editor_spatial_gizmo_plugin;
class input_event;
class object;
class script;
class script_create_dialog;
class texture;
class tool_button;
class undo_redo;

class editor_plugin : public node {
	struct ___method_bindings {
		godot_method_bind *mb_add_autoload_singleton;
		godot_method_bind *mb_add_control_to_bottom_panel;
		godot_method_bind *mb_add_control_to_container;
		godot_method_bind *mb_add_control_to_dock;
		godot_method_bind *mb_add_custom_type;
		godot_method_bind *mb_add_export_plugin;
		godot_method_bind *mb_add_import_plugin;
		godot_method_bind *mb_add_inspector_plugin;
		godot_method_bind *mb_add_scene_import_plugin;
		godot_method_bind *mb_add_spatial_gizmo_plugin;
		godot_method_bind *mb_add_tool_menu_item;
		godot_method_bind *mb_add_tool_submenu_item;
		godot_method_bind *mb_apply_changes;
		godot_method_bind *mb_build;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_disable_plugin;
		godot_method_bind *mb_edit;
		godot_method_bind *mb_enable_plugin;
		godot_method_bind *mb_forward_canvas_draw_over_viewport;
		godot_method_bind *mb_forward_canvas_force_draw_over_viewport;
		godot_method_bind *mb_forward_canvas_gui_input;
		godot_method_bind *mb_forward_spatial_draw_over_viewport;
		godot_method_bind *mb_forward_spatial_force_draw_over_viewport;
		godot_method_bind *mb_forward_spatial_gui_input;
		godot_method_bind *mb_get_breakpoints;
		godot_method_bind *mb_get_editor_interface;
		godot_method_bind *mb_get_plugin_icon;
		godot_method_bind *mb_get_plugin_name;
		godot_method_bind *mb_get_script_create_dialog;
		godot_method_bind *mb_get_state;
		godot_method_bind *mb_get_undo_redo;
		godot_method_bind *mb_get_window_layout;
		godot_method_bind *mb_handles;
		godot_method_bind *mb_has_main_screen;
		godot_method_bind *mb_hide_bottom_panel;
		godot_method_bind *mb_make_bottom_panel_item_visible;
		godot_method_bind *mb_make_visible;
		godot_method_bind *mb_queue_save_layout;
		godot_method_bind *mb_remove_autoload_singleton;
		godot_method_bind *mb_remove_control_from_bottom_panel;
		godot_method_bind *mb_remove_control_from_container;
		godot_method_bind *mb_remove_control_from_docks;
		godot_method_bind *mb_remove_custom_type;
		godot_method_bind *mb_remove_export_plugin;
		godot_method_bind *mb_remove_import_plugin;
		godot_method_bind *mb_remove_inspector_plugin;
		godot_method_bind *mb_remove_scene_import_plugin;
		godot_method_bind *mb_remove_spatial_gizmo_plugin;
		godot_method_bind *mb_remove_tool_menu_item;
		godot_method_bind *mb_save_external_data;
		godot_method_bind *mb_set_force_draw_over_forwarding_enabled;
		godot_method_bind *mb_set_input_event_forwarding_always_enabled;
		godot_method_bind *mb_set_state;
		godot_method_bind *mb_set_window_layout;
		godot_method_bind *mb_update_overlays;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorPlugin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorPlugin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DockSlot {
		DOCK_SLOT_LEFT_UL = 0,
		DOCK_SLOT_LEFT_BL = 1,
		DOCK_SLOT_LEFT_UR = 2,
		DOCK_SLOT_LEFT_BR = 3,
		DOCK_SLOT_RIGHT_UL = 4,
		DOCK_SLOT_RIGHT_BL = 5,
		DOCK_SLOT_RIGHT_UR = 6,
		DOCK_SLOT_RIGHT_BR = 7,
		DOCK_SLOT_MAX = 8,
	};
	enum CustomControlContainer {
		CONTAINER_TOOLBAR = 0,
		CONTAINER_SPATIAL_EDITOR_MENU = 1,
		CONTAINER_SPATIAL_EDITOR_SIDE_LEFT = 2,
		CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT = 3,
		CONTAINER_SPATIAL_EDITOR_BOTTOM = 4,
		CONTAINER_CANVAS_EDITOR_MENU = 5,
		CONTAINER_CANVAS_EDITOR_SIDE_LEFT = 6,
		CONTAINER_CANVAS_EDITOR_SIDE_RIGHT = 7,
		CONTAINER_CANVAS_EDITOR_BOTTOM = 8,
		CONTAINER_PROPERTY_EDITOR_BOTTOM = 9,
		CONTAINER_PROJECT_SETTING_TAB_LEFT = 10,
		CONTAINER_PROJECT_SETTING_TAB_RIGHT = 11,
	};

	// constants

	// methods
	void add_autoload_singleton(const string name, const string path_);
	tool_button *add_control_to_bottom_panel(const control *control_, const string title);
	void add_control_to_container(const int64_t container_, const control *control_);
	void add_control_to_dock(const int64_t slot, const control *control_);
	void add_custom_type(const string type, const string base, const ref<script> script_, const ref<texture> icon);
	void add_export_plugin(const ref<editor_export_plugin> plugin);
	void add_import_plugin(const ref<editor_import_plugin> importer);
	void add_inspector_plugin(const ref<editor_inspector_plugin> plugin);
	void add_scene_import_plugin(const ref<editor_scene_importer> scene_importer);
	void add_spatial_gizmo_plugin(const ref<editor_spatial_gizmo_plugin> plugin);
	void add_tool_menu_item(const string name, const object *handler, const string callback, const variant ud = variant());
	void add_tool_submenu_item(const string name, const object *submenu);
	void apply_changes();
	bool build();
	void clear();
	void disable_plugin();
	void edit(const object *object_);
	void enable_plugin();
	void forward_canvas_draw_over_viewport(const control *overlay);
	void forward_canvas_force_draw_over_viewport(const control *overlay);
	bool forward_canvas_gui_input(const ref<input_event> event);
	void forward_spatial_draw_over_viewport(const control *overlay);
	void forward_spatial_force_draw_over_viewport(const control *overlay);
	bool forward_spatial_gui_input(const camera *camera_, const ref<input_event> event);
	pool_string_array get_breakpoints();
	editor_interface *get_editor_interface();
	ref<texture> get_plugin_icon();
	string get_plugin_name();
	script_create_dialog *get_script_create_dialog();
	dictionary get_state();
	undo_redo *get_undo_redo();
	void get_window_layout(const ref<config_file> layout);
	bool handles(const object *object_);
	bool has_main_screen();
	void hide_bottom_panel();
	void make_bottom_panel_item_visible(const control *item);
	void make_visible(const bool visible);
	void queue_save_layout() const;
	void remove_autoload_singleton(const string name);
	void remove_control_from_bottom_panel(const control *control_);
	void remove_control_from_container(const int64_t container_, const control *control_);
	void remove_control_from_docks(const control *control_);
	void remove_custom_type(const string type);
	void remove_export_plugin(const ref<editor_export_plugin> plugin);
	void remove_import_plugin(const ref<editor_import_plugin> importer);
	void remove_inspector_plugin(const ref<editor_inspector_plugin> plugin);
	void remove_scene_import_plugin(const ref<editor_scene_importer> scene_importer);
	void remove_spatial_gizmo_plugin(const ref<editor_spatial_gizmo_plugin> plugin);
	void remove_tool_menu_item(const string name);
	void save_external_data();
	void set_force_draw_over_forwarding_enabled();
	void set_input_event_forwarding_always_enabled();
	void set_state(const dictionary state);
	void set_window_layout(const ref<config_file> layout);
	int64_t update_overlays() const;

};

}

#endif