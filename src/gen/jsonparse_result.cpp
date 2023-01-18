#include "jsonparse_result.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


jsonparse_result::___method_bindings jsonparse_result::___mb = {};

void *jsonparse_result::_detail_class_tag = nullptr;

void jsonparse_result::___init_method_bindings() {
	___mb.mb_get_error = gd::api->godot_method_bind_get_method("JSONParseResult", "get_error");
	___mb.mb_get_error_line = gd::api->godot_method_bind_get_method("JSONParseResult", "get_error_line");
	___mb.mb_get_error_string = gd::api->godot_method_bind_get_method("JSONParseResult", "get_error_string");
	___mb.mb_get_result = gd::api->godot_method_bind_get_method("JSONParseResult", "get_result");
	___mb.mb_set_error = gd::api->godot_method_bind_get_method("JSONParseResult", "set_error");
	___mb.mb_set_error_line = gd::api->godot_method_bind_get_method("JSONParseResult", "set_error_line");
	___mb.mb_set_error_string = gd::api->godot_method_bind_get_method("JSONParseResult", "set_error_string");
	___mb.mb_set_result = gd::api->godot_method_bind_get_method("JSONParseResult", "set_result");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "JSONParseResult");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

jsonparse_result *jsonparse_result::_new()
{
	return (jsonparse_result *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"JSONParseResult")());
}
error jsonparse_result::get_error() const {
	return (error) ___godot_icall_int(___mb.mb_get_error, (const object *) this);
}

int64_t jsonparse_result::get_error_line() const {
	return ___godot_icall_int(___mb.mb_get_error_line, (const object *) this);
}

string jsonparse_result::get_error_string() const {
	return ___godot_icall_String(___mb.mb_get_error_string, (const object *) this);
}

variant jsonparse_result::get_result() const {
	return ___godot_icall_Variant(___mb.mb_get_result, (const object *) this);
}

void jsonparse_result::set_error(const int64_t error_) {
	___godot_icall_void_int(___mb.mb_set_error, (const object *) this, error_);
}

void jsonparse_result::set_error_line(const int64_t error_line) {
	___godot_icall_void_int(___mb.mb_set_error_line, (const object *) this, error_line);
}

void jsonparse_result::set_error_string(const string error_string) {
	___godot_icall_void_String(___mb.mb_set_error_string, (const object *) this, error_string);
}

void jsonparse_result::set_result(const variant result) {
	___godot_icall_void_Variant(___mb.mb_set_result, (const object *) this, result);
}

}