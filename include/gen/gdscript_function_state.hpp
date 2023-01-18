#ifndef GODOT_CPP_GDSCRIPTFUNCTIONSTATE_HPP
#define GODOT_CPP_GDSCRIPTFUNCTIONSTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {


class gdscript_function_state : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__signal_callback;
		godot_method_bind *mb_is_valid;
		godot_method_bind *mb_resume;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GDScriptFunctionState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GDScriptFunctionState"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	variant _signal_callback(const array& __var_args = array());
	bool is_valid(const bool extended_check = false) const;
	variant resume(const variant arg = variant());
	template <class... Args> variant _signal_callback(Args... args){
		return _signal_callback(array::make(args...));
	}

};

}

#endif