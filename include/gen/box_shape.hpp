#ifndef GODOT_CPP_BOXSHAPE_HPP
#define GODOT_CPP_BOXSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "shape.hpp"
namespace gd {


class box_shape : public shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_extents;
		godot_method_bind *mb_set_extents;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BoxShape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BoxShape"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static box_shape *_new();

	// methods
	vector3 get_extents() const;
	void set_extents(const vector3 extents);

};

}

#endif