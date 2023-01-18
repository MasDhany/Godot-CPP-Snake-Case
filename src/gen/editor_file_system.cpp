#include "editor_file_system.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "editor_file_system_directory.hpp"


namespace gd {


editor_file_system::___method_bindings editor_file_system::___mb = {};

void *editor_file_system::_detail_class_tag = nullptr;

void editor_file_system::___init_method_bindings() {
	___mb.mb_get_file_type = gd::api->godot_method_bind_get_method("EditorFileSystem", "get_file_type");
	___mb.mb_get_filesystem = gd::api->godot_method_bind_get_method("EditorFileSystem", "get_filesystem");
	___mb.mb_get_filesystem_path = gd::api->godot_method_bind_get_method("EditorFileSystem", "get_filesystem_path");
	___mb.mb_get_scanning_progress = gd::api->godot_method_bind_get_method("EditorFileSystem", "get_scanning_progress");
	___mb.mb_is_scanning = gd::api->godot_method_bind_get_method("EditorFileSystem", "is_scanning");
	___mb.mb_scan = gd::api->godot_method_bind_get_method("EditorFileSystem", "scan");
	___mb.mb_scan_sources = gd::api->godot_method_bind_get_method("EditorFileSystem", "scan_sources");
	___mb.mb_update_file = gd::api->godot_method_bind_get_method("EditorFileSystem", "update_file");
	___mb.mb_update_script_classes = gd::api->godot_method_bind_get_method("EditorFileSystem", "update_script_classes");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorFileSystem");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

string editor_file_system::get_file_type(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_get_file_type, (const object *) this, path_);
}

editor_file_system_directory *editor_file_system::get_filesystem() {
	return (editor_file_system_directory *) ___godot_icall_Object(___mb.mb_get_filesystem, (const object *) this);
}

editor_file_system_directory *editor_file_system::get_filesystem_path(const string path_) {
	return (editor_file_system_directory *) ___godot_icall_Object_String(___mb.mb_get_filesystem_path, (const object *) this, path_);
}

real_t editor_file_system::get_scanning_progress() const {
	return ___godot_icall_float(___mb.mb_get_scanning_progress, (const object *) this);
}

bool editor_file_system::is_scanning() const {
	return ___godot_icall_bool(___mb.mb_is_scanning, (const object *) this);
}

void editor_file_system::scan() {
	___godot_icall_void(___mb.mb_scan, (const object *) this);
}

void editor_file_system::scan_sources() {
	___godot_icall_void(___mb.mb_scan_sources, (const object *) this);
}

void editor_file_system::update_file(const string path_) {
	___godot_icall_void_String(___mb.mb_update_file, (const object *) this, path_);
}

void editor_file_system::update_script_classes() {
	___godot_icall_void(___mb.mb_update_script_classes, (const object *) this);
}

}