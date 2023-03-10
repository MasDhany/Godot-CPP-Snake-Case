#ifndef GODOT_CPP_TEXTURELAYERED_HPP
#define GODOT_CPP_TEXTURELAYERED_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "image.hpp"

#include "resource.hpp"
namespace gd {

class image;

class texture_layered : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_data;
		godot_method_bind *mb__set_data;
		godot_method_bind *mb_get_depth;
		godot_method_bind *mb_get_flags;
		godot_method_bind *mb_get_format;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_layer_data;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_set_data_partial;
		godot_method_bind *mb_set_flags;
		godot_method_bind *mb_set_layer_data;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TextureLayered"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TextureLayered"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_MIPMAPS = 1,
		FLAG_REPEAT = 2,
		FLAGS_DEFAULT_TEXTURE_3D = 4,
		FLAG_FILTER = 4,
		FLAGS_DEFAULT_TEXTURE_ARRAY = 7,
		FLAG_ANISOTROPIC_FILTER = 8,
	};

	// constants

	// methods
	dictionary _get_data() const;
	void _set_data(const dictionary data);
	int64_t get_depth() const;
	int64_t get_flags() const;
	image::Format get_format() const;
	int64_t get_height() const;
	ref<image> get_layer_data(const int64_t layer) const;
	int64_t get_width() const;
	void set_data_partial(const ref<image> image_, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap = 0);
	void set_flags(const int64_t flags);
	void set_layer_data(const ref<image> image_, const int64_t layer);

};

}

#endif