#ifndef GODOT_CPP_VISUALSHADERNODESCALARUNIFORM_HPP
#define GODOT_CPP_VISUALSHADERNODESCALARUNIFORM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_scalar_uniform.hpp"

#include "visual_shader_node_uniform.hpp"
namespace gd {


class visual_shader_node_scalar_uniform : public visual_shader_node_uniform {
	struct ___method_bindings {
		godot_method_bind *mb_get_default_value;
		godot_method_bind *mb_get_hint;
		godot_method_bind *mb_get_max;
		godot_method_bind *mb_get_min;
		godot_method_bind *mb_get_step;
		godot_method_bind *mb_is_default_value_enabled;
		godot_method_bind *mb_set_default_value;
		godot_method_bind *mb_set_default_value_enabled;
		godot_method_bind *mb_set_hint;
		godot_method_bind *mb_set_max;
		godot_method_bind *mb_set_min;
		godot_method_bind *mb_set_step;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeScalarUniform"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeScalarUniform"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Hint {
		HINT_NONE = 0,
		HINT_RANGE = 1,
		HINT_RANGE_STEP = 2,
		HINT_MAX = 3,
	};

	// constants


	static visual_shader_node_scalar_uniform *_new();

	// methods
	real_t get_default_value() const;
	visual_shader_node_scalar_uniform::Hint get_hint() const;
	real_t get_max() const;
	real_t get_min() const;
	real_t get_step() const;
	bool is_default_value_enabled() const;
	void set_default_value(const real_t value);
	void set_default_value_enabled(const bool enabled);
	void set_hint(const int64_t hint);
	void set_max(const real_t value);
	void set_min(const real_t value);
	void set_step(const real_t value);

};

}

#endif