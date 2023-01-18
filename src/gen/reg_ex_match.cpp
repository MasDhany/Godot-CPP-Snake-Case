#include "reg_ex_match.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


reg_ex_match::___method_bindings reg_ex_match::___mb = {};

void *reg_ex_match::_detail_class_tag = nullptr;

void reg_ex_match::___init_method_bindings() {
	___mb.mb_get_end = gd::api->godot_method_bind_get_method("RegExMatch", "get_end");
	___mb.mb_get_group_count = gd::api->godot_method_bind_get_method("RegExMatch", "get_group_count");
	___mb.mb_get_names = gd::api->godot_method_bind_get_method("RegExMatch", "get_names");
	___mb.mb_get_start = gd::api->godot_method_bind_get_method("RegExMatch", "get_start");
	___mb.mb_get_string = gd::api->godot_method_bind_get_method("RegExMatch", "get_string");
	___mb.mb_get_strings = gd::api->godot_method_bind_get_method("RegExMatch", "get_strings");
	___mb.mb_get_subject = gd::api->godot_method_bind_get_method("RegExMatch", "get_subject");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RegExMatch");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

reg_ex_match *reg_ex_match::_new()
{
	return (reg_ex_match *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RegExMatch")());
}
int64_t reg_ex_match::get_end(const variant name) const {
	return ___godot_icall_int_Variant(___mb.mb_get_end, (const object *) this, name);
}

int64_t reg_ex_match::get_group_count() const {
	return ___godot_icall_int(___mb.mb_get_group_count, (const object *) this);
}

dictionary reg_ex_match::get_names() const {
	return ___godot_icall_Dictionary(___mb.mb_get_names, (const object *) this);
}

int64_t reg_ex_match::get_start(const variant name) const {
	return ___godot_icall_int_Variant(___mb.mb_get_start, (const object *) this, name);
}

string reg_ex_match::get_string(const variant name) const {
	return ___godot_icall_String_Variant(___mb.mb_get_string, (const object *) this, name);
}

array reg_ex_match::get_strings() const {
	return ___godot_icall_Array(___mb.mb_get_strings, (const object *) this);
}

string reg_ex_match::get_subject() const {
	return ___godot_icall_String(___mb.mb_get_subject, (const object *) this);
}

}