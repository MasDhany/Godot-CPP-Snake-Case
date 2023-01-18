#ifndef GODOT_CPP_VISIBILITYNOTIFIER2D_HPP
#define GODOT_CPP_VISIBILITYNOTIFIER2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class visibility_notifier2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb_get_rect;
		godot_method_bind *mb_is_on_screen;
		godot_method_bind *mb_set_rect;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisibilityNotifier2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisibilityNotifier2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visibility_notifier2d *_new();

	// methods
	rect2 get_rect() const;
	bool is_on_screen() const;
	void set_rect(const rect2 rect);

};

}

#endif