#include "editor_interface.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "editor_file_system.hpp"
#include "editor_inspector.hpp"
#include "editor_resource_preview.hpp"
#include "editor_selection.hpp"
#include "editor_settings.hpp"
#include "file_system_dock.hpp"
#include "node.hpp"
#include "object.hpp"
#include "resource.hpp"
#include "script.hpp"
#include "script_editor.hpp"


namespace gd {


editor_interface::___method_bindings editor_interface::___mb = {};

void *editor_interface::_detail_class_tag = nullptr;

void editor_interface::___init_method_bindings() {
	___mb.mb_edit_node = gd::api->godot_method_bind_get_method("EditorInterface", "edit_node");
	___mb.mb_edit_resource = gd::api->godot_method_bind_get_method("EditorInterface", "edit_resource");
	___mb.mb_edit_script = gd::api->godot_method_bind_get_method("EditorInterface", "edit_script");
	___mb.mb_get_base_control = gd::api->godot_method_bind_get_method("EditorInterface", "get_base_control");
	___mb.mb_get_current_path = gd::api->godot_method_bind_get_method("EditorInterface", "get_current_path");
	___mb.mb_get_edited_scene_root = gd::api->godot_method_bind_get_method("EditorInterface", "get_edited_scene_root");
	___mb.mb_get_editor_scale = gd::api->godot_method_bind_get_method("EditorInterface", "get_editor_scale");
	___mb.mb_get_editor_settings = gd::api->godot_method_bind_get_method("EditorInterface", "get_editor_settings");
	___mb.mb_get_editor_viewport = gd::api->godot_method_bind_get_method("EditorInterface", "get_editor_viewport");
	___mb.mb_get_file_system_dock = gd::api->godot_method_bind_get_method("EditorInterface", "get_file_system_dock");
	___mb.mb_get_inspector = gd::api->godot_method_bind_get_method("EditorInterface", "get_inspector");
	___mb.mb_get_open_scenes = gd::api->godot_method_bind_get_method("EditorInterface", "get_open_scenes");
	___mb.mb_get_playing_scene = gd::api->godot_method_bind_get_method("EditorInterface", "get_playing_scene");
	___mb.mb_get_resource_filesystem = gd::api->godot_method_bind_get_method("EditorInterface", "get_resource_filesystem");
	___mb.mb_get_resource_previewer = gd::api->godot_method_bind_get_method("EditorInterface", "get_resource_previewer");
	___mb.mb_get_script_editor = gd::api->godot_method_bind_get_method("EditorInterface", "get_script_editor");
	___mb.mb_get_selected_path = gd::api->godot_method_bind_get_method("EditorInterface", "get_selected_path");
	___mb.mb_get_selection = gd::api->godot_method_bind_get_method("EditorInterface", "get_selection");
	___mb.mb_inspect_object = gd::api->godot_method_bind_get_method("EditorInterface", "inspect_object");
	___mb.mb_is_distraction_free_mode_enabled = gd::api->godot_method_bind_get_method("EditorInterface", "is_distraction_free_mode_enabled");
	___mb.mb_is_playing_scene = gd::api->godot_method_bind_get_method("EditorInterface", "is_playing_scene");
	___mb.mb_is_plugin_enabled = gd::api->godot_method_bind_get_method("EditorInterface", "is_plugin_enabled");
	___mb.mb_make_mesh_previews = gd::api->godot_method_bind_get_method("EditorInterface", "make_mesh_previews");
	___mb.mb_open_scene_from_path = gd::api->godot_method_bind_get_method("EditorInterface", "open_scene_from_path");
	___mb.mb_play_current_scene = gd::api->godot_method_bind_get_method("EditorInterface", "play_current_scene");
	___mb.mb_play_custom_scene = gd::api->godot_method_bind_get_method("EditorInterface", "play_custom_scene");
	___mb.mb_play_main_scene = gd::api->godot_method_bind_get_method("EditorInterface", "play_main_scene");
	___mb.mb_reload_scene_from_path = gd::api->godot_method_bind_get_method("EditorInterface", "reload_scene_from_path");
	___mb.mb_save_scene = gd::api->godot_method_bind_get_method("EditorInterface", "save_scene");
	___mb.mb_save_scene_as = gd::api->godot_method_bind_get_method("EditorInterface", "save_scene_as");
	___mb.mb_select_file = gd::api->godot_method_bind_get_method("EditorInterface", "select_file");
	___mb.mb_set_distraction_free_mode = gd::api->godot_method_bind_get_method("EditorInterface", "set_distraction_free_mode");
	___mb.mb_set_main_screen_editor = gd::api->godot_method_bind_get_method("EditorInterface", "set_main_screen_editor");
	___mb.mb_set_plugin_enabled = gd::api->godot_method_bind_get_method("EditorInterface", "set_plugin_enabled");
	___mb.mb_stop_playing_scene = gd::api->godot_method_bind_get_method("EditorInterface", "stop_playing_scene");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorInterface");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_interface::edit_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_edit_node, (const object *) this, node_);
}

void editor_interface::edit_resource(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_edit_resource, (const object *) this, resource_.ptr());
}

void editor_interface::edit_script(const ref<script> script_, const int64_t line, const int64_t column, const bool grab_focus) {
	___godot_icall_void_Object_int_int_bool(___mb.mb_edit_script, (const object *) this, script_.ptr(), line, column, grab_focus);
}

