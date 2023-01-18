#include "config_file.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


config_file::___method_bindings config_file::___mb = {};

void *config_file::_detail_class_tag = nullptr;

void config_file::___init_method_bindings() {
	___mb.mb_clear = gd::api->godot_method_bind_get_method("ConfigFile", "clear");
	___mb.mb_erase_section = gd::api->godot_method_bind_get_method("ConfigFile", "erase_section");
	___mb.mb_erase_section_key = gd::api->godot_method_bind_get_method("ConfigFile", "erase_section_key");
	___mb.mb_get_section_keys = gd::api->godot_method_bind_get_method("ConfigFile", "get_section_keys");
	___mb.mb_get_sections = gd::api->godot_method_bind_get_method("ConfigFile", "get_sections");
	___mb.mb_get_value = gd::api->godot_method_bind_get_method("ConfigFile", "get_value");
	___mb.mb_has_section = gd::api->godot_method_bind_get_method("ConfigFile", "has_section");
	___mb.mb_has_section_key = gd::api->godot_method_bind_get_method("ConfigFile", "has_section_key");
	___mb.mb_load = gd::api->godot_method_bind_get_method("ConfigFile", "load");
	___mb.mb_load_encrypted = gd::api->godot_method_bind_get_method("ConfigFile", "load_encrypted");
	___mb.mb_load_encrypted_pass = gd::api->godot_method_bind_get_method("ConfigFile", "load_encrypted_pass");
	___mb.mb_parse = gd::api->godot_method_bind_get_method("ConfigFile", "parse");
	___mb.mb_save = gd::api->godot_method_bind_get_method("ConfigFile", "save");
	___mb.mb_save_encrypted = gd::api->godot_method_bind_get_method("ConfigFile", "save_encrypted");
	___mb.mb_save_encrypted_pass = gd::api->godot_method_bind_get_method("ConfigFile", "save_encrypted_pass");
	___mb.mb_set_value = gd::api->godot_method_bind_get_method("ConfigFile", "set_value");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ConfigFile");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

config_file *config_file::_new()
{
	return (config_file *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ConfigFile")());
}
void config_file::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

void config_file::erase_section(const string section) {
	___godot_icall_void_String(___mb.mb_erase_section, (const object *) this, section);
}

void config_file::erase_section_key(const string section, const string key) {
	___godot_icall_void_String_String(___mb.mb_erase_section_key, (const object *) this, section, key);
}

pool_string_array config_file::get_section_keys(const string section) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_section_keys, (const object *) this, section);
}

pool_string_array config_file::get_sections() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_sections, (const object *) this);
}

variant config_file::get_value(const string section, const string key, const variant _default) const {
	return ___godot_icall_Variant_String_String_Variant(___mb.mb_get_value, (const object *) this, section, key, _default);
}

bool config_file::has_section(const string section) const {
	return ___godot_icall_bool_String(___mb.mb_has_section, (const object *) this, section);
}

bool config_file::has_section_key(const string section, const string key) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_section_key, (const object *) this, section, key);
}

error config_file::load(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load, (const object *) this, path_);
}

error config_file::load_encrypted(const string path_, const pool_byte_array key) {
	return (error) ___godot_icall_int_String_PoolByteArray(___mb.mb_load_encrypted, (const object *) this, path_, key);
}

error config_file::load_encrypted_pass(const string path_, const string password) {
	return (error) ___godot_icall_int_String_String(___mb.mb_load_encrypted_pass, (const object *) this, path_, password);
}

error config_file::parse(const string data) {
	return (error) ___godot_icall_int_String(___mb.mb_parse, (const object *) this, data);
}

error config_file::save(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_save, (const object *) this, path_);
}

error config_file::save_encrypted(const string path_, const pool_byte_array key) {
	return (error) ___godot_icall_int_String_PoolByteArray(___mb.mb_save_encrypted, (const object *) this, path_, key);
}

error config_file::save_encrypted_pass(const string path_, const string password) {
	return (error) ___godot_icall_int_String_String(___mb.mb_save_encrypted_pass, (const object *) this, path_, password);
}

void config_file::set_value(const string section, const string key, const variant value) {
	___godot_icall_void_String_String_Variant(___mb.mb_set_value, (const object *) this, section, key, value);
}

}