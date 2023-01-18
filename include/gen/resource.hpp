#ifndef GODOT_CPP_RESOURCE_HPP
#define GODOT_CPP_RESOURCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class node;
class resource;

class resource : public reference {
	struct ___method_bindings {
		godot_method_bind *mb__setup_local_to_scene;
		godot_method_bind *mb_duplicate;
		godot_method_bind *mb_emit_changed;
		godot_method_bind *mb_get_local_scene;
		godot_method_bind *mb_get_name;
		godot_method_bind *mb_get_path;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_is_local_to_scene;
		godot_method_bind *mb_set_local_to_scene;
		godot_method_bind *mb_set_name;
		godot_method_bind *mb_set_path;
		godot_method_bind *mb_setup_local_to_scene;
		godot_method_bind *mb_take_over_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Resource"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Resource"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static resource *_new();

	// methods
	void _setup_local_to_scene();
	ref<resource> duplicate(const bool subresources = false) const;
	void emit_changed();
	node *get_local_scene() const;
	string get_name() const;
	string get_path() const;
	rid get_rid() const;
	bool is_local_to_scene() const;
	void set_local_to_scene(const bool enable);
	void set_name(const string name);
	void set_path(const string path_);
	void setup_local_to_scene();
	void take_over_path(const string path_);

};

}

#endif