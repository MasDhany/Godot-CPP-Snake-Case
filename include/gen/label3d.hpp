#ifndef GODOT_CPP_LABEL3D_HPP
#define GODOT_CPP_LABEL3D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "label3d.hpp"
#include "spatial_material.hpp"

#include "geometry_instance.hpp"
namespace gd {

class font;
class triangle_mesh;

class label3d : public geometry_instance {
	struct ___method_bindings {
		godot_method_bind *mb__font_changed;
		godot_method_bind *mb__im_update;
		godot_method_bind *mb__queue_update;
		godot_method_bind *mb_generate_triangle_mesh;
		godot_method_bind *mb_get_alpha_cut_mode;
		godot_method_bind *mb_get_alpha_scissor_threshold;
		godot_method_bind *mb_get_autowrap;
		godot_method_bind *mb_get_billboard_mode;
		godot_method_bind *mb_get_draw_flag;
		godot_method_bind *mb_get_font;
		godot_method_bind *mb_get_horizontal_alignment;
		godot_method_bind *mb_get_line_spacing;
		godot_method_bind *mb_get_modulate;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_outline_modulate;
		godot_method_bind *mb_get_outline_render_priority;
		godot_method_bind *mb_get_pixel_size;
		godot_method_bind *mb_get_render_priority;
		godot_method_bind *mb_get_text;
		godot_method_bind *mb_get_vertical_alignment;
		godot_method_bind *mb_get_width;
		godot_method_bind *mb_is_uppercase;
		godot_method_bind *mb_set_alpha_cut_mode;
		godot_method_bind *mb_set_alpha_scissor_threshold;
		godot_method_bind *mb_set_autowrap;
		godot_method_bind *mb_set_billboard_mode;
		godot_method_bind *mb_set_draw_flag;
		godot_method_bind *mb_set_font;
		godot_method_bind *mb_set_horizontal_alignment;
		godot_method_bind *mb_set_line_spacing;
		godot_method_bind *mb_set_modulate;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_outline_modulate;
		godot_method_bind *mb_set_outline_render_priority;
		godot_method_bind *mb_set_pixel_size;
		godot_method_bind *mb_set_render_priority;
		godot_method_bind *mb_set_text;
		godot_method_bind *mb_set_uppercase;
		godot_method_bind *mb_set_vertical_alignment;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Label3D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Label3D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Align {
		ALIGN_LEFT = 0,
		ALIGN_CENTER = 1,
		ALIGN_RIGHT = 2,
		ALIGN_FILL = 3,
	};
	enum DrawFlags {
		FLAG_SHADED = 0,
		FLAG_DOUBLE_SIDED = 1,
		FLAG_DISABLE_DEPTH_TEST = 2,
		FLAG_FIXED_SIZE = 3,
		FLAG_MAX = 4,
	};
	enum AlphaCutMode {
		ALPHA_CUT_DISABLED = 0,
		ALPHA_CUT_DISCARD = 1,
		ALPHA_CUT_OPAQUE_PREPASS = 2,
	};
	enum VAlign {
		VALIGN_TOP = 0,
		VALIGN_CENTER = 1,
		VALIGN_BOTTOM = 2,
		VALIGN_FILL = 3,
	};

	// constants


	static label3d *_new();

	// methods
	void _font_changed();
	void _im_update();
	void _queue_update();
	ref<triangle_mesh> generate_triangle_mesh() const;
	label3d::AlphaCutMode get_alpha_cut_mode() const;
	real_t get_alpha_scissor_threshold() const;
	bool get_autowrap() const;
	spatial_material::BillboardMode get_billboard_mode() const;
	bool get_draw_flag(const int64_t flag) const;
	ref<font> get_font() const;
	label3d::Align get_horizontal_alignment() const;
	real_t get_line_spacing() const;
	color get_modulate() const;
	vector2 get_offset() const;
	color get_outline_modulate() const;
	int64_t get_outline_render_priority() const;
	real_t get_pixel_size() const;
	int64_t get_render_priority() const;
	string get_text() const;
	label3d::VAlign get_vertical_alignment() const;
	real_t get_width() const;
	bool is_uppercase() const;
	void set_alpha_cut_mode(const int64_t mode);
	void set_alpha_scissor_threshold(const real_t threshold);
	void set_autowrap(const bool autowrap_mode);
	void set_billboard_mode(const int64_t mode);
	void set_draw_flag(const int64_t flag, const bool enabled);
	void set_font(const ref<font> font_);
	void set_horizontal_alignment(const int64_t alignment);
	void set_line_spacing(const real_t line_spacing);
	void set_modulate(const color modulate);
	void set_offset(const vector2 offset);
	void set_outline_modulate(const color modulate);
	void set_outline_render_priority(const int64_t priority);
	void set_pixel_size(const real_t pixel_size);
	void set_render_priority(const int64_t priority);
	void set_text(const string text);
	void set_uppercase(const bool enable);
	void set_vertical_alignment(const int64_t alignment);
	void set_width(const real_t width);

};

}

#endif