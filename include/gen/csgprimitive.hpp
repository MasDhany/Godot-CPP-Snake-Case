#ifndef GODOT_CPP_CSGPRIMITIVE_HPP
#define GODOT_CPP_CSGPRIMITIVE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "csgshape.hpp"
namespace gd {


class csgprimitive : public csgshape {
	struct ___method_bindings {
		godot_method_bind *mb_is_inverting_faces;
		godot_method_bind *mb_set_invert_faces;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CSGPrimitive"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CSGPrimitive"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool is_inverting_faces();
	void set_invert_faces(const bool invert_faces);

};

}

#endif