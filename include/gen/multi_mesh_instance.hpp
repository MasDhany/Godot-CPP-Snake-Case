#ifndef GODOT_CPP_MULTIMESHINSTANCE_HPP
#define GODOT_CPP_MULTIMESHINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "geometry_instance.hpp"
namespace gd {

class multi_mesh;

class multi_mesh_instance : public geometry_instance {
	struct ___method_bindings {
		godot_method_bind *mb_get_multimesh;
		godot_method_bind *mb_set_multimesh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MultiMeshInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MultiMeshInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static multi_mesh_instance *_new();

	// methods
	ref<multi_mesh> get_multimesh() const;
	void set_multimesh(const ref<multi_mesh> multimesh);

};

}

#endif