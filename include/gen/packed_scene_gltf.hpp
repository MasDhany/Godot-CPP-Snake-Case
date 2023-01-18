#ifndef GODOT_CPP_PACKEDSCENEGLTF_HPP
#define GODOT_CPP_PACKEDSCENEGLTF_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "packed_scene.hpp"
namespace gd {

class gltfstate;
class node;

class packed_scene_gltf : public packed_scene {
	struct ___method_bindings {
		godot_method_bind *mb_export_gltf;
		godot_method_bind *mb_import_gltf_scene;
		godot_method_bind *mb_pack_gltf;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedSceneGLTF"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PackedSceneGLTF"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static packed_scene_gltf *_new();

	// methods
	error export_gltf(const node *node_, const string path_, const int64_t flags = 0, const real_t bake_fps = 1000);
	node *import_gltf_scene(const string path_, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const ref<gltfstate> state = nullptr);
	void pack_gltf(const string path_, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const ref<gltfstate> state = nullptr);

};

}

#endif