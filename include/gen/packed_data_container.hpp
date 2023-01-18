#ifndef GODOT_CPP_PACKEDDATACONTAINER_HPP
#define GODOT_CPP_PACKEDDATACONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class packed_data_container : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__iter_get;
		godot_method_bind *mb__iter_init;
		godot_method_bind *mb__iter_next;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_pack;
		godot_method_bind *mb_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedDataContainer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PackedDataContainer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static packed_data_container *_new();

	// methods
	pool_byte_array _get_data() const;
	variant _iter_get(const variant arg0);
	variant _iter_init(const array arg0);
	variant _iter_next(const array arg0);
	void _set_data(const pool_byte_array arg0);
	error pack(const variant value);
	int64_t size() const;

};

}

#endif