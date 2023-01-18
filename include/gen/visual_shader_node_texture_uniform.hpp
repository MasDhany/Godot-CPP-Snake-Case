#ifndef GODOT_CPP_VISUALSHADERNODETEXTUREUNIFORM_HPP
#define GODOT_CPP_VISUALSHADERNODETEXTUREUNIFORM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_texture_uniform.hpp"

#include "visual_shader_node_uniform.hpp"
namespace gd {


class visual_shader_node_texture_uniform : public visual_shader_node_uniform {
	struct ___method_bindings {
		godot_method_bind *mb_get_color_default;
		godot_method_bind *mb_get_texture_type;
		godot_method_bind *mb_set_color_default;
		godot_method_bind *mb_set_texture_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTextureUniform"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeTextureUniform"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextureType {
		TYPE_DATA = 0,
		TYPE_COLOR = 1,
		TYPE_NORMALMAP = 2,
		TYPE_ANISO = 3,
	};
	enum ColorDefault {
		COLOR_DEFAULT_WHITE = 0,
		COLOR_DEFAULT_BLACK = 1,
	};

	// constants


	static visual_shader_node_texture_uniform *_new();

	// methods
	visual_shader_node_texture_uniform::ColorDefault get_color_default() const;
	visual_shader_node_texture_uniform::TextureType get_texture_type() const;
	void set_color_default(const int64_t type);
	void set_texture_type(const int64_t type);

};

}

#endif