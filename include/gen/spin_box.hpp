#ifndef GODOT_CPP_SPINBOX_HPP
#define GODOT_CPP_SPINBOX_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "line_edit.hpp"

#include "range.hpp"
namespace gd {

class input_event;
class line_edit;

class spin_box : public range {
	struct ___method_bindings {
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb__line_edit_focus_exit;
		godot_method_bind *mb__line_edit_input;
		godot_method_bind *mb__range_click_timeout;
		godot_method_bind *mb__text_entered;
		godot_method_bind *mb_apply;
		godot_method_bind *mb_get_align;
		godot_method_bind *mb_get_line_edit;
		godot_method_bind *mb_get_prefix;
		godot_method_bind *mb_get_suffix;
		godot_method_bind *mb_is_editable;
		godot_method_bind *mb_set_align;
		godot_method_bind *mb_set_editable;
		godot_method_bind *mb_set_prefix;
		godot_method_bind *mb_set_suffix;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SpinBox"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SpinBox"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static spin_box *_new();

	// methods
	void _gui_input(const ref<input_event> arg0);
	void _line_edit_focus_exit();
	void _line_edit_input(const ref<input_event> arg0);
	void _range_click_timeout();
	void _text_entered(const string arg0);
	void apply();
	line_edit::Align get_align() const;
	line_edit *get_line_edit();
	string get_prefix() const;
	string get_suffix() const;
	bool is_editable() const;
	void set_align(const int64_t align);
	void set_editable(const bool editable);
	void set_prefix(const string prefix);
	void set_suffix(const string suffix);

};

}

#endif