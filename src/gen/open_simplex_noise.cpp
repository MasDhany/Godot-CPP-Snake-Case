#include "open_simplex_noise.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


open_simplex_noise::___method_bindings open_simplex_noise::___mb = {};

void *open_simplex_noise::_detail_class_tag = nullptr;

void open_simplex_noise::___init_method_bindings() {
	___mb.mb_get_image = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_image");
	___mb.mb_get_lacunarity = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_lacunarity");
	___mb.mb_get_noise_1d = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_1d");
	___mb.mb_get_noise_2d = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_2d");
	___mb.mb_get_noise_2dv = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_2dv");
	___mb.mb_get_noise_3d = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_3d");
	___mb.mb_get_noise_3dv = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_3dv");
	___mb.mb_get_noise_4d = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_4d");
	___mb.mb_get_octaves = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_octaves");
	___mb.mb_get_period = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_period");
	___mb.mb_get_persistence = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_persistence");
	___mb.mb_get_seamless_image = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_seamless_image");
	___mb.mb_get_seed = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "get_seed");
	___mb.mb_set_lacunarity = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "set_lacunarity");
	___mb.mb_set_octaves = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "set_octaves");
	___mb.mb_set_period = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "set_period");
	___mb.mb_set_persistence = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "set_persistence");
	___mb.mb_set_seed = gd::api->godot_method_bind_get_method("OpenSimplexNoise", "set_seed");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "OpenSimplexNoise");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

open_simplex_noise *open_simplex_noise::_new()
{
	return (open_simplex_noise *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"OpenSimplexNoise")());
}
ref<image> open_simplex_noise::get_image(const int64_t width, const int64_t height, const vector2 noise_offset) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_int_int_Vector2(___mb.mb_get_image, (const object *) this, width, height, noise_offset));
}

real_t open_simplex_noise::get_lacunarity() const {
	return ___godot_icall_float(___mb.mb_get_lacunarity, (const object *) this);
}

real_t open_simplex_noise::get_noise_1d(const real_t x) const {
	return ___godot_icall_float_float(___mb.mb_get_noise_1d, (const object *) this, x);
}

real_t open_simplex_noise::get_noise_2d(const real_t x, const real_t y) const {
	return ___godot_icall_float_float_float(___mb.mb_get_noise_2d, (const object *) this, x, y);
}

real_t open_simplex_noise::get_noise_2dv(const vector2 pos) const {
	return ___godot_icall_float_Vector2(___mb.mb_get_noise_2dv, (const object *) this, pos);
}

real_t open_simplex_noise::get_noise_3d(const real_t x, const real_t y, const real_t z) const {
	return ___godot_icall_float_float_float_float(___mb.mb_get_noise_3d, (const object *) this, x, y, z);
}

real_t open_simplex_noise::get_noise_3dv(const vector3 pos) const {
	return ___godot_icall_float_Vector3(___mb.mb_get_noise_3dv, (const object *) this, pos);
}

real_t open_simplex_noise::get_noise_4d(const real_t x, const real_t y, const real_t z, const real_t w) const {
	return ___godot_icall_float_float_float_float_float(___mb.mb_get_noise_4d, (const object *) this, x, y, z, w);
}

int64_t open_simplex_noise::get_octaves() const {
	return ___godot_icall_int(___mb.mb_get_octaves, (const object *) this);
}

real_t open_simplex_noise::get_period() const {
	return ___godot_icall_float(___mb.mb_get_period, (const object *) this);
}

real_t open_simplex_noise::get_persistence() const {
	return ___godot_icall_float(___mb.mb_get_persistence, (const object *) this);
}

ref<image> open_simplex_noise::get_seamless_image(const int64_t size) const {
	return ref<image>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_seamless_image, (const object *) this, size));
}

int64_t open_simplex_noise::get_seed() const {
	return ___godot_icall_int(___mb.mb_get_seed, (const object *) this);
}

void open_simplex_noise::set_lacunarity(const real_t lacunarity) {
	___godot_icall_void_float(___mb.mb_set_lacunarity, (const object *) this, lacunarity);
}

void open_simplex_noise::set_octaves(const int64_t octave_count) {
	___godot_icall_void_int(___mb.mb_set_octaves, (const object *) this, octave_count);
}

void open_simplex_noise::set_period(const real_t period) {
	___godot_icall_void_float(___mb.mb_set_period, (const object *) this, period);
}

void open_simplex_noise::set_persistence(const real_t persistence) {
	___godot_icall_void_float(___mb.mb_set_persistence, (const object *) this, persistence);
}

void open_simplex_noise::set_seed(const int64_t seed) {
	___godot_icall_void_int(___mb.mb_set_seed, (const object *) this, seed);
}

}