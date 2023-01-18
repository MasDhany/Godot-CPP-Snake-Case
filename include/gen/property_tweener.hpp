#ifndef GODOT_CPP_PROPERTYTWEENER_HPP
#define GODOT_CPP_PROPERTYTWEENER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "tweener.hpp"
namespace gd {

class property_tweener;

class property_tweener : public tweener {
	struct ___method_bindings {
		godot_method_bind *mb_as_relative;
		godot_method_bind *mb_from;
		godot_method_bind *mb_from_current;
		godot_method_bind *mb_set_delay;
		godot_method_bind *mb_set_ease;
		godot_method_bind *mb_set_trans;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PropertyTweener"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PropertyTweener"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static property_tweener *_new();

	// methods
	ref<property_tweener> as_relative();
	ref<property_tweener> from(const variant value);
	ref<property_tweener> from_current();
	ref<property_tweener> set_delay(const real_t delay);
	ref<property_tweener> set_ease(const int64_t ease);
	ref<property_tweener> set_trans(const int64_t trans);

};

}

#endif