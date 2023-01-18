#ifndef GODOT_CPP_IMAGETEXTURE_HPP
#define GODOT_CPP_IMAGETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "image.hpp"
#include "image_texture.hpp"

#include "texture.hpp"
namespace gd {

class image;

class image_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb__reload_hook;
		godot_method_bind *mb_create;
		godot_method_bind *mb_create_from_image;
		godot_method_bind *mb_get_format;
		godot_method_bind *mb_get_lossy_storage_quality;
		godot_method_bind *mb_get_storage;
		godot_method_bind *mb_load;
		godot_method_bind *mb_set_data;
		godot_method_bind *mb_set_lossy_storage_quality;
		godot_method_bind *mb_set_size_override;
		godot_method_bind *mb_set_storage;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ImageTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ImageTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Storage {
		STORAGE_RAW = 0,
		STORAGE_COMPRESS_LOSSY = 1,
		STORAGE_COMPRESS_LOSSLESS = 2,
	};

	// constants


	static image_texture *_new();

	// methods
	void _reload_hook(const rid rid_);
	void create(const int64_t width, const int64_t height, const int64_t format, const int64_t flags = 7);
	void create_from_image(const ref<image> image_, const int64_t flags = 7);
	image::Format get_format() const;
	real_t get_lossy_storage_quality() const;
	image_texture::Storage get_storage() const;
	error load(const string path_);
	void set_data(const ref<image> image_);
	void set_lossy_storage_quality(const real_t quality);
	void set_size_override(const vector2 size);
	void set_storage(const int64_t mode);

};

}

#endif