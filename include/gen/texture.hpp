#ifndef GODOT_CPP_TEXTURE_HPP
#define GODOT_CPP_TEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class image;
class texture;

class texture : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_draw;
		godot_method_bind *mb_draw_rect;
		godot_method_bind *mb_draw_rect_region;
		godot_method_bind *mb_get_data;
		godot_method_bind *mb_get_flags;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_has_alpha;
		godot_method_bind *mb_set_flags;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Texture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Texture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_MIPMAPS = 1,
		FLAG_REPEAT = 2,
		FLAG_FILTER = 4,
		FLAGS_DEFAULT = 7,
		FLAG_ANISOTROPIC_FILTER = 8,
		FLAG_CONVERT_TO_LINEAR = 16,
		FLAG_MIRRORED_REPEAT = 32,
		FLAG_VIDEO_SURFACE = 2048,
	};

	// constants

	// methods
	void draw(const rid canvas_item_, const vector2 position, const color modulate = color(1,1,1,1), const bool transpose = false, const ref<texture> normal_map = nullptr) const;
	void draw_rect(const rid canvas_item_, const rect2 rect, const bool tile, const color modulate = color(1,1,1,1), const bool transpose = false, const ref<texture> normal_map = nullptr) const;
	void draw_rect_region(const rid canvas_item_, const rect2 rect, const rect2 src_rect, const color modulate = color(1,1,1,1), const bool transpose = false, const ref<texture> normal_map = nullptr, const bool clip_uv = true) const;
	ref<image> get_data() const;
	int64_t get_flags() const;
	int64_t get_height() const;
	vector2 get_size() const;
	int64_t get_width() const;
	bool has_alpha() const;
	void set_flags(const int64_t flags);

};

}

#endif