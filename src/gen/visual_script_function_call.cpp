#include "visual_script_function_call.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_function_call::___method_bindings visual_script_function_call::___mb = {};

void *visual_script_function_call::_detail_class_tag = nullptr;

void visual_script_function_call::___init_method_bindings() {
	___mb.mb__get_argument_cache = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "_get_argument_cache");
	___mb.mb__set_argument_cache = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "_set_argument_cache");
	___mb.mb_get_base_path = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_base_path");
	___mb.mb_get_base_script = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_base_script");
	___mb.mb_get_base_type = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_base_type");
	___mb.mb_get_basic_type = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_basic_type");
	___mb.mb_get_call_mode = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_call_mode");
	___mb.mb_get_function = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_function");
	___mb.mb_get_rpc_call_mode = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_rpc_call_mode");
	___mb.mb_get_singleton = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_singleton");
	___mb.mb_get_use_default_args = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_use_default_args");
	___mb.mb_get_validate = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "get_validate");
	___mb.mb_set_base_path = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_base_path");
	___mb.mb_set_base_script = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_base_script");
	___mb.mb_set_base_type = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_base_type");
	___mb.mb_set_basic_type = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_basic_type");
	___mb.mb_set_call_mode = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_call_mode");
	___mb.mb_set_function = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_function");
	___mb.mb_set_rpc_call_mode = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_rpc_call_mode");
	___mb.mb_set_singleton = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_singleton");
	___mb.mb_set_use_default_args = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_use_default_args");
	___mb.mb_set_validate = gd::api->godot_method_bind_get_method("VisualScriptFunctionCall", "set_validate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptFunctionCall");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_function_call *visual_script_function_call::_new()
{
	return (visual_script_function_call *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptFunctionCall")());
}
dictionary visual_script_function_call::_get_argument_cache() const {
	return ___godot_icall_Dictionary(___mb.mb__get_argument_cache, (const object *) this);
}

void visual_script_function_call::_set_argument_cache(const dictionary argument_cache) {
	___godot_icall_void_Dictionary(___mb.mb__set_argument_cache, (const object *) this, argument_cache);
}

node_path visual_script_function_call::get_base_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_base_path, (const object *) this);
}

string visual_script_function_call::get_base_script() const {
	return ___godot_icall_String(___mb.mb_get_base_script, (const object *) this);
}

string visual_script_function_call::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const object *) this);
}

variant::Type visual_script_function_call::get_basic_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_basic_type, (const object *) this);
}

visual_script_function_call::CallMode visual_script_function_call::get_call_mode() const {
	return (visual_script_function_call::CallMode) ___godot_icall_int(___mb.mb_get_call_mode, (const object *) this);
}

string visual_script_function_call::get_function() const {
	return ___godot_icall_String(___mb.mb_get_function, (const object *) this);
}

visual_script_function_call::RPCCallMode visual_script_function_call::get_rpc_call_mode() const {
	return (visual_script_function_call::RPCCallMode) ___godot_icall_int(___mb.mb_get_rpc_call_mode, (const object *) this);
}

string visual_script_function_call::get_singleton() const {
	return ___godot_icall_String(___mb.mb_get_singleton, (const object *) this);
}

int64_t visual_script_function_call::get_use_default_args() const {
	return ___godot_icall_int(___mb.mb_get_use_default_args, (const object *) this);
}

bool visual_script_function_call::get_validate() const {
	return ___godot_icall_bool(___mb.mb_get_validate, (const object *) this);
}

void visual_script_function_call::set_base_path(const node_path base_path) {
	___godot_icall_void_NodePath(___mb.mb_set_base_path, (const object *) this, base_path);
}

void visual_script_function_call::set_base_script(const string base_script) {
	___godot_icall_void_String(___mb.mb_set_base_script, (const object *) this, base_script);
}

void visual_script_function_call::set_base_type(const string base_type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const object *) this, base_type);
}

void visual_script_function_call::set_basic_type(const int64_t basic_type) {
	___godot_icall_void_int(___mb.mb_set_basic_type, (const object *) this, basic_type);
}

void visual_script_function_call::set_call_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_call_mode, (const object *) this, mode);
}

void visual_script_function_call::set_function(const string function) {
	___godot_icall_void_String(___mb.mb_set_function, (const object *) this, function);
}

void visual_script_function_call::set_rpc_call_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_rpc_call_mode, (const object *) this, mode);
}

void visual_script_function_call::set_singleton(const string singleton) {
	___godot_icall_void_String(___mb.mb_set_singleton, (const object *) this, singleton);
}

void visual_script_function_call::set_use_default_args(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_use_default_args, (const object *) this, amount);
}

void visual_script_function_call::set_validate(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_validate, (const object *) this, enable);
}

}