#ifndef GODOT_CPP_MARSHALLS_HPP
#define GODOT_CPP_MARSHALLS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {


class marshalls : public object {
	static marshalls *_singleton;

	marshalls();

	struct ___method_bindings {
		godot_method_bind *mb_base64_to_raw;
		godot_method_bind *mb_base64_to_utf8;
		godot_method_bind *mb_base64_to_variant;
		godot_method_bind *mb_raw_to_base64;
		godot_method_bind *mb_utf8_to_base64;
		godot_method_bind *mb_variant_to_base64;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline marshalls *get_singleton()
	{
		if (!marshalls::_singleton) {
			marshalls::_singleton = new marshalls;
		}
		return marshalls::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "Marshalls"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Marshalls"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	pool_byte_array base64_to_raw(const string base64_str);
	string base64_to_utf8(const string base64_str);
	variant base64_to_variant(const string base64_str, const bool allow_objects = false);
	string raw_to_base64(const pool_byte_array array_);
	string utf8_to_base64(const string utf8_str);
	string variant_to_base64(const variant variant_, const bool full_objects = false);

};

}

#endif