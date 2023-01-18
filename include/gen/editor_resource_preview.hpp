#ifndef GODOT_CPP_EDITORRESOURCEPREVIEW_HPP
#define GODOT_CPP_EDITORRESOURCEPREVIEW_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class editor_resource_preview_generator;
class object;
class resource;
class texture;

class editor_resource_preview : public node {
	struct ___method_bindings {
		godot_method_bind *mb__preview_ready;
		godot_method_bind *mb_add_preview_generator;
		godot_method_bind *mb_check_for_invalidation;
		godot_method_bind *mb_queue_edited_resource_preview;
		godot_method_bind *mb_queue_resource_preview;
		godot_method_bind *mb_remove_preview_generator;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorResourcePreview"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorResourcePreview"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _preview_ready(const string arg0, const ref<texture> arg1, const ref<texture> arg2, const int64_t arg3, const string arg4, const variant arg5);
	void add_preview_generator(const ref<editor_resource_preview_generator> generator);
	void check_for_invalidation(const string path_);
	void queue_edited_resource_preview(const ref<resource> resource_, const object *receiver, const string receiver_func, const variant userdata);
	void queue_resource_preview(const string path_, const object *receiver, const string receiver_func, const variant userdata);
	void remove_preview_generator(const ref<editor_resource_preview_generator> generator);

};

}

#endif