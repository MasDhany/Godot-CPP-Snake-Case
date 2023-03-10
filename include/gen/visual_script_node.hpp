#ifndef GODOT_CPP_VISUALSCRIPTNODE_HPP
#define GODOT_CPP_VISUALSCRIPTNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class visual_script;

class visual_script_node : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_default_input_values;
		godot_method_bind *mb__set_default_input_values;
		godot_method_bind *mb_get_default_input_value;
		godot_method_bind *mb_get_visual_script;
		godot_method_bind *mb_ports_changed_notify;
		godot_method_bind *mb_set_default_input_value;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptNode"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	array _get_default_input_values() const;
	void _set_default_input_values(const array values);
	variant get_default_input_value(const int64_t port_idx) const;
	ref<visual_script> get_visual_script() const;
	void ports_changed_notify();
	void set_default_input_value(const int64_t port_idx, const variant value);

};

}

#endif