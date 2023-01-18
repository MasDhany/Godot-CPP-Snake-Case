#ifndef GODOT_CPP_JAVACLASSWRAPPER_HPP
#define GODOT_CPP_JAVACLASSWRAPPER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class java_class;

class java_class_wrapper : public object {
	static java_class_wrapper *_singleton;

	java_class_wrapper();

	struct ___method_bindings {
		godot_method_bind *mb_wrap;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline java_class_wrapper *get_singleton()
	{
		if (!java_class_wrapper::_singleton) {
			java_class_wrapper::_singleton = new java_class_wrapper;
		}
		return java_class_wrapper::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "JavaClassWrapper"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JavaClassWrapper"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	ref<java_class> wrap(const string name);

};

}

#endif