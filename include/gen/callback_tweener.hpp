#ifndef GODOT_CPP_CALLBACKTWEENER_HPP
#define GODOT_CPP_CALLBACKTWEENER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "tweener.hpp"
namespace gd {

class callback_tweener;

class callback_tweener : public tweener {
	struct ___method_bindings {
		godot_method_bind *mb_set_delay;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CallbackTweener"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CallbackTweener"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static callback_tweener *_new();

	// methods
	ref<callback_tweener> set_delay(const real_t delay);

};

}

#endif