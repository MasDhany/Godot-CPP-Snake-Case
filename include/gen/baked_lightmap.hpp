#ifndef GODOT_CPP_BAKEDLIGHTMAP_HPP
#define GODOT_CPP_BAKEDLIGHTMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "baked_lightmap.hpp"

#include "visual_instance.hpp"
namespace gd {

class baked_lightmap_data;
class node;
class sky;

class baked_lightmap : public visual_instance {
	struct ___method_bindings {
		godot_method_bind *mb_bake;
		godot_method_bind *mb_get_bake_quality;
		godot_method_bind *mb_get_bias;
		godot_method_bind *mb_get_bounce_indirect_energy;
		godot_method_bind *mb_get_bounces;
		godot_method_bind *mb_get_capture_cell_size;
		godot_method_bind *mb_get_capture_enabled;
		godot_method_bind *mb_get_capture_propagation;
		godot_method_bind *mb_get_capture_quality;
		godot_method_bind *mb_get_default_texels_per_unit;
		godot_method_bind *mb_get_environment_custom_color;
		godot_method_bind *mb_get_environment_custom_energy;
		godot_method_bind *mb_get_environment_custom_sky;
		godot_method_bind *mb_get_environment_custom_sky_rotation_degrees;
		godot_method_bind *mb_get_environment_min_light;
		godot_method_bind *mb_get_environment_mode;
		godot_method_bind *mb_get_extents;
		godot_method_bind *mb_get_image_path;
		godot_method_bind *mb_get_light_data;
		godot_method_bind *mb_get_max_atlas_size;
		godot_method_bind *mb_is_generate_atlas_enabled;
		godot_method_bind *mb_is_using_color;
		godot_method_bind *mb_is_using_denoiser;
		godot_method_bind *mb_is_using_hdr;
		godot_method_bind *mb_set_bake_quality;
		godot_method_bind *mb_set_bias;
		godot_method_bind *mb_set_bounce_indirect_energy;
		godot_method_bind *mb_set_bounces;
		godot_method_bind *mb_set_capture_cell_size;
		godot_method_bind *mb_set_capture_enabled;
		godot_method_bind *mb_set_capture_propagation;
		godot_method_bind *mb_set_capture_quality;
		godot_method_bind *mb_set_default_texels_per_unit;
		godot_method_bind *mb_set_environment_custom_color;
		godot_method_bind *mb_set_environment_custom_energy;
		godot_method_bind *mb_set_environment_custom_sky;
		godot_method_bind *mb_set_environment_custom_sky_rotation_degrees;
		godot_method_bind *mb_set_environment_min_light;
		godot_method_bind *mb_set_environment_mode;
		godot_method_bind *mb_set_extents;
		godot_method_bind *mb_set_generate_atlas;
		godot_method_bind *mb_set_image_path;
		godot_method_bind *mb_set_light_data;
		godot_method_bind *mb_set_max_atlas_size;
		godot_method_bind *mb_set_use_color;
		godot_method_bind *mb_set_use_denoiser;
		godot_method_bind *mb_set_use_hdr;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BakedLightmap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BakedLightmap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BakeQuality {
		BAKE_QUALITY_LOW = 0,
		BAKE_QUALITY_MEDIUM = 1,
		BAKE_QUALITY_HIGH = 2,
		BAKE_QUALITY_ULTRA = 3,
	};
	enum BakeError {
		BAKE_ERROR_OK = 0,
		BAKE_ERROR_NO_SAVE_PATH = 1,
		BAKE_ERROR_NO_MESHES = 2,
		BAKE_ERROR_CANT_CREATE_IMAGE = 3,
		BAKE_ERROR_LIGHTMAP_SIZE = 4,
		BAKE_ERROR_INVALID_MESH = 5,
		BAKE_ERROR_USER_ABORTED = 6,
		BAKE_ERROR_NO_LIGHTMAPPER = 7,
		BAKE_ERROR_NO_ROOT = 8,
	};
	enum EnvironmentMode {
		ENVIRONMENT_MODE_DISABLED = 0,
		ENVIRONMENT_MODE_SCENE = 1,
		ENVIRONMENT_MODE_CUSTOM_SKY = 2,
		ENVIRONMENT_MODE_CUSTOM_COLOR = 3,
	};

	// constants


	static baked_lightmap *_new();

	// methods
	baked_lightmap::BakeError bake(const node *from_node = nullptr, const string data_save_path = "");
	baked_lightmap::BakeQuality get_bake_quality() const;
	real_t get_bias() const;
	real_t get_bounce_indirect_energy() const;
	int64_t get_bounces() const;
	real_t get_capture_cell_size() const;
	bool get_capture_enabled() const;
	real_t get_capture_propagation() const;
	baked_lightmap::BakeQuality get_capture_quality() const;
	real_t get_default_texels_per_unit() const;
	color get_environment_custom_color() const;
	real_t get_environment_custom_energy() const;
	ref<sky> get_environment_custom_sky() const;
	vector3 get_environment_custom_sky_rotation_degrees() const;
	color get_environment_min_light() const;
	baked_lightmap::EnvironmentMode get_environment_mode() const;
	vector3 get_extents() const;
	string get_image_path() const;
	ref<baked_lightmap_data> get_light_data() const;
	int64_t get_max_atlas_size() const;
	bool is_generate_atlas_enabled() const;
	bool is_using_color() const;
	bool is_using_denoiser() const;
	bool is_using_hdr() const;
	void set_bake_quality(const int64_t quality);
	void set_bias(const real_t bias);
	void set_bounce_indirect_energy(const real_t bounce_indirect_energy);
	void set_bounces(const int64_t bounces);
	void set_capture_cell_size(const real_t capture_cell_size);
	void set_capture_enabled(const bool enabled);
	void set_capture_propagation(const real_t propagation);
	void set_capture_quality(const int64_t capture_quality);
	void set_default_texels_per_unit(const real_t texels);
	void set_environment_custom_color(const color color_);
	void set_environment_custom_energy(const real_t energy);
	void set_environment_custom_sky(const ref<sky> sky_);
	void set_environment_custom_sky_rotation_degrees(const vector3 rotation);
	void set_environment_min_light(const color min_light);
	void set_environment_mode(const int64_t mode);
	void set_extents(const vector3 extents);
	void set_generate_atlas(const bool enabled);
	void set_image_path(const string image_path);
	void set_light_data(const ref<baked_lightmap_data> data);
	void set_max_atlas_size(const int64_t max_atlas_size);
	void set_use_color(const bool use_denoiser);
	void set_use_denoiser(const bool use_denoiser);
	void set_use_hdr(const bool use_denoiser);

};

}

#endif