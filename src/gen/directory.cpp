#include "directory.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


directory::___method_bindings directory::___mb = {};

void *directory::_detail_class_tag = nullptr;

void directory::___init_method_bindings() {
	___mb.mb_change_dir = gd::api->godot_method_bind_get_method("_Directory", "change_dir");
	___mb.mb_copy = gd::api->godot_method_bind_get_method("_Directory", "copy");
	___mb.mb_current_is_dir = gd::api->godot_method_bind_get_method("_Directory", "current_is_dir");
	___mb.mb_dir_exists = gd::api->godot_method_bind_get_method("_Directory", "dir_exists");
	___mb.mb_file_exists = gd::api->godot_method_bind_get_method("_Directory", "file_exists");
	___mb.mb_get_current_dir = gd::api->godot_method_bind_get_method("_Directory", "get_current_dir");
	___mb.mb_get_current_drive = gd::api->godot_method_bind_get_method("_Directory", "get_current_drive");
	___mb.mb_get_drive = gd::api->godot_method_bind_get_method("_Directory", "get_drive");
	___mb.mb_get_drive_count = gd::api->godot_method_bind_get_method("_Directory", "get_drive_count");
	___mb.mb_get_next = gd::api->godot_method_bind_get_method("_Directory", "get_next");
	___mb.mb_get_space_left = gd::api->godot_method_bind_get_method("_Directory", "get_space_left");
	___mb.mb_list_dir_begin = gd::api->godot_method_bind_get_method("_Directory", "list_dir_begin");
	___mb.mb_list_dir_end = gd::api->godot_method_bind_get_method("_Directory", "list_dir_end");
	___mb.mb_make_dir = gd::api->godot_method_bind_get_method("_Directory", "make_dir");
	___mb.mb_make_dir_recursive = gd::api->godot_method_bind_get_method("_Directory", "make_dir_recursive");
	___mb.mb_open = gd::api->godot_method_bind_get_method("_Directory", "open");
	___mb.mb_remove = gd::api->godot_method_bind_get_method("_Directory", "remove");
	___mb.mb_rename = gd::api->godot_method_bind_get_method("_Directory", "rename");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Directory");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

directory *directory::_new()
{
	return (directory *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"_Directory")());
}
error directory::change_dir(const string todir) {
	return (error) ___godot_icall_int_String(___mb.mb_change_dir, (const object *) this, todir);
}

error directory::copy(const string from, const string to) {
	return (error) ___godot_icall_int_String_String(___mb.mb_copy, (const object *) this, from, to);
}

bool directory::current_is_dir() const {
	return ___godot_icall_bool(___mb.mb_current_is_dir, (const object *) this);
}

bool directory::dir_exists(const string path_) {
	return ___godot_icall_bool_String(___mb.mb_dir_exists, (const object *) this, path_);
}

bool directory::file_exists(const string path_) {
	return ___godot_icall_bool_String(___mb.mb_file_exists, (const object *) this, path_);
}

string directory::get_current_dir() {
	return ___godot_icall_String(___mb.mb_get_current_dir, (const object *) this);
}

int64_t directory::get_current_drive() {
	return ___godot_icall_int(___mb.mb_get_current_drive, (const object *) this);
}

string directory::get_drive(const int64_t idx) {
	return ___godot_icall_String_int(___mb.mb_get_drive, (const object *) this, idx);
}

int64_t directory::get_drive_count() {
	return ___godot_icall_int(___mb.mb_get_drive_count, (const object *) this);
}

string directory::get_next() {
	return ___godot_icall_String(___mb.mb_get_next, (const object *) this);
}

int64_t directory::get_space_left() {
	return ___godot_icall_int(___mb.mb_get_space_left, (const object *) this);
}

error directory::list_dir_begin(const bool skip_navigational, const bool skip_hidden) {
	return (error) ___godot_icall_int_bool_bool(___mb.mb_list_dir_begin, (const object *) this, skip_navigational, skip_hidden);
}

void directory::list_dir_end() {
	___godot_icall_void(___mb.mb_list_dir_end, (const object *) this);
}

error directory::make_dir(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_make_dir, (const object *) this, path_);
}

error directory::make_dir_recursive(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_make_dir_recursive, (const object *) this, path_);
}

error directory::open(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_open, (const object *) this, path_);
}

error directory::remove(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_remove, (const object *) this, path_);
}

error directory::rename(const string from, const string to) {
	return (error) ___godot_icall_int_String_String(___mb.mb_rename, (const object *) this, from, to);
}

}