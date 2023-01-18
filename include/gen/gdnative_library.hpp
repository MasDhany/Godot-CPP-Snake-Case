#ifndef GODOT_CPP_GDNATIVELIBRARY_HPP
#define GODOT_CPP_GDNATIVELIBRARY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class config_file;

class gdnative_library : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_config_file;
		godot_method_bind *mb_get_current_dependencies;
		godot_method_bind *mb_get_current_library_path;
		godot_method_bind *mb_get_symbol_prefix;
		godot_method_bind *mb_is_reloadable;
		godot_method_bind *mb_is_singleton;
		godot_method_bind *mb_set_config_file;
		godot_method_bind *mb_set_load_once;
		godot_method_bind *mb_set_reloadable;
		godot_method_bind *mb_set_singleton;
		godot_method_bind *mb_set_symbol_prefix;
		godot_method_bind *mb_should_load_once;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GDNativeLibrary"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GDNativeLibrary"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static gdnative_library *_new();

	// methods
	ref<config_file> get_config_file();
	pool_string_array get_current_dependencies() const;
	string get_current_library_path() const;
	string get_symbol_prefix() const;
	bool is_reloadable() const;
	bool is_singleton() const;
	void set_config_file(const ref<config_file> config_file_);
	void set_load_once(const bool load_once);
	void set_reloadable(const bool reloadable);
	void set_singleton(const bool singleton);
	void set_symbol_prefix(const string symbol_prefix);
	bool should_load_once() const;

};

}

#endif