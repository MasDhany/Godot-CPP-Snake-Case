#ifndef GODOT_CPP_INSTANCEPLACEHOLDER_HPP
#define GODOT_CPP_INSTANCEPLACEHOLDER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class node;
class packed_scene;

class instance_placeholder : public node {
	struct ___method_bindings {
		godot_method_bind *mb_create_instance;
		godot_method_bind *mb_get_instance_path;
		godot_method_bind *mb_get_stored_values;
		godot_method_bind *mb_replace_by_instance;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InstancePlaceholder"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InstancePlaceholder"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	node *create_instance(const bool replace = false, const ref<packed_scene> custom_scene = nullptr);
	string get_instance_path() const;
	dictionary get_stored_values(const bool with_order = false);
	void replace_by_instance(const ref<packed_scene> custom_scene = nullptr);

};

}

#endif