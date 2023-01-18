#ifndef GODOT_CPP_WORLDENVIRONMENT_HPP
#define GODOT_CPP_WORLDENVIRONMENT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class environment;

class world_environment : public node {
	struct ___method_bindings {
		godot_method_bind *mb_get_environment;
		godot_method_bind *mb_set_environment;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WorldEnvironment"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WorldEnvironment"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static world_environment *_new();

	// methods
	ref<environment> get_environment() const;
	void set_environment(const ref<environment> env);

};

}

#endif