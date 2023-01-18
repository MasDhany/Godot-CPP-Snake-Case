#ifndef GODOT_CPP_VISUALSCRIPTSCENENODE_HPP
#define GODOT_CPP_VISUALSCRIPTSCENENODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_script_node.hpp"
namespace gd {


class visual_script_scene_node : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_node_path;
		godot_method_bind *mb_set_node_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptSceneNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptSceneNode"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script_scene_node *_new();

	// methods
	node_path get_node_path();
	void set_node_path(const node_path path_);

};

}

#endif