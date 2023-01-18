#ifndef GODOT_CPP_JAVASCRIPT_HPP
#define GODOT_CPP_JAVASCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class java_script_object;
class object;

class java_script : public object {
	static java_script *_singleton;

	java_script();

	struct ___method_bindings {
		godot_method_bind *mb_create_callback;
		godot_method_bind *mb_create_object;
		godot_method_bind *mb_download_buffer;
		godot_method_bind *mb_eval;
		godot_method_bind *mb_get_interface;
		godot_method_bind *mb_pwa_needs_update;
		godot_method_bind *mb_pwa_update;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline java_script *get_singleton()
	{
		if (!java_script::_singleton) {
			java_script::_singleton = new java_script;
		}
		return java_script::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "JavaScript"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JavaScript"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	ref<java_script_object> create_callback(const object *object_, const string method);
	variant create_object(const string object_, const array& __var_args = array());
	void download_buffer(const pool_byte_array buffer, const string name, const string mime = "application/octet-stream");
	variant eval(const string code, const bool use_global_execution_context = false);
	ref<java_script_object> get_interface(const string interface);
	bool pwa_needs_update() const;
	error pwa_update();
	template <class... Args> variant create_object(const string object_, Args... args){
		return create_object(object_, array::make(args...));
	}

};

}

#endif