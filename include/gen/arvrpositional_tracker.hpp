#ifndef GODOT_CPP_ARVRPOSITIONALTRACKER_HPP
#define GODOT_CPP_ARVRPOSITIONALTRACKER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "arvrpositional_tracker.hpp"
#include "arvrserver.hpp"

#include "reference.hpp"
namespace gd {

class mesh;

class arvrpositional_tracker : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__set_joy_id;
		godot_method_bind *mb__set_mesh;
		godot_method_bind *mb__set_name;
		godot_method_bind *mb__set_orientation;
		godot_method_bind *mb__set_rw_position;
		godot_method_bind *mb__set_type;
		godot_method_bind *mb_get_hand;
		godot_method_bind *mb_get_joy_id;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_name;
		godot_method_bind *mb_get_orientation;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_rumble;
		godot_method_bind *mb_get_tracker_id;
		godot_method_bind *mb_get_tracks_orientation;
		godot_method_bind *mb_get_tracks_position;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_get_type;
		godot_method_bind *mb_set_rumble;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ARVRPositionalTracker"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ARVRPositionalTracker"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TrackerHand {
		TRACKER_HAND_UNKNOWN = 0,
		TRACKER_LEFT_HAND = 1,
		TRACKER_RIGHT_HAND = 2,
	};

	// constants


	static arvrpositional_tracker *_new();

	// methods
	void _set_joy_id(const int64_t joy_id);
	void _set_mesh(const ref<mesh> mesh_);
	void _set_name(const string name);
	void _set_orientation(const basis orientation);
	void _set_rw_position(const vector3 rw_position);
	void _set_type(const int64_t type);
	arvrpositional_tracker::TrackerHand get_hand() const;
	int64_t get_joy_id() const;
	ref<mesh> get_mesh() const;
	string get_name() const;
	basis get_orientation() const;
	vector3 get_position() const;
	real_t get_rumble() const;
	int64_t get_tracker_id() const;
	bool get_tracks_orientation() const;
	bool get_tracks_position() const;
	transform get_transform(const bool adjust_by_reference_frame) const;
	arvrserver::TrackerType get_type() const;
	void set_rumble(const real_t rumble);

};

}

#endif