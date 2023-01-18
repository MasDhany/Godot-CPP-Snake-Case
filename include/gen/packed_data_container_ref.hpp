#ifndef GODOT_CPP_PACKEDDATACONTAINERREF_HPP
#define GODOT_CPP_PACKEDDATACONTAINERREF_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class packed_data_container_ref : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__is_dictionary;
		godot_method_bind *mb__iter_get;
		godot_method_bind *mb__iter_init;
		godot_method_bind *mb__iter_next;
		godot_method_bind *mb_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedDataContainerRef"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PackedDataContainerRef"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool _is_dictionary() const;
	variant _iter_get(const variant arg0);
	variant _iter_init(const array arg0);
	variant _iter_next(const array arg0);
	int64_t size() const;

};

}

#endif