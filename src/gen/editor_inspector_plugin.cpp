#include "editor_inspector_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "control.hpp"
#include "object.hpp"


namespace gd {


editor_inspector_plugin::___method_bindings editor_inspector_plugin::___mb = {};

void *editor_inspector_plugin::_detail_class_tag = nullptr;

void editor_inspector_plugin::___init_method_bindings() {
	___mb.mb_add_custom_control = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_custom_control");
	___mb.mb_add_property_editor = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_property_editor");
	___mb.mb_add_property_editor_for_multiple_properties = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_property_editor_for_multiple_properties");
	___mb.mb_can_handle = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "can_handle");
	___mb.mb_parse_begin = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_begin");
	___mb.mb_parse_category = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_category");
	___mb.mb_parse_end = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_end");
	___mb.mb_parse_property = gd::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_property");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorInspectorPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_inspector_plugin::add_custom_control(const control *control_) {
	___godot_icall_void_Object(___mb.mb_add_custom_control, (const object *) this, control_);
}

void editor_inspector_plugin::add_property_editor(const string property, const control *editor) {
	___godot_icall_void_String_Object(___mb.mb_add_property_editor, (const object *) this, property, editor);
}

void editor_inspector_plugin::add_property_editor_for_multiple_properties(const string label_, const pool_string_array properties, const control *editor) {
	___godot_icall_void_String_PoolStringArray_Object(___mb.mb_add_property_editor_for_multiple_properties, (const object *) this, label_, properties, editor);
}

bool editor_inspector_plugin::can_handle(const object *object_) {
	return ___godot_icall_bool_Object(___mb.mb_can_handle, (const object *) this, object_);
}

void editor_inspector_plugin::parse_begin(const object *object_) {
	___godot_icall_void_Object(___mb.mb_parse_begin, (const object *) this, object_);
}

void editor_inspector_plugin::parse_category(const object *object_, const string category) {
	___godot_icall_void_Object_String(___mb.mb_parse_category, (const object *) this, object_, category);
}

void editor_inspector_plugin::parse_end() {
	___godot_icall_void(___mb.mb_parse_end, (const object *) this);
}

bool editor_inspector_plugin::parse_property(const object *object_, const int64_t type, const string path_, const int64_t hint, const string hint_text, const int64_t usage) {
	return ___godot_icall_bool_Object_int_String_int_String_int(___mb.mb_parse_property, (const object *) this, object_, type, path_, hint, hint_text, usage);
}

}