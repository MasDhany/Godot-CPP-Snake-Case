#ifndef GODOT_CPP_VISUALSHADERNODETRANSFORMMULT_HPP
#define GODOT_CPP_VISUALSHADERNODETRANSFORMMULT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_transform_mult.hpp"

#include "visual_shader_node.hpp"
namespace gd {


class visual_shader_node_transform_mult : public visual_shader_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_operator;
		godot_method_bind *mb_set_operator;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTransformMult"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeTransformMult"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Operator {
		OP_AxB = 0,
		OP_BxA = 1,
		OP_AxB_COMP = 2,
		OP_BxA_COMP = 3,
	};

	// constants


	static visual_shader_node_transform_mult *_new();

	// methods
	visual_shader_node_transform_mult::Operator get_operator() const;
	void set_operator(const int64_t op);

};

}

#endif