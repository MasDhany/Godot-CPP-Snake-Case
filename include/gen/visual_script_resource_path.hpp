#ifndef GODOT_CPP_VISUALSCRIPTRESOURCEPATH_HPP
#define GODOT_CPP_VISUALSCRIPTRESOURCEPATH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_script_node.hpp"
namespace gd {


class visual_script_resource_path : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_resource_path;
		godot_method_bind *mb_set_resource_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptResourcePath"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptResourcePath"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script_resource_path *_new();

	// methods
	string get_resource_path();
	void set_resource_path(const string path_);

};

}

#endif