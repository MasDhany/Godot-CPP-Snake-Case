#include "editor_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "camera.hpp"
#include "config_file.hpp"
#include "control.hpp"
#include "editor_export_plugin.hpp"
#include "editor_import_plugin.hpp"
#include "editor_inspector_plugin.hpp"
#include "editor_interface.hpp"
#include "editor_scene_importer.hpp"
#include "editor_spatial_gizmo_plugin.hpp"
#include "input_event.hpp"
#include "object.hpp"
#include "script.hpp"
#include "script_create_dialog.hpp"
#include "texture.hpp"
#include "tool_button.hpp"
#include "undo_redo.hpp"


namespace gd {


editor_plugin::___method_bindings editor_plugin::___mb = {};

void *editor_plugin::_detail_class_tag = nullptr;

void editor_plugin::___init_method_bindings() {
	___mb.mb_add_autoload_singleton = gd::api->godot_method_bind_get_method("EditorPlugin", "add_autoload_singleton");
	___mb.mb_add_control_to_bottom_panel = gd::api->godot_method_bind_get_method("EditorPlugin", "add_control_to_bottom_panel");
	___mb.mb_add_control_to_container = gd::api->godot_method_bind_get_method("EditorPlugin", "add_control_to_container");
	___mb.mb_add_control_to_dock = gd::api->godot_method_bind_get_method("EditorPlugin", "add_control_to_dock");
	___mb.mb_add_custom_type = gd::api->godot_method_bind_get_method("EditorPlugin", "add_custom_type");
	___mb.mb_add_export_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "add_export_plugin");
	___mb.mb_add_import_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "add_import_plugin");
	___mb.mb_add_inspector_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "add_inspector_plugin");
	___mb.mb_add_scene_import_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "add_scene_import_plugin");
	___mb.mb_add_spatial_gizmo_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "add_spatial_gizmo_plugin");
	___mb.mb_add_tool_menu_item = gd::api->godot_method_bind_get_method("EditorPlugin", "add_tool_menu_item");
	___mb.mb_add_tool_submenu_item = gd::api->godot_method_bind_get_method("EditorPlugin", "add_tool_submenu_item");
	___mb.mb_apply_changes = gd::api->godot_method_bind_get_method("EditorPlugin", "apply_changes");
	___mb.mb_build = gd::api->godot_method_bind_get_method("EditorPlugin", "build");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("EditorPlugin", "clear");
	___mb.mb_disable_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "disable_plugin");
	___mb.mb_edit = gd::api->godot_method_bind_get_method("EditorPlugin", "edit");
	___mb.mb_enable_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "enable_plugin");
	___mb.mb_forward_canvas_draw_over_viewport = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_canvas_draw_over_viewport");
	___mb.mb_forward_canvas_force_draw_over_viewport = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_canvas_force_draw_over_viewport");
	___mb.mb_forward_canvas_gui_input = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_canvas_gui_input");
	___mb.mb_forward_spatial_draw_over_viewport = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_spatial_draw_over_viewport");
	___mb.mb_forward_spatial_force_draw_over_viewport = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_spatial_force_draw_over_viewport");
	___mb.mb_forward_spatial_gui_input = gd::api->godot_method_bind_get_method("EditorPlugin", "forward_spatial_gui_input");
	___mb.mb_get_breakpoints = gd::api->godot_method_bind_get_method("EditorPlugin", "get_breakpoints");
	___mb.mb_get_editor_interface = gd::api->godot_method_bind_get_method("EditorPlugin", "get_editor_interface");
	___mb.mb_get_plugin_icon = gd::api->godot_method_bind_get_method("EditorPlugin", "get_plugin_icon");
	___mb.mb_get_plugin_name = gd::api->godot_method_bind_get_method("EditorPlugin", "get_plugin_name");
	___mb.mb_get_script_create_dialog = gd::api->godot_method_bind_get_method("EditorPlugin", "get_script_create_dialog");
	___mb.mb_get_state = gd::api->godot_method_bind_get_method("EditorPlugin", "get_state");
	___mb.mb_get_undo_redo = gd::api->godot_method_bind_get_method("EditorPlugin", "get_undo_redo");
	___mb.mb_get_window_layout = gd::api->godot_method_bind_get_method("EditorPlugin", "get_window_layout");
	___mb.mb_handles = gd::api->godot_method_bind_get_method("EditorPlugin", "handles");
	___mb.mb_has_main_screen = gd::api->godot_method_bind_get_method("EditorPlugin", "has_main_screen");
	___mb.mb_hide_bottom_panel = gd::api->godot_method_bind_get_method("EditorPlugin", "hide_bottom_panel");
	___mb.mb_make_bottom_panel_item_visible = gd::api->godot_method_bind_get_method("EditorPlugin", "make_bottom_panel_item_visible");
	___mb.mb_make_visible = gd::api->godot_method_bind_get_method("EditorPlugin", "make_visible");
	___mb.mb_queue_save_layout = gd::api->godot_method_bind_get_method("EditorPlugin", "queue_save_layout");
	___mb.mb_remove_autoload_singleton = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_autoload_singleton");
	___mb.mb_remove_control_from_bottom_panel = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_control_from_bottom_panel");
	___mb.mb_remove_control_from_container = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_control_from_container");
	___mb.mb_remove_control_from_docks = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_control_from_docks");
	___mb.mb_remove_custom_type = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_custom_type");
	___mb.mb_remove_export_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_export_plugin");
	___mb.mb_remove_import_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_import_plugin");
	___mb.mb_remove_inspector_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_inspector_plugin");
	___mb.mb_remove_scene_import_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_scene_import_plugin");
	___mb.mb_remove_spatial_gizmo_plugin = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_spatial_gizmo_plugin");
	___mb.mb_remove_tool_menu_item = gd::api->godot_method_bind_get_method("EditorPlugin", "remove_tool_menu_item");
	___mb.mb_save_external_data = gd::api->godot_method_bind_get_method("EditorPlugin", "save_external_data");
	___mb.mb_set_force_draw_over_forwarding_enabled = gd::api->godot_method_bind_get_method("EditorPlugin", "set_force_draw_over_forwarding_enabled");
	___mb.mb_set_input_event_forwarding_always_enabled = gd::api->godot_method_bind_get_method("EditorPlugin", "set_input_event_forwarding_always_enabled");
	___mb.mb_set_state = gd::api->godot_method_bind_get_method("EditorPlugin", "set_state");
	___mb.mb_set_window_layout = gd::api->godot_method_bind_get_method("EditorPlugin", "set_window_layout");
	___mb.mb_update_overlays = gd::api->godot_method_bind_get_method("EditorPlugin", "update_overlays");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_plugin::add_autoload_singleton(const string name, const string path_) {
	___godot_icall_void_String_String(___mb.mb_add_autoload_singleton, (const object *) this, name, path_);
}

