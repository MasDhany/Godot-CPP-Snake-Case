#ifndef GODOT_CPP_PHYSICSMATERIAL_HPP
#define GODOT_CPP_PHYSICSMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class physics_material : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_bounce;
		godot_method_bind *mb_get_friction;
		godot_method_bind *mb_is_absorbent;
		godot_method_bind *mb_is_rough;
		godot_method_bind *mb_set_absorbent;
		godot_method_bind *mb_set_bounce;
		godot_method_bind *mb_set_friction;
		godot_method_bind *mb_set_rough;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsMaterial"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PhysicsMaterial"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static physics_material *_new();

	// methods
	real_t get_bounce() const;
	real_t get_friction() const;
	bool is_absorbent() const;
	bool is_rough() const;
	void set_absorbent(const bool absorbent);
	void set_bounce(const real_t bounce);
	void set_friction(const real_t friction);
	void set_rough(const bool rough);

};

}

#endif