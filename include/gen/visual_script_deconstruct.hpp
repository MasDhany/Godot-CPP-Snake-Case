#ifndef GODOT_CPP_VISUALSCRIPTDECONSTRUCT_HPP
#define GODOT_CPP_VISUALSCRIPTDECONSTRUCT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "variant.hpp"

#include "visual_script_node.hpp"
namespace gd {


class visual_script_deconstruct : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb__get_elem_cache;
		godot_method_bind *mb__set_elem_cache;
		godot_method_bind *mb_get_deconstruct_type;
		godot_method_bind *mb_set_deconstruct_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptDeconstruct"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptDeconstruct"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script_deconstruct *_new();

	// methods
	array _get_elem_cache() const;
	void _set_elem_cache(const array _cache);
	variant::Type get_deconstruct_type() const;
	void set_deconstruct_type(const int64_t type);

};

}

#endif