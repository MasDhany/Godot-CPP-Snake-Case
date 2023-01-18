#ifndef GODOT_CPP_SPATIALVELOCITYTRACKER_HPP
#define GODOT_CPP_SPATIALVELOCITYTRACKER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class spatial_velocity_tracker : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_tracked_linear_velocity;
		godot_method_bind *mb_is_tracking_physics_step;
		godot_method_bind *mb_reset;
		godot_method_bind *mb_set_track_physics_step;
		godot_method_bind *mb_update_position;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SpatialVelocityTracker"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SpatialVelocityTracker"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static spatial_velocity_tracker *_new();

	// methods
	vector3 get_tracked_linear_velocity() const;
	bool is_tracking_physics_step() const;
	void reset(const vector3 position);
	void set_track_physics_step(const bool enable);
	void update_position(const vector3 position);

};

}

#endif