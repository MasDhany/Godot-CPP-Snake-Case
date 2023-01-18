#include "editor_spatial_gizmo_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "camera.hpp"
#include "editor_spatial_gizmo.hpp"
#include "spatial.hpp"
#include "spatial_material.hpp"
#include "texture.hpp"


namespace gd {


editor_spatial_gizmo_plugin::___method_bindings editor_spatial_gizmo_plugin::___mb = {};

void *editor_spatial_gizmo_plugin::_detail_class_tag = nullptr;

void editor_spatial_gizmo_plugin::___init_method_bindings() {
	___mb.mb_add_material = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "add_material");
	___mb.mb_can_be_hidden = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "can_be_hidden");
	___mb.mb_commit_handle = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "commit_handle");
	___mb.mb_create_gizmo = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "create_gizmo");
	___mb.mb_create_handle_material = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "create_handle_material");
	___mb.mb_create_icon_material = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "create_icon_material");
	___mb.mb_create_material = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "create_material");
	___mb.mb_get_handle_name = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "get_handle_name");
	___mb.mb_get_handle_value = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "get_handle_value");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "get_material");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "get_name");
	___mb.mb_get_priority = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "get_priority");
	___mb.mb_has_gizmo = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "has_gizmo");
	___mb.mb_is_handle_highlighted = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "is_handle_highlighted");
	___mb.mb_is_selectable_when_hidden = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "is_selectable_when_hidden");
	___mb.mb_redraw = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "redraw");
	___mb.mb_set_handle = gd::api->godot_method_bind_get_method("EditorSpatialGizmoPlugin", "set_handle");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSpatialGizmoPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_spatial_gizmo_plugin::add_material(const string name, const ref<spatial_material> material_) {
	___godot_icall_void_String_Object(___mb.mb_add_material, (const object *) this, name, material_.ptr());
}

bool editor_spatial_gizmo_plugin::can_be_hidden() {
	return ___godot_icall_bool(___mb.mb_can_be_hidden, (const object *) this);
}

void editor_spatial_gizmo_plugin::commit_handle(const ref<editor_spatial_gizmo> gizmo, const int64_t index, const variant restore, const bool cancel) {
	___godot_icall_void_Object_int_Variant_bool(___mb.mb_commit_handle, (const object *) this, gizmo.ptr(), index, restore, cancel);
}

ref<editor_spatial_gizmo> editor_spatial_gizmo_plugin::create_gizmo(const spatial *spatial_) {
	return ref<editor_spatial_gizmo>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_create_gizmo, (const object *) this, spatial_));
}

void editor_spatial_gizmo_plugin::create_handle_material(const string name, const bool billboard, const ref<texture> texture_) {
	___godot_icall_void_String_bool_Object(___mb.mb_create_handle_material, (const object *) this, name, billboard, texture_.ptr());
}

void editor_spatial_gizmo_plugin::create_icon_material(const string name, const ref<texture> texture_, const bool on_top, const color color_) {
	___godot_icall_void_String_Object_bool_Color(___mb.mb_create_icon_material, (const object *) this, name, texture_.ptr(), on_top, color_);
}

void editor_spatial_gizmo_plugin::create_material(const string name, const color color_, const bool billboard, const bool on_top, const bool use_vertex_color) {
	___godot_icall_void_String_Color_bool_bool_bool(___mb.mb_create_material, (const object *) this, name, color_, billboard, on_top, use_vertex_color);
}

string editor_spatial_gizmo_plugin::get_handle_name(const ref<editor_spatial_gizmo> gizmo, const int64_t index) {
	return ___godot_icall_String_Object_int(___mb.mb_get_handle_name, (const object *) this, gizmo.ptr(), index);
}

variant editor_spatial_gizmo_plugin::get_handle_value(const ref<editor_spatial_gizmo> gizmo, const int64_t index) {
	return ___godot_icall_Variant_Object_int(___mb.mb_get_handle_value, (const object *) this, gizmo.ptr(), index);
}

ref<spatial_material> editor_spatial_gizmo_plugin::get_material(const string name, const ref<editor_spatial_gizmo> gizmo) {
	return ref<spatial_material>::__internal_constructor(___godot_icall_Object_String_Object(___mb.mb_get_material, (const object *) this, name, gizmo.ptr()));
}

string editor_spatial_gizmo_plugin::get_name() {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

int64_t editor_spatial_gizmo_plugin::get_priority() {
	return ___godot_icall_int(___mb.mb_get_priority, (const object *) this);
}

bool editor_spatial_gizmo_plugin::has_gizmo(const spatial *spatial_) {
	return ___godot_icall_bool_Object(___mb.mb_has_gizmo, (const object *) this, spatial_);
}

bool editor_spatial_gizmo_plugin::is_handle_highlighted(const ref<editor_spatial_gizmo> gizmo, const int64_t index) {
	return ___godot_icall_bool_Object_int(___mb.mb_is_handle_highlighted, (const object *) this, gizmo.ptr(), index);
}

bool editor_spatial_gizmo_plugin::is_selectable_when_hidden() {
	return ___godot_icall_bool(___mb.mb_is_selectable_when_hidden, (const object *) this);
}

void editor_spatial_gizmo_plugin::redraw(const ref<editor_spatial_gizmo> gizmo) {
	___godot_icall_void_Object(___mb.mb_redraw, (const object *) this, gizmo.ptr());
}

void editor_spatial_gizmo_plugin::set_handle(const ref<editor_spatial_gizmo> gizmo, const int64_t index, const camera *camera_, const vector2 point) {
	___godot_icall_void_Object_int_Object_Vector2(___mb.mb_set_handle, (const object *) this, gizmo.ptr(), index, camera_, point);
}

}