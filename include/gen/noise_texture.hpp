#ifndef GODOT_CPP_NOISETEXTURE_HPP
#define GODOT_CPP_NOISETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "texture.hpp"
namespace gd {

class image;
class open_simplex_noise;

class noise_texture : public texture {
	struct ___method_bindings {
		godot_method_bind *mb__generate_texture;
		godot_method_bind *mb__queue_update;
		godot_method_bind *mb__thread_done;
		godot_method_bind *mb__update_texture;
		godot_method_bind *mb_get_bump_strength;
		godot_method_bind *mb_get_noise;
		godot_method_bind *mb_get_noise_offset;
		godot_method_bind *mb_get_seamless;
		godot_method_bind *mb_is_normalmap;
		godot_method_bind *mb_set_as_normalmap;
		godot_method_bind *mb_set_bump_strength;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_noise;
		godot_method_bind *mb_set_noise_offset;
		godot_method_bind *mb_set_seamless;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NoiseTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NoiseTexture"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static noise_texture *_new();

	// methods
	ref<image> _generate_texture();
	void _queue_update();
	void _thread_done(const ref<image> image_);
	void _update_texture();
	real_t get_bump_strength();
	ref<open_simplex_noise> get_noise();
	vector2 get_noise_offset() const;
	bool get_seamless();
	bool is_normalmap();
	void set_as_normalmap(const bool as_normalmap);
	void set_bump_strength(const real_t bump_strength);
	void set_height(const int64_t height);
	void set_noise(const ref<open_simplex_noise> noise);
	void set_noise_offset(const vector2 noise_offset);
	void set_seamless(const bool seamless);
	void set_width(const int64_t width);

};

}

#endif