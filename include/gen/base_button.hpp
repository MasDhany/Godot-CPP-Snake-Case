#ifndef GODOT_CPP_BASEBUTTON_HPP
#define GODOT_CPP_BASEBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "base_button.hpp"
#include "control.hpp"

#include "control.hpp"
namespace gd {

class button_group;
class input_event;
class short_cut;

class base_button : public control {
	struct ___method_bindings {
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__pressed;
		godot_method_bind *mb__toggled;
		godot_method_bind *mb__unhandled_input;
		godot_method_bind *mb_get_action_mode;
		godot_method_bind *mb_get_button_group;
		godot_method_bind *mb_get_button_mask;
		godot_method_bind *mb_get_draw_mode;
		godot_method_bind *mb_get_enabled_focus_mode;
		godot_method_bind *mb_get_shortcut;
		godot_method_bind *mb_is_disabled;
		godot_method_bind *mb_is_hovered;
		godot_method_bind *mb_is_keep_pressed_outside;
		godot_method_bind *mb_is_pressed;
		godot_method_bind *mb_is_shortcut_in_tooltip_enabled;
		godot_method_bind *mb_is_toggle_mode;
		godot_method_bind *mb_set_action_mode;
		godot_method_bind *mb_set_button_group;
		godot_method_bind *mb_set_button_mask;
		godot_method_bind *mb_set_disabled;
		godot_method_bind *mb_set_enabled_focus_mode;
		godot_method_bind *mb_set_keep_pressed_outside;
		godot_method_bind *mb_set_pressed;
		godot_method_bind *mb_set_pressed_no_signal;
		godot_method_bind *mb_set_shortcut;
		godot_method_bind *mb_set_shortcut_in_tooltip;
		godot_method_bind *mb_set_toggle_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BaseButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BaseButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ActionMode {
		ACTION_MODE_BUTTON_PRESS = 0,
		ACTION_MODE_BUTTON_RELEASE = 1,
	};
	enum DrawMode {
		DRAW_NORMAL = 0,
		DRAW_PRESSED = 1,
		DRAW_HOVER = 2,
		DRAW_DISABLED = 3,
		DRAW_HOVER_PRESSED = 4,
	};

	// constants

	// methods
	void _gui_input(const ref<input_event> arg0);
	void _pressed();
	void _toggled(const bool button_pressed);
	void _unhandled_input(const ref<input_event> arg0);
	base_button::ActionMode get_action_mode() const;
	ref<button_group> get_button_group() const;
	int64_t get_button_mask() const;
	base_button::DrawMode get_draw_mode() const;
	control::FocusMode get_enabled_focus_mode() const;
	ref<short_cut> get_shortcut() const;
	bool is_disabled() const;
	bool is_hovered() const;
	bool is_keep_pressed_outside() const;
	bool is_pressed() const;
	bool is_shortcut_in_tooltip_enabled() const;
	bool is_toggle_mode() const;
	void set_action_mode(const int64_t mode);
	void set_button_group(const ref<button_group> button_group_);
	void set_button_mask(const int64_t mask);
	void set_disabled(const bool disabled);
	void set_enabled_focus_mode(const int64_t mode);
	void set_keep_pressed_outside(const bool enabled);
	void set_pressed(const bool pressed);
	void set_pressed_no_signal(const bool pressed);
	void set_shortcut(const ref<short_cut> shortcut);
	void set_shortcut_in_tooltip(const bool enabled);
	void set_toggle_mode(const bool enabled);

};

}

#endif