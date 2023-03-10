#ifndef GODOT_CPP_WINDOWDIALOG_HPP
#define GODOT_CPP_WINDOWDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "popup.hpp"
namespace gd {

class input_event;
class texture_button;

class window_dialog : public popup {
	struct ___method_bindings {
		godot_method_bind *mb__closed;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb_get_close_button;
		godot_method_bind *mb_get_resizable;
		godot_method_bind *mb_get_title;
		godot_method_bind *mb_set_resizable;
		godot_method_bind *mb_set_title;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WindowDialog"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WindowDialog"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static window_dialog *_new();

	// methods
	void _closed();
	void _gui_input(const ref<input_event> arg0);
	texture_button *get_close_button();
	bool get_resizable() const;
	string get_title() const;
	void set_resizable(const bool resizable);
	void set_title(const string title);

};

}

#endif