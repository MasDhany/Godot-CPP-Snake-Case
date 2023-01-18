#ifndef GODOT_CPP_QUADMESH_HPP
#define GODOT_CPP_QUADMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "primitive_mesh.hpp"
namespace gd {


class quad_mesh : public primitive_mesh {
	struct ___method_bindings {
		godot_method_bind *mb_get_center_offset;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_set_center_offset;
		godot_method_bind *mb_set_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "QuadMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "QuadMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static quad_mesh *_new();

	// methods
	vector3 get_center_offset() const;
	vector2 get_size() const;
	void set_center_offset(const vector3 center_offset);
	void set_size(const vector2 size);

};

}

#endif