#ifndef GODOT_CPP_CANVASITEM_HPP
#define GODOT_CPP_CANVASITEM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class font;
class input_event;
class material;
class mesh;
class multi_mesh;
class style_box;
class texture;
class world2d;

class canvas_item : public node {
	struct ___method_bindings {
		godot_method_bind *mb__draw;
		godot_method_bind *mb__edit_get_pivot;
		godot_method_bind *mb__edit_get_position;
		godot_method_bind *mb__edit_get_rect;
		godot_method_bind *mb__edit_get_rotation;
		godot_method_bind *mb__edit_get_scale;
		godot_method_bind *mb__edit_get_state;
		godot_method_bind *mb__edit_get_transform;
		godot_method_bind *mb__edit_set_pivot;
		godot_method_bind *mb__edit_set_position;
		godot_method_bind *mb__edit_set_rect;
		godot_method_bind *mb__edit_set_rotation;
		godot_method_bind *mb__edit_set_scale;
		godot_method_bind *mb__edit_set_state;
		godot_method_bind *mb__edit_use_pivot;
		godot_method_bind *mb__edit_use_rect;
		godot_method_bind *mb__edit_use_rotation;
		godot_method_bind *mb__is_on_top;
		godot_method_bind *mb__set_on_top;
		godot_method_bind *mb__toplevel_raise_self;
		godot_method_bind *mb__toplevel_visibility_changed;
		godot_method_bind *mb__update_callback;
		godot_method_bind *mb_draw_arc;
		godot_method_bind *mb_draw_char;
		godot_method_bind *mb_draw_circle;
		godot_method_bind *mb_draw_colored_polygon;
		godot_method_bind *mb_draw_line;
		godot_method_bind *mb_draw_mesh;
		godot_method_bind *mb_draw_multiline;
		godot_method_bind *mb_draw_multiline_colors;
		godot_method_bind *mb_draw_multimesh;
		godot_method_bind *mb_draw_polygon;
		godot_method_bind *mb_draw_polyline;
		godot_method_bind *mb_draw_polyline_colors;
		godot_method_bind *mb_draw_primitive;
		godot_method_bind *mb_draw_rect;
		godot_method_bind *mb_draw_set_transform;
		godot_method_bind *mb_draw_set_transform_matrix;
		godot_method_bind *mb_draw_string;
		godot_method_bind *mb_draw_style_box;
		godot_method_bind *mb_draw_texture;
		godot_method_bind *mb_draw_texture_rect;
		godot_method_bind *mb_draw_texture_rect_region;
		godot_method_bind *mb_force_update_transform;
		godot_method_bind *mb_get_canvas;
		godot_method_bind *mb_get_canvas_item;
		godot_method_bind *mb_get_canvas_transform;
		godot_method_bind *mb_get_global_mouse_position;
		godot_method_bind *mb_get_global_transform;
		godot_method_bind *mb_get_global_transform_with_canvas;
		godot_method_bind *mb_get_light_mask;
		godot_method_bind *mb_get_local_mouse_position;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_modulate;
		godot_method_bind *mb_get_self_modulate;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_get_use_parent_material;
		godot_method_bind *mb_get_viewport_rect;
		godot_method_bind *mb_get_viewport_transform;
		godot_method_bind *mb_get_world_2d;
		godot_method_bind *mb_hide;
		godot_method_bind *mb_is_draw_behind_parent_enabled;
		godot_method_bind *mb_is_local_transform_notification_enabled;
		godot_method_bind *mb_is_set_as_toplevel;
		godot_method_bind *mb_is_transform_notification_enabled;
		godot_method_bind *mb_is_visible;
		godot_method_bind *mb_is_visible_in_tree;
		godot_method_bind *mb_make_canvas_position_local;
		godot_method_bind *mb_make_input_local;
		godot_method_bind *mb_set_as_toplevel;
		godot_method_bind *mb_set_draw_behind_parent;
		godot_method_bind *mb_set_light_mask;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_modulate;
		godot_method_bind *mb_set_notify_local_transform;
		godot_method_bind *mb_set_notify_transform;
		godot_method_bind *mb_set_self_modulate;
		godot_method_bind *mb_set_use_parent_material;
		godot_method_bind *mb_set_visible;
		godot_method_bind *mb_show;
		godot_method_bind *mb_update;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CanvasItem"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CanvasItem"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BlendMode {
		BLEND_MODE_MIX = 0,
		BLEND_MODE_ADD = 1,
		BLEND_MODE_SUB = 2,
		BLEND_MODE_MUL = 3,
		BLEND_MODE_PREMULT_ALPHA = 4,
		BLEND_MODE_DISABLED = 5,
	};

	// constants
	const static int NOTIFICATION_DRAW = 30;
	const static int NOTIFICATION_ENTER_CANVAS = 32;
	const static int NOTIFICATION_EXIT_CANVAS = 33;
	const static int NOTIFICATION_LOCAL_TRANSFORM_CHANGED = 35;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 2000;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 31;

