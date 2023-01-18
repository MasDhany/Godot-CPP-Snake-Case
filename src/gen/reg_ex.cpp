#include "reg_ex.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "reg_ex_match.hpp"


namespace gd {


reg_ex::___method_bindings reg_ex::___mb = {};

void *reg_ex::_detail_class_tag = nullptr;

void reg_ex::___init_method_bindings() {
	___mb.mb_clear = gd::api->godot_method_bind_get_method("RegEx", "clear");
	___mb.mb_compile = gd::api->godot_method_bind_get_method("RegEx", "compile");
	___mb.mb_get_group_count = gd::api->godot_method_bind_get_method("RegEx", "get_group_count");
	___mb.mb_get_names = gd::api->godot_method_bind_get_method("RegEx", "get_names");
	___mb.mb_get_pattern = gd::api->godot_method_bind_get_method("RegEx", "get_pattern");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("RegEx", "is_valid");
	___mb.mb_search = gd::api->godot_method_bind_get_method("RegEx", "search");
	___mb.mb_search_all = gd::api->godot_method_bind_get_method("RegEx", "search_all");
	___mb.mb_sub = gd::api->godot_method_bind_get_method("RegEx", "sub");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RegEx");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

reg_ex *reg_ex::_new()
{
	return (reg_ex *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RegEx")());
}
void reg_ex::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

error reg_ex::compile(const string pattern) {
	return (error) ___godot_icall_int_String(___mb.mb_compile, (const object *) this, pattern);
}

int64_t reg_ex::get_group_count() const {
	return ___godot_icall_int(___mb.mb_get_group_count, (const object *) this);
}

array reg_ex::get_names() const {
	return ___godot_icall_Array(___mb.mb_get_names, (const object *) this);
}

string reg_ex::get_pattern() const {
	return ___godot_icall_String(___mb.mb_get_pattern, (const object *) this);
}

bool reg_ex::is_valid() const {
	return ___godot_icall_bool(___mb.mb_is_valid, (const object *) this);
}

ref<reg_ex_match> reg_ex::search(const string subject, const int64_t offset, const int64_t end) const {
	return ref<reg_ex_match>::__internal_constructor(___godot_icall_Object_String_int_int(___mb.mb_search, (const object *) this, subject, offset, end));
}

array reg_ex::search_all(const string subject, const int64_t offset, const int64_t end) const {
	return ___godot_icall_Array_String_int_int(___mb.mb_search_all, (const object *) this, subject, offset, end);
}

string reg_ex::sub(const string subject, const string replacement, const bool all, const int64_t offset, const int64_t end) const {
	return ___godot_icall_String_String_String_bool_int_int(___mb.mb_sub, (const object *) this, subject, replacement, all, offset, end);
}

}