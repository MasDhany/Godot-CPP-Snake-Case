#ifndef GODOT_CPP_ARVRCONTROLLER_HPP
#define GODOT_CPP_ARVRCONTROLLER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "arvrpositional_tracker.hpp"

#include "spatial.hpp"
namespace gd {

class mesh;

class arvrcontroller : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_controller_id;
		godot_method_bind *mb_get_controller_name;
		godot_method_bind *mb_get_hand;
		godot_method_bind *mb_get_is_active;
		godot_method_bind *mb_get_joystick_axis;
		godot_method_bind *mb_get_joystick_id;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_rumble;
		godot_method_bind *mb_is_button_pressed;
		godot_method_bind *mb_set_controller_id;
		godot_method_bind *mb_set_rumble;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ARVRController"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ARVRController"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static arvrcontroller *_new();

	// methods
	int64_t get_controller_id() const;
	string get_controller_name() const;
	arvrpositional_tracker::TrackerHand get_hand() const;
	bool get_is_active() const;
	real_t get_joystick_axis(const int64_t axis) const;
	int64_t get_joystick_id() const;
	ref<mesh> get_mesh() const;
	real_t get_rumble() const;
	int64_t is_button_pressed(const int64_t button_) const;
	void set_controller_id(const int64_t controller_id);
	void set_rumble(const real_t rumble);

};

}

#endif