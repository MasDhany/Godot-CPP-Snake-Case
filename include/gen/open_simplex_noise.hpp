#ifndef GODOT_CPP_OPENSIMPLEXNOISE_HPP
#define GODOT_CPP_OPENSIMPLEXNOISE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class image;

class open_simplex_noise : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_image;
		godot_method_bind *mb_get_lacunarity;
		godot_method_bind *mb_get_noise_1d;
		godot_method_bind *mb_get_noise_2d;
		godot_method_bind *mb_get_noise_2dv;
		godot_method_bind *mb_get_noise_3d;
		godot_method_bind *mb_get_noise_3dv;
		godot_method_bind *mb_get_noise_4d;
		godot_method_bind *mb_get_octaves;
		godot_method_bind *mb_get_period;
		godot_method_bind *mb_get_persistence;
		godot_method_bind *mb_get_seamless_image;
		godot_method_bind *mb_get_seed;
		godot_method_bind *mb_set_lacunarity;
		godot_method_bind *mb_set_octaves;
		godot_method_bind *mb_set_period;
		godot_method_bind *mb_set_persistence;
		godot_method_bind *mb_set_seed;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OpenSimplexNoise"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OpenSimplexNoise"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static open_simplex_noise *_new();

	// methods
	ref<image> get_image(const int64_t width, const int64_t height, const vector2 noise_offset = vector2(0, 0)) const;
	real_t get_lacunarity() const;
	real_t get_noise_1d(const real_t x) const;
	real_t get_noise_2d(const real_t x, const real_t y) const;
	real_t get_noise_2dv(const vector2 pos) const;
	real_t get_noise_3d(const real_t x, const real_t y, const real_t z) const;
	real_t get_noise_3dv(const vector3 pos) const;
	real_t get_noise_4d(const real_t x, const real_t y, const real_t z, const real_t w) const;
	int64_t get_octaves() const;
	real_t get_period() const;
	real_t get_persistence() const;
	ref<image> get_seamless_image(const int64_t size) const;
	int64_t get_seed() const;
	void set_lacunarity(const real_t lacunarity);
	void set_octaves(const int64_t octave_count);
	void set_period(const real_t period);
	void set_persistence(const real_t persistence);
	void set_seed(const int64_t seed);

};

}

#endif