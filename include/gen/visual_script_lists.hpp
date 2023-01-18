#ifndef GODOT_CPP_VISUALSCRIPTLISTS_HPP
#define GODOT_CPP_VISUALSCRIPTLISTS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_script_node.hpp"
namespace gd {


class visual_script_lists : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_add_input_data_port;
		godot_method_bind *mb_add_output_data_port;
		godot_method_bind *mb_remove_input_data_port;
		godot_method_bind *mb_remove_output_data_port;
		godot_method_bind *mb_set_input_data_port_name;
		godot_method_bind *mb_set_input_data_port_type;
		godot_method_bind *mb_set_output_data_port_name;
		godot_method_bind *mb_set_output_data_port_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptLists"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptLists"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_input_data_port(const int64_t type, const string name, const int64_t index);
	void add_output_data_port(const int64_t type, const string name, const int64_t index);
	void remove_input_data_port(const int64_t index);
	void remove_output_data_port(const int64_t index);
	void set_input_data_port_name(const int64_t index, const string name);
	void set_input_data_port_type(const int64_t index, const int64_t type);
	void set_output_data_port_name(const int64_t index, const string name);
	void set_output_data_port_type(const int64_t index, const int64_t type);

};

}

#endif