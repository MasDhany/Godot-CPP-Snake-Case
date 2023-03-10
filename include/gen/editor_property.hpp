#ifndef GODOT_CPP_EDITORPROPERTY_HPP
#define GODOT_CPP_EDITORPROPERTY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "container.hpp"
namespace gd {

class control;
class input_event;
class object;

class editor_property : public container {
	struct ___method_bindings {
		godot_method_bind *mb__focusable_focused;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__menu_option;
		godot_method_bind *mb__unhandled_key_input;
		godot_method_bind *mb__update_revert_and_pin_status;
		godot_method_bind *mb_add_focusable;
		godot_method_bind *mb_emit_changed;
		godot_method_bind *mb_get_edited_object;
		godot_method_bind *mb_get_edited_property;
		godot_method_bind *mb_get_label;
		godot_method_bind *mb_get_tooltip_text;
		godot_method_bind *mb_is_checkable;
		godot_method_bind *mb_is_checked;
		godot_method_bind *mb_is_draw_red;
		godot_method_bind *mb_is_keying;
		godot_method_bind *mb_is_read_only;
		godot_method_bind *mb_set_bottom_editor;
		godot_method_bind *mb_set_checkable;
		godot_method_bind *mb_set_checked;
		godot_method_bind *mb_set_draw_red;
		godot_method_bind *mb_set_keying;
		godot_method_bind *mb_set_label;
		godot_method_bind *mb_set_read_only;
		godot_method_bind *mb_update_property;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorProperty"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorProperty"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _focusable_focused(const int64_t arg0);
	void _gui_input(const ref<input_event> arg0);
	void _menu_option(const int64_t option);
	void _unhandled_key_input(const ref<input_event> arg0);
	void _update_revert_and_pin_status();
	void add_focusable(const control *control_);
	void emit_changed(const string property, const variant value, const string field = "", const bool changing = false);
	object *get_edited_object();
	string get_edited_property();
	string get_label() const;
	string get_tooltip_text() const;
	bool is_checkable() const;
	bool is_checked() const;
	bool is_draw_red() const;
	bool is_keying() const;
	bool is_read_only() const;
	void set_bottom_editor(const control *editor);
	void set_checkable(const bool checkable);
	void set_checked(const bool checked);
	void set_draw_red(const bool draw_red);
	void set_keying(const bool keying);
	void set_label(const string text);
	void set_read_only(const bool read_only);
	void update_property();

};

}

#endif