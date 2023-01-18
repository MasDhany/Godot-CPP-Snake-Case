#ifndef GODOT_CPP_PRIMITIVEMESH_HPP
#define GODOT_CPP_PRIMITIVEMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "mesh.hpp"
namespace gd {

class material;

class primitive_mesh : public mesh {
	struct ___method_bindings {
		godot_method_bind *mb__request_update;
		godot_method_bind *mb__update;
		godot_method_bind *mb_get_custom_aabb;
		godot_method_bind *mb_get_flip_faces;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_mesh_arrays;
		godot_method_bind *mb_set_custom_aabb;
		godot_method_bind *mb_set_flip_faces;
		godot_method_bind *mb_set_material;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PrimitiveMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PrimitiveMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _request_update();
	void _update() const;
	aabb get_custom_aabb() const;
	bool get_flip_faces() const;
	ref<material> get_material() const;
	array get_mesh_arrays() const;
	void set_custom_aabb(const aabb aabb_);
	void set_flip_faces(const bool flip_faces);
	void set_material(const ref<material> material_);

};

}

#endif