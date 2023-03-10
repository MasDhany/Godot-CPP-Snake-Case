#ifndef GODOT_CPP_ANIMATIONNODEBLENDSPACE1D_HPP
#define GODOT_CPP_ANIMATIONNODEBLENDSPACE1D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "animation_root_node.hpp"
namespace gd {

class animation_root_node;

class animation_node_blend_space1d : public animation_root_node {
	struct ___method_bindings {
		godot_method_bind *mb__add_blend_point;
		godot_method_bind *mb__tree_changed;
		godot_method_bind *mb_add_blend_point;
		godot_method_bind *mb_get_blend_point_count;
		godot_method_bind *mb_get_blend_point_node;
		godot_method_bind *mb_get_blend_point_position;
		godot_method_bind *mb_get_max_space;
		godot_method_bind *mb_get_min_space;
		godot_method_bind *mb_get_snap;
		godot_method_bind *mb_get_value_label;
		godot_method_bind *mb_remove_blend_point;
		godot_method_bind *mb_set_blend_point_node;
		godot_method_bind *mb_set_blend_point_position;
		godot_method_bind *mb_set_max_space;
		godot_method_bind *mb_set_min_space;
		godot_method_bind *mb_set_snap;
		godot_method_bind *mb_set_value_label;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeBlendSpace1D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AnimationNodeBlendSpace1D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static animation_node_blend_space1d *_new();

	// methods
	void _add_blend_point(const int64_t index, const ref<animation_root_node> node_);
	void _tree_changed();
	void add_blend_point(const ref<animation_root_node> node_, const real_t pos, const int64_t at_index = -1);
	int64_t get_blend_point_count() const;
	ref<animation_root_node> get_blend_point_node(const int64_t point) const;
	real_t get_blend_point_position(const int64_t point) const;
	real_t get_max_space() const;
	real_t get_min_space() const;
	real_t get_snap() const;
	string get_value_label() const;
	void remove_blend_point(const int64_t point);
	void set_blend_point_node(const int64_t point, const ref<animation_root_node> node_);
	void set_blend_point_position(const int64_t point, const real_t pos);
	void set_max_space(const real_t max_space);
	void set_min_space(const real_t min_space);
	void set_snap(const real_t snap);
	void set_value_label(const string text);

};

}

#endif