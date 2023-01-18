#ifndef GODOT_CPP_METHODTWEENER_HPP
#define GODOT_CPP_METHODTWEENER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "tweener.hpp"
namespace gd {

class method_tweener;

class method_tweener : public tweener {
	struct ___method_bindings {
		godot_method_bind *mb_set_delay;
		godot_method_bind *mb_set_ease;
		godot_method_bind *mb_set_trans;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MethodTweener"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MethodTweener"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static method_tweener *_new();

	// methods
	ref<method_tweener> set_delay(const real_t delay);
	ref<method_tweener> set_ease(const int64_t ease);
	ref<method_tweener> set_trans(const int64_t trans);

};

}

#endif