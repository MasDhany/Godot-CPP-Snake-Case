#ifndef GODOT_CPP_COLORPICKERBUTTON_HPP
#define GODOT_CPP_COLORPICKERBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "button.hpp"
namespace gd {

class color_picker;
class popup_panel;

class color_picker_button : public button {
	struct ___method_bindings {
		godot_method_bind *mb__about_to_show;
		godot_method_bind *mb__color_changed;
		godot_method_bind *mb__modal_closed;
		godot_method_bind *mb_get_pick_color;
		godot_method_bind *mb_get_picker;
		godot_method_bind *mb_get_popup;
		godot_method_bind *mb_is_editing_alpha;
		godot_method_bind *mb_set_edit_alpha;
		godot_method_bind *mb_set_pick_color;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ColorPickerButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ColorPickerButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static color_picker_button *_new();

	// methods
	void _about_to_show();
	void _color_changed(const color arg0);
	void _modal_closed();
	color get_pick_color() const;
	color_picker *get_picker();
	popup_panel *get_popup();
	bool is_editing_alpha() const;
	void set_edit_alpha(const bool show);
	void set_pick_color(const color color_);

};

}

#endif