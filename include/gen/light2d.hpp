#ifndef GODOT_CPP_LIGHT2D_HPP
#define GODOT_CPP_LIGHT2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "light2d.hpp"

#include "node2d.hpp"
namespace gd {

class texture;

class light2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_energy;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_item_cull_mask;
		godot_method_bind *mb_get_item_shadow_cull_mask;
		godot_method_bind *mb_get_layer_range_max;
		godot_method_bind *mb_get_layer_range_min;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_get_shadow_buffer_size;
		godot_method_bind *mb_get_shadow_color;
		godot_method_bind *mb_get_shadow_filter;
		godot_method_bind *mb_get_shadow_gradient_length;
		godot_method_bind *mb_get_shadow_smooth;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_offset;
		godot_method_bind *mb_get_texture_scale;
		godot_method_bind *mb_get_z_range_max;
		godot_method_bind *mb_get_z_range_min;
		godot_method_bind *mb_is_editor_only;
		godot_method_bind *mb_is_enabled;
		godot_method_bind *mb_is_shadow_enabled;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_editor_only;
		godot_method_bind *mb_set_enabled;
		godot_method_bind *mb_set_energy;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_item_cull_mask;
		godot_method_bind *mb_set_item_shadow_cull_mask;
		godot_method_bind *mb_set_layer_range_max;
		godot_method_bind *mb_set_layer_range_min;
		godot_method_bind *mb_set_mode;
		godot_method_bind *mb_set_shadow_buffer_size;
		godot_method_bind *mb_set_shadow_color;
		godot_method_bind *mb_set_shadow_enabled;
		godot_method_bind *mb_set_shadow_filter;
		godot_method_bind *mb_set_shadow_gradient_length;
		godot_method_bind *mb_set_shadow_smooth;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_texture_offset;
		godot_method_bind *mb_set_texture_scale;
		godot_method_bind *mb_set_z_range_max;
		godot_method_bind *mb_set_z_range_min;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Light2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Light2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ShadowFilter {
		SHADOW_FILTER_NONE = 0,
		SHADOW_FILTER_PCF3 = 1,
		SHADOW_FILTER_PCF5 = 2,
		SHADOW_FILTER_PCF7 = 3,
		SHADOW_FILTER_PCF9 = 4,
		SHADOW_FILTER_PCF13 = 5,
	};
	enum Mode {
		MODE_ADD = 0,
		MODE_SUB = 1,
		MODE_MIX = 2,
		MODE_MASK = 3,
	};

	// constants


	static light2d *_new();

	// methods
	color get_color() const;
	real_t get_energy() const;
	real_t get_height() const;
	int64_t get_item_cull_mask() const;
	int64_t get_item_shadow_cull_mask() const;
	int64_t get_layer_range_max() const;
	int64_t get_layer_range_min() const;
	light2d::Mode get_mode() const;
	int64_t get_shadow_buffer_size() const;
	color get_shadow_color() const;
	light2d::ShadowFilter get_shadow_filter() const;
	real_t get_shadow_gradient_length() const;
	real_t get_shadow_smooth() const;
	ref<texture> get_texture() const;
	vector2 get_texture_offset() const;
	real_t get_texture_scale() const;
	int64_t get_z_range_max() const;
	int64_t get_z_range_min() const;
	bool is_editor_only() const;
	bool is_enabled() const;
	bool is_shadow_enabled() const;
	void set_color(const color color_);
	void set_editor_only(const bool editor_only);
	void set_enabled(const bool enabled);
	void set_energy(const real_t energy);
	void set_height(const real_t height);
	void set_item_cull_mask(const int64_t item_cull_mask);
	void set_item_shadow_cull_mask(const int64_t item_shadow_cull_mask);
	void set_layer_range_max(const int64_t layer);
	void set_layer_range_min(const int64_t layer);
	void set_mode(const int64_t mode);
	void set_shadow_buffer_size(const int64_t size);
	void set_shadow_color(const color shadow_color);
	void set_shadow_enabled(const bool enabled);
	void set_shadow_filter(const int64_t filter);
	void set_shadow_gradient_length(const real_t multiplier);
	void set_shadow_smooth(const real_t smooth);
	void set_texture(const ref<texture> texture_);
	void set_texture_offset(const vector2 texture_offset);
	void set_texture_scale(const real_t texture_scale);
	void set_z_range_max(const int64_t z);
	void set_z_range_min(const int64_t z);

};

}

#endif