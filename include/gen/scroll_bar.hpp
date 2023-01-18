#ifndef GODOT_CPP_SCROLLBAR_HPP
#define GODOT_CPP_SCROLLBAR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "range.hpp"
namespace gd {

class input_event;

class scroll_bar : public range {
	struct ___method_bindings {
		godot_method_bind *mb__drag_node_exit;
		godot_method_bind *mb__drag_node_input;
		godot_method_bind *mb__gui_input;
		godot_method_bind *mb_get_custom_step;
		godot_method_bind *mb_set_custom_step;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ScrollBar"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ScrollBar"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _drag_node_exit();
	void _drag_node_input(const ref<input_event> arg0);
	void _gui_input(const ref<input_event> arg0);
	real_t get_custom_step() const;
	void set_custom_step(const real_t step);

};

}

#endif