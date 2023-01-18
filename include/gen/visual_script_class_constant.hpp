#ifndef GODOT_CPP_VISUALSCRIPTCLASSCONSTANT_HPP
#define GODOT_CPP_VISUALSCRIPTCLASSCONSTANT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "visual_script_node.hpp"
namespace gd {


class visual_script_class_constant : public visual_script_node {
	struct ___method_bindings {
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_class_constant;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_class_constant;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptClassConstant"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptClassConstant"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static visual_script_class_constant *_new();

	// methods
	string get_base_type();
	string get_class_constant();
	void set_base_type(const string name);
	void set_class_constant(const string name);

};

}

#endif