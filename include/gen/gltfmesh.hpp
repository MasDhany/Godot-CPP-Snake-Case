#ifndef GODOT_CPP_GLTFMESH_HPP
#define GODOT_CPP_GLTFMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class array_mesh;

class gltfmesh : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_blend_weights;
		godot_method_bind *mb_get_instance_materials;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_set_blend_weights;
		godot_method_bind *mb_set_instance_materials;
		godot_method_bind *mb_set_mesh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	pool_real_array get_blend_weights();
	array get_instance_materials();
	ref<array_mesh> get_mesh();
	void set_blend_weights(const pool_real_array blend_weights);
	void set_instance_materials(const array instance_materials);
	void set_mesh(const ref<array_mesh> mesh_);

};

}

#endif