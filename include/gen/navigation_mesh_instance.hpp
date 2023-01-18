#ifndef GODOT_CPP_NAVIGATIONMESHINSTANCE_HPP
#define GODOT_CPP_NAVIGATIONMESHINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class navigation_mesh;

class navigation_mesh_instance : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__bake_finished;
		godot_method_bind *mb_bake_navigation_mesh;
		godot_method_bind *mb_get_enter_cost;
		godot_method_bind *mb_get_navigation_layers;
		godot_method_bind *mb_get_navigation_mesh;
		godot_method_bind *mb_get_region_rid;
		godot_method_bind *mb_get_travel_cost;
		godot_method_bind *mb_is_enabled;
		godot_method_bind *mb_set_enabled;
		godot_method_bind *mb_set_enter_cost;
		godot_method_bind *mb_set_navigation_layers;
		godot_method_bind *mb_set_navigation_mesh;
		godot_method_bind *mb_set_travel_cost;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NavigationMeshInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "NavigationMeshInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static navigation_mesh_instance *_new();

	// methods
	void _bake_finished(const ref<navigation_mesh> nav_mesh);
	void bake_navigation_mesh(const bool on_thread = true);
	real_t get_enter_cost() const;
	int64_t get_navigation_layers() const;
	ref<navigation_mesh> get_navigation_mesh() const;
	rid get_region_rid() const;
	real_t get_travel_cost() const;
	bool is_enabled() const;
	void set_enabled(const bool enabled);
	void set_enter_cost(const real_t enter_cost);
	void set_navigation_layers(const int64_t navigation_layers);
	void set_navigation_mesh(const ref<navigation_mesh> navmesh);
	void set_travel_cost(const real_t travel_cost);

};

}

#endif