tool_button *editor_plugin::add_control_to_bottom_panel(const control *control_, const string title) {
	return (tool_button *) ___godot_icall_Object_Object_String(___mb.mb_add_control_to_bottom_panel, (const object *) this, control_, title);
}

void editor_plugin::add_control_to_container(const int64_t container_, const control *control_) {
	___godot_icall_void_int_Object(___mb.mb_add_control_to_container, (const object *) this, container_, control_);
}

void editor_plugin::add_control_to_dock(const int64_t slot, const control *control_) {
	___godot_icall_void_int_Object(___mb.mb_add_control_to_dock, (const object *) this, slot, control_);
}

void editor_plugin::add_custom_type(const string type, const string base, const ref<script> script_, const ref<texture> icon) {
	___godot_icall_void_String_String_Object_Object(___mb.mb_add_custom_type, (const object *) this, type, base, script_.ptr(), icon.ptr());
}

void editor_plugin::add_export_plugin(const ref<editor_export_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_add_export_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::add_import_plugin(const ref<editor_import_plugin> importer) {
	___godot_icall_void_Object(___mb.mb_add_import_plugin, (const object *) this, importer.ptr());
}

void editor_plugin::add_inspector_plugin(const ref<editor_inspector_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_add_inspector_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::add_scene_import_plugin(const ref<editor_scene_importer> scene_importer) {
	___godot_icall_void_Object(___mb.mb_add_scene_import_plugin, (const object *) this, scene_importer.ptr());
}

void editor_plugin::add_spatial_gizmo_plugin(const ref<editor_spatial_gizmo_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_add_spatial_gizmo_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::add_tool_menu_item(const string name, const object *handler, const string callback, const variant ud) {
	___godot_icall_void_String_Object_String_Variant(___mb.mb_add_tool_menu_item, (const object *) this, name, handler, callback, ud);
}

void editor_plugin::add_tool_submenu_item(const string name, const object *submenu) {
	___godot_icall_void_String_Object(___mb.mb_add_tool_submenu_item, (const object *) this, name, submenu);
}

void editor_plugin::apply_changes() {
	___godot_icall_void(___mb.mb_apply_changes, (const object *) this);
}

bool editor_plugin::build() {
	return ___godot_icall_bool(___mb.mb_build, (const object *) this);
}

void editor_plugin::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void editor_plugin::disable_plugin() {
	___godot_icall_void(___mb.mb_disable_plugin, (const object *) this);
}

void editor_plugin::edit(const object *object_) {
	___godot_icall_void_Object(___mb.mb_edit, (const object *) this, object_);
}

void editor_plugin::enable_plugin() {
	___godot_icall_void(___mb.mb_enable_plugin, (const object *) this);
}

void editor_plugin::forward_canvas_draw_over_viewport(const control *overlay) {
	___godot_icall_void_Object(___mb.mb_forward_canvas_draw_over_viewport, (const object *) this, overlay);
}

void editor_plugin::forward_canvas_force_draw_over_viewport(const control *overlay) {
	___godot_icall_void_Object(___mb.mb_forward_canvas_force_draw_over_viewport, (const object *) this, overlay);
}

bool editor_plugin::forward_canvas_gui_input(const ref<input_event> event) {
	return ___godot_icall_bool_Object(___mb.mb_forward_canvas_gui_input, (const object *) this, event.ptr());
}

void editor_plugin::forward_spatial_draw_over_viewport(const control *overlay) {
	___godot_icall_void_Object(___mb.mb_forward_spatial_draw_over_viewport, (const object *) this, overlay);
}

void editor_plugin::forward_spatial_force_draw_over_viewport(const control *overlay) {
	___godot_icall_void_Object(___mb.mb_forward_spatial_force_draw_over_viewport, (const object *) this, overlay);
}

bool editor_plugin::forward_spatial_gui_input(const camera *camera_, const ref<input_event> event) {
	return ___godot_icall_bool_Object_Object(___mb.mb_forward_spatial_gui_input, (const object *) this, camera_, event.ptr());
}

pool_string_array editor_plugin::get_breakpoints() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_breakpoints, (const object *) this);
}

editor_interface *editor_plugin::get_editor_interface() {
	return (editor_interface *) ___godot_icall_Object(___mb.mb_get_editor_interface, (const object *) this);
}

ref<texture> editor_plugin::get_plugin_icon() {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_plugin_icon, (const object *) this));
}

