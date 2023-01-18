#include "gdnative_library.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "config_file.hpp"


namespace gd {


gdnative_library::___method_bindings gdnative_library::___mb = {};

void *gdnative_library::_detail_class_tag = nullptr;

void gdnative_library::___init_method_bindings() {
	___mb.mb_get_config_file = gd::api->godot_method_bind_get_method("GDNativeLibrary", "get_config_file");
	___mb.mb_get_current_dependencies = gd::api->godot_method_bind_get_method("GDNativeLibrary", "get_current_dependencies");
	___mb.mb_get_current_library_path = gd::api->godot_method_bind_get_method("GDNativeLibrary", "get_current_library_path");
	___mb.mb_get_symbol_prefix = gd::api->godot_method_bind_get_method("GDNativeLibrary", "get_symbol_prefix");
	___mb.mb_is_reloadable = gd::api->godot_method_bind_get_method("GDNativeLibrary", "is_reloadable");
	___mb.mb_is_singleton = gd::api->godot_method_bind_get_method("GDNativeLibrary", "is_singleton");
	___mb.mb_set_config_file = gd::api->godot_method_bind_get_method("GDNativeLibrary", "set_config_file");
	___mb.mb_set_load_once = gd::api->godot_method_bind_get_method("GDNativeLibrary", "set_load_once");
	___mb.mb_set_reloadable = gd::api->godot_method_bind_get_method("GDNativeLibrary", "set_reloadable");
	___mb.mb_set_singleton = gd::api->godot_method_bind_get_method("GDNativeLibrary", "set_singleton");
	___mb.mb_set_symbol_prefix = gd::api->godot_method_bind_get_method("GDNativeLibrary", "set_symbol_prefix");
	___mb.mb_should_load_once = gd::api->godot_method_bind_get_method("GDNativeLibrary", "should_load_once");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GDNativeLibrary");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gdnative_library *gdnative_library::_new()
{
	return (gdnative_library *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GDNativeLibrary")());
}
ref<config_file> gdnative_library::get_config_file() {
	return ref<config_file>::__internal_constructor(___godot_icall_Object(___mb.mb_get_config_file, (const object *) this));
}

pool_string_array gdnative_library::get_current_dependencies() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_current_dependencies, (const object *) this);
}

string gdnative_library::get_current_library_path() const {
	return ___godot_icall_String(___mb.mb_get_current_library_path, (const object *) this);
}

string gdnative_library::get_symbol_prefix() const {
	return ___godot_icall_String(___mb.mb_get_symbol_prefix, (const object *) this);
}

bool gdnative_library::is_reloadable() const {
	return ___godot_icall_bool(___mb.mb_is_reloadable, (const object *) this);
}

bool gdnative_library::is_singleton() const {
	return ___godot_icall_bool(___mb.mb_is_singleton, (const object *) this);
}

void gdnative_library::set_config_file(const ref<config_file> config_file_) {
	___godot_icall_void_Object(___mb.mb_set_config_file, (const object *) this, config_file_.ptr());
}

void gdnative_library::set_load_once(const bool load_once) {
	___godot_icall_void_bool(___mb.mb_set_load_once, (const object *) this, load_once);
}

void gdnative_library::set_reloadable(const bool reloadable) {
	___godot_icall_void_bool(___mb.mb_set_reloadable, (const object *) this, reloadable);
}

void gdnative_library::set_singleton(const bool singleton) {
	___godot_icall_void_bool(___mb.mb_set_singleton, (const object *) this, singleton);
}

void gdnative_library::set_symbol_prefix(const string symbol_prefix) {
	___godot_icall_void_String(___mb.mb_set_symbol_prefix, (const object *) this, symbol_prefix);
}

bool gdnative_library::should_load_once() const {
	return ___godot_icall_bool(___mb.mb_should_load_once, (const object *) this);
}

}