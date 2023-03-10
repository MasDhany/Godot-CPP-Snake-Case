#ifndef GODOT_CPP_TEXTUREPROGRESS_HPP
#define GODOT_CPP_TEXTUREPROGRESS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "range.hpp"
namespace gd {

class texture;

class texture_progress : public range {
	struct ___method_bindings {
		godot_method_bind *mb_get_fill_degrees;
		godot_method_bind *mb_get_fill_mode;
		godot_method_bind *mb_get_nine_patch_stretch;
		godot_method_bind *mb_get_over_texture;
		godot_method_bind *mb_get_progress_texture;
		godot_method_bind *mb_get_radial_center_offset;
		godot_method_bind *mb_get_radial_initial_angle;
		godot_method_bind *mb_get_stretch_margin;
		godot_method_bind *mb_get_texture_progress_offset;
		godot_method_bind *mb_get_tint_over;
		godot_method_bind *mb_get_tint_progress;
		godot_method_bind *mb_get_tint_under;
		godot_method_bind *mb_get_under_texture;
		godot_method_bind *mb_set_fill_degrees;
		godot_method_bind *mb_set_fill_mode;
		godot_method_bind *mb_set_nine_patch_stretch;
		godot_method_bind *mb_set_over_texture;
		godot_method_bind *mb_set_progress_texture;
		godot_method_bind *mb_set_radial_center_offset;
		godot_method_bind *mb_set_radial_initial_angle;
		godot_method_bind *mb_set_stretch_margin;
		godot_method_bind *mb_set_texture_progress_offset;
		godot_method_bind *mb_set_tint_over;
		godot_method_bind *mb_set_tint_progress;
		godot_method_bind *mb_set_tint_under;
		godot_method_bind *mb_set_under_texture;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TextureProgress"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TextureProgress"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FillMode {
		FILL_LEFT_TO_RIGHT = 0,
		FILL_RIGHT_TO_LEFT = 1,
		FILL_TOP_TO_BOTTOM = 2,
		FILL_BOTTOM_TO_TOP = 3,
		FILL_CLOCKWISE = 4,
		FILL_COUNTER_CLOCKWISE = 5,
		FILL_BILINEAR_LEFT_AND_RIGHT = 6,
		FILL_BILINEAR_TOP_AND_BOTTOM = 7,
		FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE = 8,
	};

	// constants


	static texture_progress *_new();

	// methods
	real_t get_fill_degrees();
	int64_t get_fill_mode();
	bool get_nine_patch_stretch() const;
	ref<texture> get_over_texture() const;
	ref<texture> get_progress_texture() const;
	vector2 get_radial_center_offset();
	real_t get_radial_initial_angle();
	int64_t get_stretch_margin(const int64_t margin) const;
	vector2 get_texture_progress_offset() const;
	color get_tint_over() const;
	color get_tint_progress() const;
	color get_tint_under() const;
	ref<texture> get_under_texture() const;
	void set_fill_degrees(const real_t mode);
	void set_fill_mode(const int64_t mode);
	void set_nine_patch_stretch(const bool stretch);
	void set_over_texture(const ref<texture> tex);
	void set_progress_texture(const ref<texture> tex);
	void set_radial_center_offset(const vector2 mode);
	void set_radial_initial_angle(const real_t mode);
	void set_stretch_margin(const int64_t margin, const int64_t value);
	void set_texture_progress_offset(const vector2 offset);
	void set_tint_over(const color tint);
	void set_tint_progress(const color tint);
	void set_tint_under(const color tint);
	void set_under_texture(const ref<texture> tex);

};

}

#endif