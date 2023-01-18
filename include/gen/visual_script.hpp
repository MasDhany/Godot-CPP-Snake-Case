#ifndef GODOT_CPP_VISUALSCRIPT_HPP
#define GODOT_CPP_VISUALSCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "variant.hpp"

#include "script.hpp"
namespace gd {

class visual_script_node;

class visual_script : public script {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__node_ports_changed;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_add_custom_signal;
		godot_method_bind *mb_add_function;
		godot_method_bind *mb_add_node;
		godot_method_bind *mb_add_variable;
		godot_method_bind *mb_custom_signal_add_argument;
		godot_method_bind *mb_custom_signal_get_argument_count;
		godot_method_bind *mb_custom_signal_get_argument_name;
		godot_method_bind *mb_custom_signal_get_argument_type;
		godot_method_bind *mb_custom_signal_remove_argument;
		godot_method_bind *mb_custom_signal_set_argument_name;
		godot_method_bind *mb_custom_signal_set_argument_type;
		godot_method_bind *mb_custom_signal_swap_argument;
		godot_method_bind *mb_data_connect;
		godot_method_bind *mb_data_disconnect;
		godot_method_bind *mb_get_function_node_id;
		godot_method_bind *mb_get_function_scroll;
		godot_method_bind *mb_get_node;
		godot_method_bind *mb_get_node_position;
		godot_method_bind *mb_get_variable_default_value;
		godot_method_bind *mb_get_variable_export;
		godot_method_bind *mb_get_variable_info;
		godot_method_bind *mb_has_custom_signal;
		godot_method_bind *mb_has_data_connection;
		godot_method_bind *mb_has_function;
		godot_method_bind *mb_has_node;
		godot_method_bind *mb_has_sequence_connection;
		godot_method_bind *mb_has_variable;
		godot_method_bind *mb_remove_custom_signal;
		godot_method_bind *mb_remove_function;
		godot_method_bind *mb_remove_node;
		godot_method_bind *mb_remove_variable;
		godot_method_bind *mb_rename_custom_signal;
		godot_method_bind *mb_rename_function;
		godot_method_bind *mb_rename_variable;
		godot_method_bind *mb_sequence_connect;
		godot_method_bind *mb_sequence_disconnect;
		godot_method_bind *mb_set_function_scroll;
		godot_method_bind *mb_set_instance_base_type;
		godot_method_bind *mb_set_node_position;
		godot_method_bind *mb_set_variable_default_value;
		godot_method_bind *mb_set_variable_export;
		godot_method_bind *mb_set_variable_info;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScript"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScript"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script *_new();

	// methods
	dictionary _get_data() const;
	void _node_ports_changed(const int64_t arg0);
	void _set_data(const dictionary data);
	void add_custom_signal(const string name);
	void add_function(const string name);
	void add_node(const string func, const int64_t id, const ref<visual_script_node> node_, const vector2 position = vector2(0, 0));
	void add_variable(const string name, const variant default_value = variant(), const bool _export = false);
	void custom_signal_add_argument(const string name, const int64_t type, const string argname, const int64_t index = -1);
	int64_t custom_signal_get_argument_count(const string name) const;
	string custom_signal_get_argument_name(const string name, const int64_t argidx) const;
	variant::Type custom_signal_get_argument_type(const string name, const int64_t argidx) const;
	void custom_signal_remove_argument(const string name, const int64_t argidx);
	void custom_signal_set_argument_name(const string name, const int64_t argidx, const string argname);
	void custom_signal_set_argument_type(const string name, const int64_t argidx, const int64_t type);
	void custom_signal_swap_argument(const string name, const int64_t argidx, const int64_t withidx);
	void data_connect(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	void data_disconnect(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	int64_t get_function_node_id(const string name) const;
	vector2 get_function_scroll(const string name) const;
	ref<visual_script_node> get_node(const string func, const int64_t id) const;
	vector2 get_node_position(const string func, const int64_t id) const;
	variant get_variable_default_value(const string name) const;
	bool get_variable_export(const string name) const;
	dictionary get_variable_info(const string name) const;
	bool has_custom_signal(const string name) const;
	bool has_data_connection(const string func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
	bool has_function(const string name) const;
	bool has_node(const string func, const int64_t id) const;
	bool has_sequence_connection(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node) const;
	bool has_variable(const string name) const;
	void remove_custom_signal(const string name);
	void remove_function(const string name);
	void remove_node(const string func, const int64_t id);
	void remove_variable(const string name);
	void rename_custom_signal(const string name, const string new_name);
	void rename_function(const string name, const string new_name);
	void rename_variable(const string name, const string new_name);
	void sequence_connect(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node);
	void sequence_disconnect(const string func, const int64_t from_node, const int64_t from_output, const int64_t to_node);
	void set_function_scroll(const string name, const vector2 ofs);
	void set_instance_base_type(const string type);
	void set_node_position(const string func, const int64_t id, const vector2 position);
	void set_variable_default_value(const string name, const variant value);
	void set_variable_export(const string name, const bool enable);
	void set_variable_info(const string name, const dictionary value);

};

}

#endif