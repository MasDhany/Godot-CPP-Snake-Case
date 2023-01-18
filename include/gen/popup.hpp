#ifndef GODOT_CPP_POPUP_HPP
#define GODOT_CPP_POPUP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "control.hpp"
namespace gd {


class popup : public control {
	struct ___method_bindings {
		godot_method_bind *mb_is_exclusive;
		godot_method_bind *mb_popup;
		godot_method_bind *mb_popup_centered;
		godot_method_bind *mb_popup_centered_clamped;
		godot_method_bind *mb_popup_centered_minsize;
		godot_method_bind *mb_popup_centered_ratio;
		godot_method_bind *mb_set_as_minsize;
		godot_method_bind *mb_set_exclusive;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Popup"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Popup"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_POPUP_HIDE = 81;
	const static int NOTIFICATION_POST_POPUP = 80;


	static popup *_new();

	// methods
	bool is_exclusive() const;
	void popup_(const rect2 bounds = rect2(0, 0, 0, 0));
	void popup_centered(const vector2 size = vector2(0, 0));
	void popup_centered_clamped(const vector2 size = vector2(0, 0), const real_t fallback_ratio = 0.75);
	void popup_centered_minsize(const vector2 minsize = vector2(0, 0));
	void popup_centered_ratio(const real_t ratio = 0.75);
	void set_as_minsize();
	void set_exclusive(const bool enable);

};

}

#endif