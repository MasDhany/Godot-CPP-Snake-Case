#ifndef GODOT_CPP_SPRITEBASE3D_HPP
#define GODOT_CPP_SPRITEBASE3D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "spatial_material.hpp"
#include "sprite_base3d.hpp"
#include "vector3.hpp"

#include "geometry_instance.hpp"
namespace gd {

class triangle_mesh;

class sprite_base3d : public geometry_instance {
	struct ___method_bindings {
		godot_method_bind *mb__im_update;
		godot_method_bind *mb__queue_update;
		godot_method_bind *mb_generate_triangle_mesh;
		godot_method_bind *mb_get_alpha_cut_mode;
		godot_method_bind *mb_get_axis;
		godot_method_bind *mb_get_billboard_mode;
		godot_method_bind *mb_get_draw_flag;
		godot_method_bind *mb_get_item_rect;
		godot_method_bind *mb_get_modulate;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_opacity;
		godot_method_bind *mb_get_pixel_size;
		godot_method_bind *mb_get_render_priority;
		godot_method_bind *mb_is_centered;
		godot_method_bind *mb_is_flipped_h;
		godot_method_bind *mb_is_flipped_v;
		godot_method_bind *mb_set_alpha_cut_mode;
		godot_method_bind *mb_set_axis;
		godot_method_bind *mb_set_billboard_mode;
		godot_method_bind *mb_set_centered;
		godot_method_bind *mb_set_draw_flag;
		godot_method_bind *mb_set_flip_h;
		godot_method_bind *mb_set_flip_v;
		godot_method_bind *mb_set_modulate;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_opacity;
		godot_method_bind *mb_set_pixel_size;
		godot_method_bind *mb_set_render_priority;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SpriteBase3D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SpriteBase3D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DrawFlags {
		FLAG_TRANSPARENT = 0,
		FLAG_SHADED = 1,
		FLAG_DOUBLE_SIDED = 2,
		FLAG_DISABLE_DEPTH_TEST = 3,
		FLAG_FIXED_SIZE = 4,
		FLAG_MAX = 5,
	};
	enum AlphaCutMode {
		ALPHA_CUT_DISABLED = 0,
		ALPHA_CUT_DISCARD = 1,
		ALPHA_CUT_OPAQUE_PREPASS = 2,
	};

	// constants

	// methods
	void _im_update();
	void _queue_update();
	ref<triangle_mesh> generate_triangle_mesh() const;
	sprite_base3d::AlphaCutMode get_alpha_cut_mode() const;
	vector3::Axis get_axis() const;
	spatial_material::BillboardMode get_billboard_mode() const;
	bool get_draw_flag(const int64_t flag) const;
	rect2 get_item_rect() const;
	color get_modulate() const;
	vector2 get_offset() const;
	real_t get_opacity() const;
	real_t get_pixel_size() const;
	int64_t get_render_priority() const;
	bool is_centered() const;
	bool is_flipped_h() const;
	bool is_flipped_v() const;
	void set_alpha_cut_mode(const int64_t mode);
	void set_axis(const int64_t axis);
	void set_billboard_mode(const int64_t mode);
	void set_centered(const bool centered);
	void set_draw_flag(const int64_t flag, const bool enabled);
	void set_flip_h(const bool flip_h);
	void set_flip_v(const bool flip_v);
	void set_modulate(const color modulate);
	void set_offset(const vector2 offset);
	void set_opacity(const real_t opacity);
	void set_pixel_size(const real_t pixel_size);
	void set_render_priority(const int64_t priority);

};

}

#endif