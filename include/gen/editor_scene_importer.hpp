#ifndef GODOT_CPP_EDITORSCENEIMPORTER_HPP
#define GODOT_CPP_EDITORSCENEIMPORTER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class animation;
class node;

class editor_scene_importer : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__get_extensions;
		godot_method_bind *mb__get_import_flags;
		godot_method_bind *mb__import_animation;
		godot_method_bind *mb__import_scene;
		godot_method_bind *mb_import_animation_from_other_importer;
		godot_method_bind *mb_import_scene_from_other_importer;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSceneImporter"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSceneImporter"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int IMPORT_ANIMATION = 2;
	const static int IMPORT_ANIMATION_DETECT_LOOP = 4;
	const static int IMPORT_ANIMATION_FORCE_ALL_TRACKS_IN_ALL_CLIPS = 16;
	const static int IMPORT_ANIMATION_KEEP_VALUE_TRACKS = 32;
	const static int IMPORT_ANIMATION_OPTIMIZE = 8;
	const static int IMPORT_FAIL_ON_MISSING_DEPENDENCIES = 512;
	const static int IMPORT_GENERATE_TANGENT_ARRAYS = 256;
	const static int IMPORT_MATERIALS_IN_INSTANCES = 1024;
	const static int IMPORT_SCENE = 1;

	// methods
	array _get_extensions();
	int64_t _get_import_flags();
	ref<animation> _import_animation(const string path_, const int64_t flags, const int64_t bake_fps);
	node *_import_scene(const string path_, const int64_t flags, const int64_t bake_fps);
	ref<animation> import_animation_from_other_importer(const string path_, const int64_t flags, const int64_t bake_fps);
	node *import_scene_from_other_importer(const string path_, const int64_t flags, const int64_t bake_fps, const int64_t compress_flags);

};

}

#endif