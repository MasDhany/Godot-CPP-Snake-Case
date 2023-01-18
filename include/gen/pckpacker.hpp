#ifndef GODOT_CPP_PCKPACKER_HPP
#define GODOT_CPP_PCKPACKER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class pckpacker : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_add_file;
		godot_method_bind *mb_flush;
		godot_method_bind *mb_pck_start;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PCKPacker"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PCKPacker"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static pckpacker *_new();

	// methods
	error add_file(const string pck_path, const string source_path);
	error flush(const bool verbose = false);
	error pck_start(const string pck_name, const int64_t alignment = 0);

};

}

#endif