control *editor_interface::get_base_control() {
	return (control *) ___godot_icall_Object(___mb.mb_get_base_control, (const object *) this);
}

string editor_interface::get_current_path() const {
	return ___godot_icall_String(___mb.mb_get_current_path, (const object *) this);
}

node *editor_interface::get_edited_scene_root() {
	return (node *) ___godot_icall_Object(___mb.mb_get_edited_scene_root, (const object *) this);
}

real_t editor_interface::get_editor_scale() const {
	return ___godot_icall_float(___mb.mb_get_editor_scale, (const object *) this);
}

ref<editor_settings> editor_interface::get_editor_settings() {
	return ref<editor_settings>::__internal_constructor(___godot_icall_Object(___mb.mb_get_editor_settings, (const object *) this));
}

control *editor_interface::get_editor_viewport() {
	return (control *) ___godot_icall_Object(___mb.mb_get_editor_viewport, (const object *) this);
}

file_system_dock *editor_interface::get_file_system_dock() {
	return (file_system_dock *) ___godot_icall_Object(___mb.mb_get_file_system_dock, (const object *) this);
}

editor_inspector *editor_interface::get_inspector() const {
	return (editor_inspector *) ___godot_icall_Object(___mb.mb_get_inspector, (const object *) this);
}

array editor_interface::get_open_scenes() const {
	return ___godot_icall_Array(___mb.mb_get_open_scenes, (const object *) this);
}

string editor_interface::get_playing_scene() const {
	return ___godot_icall_String(___mb.mb_get_playing_scene, (const object *) this);
}

editor_file_system *editor_interface::get_resource_filesystem() {
	return (editor_file_system *) ___godot_icall_Object(___mb.mb_get_resource_filesystem, (const object *) this);
}

editor_resource_preview *editor_interface::get_resource_previewer() {
	return (editor_resource_preview *) ___godot_icall_Object(___mb.mb_get_resource_previewer, (const object *) this);
}

script_editor *editor_interface::get_script_editor() {
	return (script_editor *) ___godot_icall_Object(___mb.mb_get_script_editor, (const object *) this);
}

string editor_interface::get_selected_path() const {
	return ___godot_icall_String(___mb.mb_get_selected_path, (const object *) this);
}

editor_selection *editor_interface::get_selection() {
	return (editor_selection *) ___godot_icall_Object(___mb.mb_get_selection, (const object *) this);
}

void editor_interface::inspect_object(const object *object_, const string for_property, const bool inspector_only) {
	___godot_icall_void_Object_String_bool(___mb.mb_inspect_object, (const object *) this, object_, for_property, inspector_only);
}

bool editor_interface::is_distraction_free_mode_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_distraction_free_mode_enabled, (const object *) this);
}

bool editor_interface::is_playing_scene() const {
	return ___godot_icall_bool(___mb.mb_is_playing_scene, (const object *) this);
}

bool editor_interface::is_plugin_enabled(const string plugin) const {
	return ___godot_icall_bool_String(___mb.mb_is_plugin_enabled, (const object *) this, plugin);
}

array editor_interface::make_mesh_previews(const array meshes, const int64_t preview_size) {
	return ___godot_icall_Array_Array_int(___mb.mb_make_mesh_previews, (const object *) this, meshes, preview_size);
}

void editor_interface::open_scene_from_path(const string scene_filepath) {
	___godot_icall_void_String(___mb.mb_open_scene_from_path, (const object *) this, scene_filepath);
}

void editor_interface::play_current_scene() {
	___godot_icall_void(___mb.mb_play_current_scene, (const object *) this);
}

void editor_interface::play_custom_scene(const string scene_filepath) {
	___godot_icall_void_String(___mb.mb_play_custom_scene, (const object *) this, scene_filepath);
}

void editor_interface::play_main_scene() {
	___godot_icall_void(___mb.mb_play_main_scene, (const object *) this);
}

void editor_interface::reload_scene_from_path(const string scene_filepath) {
	___godot_icall_void_String(___mb.mb_reload_scene_from_path, (const object *) this, scene_filepath);
}

error editor_interface::save_scene() {
	return (error) ___godot_icall_int(___mb.mb_save_scene, (const object *) this);
}

void editor_interface::save_scene_as(const string path_, const bool with_preview) {
	___godot_icall_void_String_bool(___mb.mb_save_scene_as, (const object *) this, path_, with_preview);
}

void editor_interface::select_file(const string file_) {
	___godot_icall_void_String(___mb.mb_select_file, (const object *) this, file_);
}

void editor_interface::set_distraction_free_mode(const bool enter) {
	___godot_icall_void_bool(___mb.mb_set_distraction_free_mode, (const object *) this, enter);
}

void editor_interface::set_main_screen_editor(const string name) {
	___godot_icall_void_String(___mb.mb_set_main_screen_editor, (const object *) this, name);
}

void editor_interface::set_plugin_enabled(const string plugin, const bool enabled) {
	___godot_icall_void_String_bool(___mb.mb_set_plugin_enabled, (const object *) this, plugin, enabled);
}

void editor_interface::stop_playing_scene() {
	___godot_icall_void(___mb.mb_stop_playing_scene, (const object *) this);
}

}