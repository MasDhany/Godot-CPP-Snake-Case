#include "editor_import_plugin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_import_plugin::___method_bindings editor_import_plugin::___mb = {};

void *editor_import_plugin::_detail_class_tag = nullptr;

void editor_import_plugin::___init_method_bindings() {
	___mb.mb_get_import_options = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_import_options");
	___mb.mb_get_import_order = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_import_order");
	___mb.mb_get_importer_name = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_importer_name");
	___mb.mb_get_option_visibility = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_option_visibility");
	___mb.mb_get_preset_count = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_preset_count");
	___mb.mb_get_preset_name = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_preset_name");
	___mb.mb_get_priority = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_priority");
	___mb.mb_get_recognized_extensions = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_recognized_extensions");
	___mb.mb_get_resource_type = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_resource_type");
	___mb.mb_get_save_extension = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_save_extension");
	___mb.mb_get_visible_name = gd::api->godot_method_bind_get_method("EditorImportPlugin", "get_visible_name");
	___mb.mb_import = gd::api->godot_method_bind_get_method("EditorImportPlugin", "import");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorImportPlugin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

array editor_import_plugin::get_import_options(const int64_t preset) {
	return ___godot_icall_Array_int(___mb.mb_get_import_options, (const object *) this, preset);
}

int64_t editor_import_plugin::get_import_order() {
	return ___godot_icall_int(___mb.mb_get_import_order, (const object *) this);
}

string editor_import_plugin::get_importer_name() {
	return ___godot_icall_String(___mb.mb_get_importer_name, (const object *) this);
}

bool editor_import_plugin::get_option_visibility(const string option, const dictionary options) {
	return ___godot_icall_bool_String_Dictionary(___mb.mb_get_option_visibility, (const object *) this, option, options);
}

int64_t editor_import_plugin::get_preset_count() {
	return ___godot_icall_int(___mb.mb_get_preset_count, (const object *) this);
}

string editor_import_plugin::get_preset_name(const int64_t preset) {
	return ___godot_icall_String_int(___mb.mb_get_preset_name, (const object *) this, preset);
}

real_t editor_import_plugin::get_priority() {
	return ___godot_icall_float(___mb.mb_get_priority, (const object *) this);
}

array editor_import_plugin::get_recognized_extensions() {
	return ___godot_icall_Array(___mb.mb_get_recognized_extensions, (const object *) this);
}

string editor_import_plugin::get_resource_type() {
	return ___godot_icall_String(___mb.mb_get_resource_type, (const object *) this);
}

string editor_import_plugin::get_save_extension() {
	return ___godot_icall_String(___mb.mb_get_save_extension, (const object *) this);
}

string editor_import_plugin::get_visible_name() {
	return ___godot_icall_String(___mb.mb_get_visible_name, (const object *) this);
}

int64_t editor_import_plugin::import(const string source_file, const string save_path, const dictionary options, const array platform_variants, const array gen_files) {
	return ___godot_icall_int_String_String_Dictionary_Array_Array(___mb.mb_import, (const object *) this, source_file, save_path, options, platform_variants, gen_files);
}

}