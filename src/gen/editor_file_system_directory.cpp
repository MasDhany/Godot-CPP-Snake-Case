#include "editor_file_system_directory.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "editor_file_system_directory.hpp"


namespace gd {


editor_file_system_directory::___method_bindings editor_file_system_directory::___mb = {};

void *editor_file_system_directory::_detail_class_tag = nullptr;

void editor_file_system_directory::___init_method_bindings() {
	___mb.mb_find_dir_index = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "find_dir_index");
	___mb.mb_find_file_index = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "find_file_index");
	___mb.mb_get_file = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file");
	___mb.mb_get_file_count = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_count");
	___mb.mb_get_file_import_is_valid = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_import_is_valid");
	___mb.mb_get_file_path = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_path");
	___mb.mb_get_file_script_class_extends = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_script_class_extends");
	___mb.mb_get_file_script_class_name = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_script_class_name");
	___mb.mb_get_file_type = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_file_type");
	___mb.mb_get_name = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_name");
	___mb.mb_get_parent = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_parent");
	___mb.mb_get_path = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_path");
	___mb.mb_get_subdir = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_subdir");
	___mb.mb_get_subdir_count = gd::api->godot_method_bind_get_method("EditorFileSystemDirectory", "get_subdir_count");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorFileSystemDirectory");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

int64_t editor_file_system_directory::find_dir_index(const string name) const {
	return ___godot_icall_int_String(___mb.mb_find_dir_index, (const object *) this, name);
}

int64_t editor_file_system_directory::find_file_index(const string name) const {
	return ___godot_icall_int_String(___mb.mb_find_file_index, (const object *) this, name);
}

string editor_file_system_directory::get_file(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_file, (const object *) this, idx);
}

int64_t editor_file_system_directory::get_file_count() const {
	return ___godot_icall_int(___mb.mb_get_file_count, (const object *) this);
}

bool editor_file_system_directory::get_file_import_is_valid(const int64_t idx) const {
	return ___godot_icall_bool_int(___mb.mb_get_file_import_is_valid, (const object *) this, idx);
}

string editor_file_system_directory::get_file_path(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_file_path, (const object *) this, idx);
}

string editor_file_system_directory::get_file_script_class_extends(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_file_script_class_extends, (const object *) this, idx);
}

string editor_file_system_directory::get_file_script_class_name(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_file_script_class_name, (const object *) this, idx);
}

string editor_file_system_directory::get_file_type(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_file_type, (const object *) this, idx);
}

string editor_file_system_directory::get_name() {
	return ___godot_icall_String(___mb.mb_get_name, (const object *) this);
}

editor_file_system_directory *editor_file_system_directory::get_parent() {
	return (editor_file_system_directory *) ___godot_icall_Object(___mb.mb_get_parent, (const object *) this);
}

string editor_file_system_directory::get_path() const {
	return ___godot_icall_String(___mb.mb_get_path, (const object *) this);
}

editor_file_system_directory *editor_file_system_directory::get_subdir(const int64_t idx) {
	return (editor_file_system_directory *) ___godot_icall_Object_int(___mb.mb_get_subdir, (const object *) this, idx);
}

int64_t editor_file_system_directory::get_subdir_count() const {
	return ___godot_icall_int(___mb.mb_get_subdir_count, (const object *) this);
}

}