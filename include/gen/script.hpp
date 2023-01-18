#ifndef GODOT_CPP_SCRIPT_HPP
#define GODOT_CPP_SCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class object;
class script;

class script : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_can_instance;
		godot_method_bind *mb_get_base_script;
		godot_method_bind *mb_get_instance_base_type;
		godot_method_bind *mb_get_property_default_value;
		godot_method_bind *mb_get_script_constant_map;
		godot_method_bind *mb_get_script_method_list;
		godot_method_bind *mb_get_script_property_list;
		godot_method_bind *mb_get_script_signal_list;
		godot_method_bind *mb_get_source_code;
		godot_method_bind *mb_has_script_signal;
		godot_method_bind *mb_has_source_code;
		godot_method_bind *mb_instance_has;
		godot_method_bind *mb_is_tool;
		godot_method_bind *mb_reload;
		godot_method_bind *mb_set_source_code;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Script"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Script"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool can_instance() const;
	ref<script> get_base_script() const;
	string get_instance_base_type() const;
	variant get_property_default_value(const string property);
	dictionary get_script_constant_map();
	array get_script_method_list();
	array get_script_property_list();
	array get_script_signal_list();
	string get_source_code() const;
	bool has_script_signal(const string signal_name) const;
	bool has_source_code() const;
	bool instance_has(const object *base_object) const;
	bool is_tool() const;
	error reload(const bool keep_state = false);
	void set_source_code(const string source);

};

}

#endif