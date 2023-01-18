#ifndef GODOT_CPP_EDITORSELECTION_HPP
#define GODOT_CPP_EDITORSELECTION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class node;

class editor_selection : public object {
	struct ___method_bindings {
		godot_method_bind *mb__emit_change;
		godot_method_bind *mb__node_removed;
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_get_selected_nodes;
		godot_method_bind *mb_get_transformable_selected_nodes;
		godot_method_bind *mb_remove_node;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSelection"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSelection"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _emit_change();
	void _node_removed(const node *arg0);
	void add_node(const node *node_);
	void clear();
	array get_selected_nodes();
	array get_transformable_selected_nodes();
	void remove_node(const node *node_);

};

}

#endif