#ifndef GODOT_CPP_ATLASTEXTURE_HPP
#define GODOT_CPP_ATLASTEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture.hpp"
namespace gd {

class texture;

class atlas_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb_get_atlas;
		godot_method_bind *mb_get_margin;
		godot_method_bind *mb_get_region;
		godot_method_bind *mb_has_filter_clip;
		godot_method_bind *mb_set_atlas;
		godot_method_bind *mb_set_filter_clip;
		godot_method_bind *mb_set_margin;
		godot_method_bind *mb_set_region;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AtlasTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AtlasTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static atlas_texture *_new();

	// methods
	ref<texture> get_atlas() const;
	rect2 get_margin() const;
	rect2 get_region() const;
	bool has_filter_clip() const;
	void set_atlas(const ref<texture> atlas);
	void set_filter_clip(const bool enable);
	void set_margin(const rect2 margin);
	void set_region(const rect2 region);

};

}

#endif