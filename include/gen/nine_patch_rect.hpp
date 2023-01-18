#ifndef GODOT_CPP_NINEPATCHRECT_HPP
#define GODOT_CPP_NINEPATCHRECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "nine_patch_rect.hpp"

#include "control.hpp"
namespace gd {

class texture;

class nine_patch_rect : public control {
	struct ___method_bindings {
		godot_method_bind *mb_get_h_axis_stretch_mode;
		godot_method_bind *mb_get_patch_margin;
		godot_method_bind *mb_get_region_rect;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_v_axis_stretch_mode;
		godot_method_bind *mb_is_draw_center_enabled;
		godot_method_bind *mb_set_draw_center;
		godot_method_bind *mb_set_h_axis_stretch_mode;
		godot_method_bind *mb_set_patch_margin;
		godot_method_bind *mb_set_region_rect;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_v_axis_stretch_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NinePatchRect"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NinePatchRect"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AxisStretchMode {
		AXIS_STRETCH_MODE_STRETCH = 0,
		AXIS_STRETCH_MODE_TILE = 1,
		AXIS_STRETCH_MODE_TILE_FIT = 2,
	};

	// constants


	static nine_patch_rect *_new();

	// methods
	nine_patch_rect::AxisStretchMode get_h_axis_stretch_mode() const;
	int64_t get_patch_margin(const int64_t margin) const;
	rect2 get_region_rect() const;
	ref<texture> get_texture() const;
	nine_patch_rect::AxisStretchMode get_v_axis_stretch_mode() const;
	bool is_draw_center_enabled() const;
	void set_draw_center(const bool draw_center);
	void set_h_axis_stretch_mode(const int64_t mode);
	void set_patch_margin(const int64_t margin, const int64_t value);
	void set_region_rect(const rect2 rect);
	void set_texture(const ref<texture> texture_);
	void set_v_axis_stretch_mode(const int64_t mode);

};

}

#endif