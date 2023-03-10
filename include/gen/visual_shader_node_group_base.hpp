#ifndef GODOT_CPP_VISUALSHADERNODEGROUPBASE_HPP
#define GODOT_CPP_VISUALSHADERNODEGROUPBASE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_shader_node.hpp"
namespace gd {


class visual_shader_node_group_base : public visual_shader_node {
	struct ___method_bindings {
		godot_method_bind *mb_add_input_port;
		godot_method_bind *mb_add_output_port;
		godot_method_bind *mb_clear_input_ports;
		godot_method_bind *mb_clear_output_ports;
		godot_method_bind *mb_get_free_input_port_id;
		godot_method_bind *mb_get_free_output_port_id;
		godot_method_bind *mb_get_input_port_count;
		godot_method_bind *mb_get_inputs;
		godot_method_bind *mb_get_output_port_count;
		godot_method_bind *mb_get_outputs;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_has_input_port;
		godot_method_bind *mb_has_output_port;
		godot_method_bind *mb_is_valid_port_name;
		godot_method_bind *mb_remove_input_port;
		godot_method_bind *mb_remove_output_port;
		godot_method_bind *mb_set_input_port_name;
		godot_method_bind *mb_set_input_port_type;
		godot_method_bind *mb_set_inputs;
		godot_method_bind *mb_set_output_port_name;
		godot_method_bind *mb_set_output_port_type;
		godot_method_bind *mb_set_outputs;
		godot_method_bind *mb_set_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeGroupBase"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeGroupBase"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_shader_node_group_base *_new();

	// methods
	void add_input_port(const int64_t id, const int64_t type, const string name);
	void add_output_port(const int64_t id, const int64_t type, const string name);
	void clear_input_ports();
	void clear_output_ports();
	int64_t get_free_input_port_id() const;
	int64_t get_free_output_port_id() const;
	int64_t get_input_port_count() const;
	string get_inputs() const;
	int64_t get_output_port_count() const;
	string get_outputs() const;
	vector2 get_size() const;
	bool has_input_port(const int64_t id) const;
	bool has_output_port(const int64_t id) const;
	bool is_valid_port_name(const string name) const;
	void remove_input_port(const int64_t id);
	void remove_output_port(const int64_t id);
	void set_input_port_name(const int64_t id, const string name);
	void set_input_port_type(const int64_t id, const int64_t type);
	void set_inputs(const string inputs);
	void set_output_port_name(const int64_t id, const string name);
	void set_output_port_type(const int64_t id, const int64_t type);
	void set_outputs(const string outputs);
	void set_size(const vector2 size);

};

}

#endif