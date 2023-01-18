#ifndef GODOT_CPP_VISUALSCRIPTEDITOR_HPP
#define GODOT_CPP_VISUALSCRIPTEDITOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class script;

class visual_script_editor : public object {
	static visual_script_editor *_singleton;

	visual_script_editor();

	struct ___method_bindings {
		godot_method_bind *mb_add_custom_node;
		godot_method_bind *mb_remove_custom_node;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline visual_script_editor *get_singleton()
	{
		if (!visual_script_editor::_singleton) {
			visual_script_editor::_singleton = new visual_script_editor;
		}
		return visual_script_editor::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "VisualScriptEditor"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptEditor"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_custom_node(const string name, const string category, const ref<script> script_);
	void remove_custom_node(const string name, const string category);

};

}

#endif