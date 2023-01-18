#ifndef GODOT_CPP_ANIMATIONNODE_HPP
#define GODOT_CPP_ANIMATIONNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class animation_node;
class object;

class animation_node : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_filters;
		godot_method_bind *mb__set_filters;
		godot_method_bind *mb_add_input;
		godot_method_bind *mb_blend_animation;
		godot_method_bind *mb_blend_input;
		godot_method_bind *mb_blend_node;
		godot_method_bind *mb_get_caption;
		godot_method_bind *mb_get_child_by_name;
		godot_method_bind *mb_get_child_nodes;
		godot_method_bind *mb_get_input_count;
		godot_method_bind *mb_get_input_name;
		godot_method_bind *mb_get_parameter;
		godot_method_bind *mb_get_parameter_default_value;
		godot_method_bind *mb_get_parameter_list;
		godot_method_bind *mb_has_filter;
		godot_method_bind *mb_is_filter_enabled;
		godot_method_bind *mb_is_path_filtered;
		godot_method_bind *mb_process;
		godot_method_bind *mb_remove_input;
		godot_method_bind *mb_set_filter_enabled;
		godot_method_bind *mb_set_filter_path;
		godot_method_bind *mb_set_parameter;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNode"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FilterAction {
		FILTER_IGNORE = 0,
		FILTER_PASS = 1,
		FILTER_STOP = 2,
		FILTER_BLEND = 3,
	};

	// constants


	static animation_node *_new();

	// methods
	array _get_filters() const;
	void _set_filters(const array filters);
	void add_input(const string name);
	void blend_animation(const string animation_, const real_t time_, const real_t delta, const bool seeked, const real_t blend);
	real_t blend_input(const int64_t input_index, const real_t time_, const bool seek, const real_t blend, const int64_t filter = 0, const bool optimize = true);
	real_t blend_node(const string name, const ref<animation_node> node_, const real_t time_, const bool seek, const real_t blend, const int64_t filter = 0, const bool optimize = true);
	string get_caption();
	object *get_child_by_name(const string name);
	dictionary get_child_nodes();
	int64_t get_input_count() const;
	string get_input_name(const int64_t input_);
	variant get_parameter(const string name) const;
	variant get_parameter_default_value(const string name);
	array get_parameter_list();
	bool has_filter();
	bool is_filter_enabled() const;
	bool is_path_filtered(const node_path path_) const;
	void process(const real_t time_, const bool seek);
	void remove_input(const int64_t index);
	void set_filter_enabled(const bool enable);
	void set_filter_path(const node_path path_, const bool enable);
	void set_parameter(const string name, const variant value);

};

}

#endif