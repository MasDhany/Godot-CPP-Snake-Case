#include "translation_server.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "translation.hpp"


namespace gd {


translation_server *translation_server::_singleton = NULL;


translation_server::translation_server() {
	_owner = gd::api->godot_global_get_singleton((char *) "TranslationServer");
}


translation_server::___method_bindings translation_server::___mb = {};

void *translation_server::_detail_class_tag = nullptr;

void translation_server::___init_method_bindings() {
	___mb.mb_add_translation = gd::api->godot_method_bind_get_method("TranslationServer", "add_translation");
	___mb.mb_clear = gd::api->godot_method_bind_get_method("TranslationServer", "clear");
	___mb.mb_get_loaded_locales = gd::api->godot_method_bind_get_method("TranslationServer", "get_loaded_locales");
	___mb.mb_get_locale = gd::api->godot_method_bind_get_method("TranslationServer", "get_locale");
	___mb.mb_get_locale_name = gd::api->godot_method_bind_get_method("TranslationServer", "get_locale_name");
	___mb.mb_remove_translation = gd::api->godot_method_bind_get_method("TranslationServer", "remove_translation");
	___mb.mb_set_locale = gd::api->godot_method_bind_get_method("TranslationServer", "set_locale");
	___mb.mb_translate = gd::api->godot_method_bind_get_method("TranslationServer", "translate");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TranslationServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void translation_server::add_translation(const ref<translation> translation_) {
	___godot_icall_void_Object(___mb.mb_add_translation, (const object *) this, translation_.ptr());
}

void translation_server::clear() {
	___godot_icall_void(___mb.mb_clear, (const object *) this);
}

array translation_server::get_loaded_locales() const {
	return ___godot_icall_Array(___mb.mb_get_loaded_locales, (const object *) this);
}

string translation_server::get_locale() const {
	return ___godot_icall_String(___mb.mb_get_locale, (const object *) this);
}

string translation_server::get_locale_name(const string locale) const {
	return ___godot_icall_String_String(___mb.mb_get_locale_name, (const object *) this, locale);
}

void translation_server::remove_translation(const ref<translation> translation_) {
	___godot_icall_void_Object(___mb.mb_remove_translation, (const object *) this, translation_.ptr());
}

void translation_server::set_locale(const string locale) {
	___godot_icall_void_String(___mb.mb_set_locale, (const object *) this, locale);
}

string translation_server::translate(const string message) const {
	return ___godot_icall_String_String(___mb.mb_translate, (const object *) this, message);
}

}