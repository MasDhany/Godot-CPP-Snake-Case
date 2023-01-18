#ifndef GODOT_CPP_TRANSLATION_HPP
#define GODOT_CPP_TRANSLATION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class translation : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_message;
		godot_method_bind *mb__get_messages;
		godot_method_bind *mb__set_messages;
		godot_method_bind *mb_add_message;
		godot_method_bind *mb_erase_message;
		godot_method_bind *mb_get_locale;
		godot_method_bind *mb_get_message;
		godot_method_bind *mb_get_message_count;
		godot_method_bind *mb_get_message_list;
		godot_method_bind *mb_set_locale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Translation"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Translation"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static translation *_new();

	// methods
	string _get_message(const string src_message);
	pool_string_array _get_messages() const;
	void _set_messages(const pool_string_array arg0);
	void add_message(const string src_message, const string xlated_message);
	void erase_message(const string src_message);
	string get_locale() const;
	string get_message(const string src_message) const;
	int64_t get_message_count() const;
	pool_string_array get_message_list() const;
	void set_locale(const string locale);

};

}

#endif