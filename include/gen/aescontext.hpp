#ifndef GODOT_CPP_AESCONTEXT_HPP
#define GODOT_CPP_AESCONTEXT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class aescontext : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_finish;
		godot_method_bind *mb_get_iv_state;
		godot_method_bind *mb_start;
		godot_method_bind *mb_update;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AESContext"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AESContext"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_ECB_ENCRYPT = 0,
		MODE_ECB_DECRYPT = 1,
		MODE_CBC_ENCRYPT = 2,
		MODE_CBC_DECRYPT = 3,
		MODE_MAX = 4,
	};

	// constants


	static aescontext *_new();

	// methods
	void finish();
	pool_byte_array get_iv_state();
	error start(const int64_t mode, const pool_byte_array key, const pool_byte_array iv = pool_byte_array());
	pool_byte_array update(const pool_byte_array src);

};

}

#endif