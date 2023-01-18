#ifndef GODOT_CPP_EDITORSPINSLIDER_HPP
#define GODOT_CPP_EDITORSPINSLIDER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "range.hpp"
namespace gd {

class input_event;

class editor_spin_slider : public range {
	struct ___method_bindings {
		godot_method_bind *mb__grabber_gui_input;
		godot_method_bind *mb__grabber_mouse_entered;
		godot_method_bind *mb__grabber_mouse_exited;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__value_focus_exited;
		godot_method_bind *mb__value_input_closed;
		godot_method_bind *mb__value_input_entered;
		godot_method_bind *mb__value_input_gui_input;
		godot_method_bind *mb_get_label;
		godot_method_bind *mb_is_flat;
		godot_method_bind *mb_is_hiding_slider;
		godot_method_bind *mb_is_read_only;
		godot_method_bind *mb_set_flat;
		godot_method_bind *mb_set_hide_slider;
		godot_method_bind *mb_set_label;
		godot_method_bind *mb_set_read_only;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "EditorSpinSlider"; }
	static inline const char *___get_godot_class_name() { return (const char *) "EditorSpinSlider"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _grabber_gui_input(const ref<input_event> arg0);
	void _grabber_mouse_entered();
	void _grabber_mouse_exited();
	void _gui_input(const ref<input_event> arg0);
	void _value_focus_exited();
	void _value_input_closed();
	void _value_input_entered(const string arg0);
	void _value_input_gui_input(const ref<input_event> event);
	string get_label() const;
	bool is_flat() const;
	bool is_hiding_slider() const;
	bool is_read_only() const;
	void set_flat(const bool flat);
	void set_hide_slider(const bool hide_slider);
	void set_label(const string label_);
	void set_read_only(const bool read_only);

};

}

#endif