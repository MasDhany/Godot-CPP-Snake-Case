#ifndef GODOT_CPP_RESOURCELOADER_HPP
#define GODOT_CPP_RESOURCELOADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "object.hpp"
namespace gd {

class resource;
class resource_interactive_loader;

class resource_loader : public object {
	static resource_loader *_singleton;

	resource_loader();

	struct ___method_bindings {
		godot_method_bind *mb_exists;
		godot_method_bind *mb_get_dependencies;
		godot_method_bind *mb_get_recognized_extensions_for_type;
		godot_method_bind *mb_has;
		godot_method_bind *mb_has_cached;
		godot_method_bind *mb_load;
		godot_method_bind *mb_load_interactive;
		godot_method_bind *mb_set_abort_on_missing_resources;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline resource_loader *get_singleton()
	{
		if (!resource_loader::_singleton) {
			resource_loader::_singleton = new resource_loader;
		}
		return resource_loader::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "ResourceLoader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ResourceLoader"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool exists(const string path_, const string type_hint = "");
	pool_string_array get_dependencies(const string path_);
	pool_string_array get_recognized_extensions_for_type(const string type);
	bool has(const string path_);
	bool has_cached(const string path_);
	ref<resource> load(const string path_, const string type_hint = "", const bool no_cache = false);
	ref<resource_interactive_loader> load_interactive(const string path_, const string type_hint = "");
	void set_abort_on_missing_resources(const bool abort);

};

}

#endif