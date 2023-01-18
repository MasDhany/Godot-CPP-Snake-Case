#ifndef GODOT_CPP_TOUCHSCREENBUTTON_HPP
#define GODOT_CPP_TOUCHSCREENBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "touch_screen_button.hpp"

#include "node2d.hpp"
namespace gd {

class bit_map;
class input_event;
class shape2d;
class texture;

class touch_screen_button : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__input;
		godot_method_bind *mb_get_action;
		godot_method_bind *mb_get_bitmask;
		godot_method_bind *mb_get_shape;
		godot_method_bind *mb_get_texture;
		godot_method_bind *mb_get_texture_pressed;
		godot_method_bind *mb_get_visibility_mode;
		godot_method_bind *mb_is_passby_press_enabled;
		godot_method_bind *mb_is_pressed;
		godot_method_bind *mb_is_shape_centered;
		godot_method_bind *mb_is_shape_visible;
		godot_method_bind *mb_set_action;
		godot_method_bind *mb_set_bitmask;
		godot_method_bind *mb_set_passby_press;
		godot_method_bind *mb_set_shape;
		godot_method_bind *mb_set_shape_centered;
		godot_method_bind *mb_set_shape_visible;
		godot_method_bind *mb_set_texture;
		godot_method_bind *mb_set_texture_pressed;
		godot_method_bind *mb_set_visibility_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TouchScreenButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TouchScreenButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum VisibilityMode {
		VISIBILITY_ALWAYS = 0,
		VISIBILITY_TOUCHSCREEN_ONLY = 1,
	};

	// constants


	static touch_screen_button *_new();

	// methods
	void _input(const ref<input_event> arg0);
	string get_action() const;
	ref<bit_map> get_bitmask() const;
	ref<shape2d> get_shape() const;
	ref<texture> get_texture() const;
	ref<texture> get_texture_pressed() const;
	touch_screen_button::VisibilityMode get_visibility_mode() const;
	bool is_passby_press_enabled() const;
	bool is_pressed() const;
	bool is_shape_centered() const;
	bool is_shape_visible() const;
	void set_action(const string action);
	void set_bitmask(const ref<bit_map> bitmask);
	void set_passby_press(const bool enabled);
	void set_shape(const ref<shape2d> shape_);
	void set_shape_centered(const bool _bool);
	void set_shape_visible(const bool _bool);
	void set_texture(const ref<texture> texture_);
	void set_texture_pressed(const ref<texture> texture_pressed);
	void set_visibility_mode(const int64_t mode);

};

}

#endif