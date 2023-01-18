#ifndef GODOT_CPP_TRANSLATIONSERVER_HPP
#define GODOT_CPP_TRANSLATIONSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class translation;

class translation_server : public object {
	static translation_server *_singleton;

	translation_server();

	struct ___method_bindings {
		godot_method_bind *mb_add_translation;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_loaded_locales;
		godot_method_bind *mb_get_locale;
		godot_method_bind *mb_get_locale_name;
		godot_method_bind *mb_remove_translation;
		godot_method_bind *mb_set_locale;
		godot_method_bind *mb_translate;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline translation_server *get_singleton()
	{
		if (!translation_server::_singleton) {
			translation_server::_singleton = new translation_server;
		}
		return translation_server::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "TranslationServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TranslationServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_translation(const ref<translation> translation_);
	void clear();
	array get_loaded_locales() const;
	string get_locale() const;
	string get_locale_name(const string locale) const;
	void remove_translation(const ref<translation> translation_);
	void set_locale(const string locale);
	string translate(const string message) const;

};

}

#endif