string editor_plugin::get_plugin_name() {
	return ___godot_icall_String(___mb.mb_get_plugin_name, (const object *) this);
}

script_create_dialog *editor_plugin::get_script_create_dialog() {
	return (script_create_dialog *) ___godot_icall_Object(___mb.mb_get_script_create_dialog, (const object *) this);
}

dictionary editor_plugin::get_state() {
	return ___godot_icall_Dictionary(___mb.mb_get_state, (const object *) this);
}

undo_redo *editor_plugin::get_undo_redo() {
	return (undo_redo *) ___godot_icall_Object(___mb.mb_get_undo_redo, (const object *) this);
}

void editor_plugin::get_window_layout(const ref<config_file> layout) {
	___godot_icall_void_Object(___mb.mb_get_window_layout, (const object *) this, layout.ptr());
}

bool editor_plugin::handles(const object *object_) {
	return ___godot_icall_bool_Object(___mb.mb_handles, (const object *) this, object_);
}

bool editor_plugin::has_main_screen() {
	return ___godot_icall_bool(___mb.mb_has_main_screen, (const object *) this);
}

void editor_plugin::hide_bottom_panel() {
	___godot_icall_void(___mb.mb_hide_bottom_panel, (const object *) this);
}

void editor_plugin::make_bottom_panel_item_visible(const control *item) {
	___godot_icall_void_Object(___mb.mb_make_bottom_panel_item_visible, (const object *) this, item);
}

