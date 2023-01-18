#include "editor_inspector.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"
#include "object.hpp"
#include "resource.hpp"


namespace gd {


editor_inspector::___method_bindings editor_inspector::___mb = {};

void *editor_inspector::_detail_class_tag = nullptr;

void editor_inspector::___init_method_bindings() {
	___mb.mb__edit_request_change = gd::api->godot_method_bind_get_method("EditorInspector", "_edit_request_change");
	___mb.mb__feature_profile_changed = gd::api->godot_method_bind_get_method("EditorInspector", "_feature_profile_changed");
	___mb.mb__filter_changed = gd::api->godot_method_bind_get_method("EditorInspector", "_filter_changed");
	___mb.mb__multiple_properties_changed = gd::api->godot_method_bind_get_method("EditorInspector", "_multiple_properties_changed");
	___mb.mb__node_removed = gd::api->godot_method_bind_get_method("EditorInspector", "_node_removed");
	___mb.mb__object_id_selected = gd::api->godot_method_bind_get_method("EditorInspector", "_object_id_selected");
	___mb.mb__property_changed = gd::api->godot_method_bind_get_method("EditorInspector", "_property_changed");
	___mb.mb__property_changed_update_all = gd::api->godot_method_bind_get_method("EditorInspector", "_property_changed_update_all");
	___mb.mb__property_checked = gd::api->godot_method_bind_get_method("EditorInspector", "_property_checked");
	___mb.mb__property_keyed = gd::api->godot_method_bind_get_method("EditorInspector", "_property_keyed");
	___mb.mb__property_keyed_with_value = gd::api->godot_method_bind_get_method("EditorInspector", "_property_keyed_with_value");
	___mb.mb__property_pinned = gd::api->godot_method_bind_get_method("EditorInspector", "_property_pinned");
	___mb.mb__property_selected = gd::api->godot_method_bind_get_method("EditorInspector", "_property_selected");
	___mb.mb__resource_selected = gd::api->godot_method_bind_get_method("EditorInspector", "_resource_selected");
	___mb.mb__vscroll_changed = gd::api->godot_method_bind_get_method("EditorInspector", "_vscroll_changed");
	___mb.mb_refresh = gd::api->godot_method_bind_get_method("EditorInspector", "refresh");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorInspector");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_inspector::_edit_request_change(const object *arg0, const string arg1) {
	___godot_icall_void_Object_String(___mb.mb__edit_request_change, (const object *) this, arg0, arg1);
}

void editor_inspector::_feature_profile_changed() {
	___godot_icall_void(___mb.mb__feature_profile_changed, (const object *) this);
}

void editor_inspector::_filter_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__filter_changed, (const object *) this, arg0);
}

void editor_inspector::_multiple_properties_changed(const pool_string_array arg0, const array arg1) {
	___godot_icall_void_PoolStringArray_Array(___mb.mb__multiple_properties_changed, (const object *) this, arg0, arg1);
}

void editor_inspector::_node_removed(const node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const object *) this, arg0);
}

void editor_inspector::_object_id_selected(const string arg0, const int64_t arg1) {
	___godot_icall_void_String_int(___mb.mb__object_id_selected, (const object *) this, arg0, arg1);
}

void editor_inspector::_property_changed(const string arg0, const variant arg1, const string arg2, const bool arg3) {
	___godot_icall_void_String_Variant_String_bool(___mb.mb__property_changed, (const object *) this, arg0, arg1, arg2, arg3);
}

void editor_inspector::_property_changed_update_all(const string arg0, const variant arg1, const string arg2, const bool arg3) {
	___godot_icall_void_String_Variant_String_bool(___mb.mb__property_changed_update_all, (const object *) this, arg0, arg1, arg2, arg3);
}

void editor_inspector::_property_checked(const string arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__property_checked, (const object *) this, arg0, arg1);
}

void editor_inspector::_property_keyed(const string arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__property_keyed, (const object *) this, arg0, arg1);
}

void editor_inspector::_property_keyed_with_value(const string arg0, const variant arg1, const bool arg2) {
	___godot_icall_void_String_Variant_bool(___mb.mb__property_keyed_with_value, (const object *) this, arg0, arg1, arg2);
}

void editor_inspector::_property_pinned(const string path_, const bool pinned) {
	___godot_icall_void_String_bool(___mb.mb__property_pinned, (const object *) this, path_, pinned);
}

void editor_inspector::_property_selected(const string arg0, const int64_t arg1) {
	___godot_icall_void_String_int(___mb.mb__property_selected, (const object *) this, arg0, arg1);
}

void editor_inspector::_resource_selected(const string arg0, const ref<resource> arg1) {
	___godot_icall_void_String_Object(___mb.mb__resource_selected, (const object *) this, arg0, arg1.ptr());
}

void editor_inspector::_vscroll_changed(const real_t arg0) {
	___godot_icall_void_float(___mb.mb__vscroll_changed, (const object *) this, arg0);
}

void editor_inspector::refresh() {
	___godot_icall_void(___mb.mb_refresh, (const object *) this);
}

}