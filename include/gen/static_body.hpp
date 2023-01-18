#ifndef GODOT_CPP_STATICBODY_HPP
#define GODOT_CPP_STATICBODY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "physics_body.hpp"
namespace gd {

class physics_material;

class static_body : public physics_body {
	struct ___method_bindings {
		godot_method_bind *mb__reload_physics_characteristics;
		godot_method_bind *mb_get_bounce;
		godot_method_bind *mb_get_constant_angular_velocity;
		godot_method_bind *mb_get_constant_linear_velocity;
		godot_method_bind *mb_get_friction;
		godot_method_bind *mb_get_physics_material_override;
		godot_method_bind *mb_set_bounce;
		godot_method_bind *mb_set_constant_angular_velocity;
		godot_method_bind *mb_set_constant_linear_velocity;
		godot_method_bind *mb_set_friction;
		godot_method_bind *mb_set_physics_material_override;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StaticBody"; }
	static inline const char *___get_godot_class_name() { return (const char *) "StaticBody"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static static_body *_new();

	// methods
	void _reload_physics_characteristics();
	real_t get_bounce() const;
	vector3 get_constant_angular_velocity() const;
	vector3 get_constant_linear_velocity() const;
	real_t get_friction() const;
	ref<physics_material> get_physics_material_override() const;
	void set_bounce(const real_t bounce);
	void set_constant_angular_velocity(const vector3 vel);
	void set_constant_linear_velocity(const vector3 vel);
	void set_friction(const real_t friction);
	void set_physics_material_override(const ref<physics_material> physics_material_override);

};

}

#endif