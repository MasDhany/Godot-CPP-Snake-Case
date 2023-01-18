#ifndef GODOT_CPP_EDITORRESOURCEPREVIEWGENERATOR_HPP
#define GODOT_CPP_EDITORRESOURCEPREVIEWGENERATOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class resource;
class texture;

class editor_resource_preview_generator : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_can_generate_small_preview;
		godot_method_bind *mb_generate;
		godot_method_bind *mb_generate_from_path;
		godot_method_bind *mb_generate_small_preview_automatically;
		godot_method_bind *mb_handles;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorResourcePreviewGenerator"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorResourcePreviewGenerator"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool can_generate_small_preview();
	ref<texture> generate(const ref<resource> from, const vector2 size);
	ref<texture> generate_from_path(const string path_, const vector2 size);
	bool generate_small_preview_automatically();
	bool handles(const string type);

};

}

#endif