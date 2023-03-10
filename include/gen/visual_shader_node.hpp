#ifndef GODOT_CPP_VISUALSHADERNODE_HPP
#define GODOT_CPP_VISUALSHADERNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class visual_shader_node : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_default_input_values;
		godot_method_bind *mb_get_input_port_default_value;
		godot_method_bind *mb_get_output_port_for_preview;
		godot_method_bind *mb_set_default_input_values;
		godot_method_bind *mb_set_input_port_default_value;
		godot_method_bind *mb_set_output_port_for_preview;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNode"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PortType {
		PORT_TYPE_SCALAR = 0,
		PORT_TYPE_VECTOR = 1,
		PORT_TYPE_BOOLEAN = 2,
		PORT_TYPE_TRANSFORM = 3,
		PORT_TYPE_SAMPLER = 4,
		PORT_TYPE_MAX = 5,
	};

	// constants

	// methods
	array get_default_input_values() const;
	variant get_input_port_default_value(const int64_t port) const;
	int64_t get_output_port_for_preview() const;
	void set_default_input_values(const array values);
	void set_input_port_default_value(const int64_t port, const variant value);
	void set_output_port_for_preview(const int64_t port);

};

}

#endif