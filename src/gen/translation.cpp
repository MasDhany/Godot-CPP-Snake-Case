#include "translation.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


translation::___method_bindings translation::___mb = {};

void *translation::_detail_class_tag = nullptr;

void translation::___init_method_bindings() {
	___mb.mb__get_message = gd::api->godot_method_bind_get_method("Translation", "_get_message");
	___mb.mb__get_messages = gd::api->godot_method_bind_get_method("Translation", "_get_messages");
	___mb.mb__set_messages = gd::api->godot_method_bind_get_method("Translation", "_set_messages");
	___mb.mb_add_message = gd::api->godot_method_bind_get_method("Translation", "add_message");
	___mb.mb_erase_message = gd::api->godot_method_bind_get_method("Translation", "erase_message");
	___mb.mb_get_locale = gd::api->godot_method_bind_get_method("Translation", "get_locale");
	___mb.mb_get_message = gd::api->godot_method_bind_get_method("Translation", "get_message");
	___mb.mb_get_message_count = gd::api->godot_method_bind_get_method("Translation", "get_message_count");
	___mb.mb_get_message_list = gd::api->godot_method_bind_get_method("Translation", "get_message_list");
	___mb.mb_set_locale = gd::api->godot_method_bind_get_method("Translation", "set_locale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Translation");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

translation *translation::_new()
{
	return (translation *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Translation")());
}
string translation::_get_message(const string src_message) {
	return ___godot_icall_String_String(___mb.mb__get_message, (const object *) this, src_message);
}

pool_string_array translation::_get_messages() const {
	return ___godot_icall_PoolStringArray(___mb.mb__get_messages, (const object *) this);
}

void translation::_set_messages(const pool_string_array arg0) {
	___godot_icall_void_PoolStringArray(___mb.mb__set_messages, (const object *) this, arg0);
}

void translation::add_message(const string src_message, const string xlated_message) {
	___godot_icall_void_String_String(___mb.mb_add_message, (const object *) this, src_message, xlated_message);
}

void translation::erase_message(const string src_message) {
	___godot_icall_void_String(___mb.mb_erase_message, (const object *) this, src_message);
}

string translation::get_locale() const {
	return ___godot_icall_String(___mb.mb_get_locale, (const object *) this);
}

string translation::get_message(const string src_message) const {
	return ___godot_icall_String_String(___mb.mb_get_message, (const object *) this, src_message);
}

int64_t translation::get_message_count() const {
	return ___godot_icall_int(___mb.mb_get_message_count, (const object *) this);
}

pool_string_array translation::get_message_list() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_message_list, (const object *) this);
}

void translation::set_locale(const string locale) {
	___godot_icall_void_String(___mb.mb_set_locale, (const object *) this, locale);
}

}