#ifndef GODOT_CPP_ARVRSERVER_HPP
#define GODOT_CPP_ARVRSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class arvrinterface;
class arvrpositional_tracker;

class arvrserver : public object {
	static arvrserver *_singleton;

	arvrserver();

	struct ___method_bindings {
		godot_method_bind *mb_add_interface;
		godot_method_bind *mb_add_tracker;
		godot_method_bind *mb_center_on_hmd;
		godot_method_bind *mb_clear_primary_interface_if;
		godot_method_bind *mb_find_interface;
		godot_method_bind *mb_get_hmd_transform;
		godot_method_bind *mb_get_interface;
		godot_method_bind *mb_get_interface_count;
		godot_method_bind *mb_get_interfaces;
		godot_method_bind *mb_get_last_commit_usec;
		godot_method_bind *mb_get_last_frame_usec;
		godot_method_bind *mb_get_last_process_usec;
		godot_method_bind *mb_get_primary_interface;
		godot_method_bind *mb_get_reference_frame;
		godot_method_bind *mb_get_tracker;
		godot_method_bind *mb_get_tracker_count;
		godot_method_bind *mb_get_world_scale;
		godot_method_bind *mb_remove_interface;
		godot_method_bind *mb_remove_tracker;
		godot_method_bind *mb_set_primary_interface;
		godot_method_bind *mb_set_world_scale;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline arvrserver *get_singleton()
	{
		if (!arvrserver::_singleton) {
			arvrserver::_singleton = new arvrserver;
		}
		return arvrserver::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "ARVRServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ARVRServer"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum RotationMode {
		RESET_FULL_ROTATION = 0,
		RESET_BUT_KEEP_TILT = 1,
		DONT_RESET_ROTATION = 2,
	};
	enum TrackerType {
		TRACKER_CONTROLLER = 1,
		TRACKER_BASESTATION = 2,
		TRACKER_ANCHOR = 4,
		TRACKER_ANY_KNOWN = 127,
		TRACKER_UNKNOWN = 128,
		TRACKER_ANY = 255,
	};

	// constants

	// methods
	void add_interface(const ref<arvrinterface> interface);
	void add_tracker(const ref<arvrpositional_tracker> tracker);
	void center_on_hmd(const int64_t rotation_mode, const bool keep_height);
	void clear_primary_interface_if(const ref<arvrinterface> interface);
	ref<arvrinterface> find_interface(const string name) const;
	transform get_hmd_transform();
	ref<arvrinterface> get_interface(const int64_t idx) const;
	int64_t get_interface_count() const;
	array get_interfaces() const;
	int64_t get_last_commit_usec();
	int64_t get_last_frame_usec();
	int64_t get_last_process_usec();
	ref<arvrinterface> get_primary_interface() const;
	transform get_reference_frame() const;
	ref<arvrpositional_tracker> get_tracker(const int64_t idx) const;
	int64_t get_tracker_count() const;
	real_t get_world_scale() const;
	void remove_interface(const ref<arvrinterface> interface);
	void remove_tracker(const ref<arvrpositional_tracker> tracker);
	void set_primary_interface(const ref<arvrinterface> interface);
	void set_world_scale(const real_t world_scale);

};

}

#endif