#ifndef GODOT_CPP_MATERIAL_HPP
#define GODOT_CPP_MATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class material;

class material : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_next_pass;
		godot_method_bind *mb_get_render_priority;
		godot_method_bind *mb_set_next_pass;
		godot_method_bind *mb_set_render_priority;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Material"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Material"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int RENDER_PRIORITY_MAX = 127;
	const static int RENDER_PRIORITY_MIN = -128;

	// methods
	ref<material> get_next_pass() const;
	int64_t get_render_priority() const;
	void set_next_pass(const ref<material> next_pass);
	void set_render_priority(const int64_t priority);

};

}

#endif