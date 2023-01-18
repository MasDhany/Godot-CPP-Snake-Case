#ifndef GODOT_CPP_CONTAINER_HPP
#define GODOT_CPP_CONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "control.hpp"
namespace gd {

class control;

class container : public control {
	struct ___method_bindings {
		godot_method_bind *mb__child_minsize_changed;
		godot_method_bind *mb__sort_children;
		godot_method_bind *mb_fit_child_in_rect;
		godot_method_bind *mb_queue_sort;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Container"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Container"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_SORT_CHILDREN = 50;


	static container *_new();

	// methods
	void _child_minsize_changed();
	void _sort_children();
	void fit_child_in_rect(const control *child, const rect2 rect);
	void queue_sort();

};

}

#endif