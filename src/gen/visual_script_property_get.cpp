#include "visual_script_property_get.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_property_get::___method_bindings visual_script_property_get::___mb = {};

void *visual_script_property_get::_detail_class_tag = nullptr;

void visual_script_property_get::___init_method_bindings() {
	___mb.mb__get_type_cache = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "_get_type_cache");
	___mb.mb__set_type_cache = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "_set_type_cache");
	___mb.mb_get_base_path = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_base_path");
	___mb.mb_get_base_script = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_base_script");
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_base_type");
	___mb.mb_get_basic_type = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_basic_type");
	___mb.mb_get_call_mode = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_call_mode");
	___mb.mb_get_index = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_index");
	___mb.mb_get_property = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "get_property");
	___mb.mb_set_base_path = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_base_path");
	___mb.mb_set_base_script = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_base_script");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_base_type");
	___mb.mb_set_basic_type = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_basic_type");
	___mb.mb_set_call_mode = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_call_mode");
	___mb.mb_set_index = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_index");
	___mb.mb_set_property = gd::api->godot_method_bind_get_method("VisualScriptPropertyGet", "set_property");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptPropertyGet");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_property_get *visual_script_property_get::_new()
{
	return (visual_script_property_get *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptPropertyGet")());
}
variant::Type visual_script_property_get::_get_type_cache() const {
	return (variant::Type) ___godot_icall_int(___mb.mb__get_type_cache, (const object *) this);
}

void visual_script_property_get::_set_type_cache(const int64_t type_cache) {
	___godot_icall_void_int(___mb.mb__set_type_cache, (const object *) this, type_cache);
}

node_path visual_script_property_get::get_base_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_base_path, (const object *) this);
}

string visual_script_property_get::get_base_script() const {
	return ___godot_icall_String(___mb.mb_get_base_script, (const object *) this);
}

string visual_script_property_get::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

variant::Type visual_script_property_get::get_basic_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_basic_type, (const object *) this);
}

visual_script_property_get::CallMode visual_script_property_get::get_call_mode() const {
	return (visual_script_property_get::CallMode) ___godot_icall_int(___mb.mb_get_call_mode, (const object *) this);
}

string visual_script_property_get::get_index() const {
	return ___godot_icall_String(___mb.mb_get_index, (const object *) this);
}

string visual_script_property_get::get_property() const {
	return ___godot_icall_String(___mb.mb_get_property, (const object *) this);
}

void visual_script_property_get::set_base_path(const node_path base_path) {
	___godot_icall_void_NodePath(___mb.mb_set_base_path, (const object *) this, base_path);
}

void visual_script_property_get::set_base_script(const string base_script) {
	___godot_icall_void_String(___mb.mb_set_base_script, (const object *) this, base_script);
}

void visual_script_property_get::set_base_type(const string base_type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, base_type);
}

void visual_script_property_get::set_basic_type(const int64_t basic_type) {
	___godot_icall_void_int(___mb.mb_set_basic_type, (const object *) this, basic_type);
}

void visual_script_property_get::set_call_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_call_mode, (const object *) this, mode);
}

void visual_script_property_get::set_index(const string index) {
	___godot_icall_void_String(___mb.mb_set_index, (const object *) this, index);
}

void visual_script_property_get::set_property(const string property) {
	___godot_icall_void_String(___mb.mb_set_property, (const object *) this, property);
}

}