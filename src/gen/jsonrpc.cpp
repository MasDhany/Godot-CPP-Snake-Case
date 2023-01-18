#include "jsonrpc.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


jsonrpc::___method_bindings jsonrpc::___mb = {};

void *jsonrpc::_detail_class_tag = nullptr;

void jsonrpc::___init_method_bindings() {
	___mb.mb_make_notification = gd::api->godot_method_bind_get_method("JSONRPC", "make_notification");
	___mb.mb_make_request = gd::api->godot_method_bind_get_method("JSONRPC", "make_request");
	___mb.mb_make_response = gd::api->godot_method_bind_get_method("JSONRPC", "make_response");
	___mb.mb_make_response_error = gd::api->godot_method_bind_get_method("JSONRPC", "make_response_error");
	___mb.mb_process_action = gd::api->godot_method_bind_get_method("JSONRPC", "process_action");
	___mb.mb_process_string = gd::api->godot_method_bind_get_method("JSONRPC", "process_string");
	___mb.mb_set_scope = gd::api->godot_method_bind_get_method("JSONRPC", "set_scope");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "JSONRPC");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

jsonrpc *jsonrpc::_new()
{
	return (jsonrpc *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"JSONRPC")());
}
dictionary jsonrpc::make_notification(const string method, const variant params) {
	return ___godot_icall_Dictionary_String_Variant(___mb.mb_make_notification, (const object *) this, method, params);
}

dictionary jsonrpc::make_request(const string method, const variant params, const variant id) {
	return ___godot_icall_Dictionary_String_Variant_Variant(___mb.mb_make_request, (const object *) this, method, params, id);
}

dictionary jsonrpc::make_response(const variant result, const variant id) {
	return ___godot_icall_Dictionary_Variant_Variant(___mb.mb_make_response, (const object *) this, result, id);
}

dictionary jsonrpc::make_response_error(const int64_t code, const string message, const variant id) const {
	return ___godot_icall_Dictionary_int_String_Variant(___mb.mb_make_response_error, (const object *) this, code, message, id);
}

variant jsonrpc::process_action(const variant action, const bool recurse) {
	return ___godot_icall_Variant_Variant_bool(___mb.mb_process_action, (const object *) this, action, recurse);
}

string jsonrpc::process_string(const string action) {
	return ___godot_icall_String_String(___mb.mb_process_string, (const object *) this, action);
}

void jsonrpc::set_scope(const string scope, const object *target) {
	___godot_icall_void_String_Object(___mb.mb_set_scope, (const object *) this, scope, target);
}

}