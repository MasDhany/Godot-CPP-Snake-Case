#include "editor_export_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_export_plugin::___method_bindings editor_export_plugin::___mb = {};

void *editor_export_plugin::_detail_class_tag = nullptr;

void editor_export_plugin::___init_method_bindings() {
	___mb.mb__export_begin = gd::api->godot_method_bind_get_method("EditorExportPlugin", "_export_begin");
	___mb.mb__export_end = gd::api->godot_method_bind_get_method("EditorExportPlugin", "_export_end");
	___mb.mb__export_file = gd::api->godot_method_bind_get_method("EditorExportPlugin", "_export_file");
	___mb.mb_add_file = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_file");
	___mb.mb_add_ios_bundle_file = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_bundle_file");
	___mb.mb_add_ios_cpp_code = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_cpp_code");
	___mb.mb_add_ios_embedded_framework = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_embedded_framework");
	___mb.mb_add_ios_framework = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_framework");
	___mb.mb_add_ios_linker_flags = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_linker_flags");
	___mb.mb_add_ios_plist_content = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_plist_content");
	___mb.mb_add_ios_project_static_lib = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_ios_project_static_lib");
	___mb.mb_add_osx_plugin_file = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_osx_plugin_file");
	___mb.mb_add_shared_object = gd::api->godot_method_bind_get_method("EditorExportPlugin", "add_shared_object");
	___mb.mb_skip = gd::api->godot_method_bind_get_method("EditorExportPlugin", "skip");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorExportPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_export_plugin::_export_begin(const pool_string_array features, const bool is_debug, const string path_, const int64_t flags) {
	___godot_icall_void_PoolStringArray_bool_String_int(___mb.mb__export_begin, (const object *) this, features, is_debug, path_, flags);
}

void editor_export_plugin::_export_end() {
	___godot_icall_void(___mb.mb__export_end, (const object *) this);
}

void editor_export_plugin::_export_file(const string path_, const string type, const pool_string_array features) {
	___godot_icall_void_String_String_PoolStringArray(___mb.mb__export_file, (const object *) this, path_, type, features);
}

void editor_export_plugin::add_file(const string path_, const pool_byte_array file_, const bool remap) {
	___godot_icall_void_String_PoolByteArray_bool(___mb.mb_add_file, (const object *) this, path_, file_, remap);
}

void editor_export_plugin::add_ios_bundle_file(const string path_) {
	___godot_icall_void_String(___mb.mb_add_ios_bundle_file, (const object *) this, path_);
}

void editor_export_plugin::add_ios_cpp_code(const string code) {
	___godot_icall_void_String(___mb.mb_add_ios_cpp_code, (const object *) this, code);
}

void editor_export_plugin::add_ios_embedded_framework(const string path_) {
	___godot_icall_void_String(___mb.mb_add_ios_embedded_framework, (const object *) this, path_);
}

void editor_export_plugin::add_ios_framework(const string path_) {
	___godot_icall_void_String(___mb.mb_add_ios_framework, (const object *) this, path_);
}

void editor_export_plugin::add_ios_linker_flags(const string flags) {
	___godot_icall_void_String(___mb.mb_add_ios_linker_flags, (const object *) this, flags);
}

void editor_export_plugin::add_ios_plist_content(const string plist_content) {
	___godot_icall_void_String(___mb.mb_add_ios_plist_content, (const object *) this, plist_content);
}

void editor_export_plugin::add_ios_project_static_lib(const string path_) {
	___godot_icall_void_String(___mb.mb_add_ios_project_static_lib, (const object *) this, path_);
}

void editor_export_plugin::add_osx_plugin_file(const string path_) {
	___godot_icall_void_String(___mb.mb_add_osx_plugin_file, (const object *) this, path_);
}

void editor_export_plugin::add_shared_object(const string path_, const pool_string_array tags) {
	___godot_icall_void_String_PoolStringArray(___mb.mb_add_shared_object, (const object *) this, path_, tags);
}

void editor_export_plugin::skip() {
	___godot_icall_void(___mb.mb_skip, (const object *) this);
}

}