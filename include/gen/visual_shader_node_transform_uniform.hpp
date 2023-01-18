#ifndef GODOT_CPP_VISUALSHADERNODETRANSFORMUNIFORM_HPP
#define GODOT_CPP_VISUALSHADERNODETRANSFORMUNIFORM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_shader_node_uniform.hpp"
namespace gd {


class visual_shader_node_transform_uniform : public visual_shader_node_uniform {
	struct ___method_bindings {
		godot_method_bind *mb_get_default_value;
		godot_method_bind *mb_is_default_value_enabled;
		godot_method_bind *mb_set_default_value;
		godot_method_bind *mb_set_default_value_enabled;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTransformUniform"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeTransformUniform"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_shader_node_transform_uniform *_new();

	// methods
	transform get_default_value() const;
	bool is_default_value_enabled() const;
	void set_default_value(const transform value);
	void set_default_value_enabled(const bool enabled);

};

}

#endif