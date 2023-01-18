#ifndef GODOT_CPP_VISUALSHADERNODEIS_HPP
#define GODOT_CPP_VISUALSHADERNODEIS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_is.hpp"

#include "visual_shader_node.hpp"
namespace gd {


class visual_shader_node_is : public visual_shader_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_function;
		godot_method_bind *mb_set_function;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeIs"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeIs"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Function {
		FUNC_IS_INF = 0,
		FUNC_IS_NAN = 1,
	};

	// constants


	static visual_shader_node_is *_new();

	// methods
	visual_shader_node_is::Function get_function() const;
	void set_function(const int64_t func);

};

}

#endif