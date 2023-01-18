#ifndef GODOT_CPP_PARALLAXBACKGROUND_HPP
#define GODOT_CPP_PARALLAXBACKGROUND_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "canvas_layer.hpp"
namespace gd {


class parallax_background : public canvas_layer {
	struct ___method_bindings {
		godot_method_bind *mb__camera_moved;
		godot_method_bind *mb_get_limit_begin;
		godot_method_bind *mb_get_limit_end;
		godot_method_bind *mb_get_scroll_base_offset;
		godot_method_bind *mb_get_scroll_base_scale;
		godot_method_bind *mb_get_scroll_offset;
		godot_method_bind *mb_is_ignore_camera_zoom;
		godot_method_bind *mb_set_ignore_camera_zoom;
		godot_method_bind *mb_set_limit_begin;
		godot_method_bind *mb_set_limit_end;
		godot_method_bind *mb_set_scroll_base_offset;
		godot_method_bind *mb_set_scroll_base_scale;
		godot_method_bind *mb_set_scroll_offset;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ParallaxBackground"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ParallaxBackground"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static parallax_background *_new();

	// methods
	void _camera_moved(const transform2d arg0, const vector2 arg1);
	vector2 get_limit_begin() const;
	vector2 get_limit_end() const;
	vector2 get_scroll_base_offset() const;
	vector2 get_scroll_base_scale() const;
	vector2 get_scroll_offset() const;
	bool is_ignore_camera_zoom();
	void set_ignore_camera_zoom(const bool ignore);
	void set_limit_begin(const vector2 ofs);
	void set_limit_end(const vector2 ofs);
	void set_scroll_base_offset(const vector2 ofs);
	void set_scroll_base_scale(const vector2 scale);
	void set_scroll_offset(const vector2 ofs);

};

}

#endif