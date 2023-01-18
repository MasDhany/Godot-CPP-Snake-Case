#include "project_settings.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


project_settings *project_settings::_singleton = NULL;


project_settings::project_settings() {
	_owner = gd::api->godot_global_get_singleton((char *) "ProjectSettings");
}


project_settings::___method_bindings project_settings::___mb = {};

void *project_settings::_detail_class_tag = nullptr;

void project_settings::___init_method_bindings() {
	___mb.mb_add_property_info = gd::api->godot_method_bind_get_method("ProjectSettings", "add_property_info");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("ProjectSettings", "clear");
	___mb.mb_get_order = gd::api->godot_method_bind_get_method("ProjectSettings", "get_order");
	___mb.mb_get_setting = gd::api->godot_method_bind_get_method("ProjectSettings", "get_setting");
	___mb.mb_globalize_path = gd::api->godot_method_bind_get_method("ProjectSettings", "globalize_path");
	___mb.mb_has_setting = gd::api->godot_method_bind_get_method("ProjectSettings", "has_setting");
	___mb.mb_load_resource_pack = gd::api->godot_method_bind_get_method("ProjectSettings", "load_resource_pack");
	___mb.mb_localize_path = gd::api->godot_method_bind_get_method("ProjectSettings", "localize_path");
	___mb.mb_property_can_revert = gd::api->godot_method_bind_get_method("ProjectSettings", "property_can_revert");
	___mb.mb_property_get_revert = gd::api->godot_method_bind_get_method("ProjectSettings", "property_get_revert");
	___mb.mb_save = gd::api->godot_method_bind_get_method("ProjectSettings", "save");
	___mb.mb_save_custom = gd::api->godot_method_bind_get_method("ProjectSettings", "save_custom");
	___mb.mb_set_initial_value = gd::api->godot_method_bind_get_method("ProjectSettings", "set_initial_value");
	___mb.mb_set_order = gd::api->godot_method_bind_get_method("ProjectSettings", "set_order");
	___mb.mb_set_setting = gd::api->godot_method_bind_get_method("ProjectSettings", "set_setting");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ProjectSettings");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void project_settings::add_property_info(const dictionary hint) {
	___godot_icall_void_Dictionary(___mb.mb_add_property_info, (const object *) this, hint);
}

void project_settings::clear(const string name) {
	___godot_icall_void_String(___mb.mb_clear, (const object *) this, name);
}

int64_t project_settings::get_order(const string name) const {
	return ___godot_icall_int_String(___mb.mb_get_order, (const object *) this, name);
}

variant project_settings::get_setting(const string name) const {
	return ___godot_icall_Variant_String(___mb.mb_get_setting, (const object *) this, name);
}

string project_settings::globalize_path(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_globalize_path, (const object *) this, path_);
}

bool project_settings::has_setting(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_setting, (const object *) this, name);
}

bool project_settings::load_resource_pack(const string pack, const bool replace_files, const int64_t offset) {
	return ___godot_icall_bool_String_bool_int(___mb.mb_load_resource_pack, (const object *) this, pack, replace_files, offset);
}

string project_settings::localize_path(const string path_) const {
	return ___godot_icall_String_String(___mb.mb_localize_path, (const object *) this, path_);
}

bool project_settings::property_can_revert(const string name) {
	return ___godot_icall_bool_String(___mb.mb_property_can_revert, (const object *) this, name);
}

variant project_settings::property_get_revert(const string name) {
	return ___godot_icall_Variant_String(___mb.mb_property_get_revert, (const object *) this, name);
}

error project_settings::save() {
	return (error) ___godot_icall_int(___mb.mb_save, (const object *) this);
}

error project_settings::save_custom(const string file_) {
	return (error) ___godot_icall_int_String(___mb.mb_save_custom, (const object *) this, file_);
}

void project_settings::set_initial_value(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_initial_value, (const object *) this, name, value);
}

void project_settings::set_order(const string name, const int64_t position) {
	___godot_icall_void_String_int(___mb.mb_set_order, (const object *) this, name, position);
}

void project_settings::set_setting(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_setting, (const object *) this, name, value);
}

}