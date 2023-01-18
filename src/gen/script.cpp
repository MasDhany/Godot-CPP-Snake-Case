#include "script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "script.hpp"


namespace gd {


script::___method_bindings script::___mb = {};

void *script::_detail_class_tag = nullptr;

void script::___init_method_bindings() {
	___mb.mb_can_instance = gd::api->godot_method_bind_get_method("Script", "can_instance");
	___mb.mb_get_base_script = gd::api->godot_method_bind_get_method("Script", "get_base_script");
	___mb.mb_get_instance_base_type = gd::api->godot_method_bind_get_method("Script", "get_instance_base_type");
	___mb.mb_get_property_default_value = gd::api->godot_method_bind_get_method("Script", "get_property_default_value");
	___mb.mb_get_script_constant_map = gd::api->godot_method_bind_get_method("Script", "get_script_constant_map");
	___mb.mb_get_script_method_list = gd::api->godot_method_bind_get_method("Script", "get_script_method_list");
	___mb.mb_get_script_property_list = gd::api->godot_method_bind_get_method("Script", "get_script_property_list");
	___mb.mb_get_script_signal_list = gd::api->godot_method_bind_get_method("Script", "get_script_signal_list");
	___mb.mb_get_source_code = gd::api->godot_method_bind_get_method("Script", "get_source_code");
	___mb.mb_has_script_signal = gd::api->godot_method_bind_get_method("Script", "has_script_signal");
	___mb.mb_has_source_code = gd::api->godot_method_bind_get_method("Script", "has_source_code");
	___mb.mb_instance_has = gd::api->godot_method_bind_get_method("Script", "instance_has");
	___mb.mb_is_tool = gd::api->godot_method_bind_get_method("Script", "is_tool");
	___mb.mb_reload = gd::api->godot_method_bind_get_method("Script", "reload");
	___mb.mb_set_source_code = gd::api->godot_method_bind_get_method("Script", "set_source_code");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Script");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool script::can_instance() const {
	return ___godot_icall_bool(___mb.mb_can_instance, (const object *) this);
}

ref<script> script::get_base_script() const {
	return ref<script>::__internal_constructor(___godot_icall_Object(___mb.mb_get_base_script, (const object *) this));
}

string script::get_instance_base_type() const {
	return ___godot_icall_String(___mb.mb_get_instance_base_type, (const object *) this);
}

variant script::get_property_default_value(const string property) {
	return ___godot_icall_Variant_String(___mb.mb_get_property_default_value, (const object *) this, property);
}

dictionary script::get_script_constant_map() {
	return ___godot_icall_Dictionary(___mb.mb_get_script_constant_map, (const object *) this);
}

array script::get_script_method_list() {
	return ___godot_icall_Array(___mb.mb_get_script_method_list, (const object *) this);
}

array script::get_script_property_list() {
	return ___godot_icall_Array(___mb.mb_get_script_property_list, (const object *) this);
}

array script::get_script_signal_list() {
	return ___godot_icall_Array(___mb.mb_get_script_signal_list, (const object *) this);
}

string script::get_source_code() const {
	return ___godot_icall_String(___mb.mb_get_source_code, (const object *) this);
}

bool script::has_script_signal(const string signal_name) const {
	return ___godot_icall_bool_String(___mb.mb_has_script_signal, (const object *) this, signal_name);
}

bool script::has_source_code() const {
	return ___godot_icall_bool(___mb.mb_has_source_code, (const object *) this);
}

bool script::instance_has(const object *base_object) const {
	return ___godot_icall_bool_Object(___mb.mb_instance_has, (const object *) this, base_object);
}

bool script::is_tool() const {
	return ___godot_icall_bool(___mb.mb_is_tool, (const object *) this);
}

error script::reload(const bool keep_state) {
	return (error) ___godot_icall_int_bool(___mb.mb_reload, (const object *) this, keep_state);
}

void script::set_source_code(const string source) {
	___godot_icall_void_String(___mb.mb_set_source_code, (const object *) this, source);
}

}