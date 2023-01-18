#ifndef GODOT_CPP_VISUALSHADERNODECUBEMAP_HPP
#define GODOT_CPP_VISUALSHADERNODECUBEMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_shader_node_cube_map.hpp"

#include "visual_shader_node.hpp"
namespace gd {

class cube_map;

class visual_shader_node_cube_map : public visual_shader_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_cube_map;
		godot_method_bind *mb_get_source;
		godot_method_bind *mb_get_texture_type;
		godot_method_bind *mb_set_cube_map;
		godot_method_bind *mb_set_source;
		godot_method_bind *mb_set_texture_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeCubeMap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeCubeMap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextureType {
		TYPE_DATA = 0,
		TYPE_COLOR = 1,
		TYPE_NORMALMAP = 2,
	};
	enum Source {
		SOURCE_TEXTURE = 0,
		SOURCE_PORT = 1,
	};

	// constants


	static visual_shader_node_cube_map *_new();

	// methods
	ref<cube_map> get_cube_map() const;
	visual_shader_node_cube_map::Source get_source() const;
	visual_shader_node_cube_map::TextureType get_texture_type() const;
	void set_cube_map(const ref<cube_map> value);
	void set_source(const int64_t value);
	void set_texture_type(const int64_t value);

};

}

#endif