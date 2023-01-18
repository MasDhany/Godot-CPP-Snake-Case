#include "resource_format_loader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


resource_format_loader::___method_bindings resource_format_loader::___mb = {};

void *resource_format_loader::_detail_class_tag = nullptr;

void resource_format_loader::___init_method_bindings() {
	___mb.mb_get_dependencies = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "get_dependencies");
	___mb.mb_get_recognized_extensions = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "get_recognized_extensions");
	___mb.mb_get_resource_type = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "get_resource_type");
	___mb.mb_handles_type = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "handles_type");
	___mb.mb_load = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "load");
	___mb.mb_rename_dependencies = gd::api->godot_method_bind_get_method("ResourceFormatLoader", "rename_dependencies");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ResourceFormatLoader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

resource_format_loader *resource_format_loader::_new()
{
	return (resource_format_loader *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ResourceFormatLoader")());
}
void resource_format_loader::get_dependencies(const string path_, const string add_types) {
	___godot_icall_void_String_String(___mb.mb_get_dependencies, (const object *) this, path_, add_types);
}

pool_string_array resource_format_loader::get_recognized_extensions() {
	return ___godot_icall_PoolStringArray(___mb.mb_get_recognized_extensions, (const object *) this);
}

string resource_format_loader::get_resource_type(const string path_) {
	return ___godot_icall_String_String(___mb.mb_get_resource_type, (const object *) this, path_);
}

bool resource_format_loader::handles_type(const string _typename) {
	return ___godot_icall_bool_String(___mb.mb_handles_type, (const object *) this, _typename);
}

variant resource_format_loader::load(const string path_, const string original_path) {
	return ___godot_icall_Variant_String_String(___mb.mb_load, (const object *) this, path_, original_path);
}

int64_t resource_format_loader::rename_dependencies(const string path_, const string renames) {
	return ___godot_icall_int_String_String(___mb.mb_rename_dependencies, (const object *) this, path_, renames);
}

}