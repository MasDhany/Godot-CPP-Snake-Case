#ifndef GODOT_CPP_VISUALSCRIPTYIELD_HPP
#define GODOT_CPP_VISUALSCRIPTYIELD_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "visual_script_yield.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_yield : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_wait_time;
		godot_method_bind *mb_get_yield_mode;
		godot_method_bind *mb_set_wait_time;
		godot_method_bind *mb_set_yield_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptYield"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptYield"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum YieldMode {
		YIELD_FRAME = 1,
		YIELD_PHYSICS_FRAME = 2,
		YIELD_WAIT = 3,
	};

	// constants


	static visual_script_yield *_new();

	// methods
	real_t get_wait_time();
	visual_script_yield::YieldMode get_yield_mode();
	void set_wait_time(const real_t sec);
	void set_yield_mode(const int64_t mode);

};

}

#endif