#ifndef GODOT_CPP_ANIMATIONNODEBLENDTREE_HPP
#define GODOT_CPP_ANIMATIONNODEBLENDTREE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "animation_root_node.hpp"
namespace gd {

class animation_node;

class animation_node_blend_tree : public animation_root_node {
	struct ___method_bindings {
		godot_method_bind *mb__node_changed;
		godot_method_bind *mb__tree_changed;
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_connect_node;
		godot_method_bind *mb_disconnect_node;
		godot_method_bind *mb_get_graph_offset;
		godot_method_bind *mb_get_node;
		godot_method_bind *mb_get_node_position;
		godot_method_bind *mb_has_node;
		godot_method_bind *mb_remove_node;
		godot_method_bind *mb_rename_node;
		godot_method_bind *mb_set_graph_offset;
		godot_method_bind *mb_set_node_position;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeBlendTree"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeBlendTree"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int CONNECTION_ERROR_CONNECTION_EXISTS = 5;
	const static int CONNECTION_ERROR_NO_INPUT = 1;
	const static int CONNECTION_ERROR_NO_INPUT_INDEX = 2;
	const static int CONNECTION_ERROR_NO_OUTPUT = 3;
	const static int CONNECTION_ERROR_SAME_NODE = 4;
	const static int CONNECTION_OK = 0;


	static animation_node_blend_tree *_new();

	// methods
	void _node_changed(const string node_);
	void _tree_changed();
	void add_node(const string name, const ref<animation_node> node_, const vector2 position = vector2(0, 0));
	void connect_node(const string input_node, const int64_t input_index, const string output_node);
	void disconnect_node(const string input_node, const int64_t input_index);
	vector2 get_graph_offset() const;
	ref<animation_node> get_node(const string name) const;
	vector2 get_node_position(const string name) const;
	bool has_node(const string name) const;
	void remove_node(const string name);
	void rename_node(const string name, const string new_name);
	void set_graph_offset(const vector2 offset);
	void set_node_position(const string name, const vector2 position);

};

}

#endif