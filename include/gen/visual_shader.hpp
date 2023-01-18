#ifndef GODOT_CPP_VISUALSHADER_HPP
#define GODOT_CPP_VISUALSHADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "shader.hpp"
namespace gd {

class visual_shader_node;

class visual_shader : public shader {
	struct ___method_bindings {
		godot_method_bind *mb__input_type_changed;
		godot_method_bind *mb__queue_update;
		godot_method_bind *mb__update_shader;
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_can_connect_nodes;
		godot_method_bind *mb_connect_nodes;
		godot_method_bind *mb_connect_nodes_forced;
		godot_method_bind *mb_disconnect_nodes;
		godot_method_bind *mb_get_graph_offset;
		godot_method_bind *mb_get_node;
		godot_method_bind *mb_get_node_connections;
		godot_method_bind *mb_get_node_list;
		godot_method_bind *mb_get_node_position;
		godot_method_bind *mb_get_valid_node_id;
		godot_method_bind *mb_is_node_connection;
		godot_method_bind *mb_remove_node;
		godot_method_bind *mb_set_graph_offset;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_node_position;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShader"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Type {
		TYPE_VERTEX = 0,
		TYPE_FRAGMENT = 1,
		TYPE_LIGHT = 2,
		TYPE_MAX = 3,
	};

	// constants
	const static int NODE_ID_INVALID = -1;
	const static int NODE_ID_OUTPUT = 0;


	static visual_shader *_new();

	// methods
	void _input_type_changed(const int64_t arg0, const int64_t arg1);
	void _queue_update();
	void _update_shader() const;
	void add_node(const int64_t type, const ref<visual_shader_node> node_, const vector2 position, const int64_t id);
	bool can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
	error connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	void connect_nodes_forced(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	void disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	vector2 get_graph_offset() const;
	ref<visual_shader_node> get_node(const int64_t type, const int64_t id) const;
	array get_node_connections(const int64_t type) const;
	pool_int_array get_node_list(const int64_t type) const;
	vector2 get_node_position(const int64_t type, const int64_t id) const;
	int64_t get_valid_node_id(const int64_t type) const;
	bool is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
	void remove_node(const int64_t type, const int64_t id);
	void set_graph_offset(const vector2 offset);
	void set_mode(const int64_t mode);
	void set_node_position(const int64_t type, const int64_t id, const vector2 position);

};

}

#endif