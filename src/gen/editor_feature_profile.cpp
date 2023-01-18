#include "editor_feature_profile.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


editor_feature_profile::___method_bindings editor_feature_profile::___mb = {};

void *editor_feature_profile::_detail_class_tag = nullptr;

void editor_feature_profile::___init_method_bindings() {
	___mb.mb_get_feature_name = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "get_feature_name");
	___mb.mb_is_class_disabled = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "is_class_disabled");
	___mb.mb_is_class_editor_disabled = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "is_class_editor_disabled");
	___mb.mb_is_class_property_disabled = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "is_class_property_disabled");
	___mb.mb_is_feature_disabled = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "is_feature_disabled");
	___mb.mb_load_from_file = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "load_from_file");
	___mb.mb_save_to_file = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "save_to_file");
	___mb.mb_set_disable_class = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "set_disable_class");
	___mb.mb_set_disable_class_editor = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "set_disable_class_editor");
	___mb.mb_set_disable_class_property = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "set_disable_class_property");
	___mb.mb_set_disable_feature = gd::api->godot_method_bind_get_method("EditorFeatureProfile", "set_disable_feature");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorFeatureProfile");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

string editor_feature_profile::get_feature_name(const int64_t feature) {
	return ___godot_icall_String_int(___mb.mb_get_feature_name, (const object *) this, feature);
}

bool editor_feature_profile::is_class_disabled(const string class_name) const {
	return ___godot_icall_bool_String(___mb.mb_is_class_disabled, (const object *) this, class_name);
}

bool editor_feature_profile::is_class_editor_disabled(const string class_name) const {
	return ___godot_icall_bool_String(___mb.mb_is_class_editor_disabled, (const object *) this, class_name);
}

bool editor_feature_profile::is_class_property_disabled(const string class_name, const string property) const {
	return ___godot_icall_bool_String_String(___mb.mb_is_class_property_disabled, (const object *) this, class_name, property);
}

bool editor_feature_profile::is_feature_disabled(const int64_t feature) const {
	return ___godot_icall_bool_int(___mb.mb_is_feature_disabled, (const object *) this, feature);
}

error editor_feature_profile::load_from_file(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_load_from_file, (const object *) this, path_);
}

error editor_feature_profile::save_to_file(const string path_) {
	return (error) ___godot_icall_int_String(___mb.mb_save_to_file, (const object *) this, path_);
}

void editor_feature_profile::set_disable_class(const string class_name, const bool disable) {
	___godot_icall_void_String_bool(___mb.mb_set_disable_class, (const object *) this, class_name, disable);
}

void editor_feature_profile::set_disable_class_editor(const string class_name, const bool disable) {
	___godot_icall_void_String_bool(___mb.mb_set_disable_class_editor, (const object *) this, class_name, disable);
}

void editor_feature_profile::set_disable_class_property(const string class_name, const string property, const bool disable) {
	___godot_icall_void_String_String_bool(___mb.mb_set_disable_class_property, (const object *) this, class_name, property, disable);
}

void editor_feature_profile::set_disable_feature(const int64_t feature, const bool disable) {
	___godot_icall_void_int_bool(___mb.mb_set_disable_feature, (const object *) this, feature, disable);
}

}