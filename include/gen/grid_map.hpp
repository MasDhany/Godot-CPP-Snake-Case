#ifndef GODOT_CPP_GRIDMAP_HPP
#define GODOT_CPP_GRIDMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "spatial.hpp"
namespace gd {

class mesh_library;
class physics_material;
class resource;

class grid_map : public spatial {
	struct ___method_bindings {
		godot_method_bind *mb__update_octants_callback;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_clear_baked_meshes;
		godot_method_bind *mb_get_bake_mesh_instance;
		godot_method_bind *mb_get_bake_meshes;
		godot_method_bind *mb_get_cell_item;
		godot_method_bind *mb_get_cell_item_orientation;
		godot_method_bind *mb_get_cell_scale;
		godot_method_bind *mb_get_cell_size;
		godot_method_bind *mb_get_center_x;
		godot_method_bind *mb_get_center_y;
		godot_method_bind *mb_get_center_z;
		godot_method_bind *mb_get_collision_layer;
		godot_method_bind *mb_get_collision_layer_bit;
		godot_method_bind *mb_get_collision_mask;
		godot_method_bind *mb_get_collision_mask_bit;
		godot_method_bind *mb_get_mesh_library;
		godot_method_bind *mb_get_meshes;
		godot_method_bind *mb_get_navigation_layers;
		godot_method_bind *mb_get_octant_size;
		godot_method_bind *mb_get_physics_material;
		godot_method_bind *mb_get_use_in_baked_light;
		godot_method_bind *mb_get_used_cells;
		godot_method_bind *mb_get_used_cells_by_item;
		godot_method_bind *mb_is_baking_navigation;
		godot_method_bind *mb_make_baked_meshes;
		godot_method_bind *mb_map_to_world;
		godot_method_bind *mb_resource_changed;
		godot_method_bind *mb_set_bake_navigation;
		godot_method_bind *mb_set_cell_item;
		godot_method_bind *mb_set_cell_scale;
		godot_method_bind *mb_set_cell_size;
		godot_method_bind *mb_set_center_x;
		godot_method_bind *mb_set_center_y;
		godot_method_bind *mb_set_center_z;
		godot_method_bind *mb_set_clip;
		godot_method_bind *mb_set_collision_layer;
		godot_method_bind *mb_set_collision_layer_bit;
		godot_method_bind *mb_set_collision_mask;
		godot_method_bind *mb_set_collision_mask_bit;
		godot_method_bind *mb_set_mesh_library;
		godot_method_bind *mb_set_navigation_layers;
		godot_method_bind *mb_set_octant_size;
		godot_method_bind *mb_set_physics_material;
		godot_method_bind *mb_set_use_in_baked_light;
		godot_method_bind *mb_world_to_map;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GridMap"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GridMap"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int INVALID_CELL_ITEM = -1;


	static grid_map *_new();

	// methods
	void _update_octants_callback();
	void clear();
	void clear_baked_meshes();
	rid get_bake_mesh_instance(const int64_t idx);
	array get_bake_meshes();
	int64_t get_cell_item(const int64_t x, const int64_t y, const int64_t z) const;
	int64_t get_cell_item_orientation(const int64_t x, const int64_t y, const int64_t z) const;
	real_t get_cell_scale() const;
	vector3 get_cell_size() const;
	bool get_center_x() const;
	bool get_center_y() const;
	bool get_center_z() const;
	int64_t get_collision_layer() const;
	bool get_collision_layer_bit(const int64_t bit) const;
	int64_t get_collision_mask() const;
	bool get_collision_mask_bit(const int64_t bit) const;
	ref<mesh_library> get_mesh_library() const;
	array get_meshes() const;
	int64_t get_navigation_layers();
	int64_t get_octant_size() const;
	ref<physics_material> get_physics_material() const;
	bool get_use_in_baked_light() const;
	array get_used_cells() const;
	array get_used_cells_by_item(const int64_t item) const;
	bool is_baking_navigation();
	void make_baked_meshes(const bool gen_lightmap_uv = false, const real_t lightmap_uv_texel_size = 0.1);
	vector3 map_to_world(const int64_t x, const int64_t y, const int64_t z) const;
	void resource_changed(const ref<resource> resource_);
	void set_bake_navigation(const bool bake_navigation);
	void set_cell_item(const int64_t x, const int64_t y, const int64_t z, const int64_t item, const int64_t orientation = 0);
	void set_cell_scale(const real_t scale);
	void set_cell_size(const vector3 size);
	void set_center_x(const bool enable);
	void set_center_y(const bool enable);
	void set_center_z(const bool enable);
	void set_clip(const bool enabled, const bool clipabove = true, const int64_t floor = 0, const int64_t axis = 0);
	void set_collision_layer(const int64_t layer);
	void set_collision_layer_bit(const int64_t bit, const bool value);
	void set_collision_mask(const int64_t mask);
	void set_collision_mask_bit(const int64_t bit, const bool value);
	void set_mesh_library(const ref<mesh_library> mesh_library_);
	void set_navigation_layers(const int64_t navigation_layers);
	void set_octant_size(const int64_t size);
	void set_physics_material(const ref<physics_material> material_);
	void set_use_in_baked_light(const bool use_in_baked_light);
	vector3 world_to_map(const vector3 pos) const;

};

}

#endif