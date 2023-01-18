#ifndef GODOT_CPP_COLORPICKER_HPP
#define GODOT_CPP_COLORPICKER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "box_container.hpp"
namespace gd {

class control;
class input_event;

class color_picker : public box_container {
	struct ___method_bindings {
		godot_method_bind *mb__add_preset_pressed;
		godot_method_bind *mb__focus_enter;
		godot_method_bind *mb__focus_exit;
		godot_method_bind *mb__hsv_draw;
		godot_method_bind *mb__html_entered;
		godot_method_bind *mb__html_focus_exit;
		godot_method_bind *mb__preset_input;
		godot_method_bind *mb__sample_draw;
		godot_method_bind *mb__sample_input;
		godot_method_bind *mb__screen_input;
		godot_method_bind *mb__screen_pick_pressed;
		godot_method_bind *mb__text_type_toggled;
		godot_method_bind *mb__update_presets;
		godot_method_bind *mb__uv_input;
		godot_method_bind *mb__value_changed;
		godot_method_bind *mb__w_input;
		godot_method_bind *mb_add_preset;
		godot_method_bind *mb_are_presets_enabled;
		godot_method_bind *mb_are_presets_visible;
		godot_method_bind *mb_erase_preset;
		godot_method_bind *mb_get_pick_color;
		godot_method_bind *mb_get_presets;
		godot_method_bind *mb_is_deferred_mode;
		godot_method_bind *mb_is_editing_alpha;
		godot_method_bind *mb_is_hsv_mode;
		godot_method_bind *mb_is_raw_mode;
		godot_method_bind *mb_set_deferred_mode;
		godot_method_bind *mb_set_edit_alpha;
		godot_method_bind *mb_set_hsv_mode;
		godot_method_bind *mb_set_pick_color;
		godot_method_bind *mb_set_presets_enabled;
		godot_method_bind *mb_set_presets_visible;
		godot_method_bind *mb_set_raw_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ColorPicker"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ColorPicker"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static color_picker *_new();

	// methods
	void _add_preset_pressed();
	void _focus_enter();
	void _focus_exit();
	void _hsv_draw(const int64_t arg0, const control *arg1);
	void _html_entered(const string arg0);
	void _html_focus_exit();
	void _preset_input(const ref<input_event> arg0, const color arg1);
	void _sample_draw();
	void _sample_input(const ref<input_event> arg0);
	void _screen_input(const ref<input_event> arg0);
	void _screen_pick_pressed();
	void _text_type_toggled();
	void _update_presets();
	void _uv_input(const ref<input_event> arg0);
	void _value_changed(const real_t arg0);
	void _w_input(const ref<input_event> arg0);
	void add_preset(const color color_);
	bool are_presets_enabled() const;
	bool are_presets_visible() const;
	void erase_preset(const color color_);
	color get_pick_color() const;
	pool_color_array get_presets() const;
	bool is_deferred_mode() const;
	bool is_editing_alpha() const;
	bool is_hsv_mode() const;
	bool is_raw_mode() const;
	void set_deferred_mode(const bool mode);
	void set_edit_alpha(const bool show);
	void set_hsv_mode(const bool mode);
	void set_pick_color(const color color_);
	void set_presets_enabled(const bool enabled);
	void set_presets_visible(const bool visible);
	void set_raw_mode(const bool mode);

};

}

#endif