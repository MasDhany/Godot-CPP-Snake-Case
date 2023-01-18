#ifndef GODOT_CPP_WORLD_HPP
#define GODOT_CPP_WORLD_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class environment;
class physics_direct_space_state;

class world : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_direct_space_state;
		godot_method_bind *mb_get_environment;
		godot_method_bind *mb_get_fallback_environment;
		godot_method_bind *mb_get_navigation_map;
		godot_method_bind *mb_get_scenario;
		godot_method_bind *mb_get_space;
		godot_method_bind *mb_set_environment;
		godot_method_bind *mb_set_fallback_environment;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "World"; }
	static inline const char *___get_godot_class_name() { return (const char *) "World"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static world *_new();

	// methods
	physics_direct_space_state *get_direct_space_state();
	ref<environment> get_environment() const;
	ref<environment> get_fallback_environment() const;
	rid get_navigation_map() const;
	rid get_scenario() const;
	rid get_space() const;
	void set_environment(const ref<environment> env);
	void set_fallback_environment(const ref<environment> env);

};

}

#endif