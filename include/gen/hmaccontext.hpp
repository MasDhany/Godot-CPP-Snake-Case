#ifndef GODOT_CPP_HMACCONTEXT_HPP
#define GODOT_CPP_HMACCONTEXT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class hmaccontext : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_finish;
		godot_method_bind *mb_start;
		godot_method_bind *mb_update;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "HMACContext"; }
	static inline const char *___get_godot_class_name() { return (const char *) "HMACContext"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static hmaccontext *_new();

	// methods
	pool_byte_array finish();
	error start(const int64_t hash_type, const pool_byte_array key);
	error update(const pool_byte_array data);

};

}

#endif