#ifndef GODOT_CPP_MESHTEXTURE_HPP
#define GODOT_CPP_MESHTEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture.hpp"
namespace gd {

class mesh;
class texture;

class mesh_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb_get_base_texture;
		godot_method_bind *mb_get_image_size;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_set_base_texture;
		godot_method_bind *mb_set_image_size;
		godot_method_bind *mb_set_mesh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MeshTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MeshTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static mesh_texture *_new();

	// methods
	ref<texture> get_base_texture() const;
	vector2 get_image_size() const;
	ref<mesh> get_mesh() const;
	void set_base_texture(const ref<texture> texture_);
	void set_image_size(const vector2 size);
	void set_mesh(const ref<mesh> mesh_);

};

}

#endif