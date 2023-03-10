#ifndef GODOT_CPP_VEHICLEBODY_HPP
#define GODOT_CPP_VEHICLEBODY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "rigid_body.hpp"
namespace gd {


class vehicle_body : public rigid_body {
	struct ___method_bindings {
		godot_method_bind *mb_get_brake;
		godot_method_bind *mb_get_engine_force;
		godot_method_bind *mb_get_steering;
		godot_method_bind *mb_set_brake;
		godot_method_bind *mb_set_engine_force;
		godot_method_bind *mb_set_steering;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VehicleBody"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VehicleBody"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static vehicle_body *_new();

	// methods
	real_t get_brake() const;
	real_t get_engine_force() const;
	real_t get_steering() const;
	void set_brake(const real_t brake);
	void set_engine_force(const real_t engine_force);
	void set_steering(const real_t steering);

};

}

#endif