#ifndef GODOT_CPP_VISUALSHADERNODETEXTURE_HPP
#define GODOT_CPP_VISUALSHADERNODETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_texture.hpp"

#include "visual_shader_node.hpp"
namespace gd {

class texture;

class visual_shader_node_texture : public visual_shader_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_source;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_type;
		godot_method_bind *mb_set_source;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_texture_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextureType {
		TYPE_DATA = 0,
		TYPE_COLOR = 1,
		TYPE_NORMALMAP = 2,
	};
	enum Source {
		SOURCE_TEXTURE = 0,
		SOURCE_SCREEN = 1,
		SOURCE_2D_TEXTURE = 2,
		SOURCE_2D_NORMAL = 3,
		SOURCE_DEPTH = 4,
		SOURCE_PORT = 5,
	};

	// constants


	static visual_shader_node_texture *_new();

	// methods
	visual_shader_node_texture::Source get_source() const;
	ref<texture> get_texture() const;
	visual_shader_node_texture::TextureType get_texture_type() const;
	void set_source(const int64_t value);
	void set_texture(const ref<texture> value);
	void set_texture_type(const int64_t value);

};

}

#endif