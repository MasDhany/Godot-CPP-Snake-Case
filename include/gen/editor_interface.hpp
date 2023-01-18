#ifndef GODOT_CPP_EDITORINTERFACE_HPP
#define GODOT_CPP_EDITORINTERFACE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class control;
class editor_file_system;
class editor_inspector;
class editor_resource_preview;
class editor_selection;
class editor_settings;
class file_system_dock;
class node;
class object;
class resource;
class script;
class script_editor;

class editor_interface : public node {
	struct ___method_bindings {
		godot_method_bind *mb_edit_node;
		godot_method_bind *mb_edit_resource;
		godot_method_bind *mb_edit_script;
		godot_method_bind *mb_get_base_control;
		godot_method_bind *mb_get_current_path;
		godot_method_bind *mb_get_edited_scene_root;
		godot_method_bind *mb_get_editor_scale;
		godot_method_bind *mb_get_editor_settings;
		godot_method_bind *mb_get_editor_viewport;
		godot_method_bind *mb_get_file_system_dock;
		godot_method_bind *mb_get_inspector;
		godot_method_bind *mb_get_open_scenes;
		godot_method_bind *mb_get_playing_scene;
		godot_method_bind *mb_get_resource_filesystem;
		godot_method_bind *mb_get_resource_previewer;
		godot_method_bind *mb_get_script_editor;
		godot_method_bind *mb_get_selected_path;
		godot_method_bind *mb_get_selection;
		godot_method_bind *mb_inspect_object;
		godot_method_bind *mb_is_distraction_free_mode_enabled;
		godot_method_bind *mb_is_playing_scene;
		godot_method_bind *mb_is_plugin_enabled;
		godot_method_bind *mb_make_mesh_previews;
		godot_method_bind *mb_open_scene_from_path;
		godot_method_bind *mb_play_current_scene;
		godot_method_bind *mb_play_custom_scene;
		godot_method_bind *mb_play_main_scene;
		godot_method_bind *mb_reload_scene_from_path;
		godot_method_bind *mb_save_scene;
		godot_method_bind *mb_save_scene_as;
		godot_method_bind *mb_select_file;
		godot_method_bind *mb_set_distraction_free_mode;
		godot_method_bind *mb_set_main_screen_editor;
		godot_method_bind *mb_set_plugin_enabled;
		godot_method_bind *mb_stop_playing_scene;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorInterface"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorInterface"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void edit_node(const node *node_);
	void edit_resource(const ref<resource> resource_);
	void edit_script(const ref<script> script_, const int64_t line = -1, const int64_t column = 0, const bool grab_focus = true);
	control *get_base_control();
	string get_current_path() const;
	node *get_edited_scene_root();
	real_t get_editor_scale() const;
	ref<editor_settings> get_editor_settings();
	control *get_editor_viewport();
	file_system_dock *get_file_system_dock();
	editor_inspector *get_inspector() const;
	array get_open_scenes() const;
	string get_playing_scene() const;
	editor_file_system *get_resource_filesystem();
	editor_resource_preview *get_resource_previewer();
	script_editor *get_script_editor();
	string get_selected_path() const;
	editor_selection *get_selection();
	void inspect_object(const object *object_, const string for_property = "", const bool inspector_only = false);
	bool is_distraction_free_mode_enabled() const;
	bool is_playing_scene() const;
	bool is_plugin_enabled(const string plugin) const;
	array make_mesh_previews(const array meshes, const int64_t preview_size);
	void open_scene_from_path(const string scene_filepath);
	void play_current_scene();
	void play_custom_scene(const string scene_filepath);
	void play_main_scene();
	void reload_scene_from_path(const string scene_filepath);
	error save_scene();
	void save_scene_as(const string path_, const bool with_preview = true);
	void select_file(const string file_);
	void set_distraction_free_mode(const bool enter);
	void set_main_screen_editor(const string name);
	void set_plugin_enabled(const string plugin, const bool enabled);
	void stop_playing_scene();

};

}

#endif