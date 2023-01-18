#ifndef GODOT_CPP_CANVASLAYER_HPP
#define GODOT_CPP_CANVASLAYER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class node;

class canvas_layer : public node {
	struct ___method_bindings {
		godot_method_bind *mb_get_canvas;
		godot_method_bind *mb_get_custom_viewport;
		godot_method_bind *mb_get_follow_viewport_scale;
		godot_method_bind *mb_get_layer;
		godot_method_bind *mb_get_offset;
		godot_method_bind *mb_get_rotation;
		godot_method_bind *mb_get_rotation_degrees;
		godot_method_bind *mb_get_scale;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_hide;
		godot_method_bind *mb_is_following_viewport;
		godot_method_bind *mb_is_visible;
		godot_method_bind *mb_set_custom_viewport;
		godot_method_bind *mb_set_follow_viewport;
		godot_method_bind *mb_set_follow_viewport_scale;
		godot_method_bind *mb_set_layer;
		godot_method_bind *mb_set_offset;
		godot_method_bind *mb_set_rotation;
		godot_method_bind *mb_set_rotation_degrees;
		godot_method_bind *mb_set_scale;
		godot_method_bind *mb_set_transform;
		godot_method_bind *mb_set_visible;
		godot_method_bind *mb_show;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CanvasLayer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CanvasLayer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static canvas_layer *_new();

	// methods
	rid get_canvas() const;
	node *get_custom_viewport() const;
	real_t get_follow_viewport_scale() const;
	int64_t get_layer() const;
	vector2 get_offset() const;
	real_t get_rotation() const;
	real_t get_rotation_degrees() const;
	vector2 get_scale() const;
	transform2d get_transform() const;
	void hide();
	bool is_following_viewport() const;
	bool is_visible() const;
	void set_custom_viewport(const node *viewport_);
	void set_follow_viewport(const bool enable);
	void set_follow_viewport_scale(const real_t scale);
	void set_layer(const int64_t layer);
	void set_offset(const vector2 offset);
	void set_rotation(const real_t radians);
	void set_rotation_degrees(const real_t degrees);
	void set_scale(const vector2 scale);
	void set_transform(const transform2d transform_);
	void set_visible(const bool visible);
	void show();

};

}

#endif