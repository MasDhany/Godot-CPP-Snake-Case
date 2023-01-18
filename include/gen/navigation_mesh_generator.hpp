#ifndef GODOT_CPP_NAVIGATIONMESHGENERATOR_HPP
#define GODOT_CPP_NAVIGATIONMESHGENERATOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class navigation_mesh;
class node;

class navigation_mesh_generator : public object {
	static navigation_mesh_generator *_singleton;

	navigation_mesh_generator();

	struct ___method_bindings {
		godot_method_bind *mb_bake;
		godot_method_bind *mb_clear;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline navigation_mesh_generator *get_singleton()
	{
		if (!navigation_mesh_generator::_singleton) {
			navigation_mesh_generator::_singleton = new navigation_mesh_generator;
		}
		return navigation_mesh_generator::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "NavigationMeshGenerator"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationMeshGenerator"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void bake(const ref<navigation_mesh> nav_mesh, const node *root_node);
	void clear(const ref<navigation_mesh> nav_mesh);

};

}

#endif