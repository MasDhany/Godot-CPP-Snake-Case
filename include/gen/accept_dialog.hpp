#ifndef GODOT_CPP_ACCEPTDIALOG_HPP
#define GODOT_CPP_ACCEPTDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "window_dialog.hpp"
namespace gd {

class button;
class control;
class label;
class node;

class accept_dialog : public window_dialog {
	struct ___method_bindings {
		godot_method_bind *mb__builtin_text_entered;
		godot_method_bind *mb__custom_action;
		godot_method_bind *mb__ok;
		godot_method_bind *mb_add_button;
		godot_method_bind *mb_add_cancel;
		godot_method_bind *mb_get_hide_on_ok;
		godot_method_bind *mb_get_label;
		godot_method_bind *mb_get_ok;
		godot_method_bind *mb_get_text;
		godot_method_bind *mb_has_autowrap;
		godot_method_bind *mb_register_text_enter;
		godot_method_bind *mb_remove_button;
		godot_method_bind *mb_set_autowrap;
		godot_method_bind *mb_set_hide_on_ok;
		godot_method_bind *mb_set_text;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AcceptDialog"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AcceptDialog"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static accept_dialog *_new();

	// methods
	void _builtin_text_entered(const string arg0);
	void _custom_action(const string arg0);
	void _ok();
	button *add_button(const string text, const bool right = false, const string action = "");
	button *add_cancel(const string name);
	bool get_hide_on_ok() const;
	label *get_label();
	button *get_ok();
	string get_text() const;
	bool has_autowrap();
	void register_text_enter(const node *line_edit_);
	void remove_button(const control *button_);
	void set_autowrap(const bool autowrap);
	void set_hide_on_ok(const bool enabled);
	void set_text(const string text);

};

}

#endif