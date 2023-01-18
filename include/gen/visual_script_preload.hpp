#ifndef GODOT_CPP_VISUALSCRIPTPRELOAD_HPP
#define GODOT_CPP_VISUALSCRIPTPRELOAD_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_script_node.hpp"
namespace gd {

class resource;

class visual_script_preload : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_preload;
		godot_method_bind *mb_set_preload;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptPreload"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptPreload"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script_preload *_new();

	// methods
	ref<resource> get_preload() const;
	void set_preload(const ref<resource> resource_);

};

}

#endif