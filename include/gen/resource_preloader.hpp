#ifndef GODOT_CPP_RESOURCEPRELOADER_HPP
#define GODOT_CPP_RESOURCEPRELOADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class resource;

class resource_preloader : public node {
	struct ___method_bindings {
		godot_method_bind *mb__get_resources;
		godot_method_bind *mb__set_resources;
		godot_method_bind *mb_add_resource;
		godot_method_bind *mb_get_resource;
		godot_method_bind *mb_get_resource_list;
		godot_method_bind *mb_has_resource;
		godot_method_bind *mb_remove_resource;
		godot_method_bind *mb_rename_resource;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ResourcePreloader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ResourcePreloader"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static resource_preloader *_new();

	// methods
	array _get_resources() const;
	void _set_resources(const array arg0);
	void add_resource(const string name, const ref<resource> resource_);
	ref<resource> get_resource(const string name) const;
	pool_string_array get_resource_list() const;
	bool has_resource(const string name) const;
	void remove_resource(const string name);
	void rename_resource(const string name, const string newname);

};

}

#endif