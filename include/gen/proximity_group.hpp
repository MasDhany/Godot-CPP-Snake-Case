#ifndef GODOT_CPP_PROXIMITYGROUP_HPP
#define GODOT_CPP_PROXIMITYGROUP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "proximity_group.hpp"

#include "spatial.hpp"
namespace gd {


class proximity_group : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__proximity_group_broadcast;
		godot_method_bind *mb_broadcast;
		godot_method_bind *mb_get_dispatch_mode;
		godot_method_bind *mb_get_grid_radius;
		godot_method_bind *mb_get_group_name;
		godot_method_bind *mb_set_dispatch_mode;
		godot_method_bind *mb_set_grid_radius;
		godot_method_bind *mb_set_group_name;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ProximityGroup"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ProximityGroup"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DispatchMode {
		MODE_PROXY = 0,
		MODE_SIGNAL = 1,
	};

	// constants


	static proximity_group *_new();

	// methods
	void _proximity_group_broadcast(const string method, const variant parameters);
	void broadcast(const string method, const variant parameters);
	proximity_group::DispatchMode get_dispatch_mode() const;
	vector3 get_grid_radius() const;
	string get_group_name() const;
	void set_dispatch_mode(const int64_t mode);
	void set_grid_radius(const vector3 radius);
	void set_group_name(const string name);

};

}

#endif