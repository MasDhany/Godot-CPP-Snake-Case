#ifndef GODOT_CPP_SCENESTATE_HPP
#define GODOT_CPP_SCENESTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class packed_scene;

class scene_state : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_connection_binds;
		godot_method_bind *mb_get_connection_count;
		godot_method_bind *mb_get_connection_flags;
		godot_method_bind *mb_get_connection_method;
		godot_method_bind *mb_get_connection_signal;
		godot_method_bind *mb_get_connection_source;
		godot_method_bind *mb_get_connection_target;
		godot_method_bind *mb_get_node_count;
		godot_method_bind *mb_get_node_groups;
		godot_method_bind *mb_get_node_index;
		godot_method_bind *mb_get_node_instance;
		godot_method_bind *mb_get_node_instance_placeholder;
		godot_method_bind *mb_get_node_name;
		godot_method_bind *mb_get_node_owner_path;
		godot_method_bind *mb_get_node_path;
		godot_method_bind *mb_get_node_property_count;
		godot_method_bind *mb_get_node_property_name;
		godot_method_bind *mb_get_node_property_value;
		godot_method_bind *mb_get_node_type;
		godot_method_bind *mb_is_node_instance_placeholder;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SceneState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "SceneState"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum GenEditState {
		GEN_EDIT_STATE_DISABLED = 0,
		GEN_EDIT_STATE_INSTANCE = 1,
		GEN_EDIT_STATE_MAIN = 2,
		GEN_EDIT_STATE_MAIN_INHERITED = 3,
	};

	// constants

	// methods
	array get_connection_binds(const int64_t idx) const;
	int64_t get_connection_count() const;
	int64_t get_connection_flags(const int64_t idx) const;
	string get_connection_method(const int64_t idx) const;
	string get_connection_signal(const int64_t idx) const;
	node_path get_connection_source(const int64_t idx) const;
	node_path get_connection_target(const int64_t idx) const;
	int64_t get_node_count() const;
	pool_string_array get_node_groups(const int64_t idx) const;
	int64_t get_node_index(const int64_t idx) const;
	ref<packed_scene> get_node_instance(const int64_t idx) const;
	string get_node_instance_placeholder(const int64_t idx) const;
	string get_node_name(const int64_t idx) const;
	node_path get_node_owner_path(const int64_t idx) const;
	node_path get_node_path(const int64_t idx, const bool for_parent = false) const;
	int64_t get_node_property_count(const int64_t idx) const;
	string get_node_property_name(const int64_t idx, const int64_t prop_idx) const;
	variant get_node_property_value(const int64_t idx, const int64_t prop_idx) const;
	string get_node_type(const int64_t idx) const;
	bool is_node_instance_placeholder(const int64_t idx) const;

};

}

#endif