#ifndef GODOT_CPP_PLANESHAPE_HPP
#define GODOT_CPP_PLANESHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "shape.hpp"
namespace gd {


class plane_shape : public shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_plane;
		godot_method_bind *mb_set_plane;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PlaneShape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PlaneShape"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static plane_shape *_new();

	// methods
	plane get_plane() const;
	void set_plane(const plane plane_);

};

}

#endif