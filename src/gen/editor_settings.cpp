#include "editor_settings.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_settings::___method_bindings editor_settings::___mb = {};

void *editor_settings::_detail_class_tag = nullptr;

void editor_settings::___init_method_bindings() {
	___mb.mb_add_property_info = gd::api->godot_method_bind_get_method("EditorSettings", "add_property_info");
	___mb.mb_erase = gd::api->godot_method_bind_get_method("EditorSettings", "erase");
	___mb.mb_get_favorites = gd::api->godot_method_bind_get_method("EditorSettings", "get_favorites");
	___mb.mb_get_project_metadata = gd::api->godot_method_bind_get_method("EditorSettings", "get_project_metadata");
	___mb.mb_get_project_settings_dir = gd::api->godot_method_bind_get_method("EditorSettings", "get_project_settings_dir");
	___mb.mb_get_recent_dirs = gd::api->godot_method_bind_get_method("EditorSettings", "get_recent_dirs");
	___mb.mb_get_setting = gd::api->godot_method_bind_get_method("EditorSettings", "get_setting");
	___mb.mb_get_settings_dir = gd::api->godot_method_bind_get_method("EditorSettings", "get_settings_dir");
	___mb.mb_has_setting = gd::api->godot_method_bind_get_method("EditorSettings", "has_setting");
	___mb.mb_property_can_revert = gd::api->godot_method_bind_get_method("EditorSettings", "property_can_revert");
	___mb.mb_property_get_revert = gd::api->godot_method_bind_get_method("EditorSettings", "property_get_revert");
	___mb.mb_set_favorites = gd::api->godot_method_bind_get_method("EditorSettings", "set_favorites");
	___mb.mb_set_initial_value = gd::api->godot_method_bind_get_method("EditorSettings", "set_initial_value");
	___mb.mb_set_project_metadata = gd::api->godot_method_bind_get_method("EditorSettings", "set_project_metadata");
	___mb.mb_set_recent_dirs = gd::api->godot_method_bind_get_method("EditorSettings", "set_recent_dirs");
	___mb.mb_set_setting = gd::api->godot_method_bind_get_method("EditorSettings", "set_setting");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorSettings");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_settings::add_property_info(const dictionary info) {
	___godot_icall_void_Dictionary(___mb.mb_add_property_info, (const object *) this, info);
}

void editor_settings::erase(const string property) {
	___godot_icall_void_String(___mb.mb_erase, (const object *) this, property);
}

pool_string_array editor_settings::get_favorites() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_favorites, (const object *) this);
}

variant editor_settings::get_project_metadata(const string section, const string key, const variant _default) const {
	return ___godot_icall_Variant_String_String_Variant(___mb.mb_get_project_metadata, (const object *) this, section, key, _default);
}

string editor_settings::get_project_settings_dir() const {
	return ___godot_icall_String(___mb.mb_get_project_settings_dir, (const object *) this);
}

pool_string_array editor_settings::get_recent_dirs() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_recent_dirs, (const object *) this);
}

variant editor_settings::get_setting(const string name) const {
	return ___godot_icall_Variant_String(___mb.mb_get_setting, (const object *) this, name);
}

string editor_settings::get_settings_dir() const {
	return ___godot_icall_String(___mb.mb_get_settings_dir, (const object *) this);
}

bool editor_settings::has_setting(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_setting, (const object *) this, name);
}

bool editor_settings::property_can_revert(const string name) {
	return ___godot_icall_bool_String(___mb.mb_property_can_revert, (const object *) this, name);
}

variant editor_settings::property_get_revert(const string name) {
	return ___godot_icall_Variant_String(___mb.mb_property_get_revert, (const object *) this, name);
}

void editor_settings::set_favorites(const pool_string_array dirs) {
	___godot_icall_void_PoolStringArray(___mb.mb_set_favorites, (const object *) this, dirs);
}

void editor_settings::set_initial_value(const string name, const variant value, const bool update_current) {
	___godot_icall_void_String_Variant_bool(___mb.mb_set_initial_value, (const object *) this, name, value, update_current);
}

void editor_settings::set_project_metadata(const string section, const string key, const variant data) {
	___godot_icall_void_String_String_Variant(___mb.mb_set_project_metadata, (const object *) this, section, key, data);
}

void editor_settings::set_recent_dirs(const pool_string_array dirs) {
	___godot_icall_void_PoolStringArray(___mb.mb_set_recent_dirs, (const object *) this, dirs);
}

void editor_settings::set_setting(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_setting, (const object *) this, name, value);
}

}