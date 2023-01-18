#ifndef GODOT_CPP_MENUBUTTON_HPP
#define GODOT_CPP_MENUBUTTON_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "button.hpp"
namespace gd {

class input_event;
class popup_menu;

class menu_button : public button {
	struct ___method_bindings {
		godot_method_bind *mb__get_items;
		godot_method_bind *mb__set_items;
		godot_method_bind *mb__unhandled_key_input;
		godot_method_bind *mb_get_popup;
		godot_method_bind *mb_is_switch_on_hover;
		godot_method_bind *mb_set_disable_shortcuts;
		godot_method_bind *mb_set_switch_on_hover;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MenuButton"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MenuButton"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static menu_button *_new();

	// methods
	array _get_items() const;
	void _set_items(const array arg0);
	void _unhandled_key_input(const ref<input_event> arg0);
	popup_menu *get_popup() const;
	bool is_switch_on_hover();
	void set_disable_shortcuts(const bool disabled);
	void set_switch_on_hover(const bool enable);

};

}

#endif