	// methods
	void _draw();
	vector2 _edit_get_pivot() const;
	vector2 _edit_get_position() const;
	rect2 _edit_get_rect() const;
	real_t _edit_get_rotation() const;
	vector2 _edit_get_scale() const;
	dictionary _edit_get_state() const;
	transform2d _edit_get_transform() const;
	void _edit_set_pivot(const vector2 pivot);
	void _edit_set_position(const vector2 position);
	void _edit_set_rect(const rect2 rect);
	void _edit_set_rotation(const real_t degrees);
	void _edit_set_scale(const vector2 scale);
	void _edit_set_state(const dictionary state);
	bool _edit_use_pivot() const;
	bool _edit_use_rect() const;
	bool _edit_use_rotation() const;
	bool _is_on_top() const;
	void _set_on_top(const bool on_top);
	void _toplevel_raise_self();
	void _toplevel_visibility_changed(const bool visible);
	void _update_callback();
	void draw_arc(const vector2 center, const real_t radius, const real_t start_angle, const real_t end_angle, const int64_t point_count, const color color_, const real_t width = 1, const bool antialiased = false);
	real_t draw_char(const ref<font> font_, const vector2 position, const string _char, const string next, const color modulate = color(1,1,1,1));
	void draw_circle(const vector2 position, const real_t radius, const color color_);
	void draw_colored_polygon(const pool_vector2_array points, const color color_, const pool_vector2_array uvs = pool_vector2_array(), const ref<texture> texture_ = nullptr, const ref<texture> normal_map = nullptr, const bool antialiased = false);
	void draw_line(const vector2 from, const vector2 to, const color color_, const real_t width = 1, const bool antialiased = false);
	void draw_mesh(const ref<mesh> mesh_, const ref<texture> texture_, const ref<texture> normal_map = nullptr, const transform2d transform_ = transform2d(), const color modulate = color(1,1,1,1));
	void draw_multiline(const pool_vector2_array points, const color color_, const real_t width = 1, const bool antialiased = false);
	void draw_multiline_colors(const pool_vector2_array points, const pool_color_array colors, const real_t width = 1, const bool antialiased = false);
	void draw_multimesh(const ref<multi_mesh> multimesh, const ref<texture> texture_, const ref<texture> normal_map = nullptr);
	void draw_polygon(const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs = pool_vector2_array(), const ref<texture> texture_ = nullptr, const ref<texture> normal_map = nullptr, const bool antialiased = false);
	void draw_polyline(const pool_vector2_array points, const color color_, const real_t width = 1, const bool antialiased = false);
	void draw_polyline_colors(const pool_vector2_array points, const pool_color_array colors, const real_t width = 1, const bool antialiased = false);
	void draw_primitive(const pool_vector2_array points, const pool_color_array colors, const pool_vector2_array uvs, const ref<texture> texture_ = nullptr, const real_t width = 1, const ref<texture> normal_map = nullptr);
	void draw_rect(const rect2 rect, const color color_, const bool filled = true, const real_t width = 1, const bool antialiased = false);
	void draw_set_transform(const vector2 position, const real_t rotation, const vector2 scale);
	void draw_set_transform_matrix(const transform2d xform);
	void draw_string(const ref<font> font_, const vector2 position, const string text, const color modulate = color(1,1,1,1), const int64_t clip_w = -1);
	void draw_style_box(const ref<style_box> style_box_, const rect2 rect);
	void draw_texture(const ref<texture> texture_, const vector2 position, const color modulate = color(1,1,1,1), const ref<texture> normal_map = nullptr);
	void draw_texture_rect(const ref<texture> texture_, const rect2 rect, const bool tile, const color modulate = color(1,1,1,1), const bool transpose = false, const ref<texture> normal_map = nullptr);
	void draw_texture_rect_region(const ref<texture> texture_, const rect2 rect, const rect2 src_rect, const color modulate = color(1,1,1,1), const bool transpose = false, const ref<texture> normal_map = nullptr, const bool clip_uv = true);
	void force_update_transform();
	rid get_canvas() const;
	rid get_canvas_item() const;
	transform2d get_canvas_transform() const;
	vector2 get_global_mouse_position() const;
	transform2d get_global_transform() const;
	transform2d get_global_transform_with_canvas() const;
	int64_t get_light_mask() const;
	vector2 get_local_mouse_position() const;
	ref<material> get_material() const;
	color get_modulate() const;
	color get_self_modulate() const;
	transform2d get_transform() const;
	bool get_use_parent_material() const;
	rect2 get_viewport_rect() const;
	transform2d get_viewport_transform() const;
	ref<world2d> get_world_2d() const;
	void hide();
	bool is_draw_behind_parent_enabled() const;
	bool is_local_transform_notification_enabled() const;
	bool is_set_as_toplevel() const;
	bool is_transform_notification_enabled() const;
	bool is_visible() const;
	bool is_visible_in_tree() const;
	vector2 make_canvas_position_local(const vector2 screen_point) const;
	ref<input_event> make_input_local(const ref<input_event> event) const;
	void set_as_toplevel(const bool enable);
	void set_draw_behind_parent(const bool enable);
	void set_light_mask(const int64_t light_mask);
	void set_material(const ref<material> material_);
	void set_modulate(const color modulate);
	void set_notify_local_transform(const bool enable);
	void set_notify_transform(const bool enable);
	void set_self_modulate(const color self_modulate);
	void set_use_parent_material(const bool enable);
	void set_visible(const bool visible);
	void show();
	void update();

};

}

#endif