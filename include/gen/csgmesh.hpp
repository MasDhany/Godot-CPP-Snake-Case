#ifndef GODOT_CPP_CSGMESH_HPP
#define GODOT_CPP_CSGMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "csgprimitive.hpp"
namespace gd {

class material;
class mesh;

class csgmesh : public csgprimitive {
	struct ___method_bindings {
		godot_method_bind *mb__mesh_changed;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_mesh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CSGMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CSGMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static csgmesh *_new();

	// methods
	void _mesh_changed();
	ref<material> get_material() const;
	ref<mesh> get_mesh();
	void set_material(const ref<material> material_);
	void set_mesh(const ref<mesh> mesh_);

};

}

#endif