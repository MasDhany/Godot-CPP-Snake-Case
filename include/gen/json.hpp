#ifndef GODOT_CPP_JSON_HPP
#define GODOT_CPP_JSON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class jsonparse_result;

class json : public object {
	static json *_singleton;

	json();

	struct ___method_bindings {
		godot_method_bind *mb_parse;
		godot_method_bind *mb_print;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline json *get_singleton()
	{
		if (!json::_singleton) {
			json::_singleton = new json;
		}
		return json::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "JSON"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JSON"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	ref<jsonparse_result> parse(const string json_);
	string print(const variant value, const string indent = "", const bool sort_keys = false);

};

}

#endif