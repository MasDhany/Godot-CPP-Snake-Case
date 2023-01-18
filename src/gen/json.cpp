#include "json.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "jsonparse_result.hpp"


namespace gd {


json *json::_singleton = NULL;


json::json() {
	_owner = gd::api->godot_global_get_singleton((char *) "JSON");
}


json::___method_bindings json::___mb = {};

void *json::_detail_class_tag = nullptr;

void json::___init_method_bindings() {
	___mb.mb_parse = gd::api->godot_method_bind_get_method("_JSON", "parse");
	___mb.mb_print = gd::api->godot_method_bind_get_method("_JSON", "print");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_JSON");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

ref<jsonparse_result> json::parse(const string json_) {
	return ref<jsonparse_result>::__internal_constructor(___godot_icall_Object_String(___mb.mb_parse, (const object *) this, json_));
}

string json::print(const variant value, const string indent, const bool sort_keys) {
	return ___godot_icall_String_Variant_String_bool(___mb.mb_print, (const object *) this, value, indent, sort_keys);
}

}