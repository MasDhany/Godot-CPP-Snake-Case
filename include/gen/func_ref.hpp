#ifndef GODOT_CPP_FUNCREF_HPP
#define GODOT_CPP_FUNCREF_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class object;

class func_ref : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_call_func;
		godot_method_bind *mb_call_funcv;
		godot_method_bind *mb_get_function;
		godot_method_bind *mb_is_valid;
		godot_method_bind *mb_set_function;
		godot_method_bind *mb_set_instance;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "FuncRef"; }
	static inline const char *___get_godot_class_name() { return (const char *) "FuncRef"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static func_ref *_new();

	// methods
	variant call_func(const array& __var_args = array());
	variant call_funcv(const array arg_array);
	string get_function();
	bool is_valid() const;
	void set_function(const string name);
	void set_instance(const object *instance);
	template <class... Args> variant call_func(Args... args){
		return call_func(array::make(args...));
	}

};

}

#endif