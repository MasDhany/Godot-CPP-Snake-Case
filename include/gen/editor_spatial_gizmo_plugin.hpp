#ifndef GODOT_CPP_EDITORSPATIALGIZMOPLUGIN_HPP
#define GODOT_CPP_EDITORSPATIALGIZMOPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class camera;
class editor_spatial_gizmo;
class spatial;
class spatial_material;
class texture;

class editor_spatial_gizmo_plugin : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_add_material;
		godot_method_bind *mb_can_be_hidden;
		godot_method_bind *mb_commit_handle;
		godot_method_bind *mb_create_gizmo;
		godot_method_bind *mb_create_handle_material;
		godot_method_bind *mb_create_icon_material;
		godot_method_bind *mb_create_material;
		godot_method_bind *mb_get_handle_name;
		godot_method_bind *mb_get_handle_value;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_name;
		godot_method_bind *mb_get_priority;
		godot_method_bind *mb_has_gizmo;
		godot_method_bind *mb_is_handle_highlighted;
		godot_method_bind *mb_is_selectable_when_hidden;
		godot_method_bind *mb_redraw;
		godot_method_bind *mb_set_handle;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSpatialGizmoPlugin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSpatialGizmoPlugin"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_material(const string name, const ref<spatial_material> material_);
	bool can_be_hidden();
	void commit_handle(const ref<editor_spatial_gizmo> gizmo, const int64_t index, const variant restore, const bool cancel);
	ref<editor_spatial_gizmo> create_gizmo(const spatial *spatial_);
	void create_handle_material(const string name, const bool billboard = false, const ref<texture> texture_ = nullptr);
	void create_icon_material(const string name, const ref<texture> texture_, const bool on_top = false, const color color_ = color(1,1,1,1));
	void create_material(const string name, const color color_, const bool billboard = false, const bool on_top = false, const bool use_vertex_color = false);
	string get_handle_name(const ref<editor_spatial_gizmo> gizmo, const int64_t index);
	variant get_handle_value(const ref<editor_spatial_gizmo> gizmo, const int64_t index);
	ref<spatial_material> get_material(const string name, const ref<editor_spatial_gizmo> gizmo = nullptr);
	string get_name();
	int64_t get_priority();
	bool has_gizmo(const spatial *spatial_);
	bool is_handle_highlighted(const ref<editor_spatial_gizmo> gizmo, const int64_t index);
	bool is_selectable_when_hidden();
	void redraw(const ref<editor_spatial_gizmo> gizmo);
	void set_handle(const ref<editor_spatial_gizmo> gizmo, const int64_t index, const camera *camera_, const vector2 point);

};

}

#endif