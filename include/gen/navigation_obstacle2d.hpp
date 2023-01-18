#ifndef GODOT_CPP_NAVIGATIONOBSTACLE2D_HPP
#define GODOT_CPP_NAVIGATIONOBSTACLE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "node.hpp"
namespace gd {

class node;

class navigation_obstacle2d : public node {
	struct ___method_bindings {
		godot_method_bind *mb_get_navigation;
		godot_method_bind *mb_get_radius;
		godot_method_bind *mb_get_rid;
		godot_method_bind *mb_is_radius_estimated;
		godot_method_bind *mb_set_estimate_radius;
		godot_method_bind *mb_set_navigation;
		godot_method_bind *mb_set_radius;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NavigationObstacle2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationObstacle2D"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation_obstacle2d *_new();

	// methods
	node *get_navigation() const;
	real_t get_radius() const;
	rid get_rid() const;
	bool is_radius_estimated() const;
	void set_estimate_radius(const bool estimate_radius);
	void set_navigation(const node *navigation_);
	void set_radius(const real_t radius);

};

}

#endif