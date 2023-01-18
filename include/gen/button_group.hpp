#ifndef GODOT_CPP_BUTTONGROUP_HPP
#define GODOT_CPP_BUTTONGROUP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class base_button;

class button_group : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_buttons;
		godot_method_bind *mb_get_pressed_button;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ButtonGroup"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ButtonGroup"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static button_group *_new();

	// methods
	array get_buttons();
	base_button *get_pressed_button();

};

}

#endif