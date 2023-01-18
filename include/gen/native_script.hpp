#ifndef GODOT_CPP_NATIVESCRIPT_HPP
#define GODOT_CPP_NATIVESCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "script.hpp"
namespace gd {

class gdnative_library;

class native_script : public script {
	struct ___method_bindings {
		godot_method_bind *mb_get_class_documentation;
		godot_method_bind *mb_get_class_name;
		godot_method_bind *mb_get_library;
		godot_method_bind *mb_get_method_documentation;
		godot_method_bind *mb_get_property_documentation;
		godot_method_bind *mb_get_script_class_icon_path;
		godot_method_bind *mb_get_script_class_name;
		godot_method_bind *mb_get_signal_documentation;
		godot_method_bind *mb_new;
		godot_method_bind *mb_set_class_name;
		godot_method_bind *mb_set_library;
		godot_method_bind *mb_set_script_class_icon_path;
		godot_method_bind *mb_set_script_class_name;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NativeScript"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NativeScript"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static native_script *_new();

	// methods
	string get_class_documentation() const;
	string get_class_name() const;
	ref<gdnative_library> get_library() const;
	string get_method_documentation(const string method) const;
	string get_property_documentation(const string path_) const;
	string get_script_class_icon_path() const;
	string get_script_class_name() const;
	string get_signal_documentation(const string signal_name) const;
	variant new_(const array& __var_args = array());
	void set_class_name(const string class_name);
	void set_library(const ref<gdnative_library> library);
	void set_script_class_icon_path(const string icon_path);
	void set_script_class_name(const string class_name);
	template <class... Args> variant new_(Args... args){
		return new_(array::make(args...));
	}

};

}

#endif