void editor_plugin::make_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_make_visible, (const object *) this, visible);
}

void editor_plugin::queue_save_layout() const {
	___godot_icall_void(___mb.mb_queue_save_layout, (const object *) this);
}

void editor_plugin::remove_autoload_singleton(const string name) {
	___godot_icall_void_String(___mb.mb_remove_autoload_singleton, (const object *) this, name);
}

void editor_plugin::remove_control_from_bottom_panel(const control *control_) {
	___godot_icall_void_Object(___mb.mb_remove_control_from_bottom_panel, (const object *) this, control_);
}

void editor_plugin::remove_control_from_container(const int64_t container_, const control *control_) {
	___godot_icall_void_int_Object(___mb.mb_remove_control_from_container, (const object *) this, container_, control_);
}

void editor_plugin::remove_control_from_docks(const control *control_) {
	___godot_icall_void_Object(___mb.mb_remove_control_from_docks, (const object *) this, control_);
}

void editor_plugin::remove_custom_type(const string type) {
	___godot_icall_void_String(___mb.mb_remove_custom_type, (const object *) this, type);
}

void editor_plugin::remove_export_plugin(const ref<editor_export_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_remove_export_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::remove_import_plugin(const ref<editor_import_plugin> importer) {
	___godot_icall_void_Object(___mb.mb_remove_import_plugin, (const object *) this, importer.ptr());
}

void editor_plugin::remove_inspector_plugin(const ref<editor_inspector_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_remove_inspector_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::remove_scene_import_plugin(const ref<editor_scene_importer> scene_importer) {
	___godot_icall_void_Object(___mb.mb_remove_scene_import_plugin, (const object *) this, scene_importer.ptr());
}

void editor_plugin::remove_spatial_gizmo_plugin(const ref<editor_spatial_gizmo_plugin> plugin) {
	___godot_icall_void_Object(___mb.mb_remove_spatial_gizmo_plugin, (const object *) this, plugin.ptr());
}

void editor_plugin::remove_tool_menu_item(const string name) {
	___godot_icall_void_String(___mb.mb_remove_tool_menu_item, (const object *) this, name);
}

void editor_plugin::save_external_data() {
	___godot_icall_void(___mb.mb_save_external_data, (const object *) this);
}

void editor_plugin::set_force_draw_over_forwarding_enabled() {
	___godot_icall_void(___mb.mb_set_force_draw_over_forwarding_enabled, (const object *) this);
}

void editor_plugin::set_input_event_forwarding_always_enabled() {
	___godot_icall_void(___mb.mb_set_input_event_forwarding_always_enabled, (const object *) this);
}

void editor_plugin::set_state(const dictionary state) {
	___godot_icall_void_Dictionary(___mb.mb_set_state, (const object *) this, state);
}

void editor_plugin::set_window_layout(const ref<config_file> layout) {
	___godot_icall_void_Object(___mb.mb_set_window_layout, (const object *) this, layout.ptr());
}

int64_t editor_plugin::update_overlays() const {
	return ___godot_icall_int(___mb.mb_update_overlays, (const object *) this);
}

}