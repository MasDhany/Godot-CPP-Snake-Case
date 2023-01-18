#ifndef GODOT_CPP_JOINT2D_HPP
#define GODOT_CPP_JOINT2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node2d.hpp"
namespace gd {


class joint2d : public node2d {
	struct ___method_bindings {
		godot_method_bind *mb__body_exit_tree;
		godot_method_bind *mb_get_bias;
		godot_method_bind *mb_get_exclude_nodes_from_collision;
		godot_method_bind *mb_get_node_a;
		godot_method_bind *mb_get_node_b;
		godot_method_bind *mb_set_bias;
		godot_method_bind *mb_set_exclude_nodes_from_collision;
		godot_method_bind *mb_set_node_a;
		godot_method_bind *mb_set_node_b;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Joint2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Joint2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _body_exit_tree();
	real_t get_bias() const;
	bool get_exclude_nodes_from_collision() const;
	node_path get_node_a() const;
	node_path get_node_b() const;
	void set_bias(const real_t bias);
	void set_exclude_nodes_from_collision(const bool enable);
	void set_node_a(const node_path node_);
	void set_node_b(const node_path node_);

};

}

#endif