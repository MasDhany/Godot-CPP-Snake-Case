#ifndef GODOT_CPP_TILESET_HPP
#define GODOT_CPP_TILESET_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "tile_set.hpp"

#include "resource.hpp"
namespace gd {

class navigation_polygon;
class object;
class occluder_polygon2d;
class shader_material;
class shape2d;
class texture;

class tile_set : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__forward_atlas_subtile_selection;
		godot_method_bind *mb__forward_subtile_selection;
		godot_method_bind *mb__is_tile_bound;
		godot_method_bind *mb_autotile_clear_bitmask_map;
		godot_method_bind *mb_autotile_get_bitmask;
		godot_method_bind *mb_autotile_get_bitmask_mode;
		godot_method_bind *mb_autotile_get_icon_coordinate;
		godot_method_bind *mb_autotile_get_light_occluder;
		godot_method_bind *mb_autotile_get_navigation_polygon;
		godot_method_bind *mb_autotile_get_size;
		godot_method_bind *mb_autotile_get_spacing;
		godot_method_bind *mb_autotile_get_subtile_priority;
		godot_method_bind *mb_autotile_get_z_index;
		godot_method_bind *mb_autotile_set_bitmask;
		godot_method_bind *mb_autotile_set_bitmask_mode;
		godot_method_bind *mb_autotile_set_icon_coordinate;
		godot_method_bind *mb_autotile_set_light_occluder;
		godot_method_bind *mb_autotile_set_navigation_polygon;
		godot_method_bind *mb_autotile_set_size;
		godot_method_bind *mb_autotile_set_spacing;
		godot_method_bind *mb_autotile_set_subtile_priority;
		godot_method_bind *mb_autotile_set_z_index;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_create_tile;
		godot_method_bind *mb_find_tile_by_name;
		godot_method_bind *mb_get_last_unused_tile_id;
		godot_method_bind *mb_get_tiles_ids;
		godot_method_bind *mb_remove_tile;
		godot_method_bind *mb_tile_add_shape;
		godot_method_bind *mb_tile_get_light_occluder;
		godot_method_bind *mb_tile_get_material;
		godot_method_bind *mb_tile_get_modulate;
		godot_method_bind *mb_tile_get_name;
		godot_method_bind *mb_tile_get_navigation_polygon;
		godot_method_bind *mb_tile_get_navigation_polygon_offset;
		godot_method_bind *mb_tile_get_normal_map;
		godot_method_bind *mb_tile_get_occluder_offset;
		godot_method_bind *mb_tile_get_region;
		godot_method_bind *mb_tile_get_shape;
		godot_method_bind *mb_tile_get_shape_count;
		godot_method_bind *mb_tile_get_shape_offset;
		godot_method_bind *mb_tile_get_shape_one_way;
		godot_method_bind *mb_tile_get_shape_one_way_margin;
		godot_method_bind *mb_tile_get_shape_transform;
		godot_method_bind *mb_tile_get_shapes;
		godot_method_bind *mb_tile_get_texture;
		godot_method_bind *mb_tile_get_texture_offset;
		godot_method_bind *mb_tile_get_tile_mode;
		godot_method_bind *mb_tile_get_z_index;
		godot_method_bind *mb_tile_set_light_occluder;
		godot_method_bind *mb_tile_set_material;
		godot_method_bind *mb_tile_set_modulate;
		godot_method_bind *mb_tile_set_name;
		godot_method_bind *mb_tile_set_navigation_polygon;
		godot_method_bind *mb_tile_set_navigation_polygon_offset;
		godot_method_bind *mb_tile_set_normal_map;
		godot_method_bind *mb_tile_set_occluder_offset;
		godot_method_bind *mb_tile_set_region;
		godot_method_bind *mb_tile_set_shape;
		godot_method_bind *mb_tile_set_shape_offset;
		godot_method_bind *mb_tile_set_shape_one_way;
		godot_method_bind *mb_tile_set_shape_one_way_margin;
		godot_method_bind *mb_tile_set_shape_transform;
		godot_method_bind *mb_tile_set_shapes;
		godot_method_bind *mb_tile_set_texture;
		godot_method_bind *mb_tile_set_texture_offset;
		godot_method_bind *mb_tile_set_tile_mode;
		godot_method_bind *mb_tile_set_z_index;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TileSet"; }
	static inline const char *___get_godot_class_name() { return (const char *) "TileSet"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TileMode {
		SINGLE_TILE = 0,
		AUTO_TILE = 1,
		ATLAS_TILE = 2,
	};
	enum AutotileBindings {
		BIND_TOPLEFT = 1,
		BIND_TOP = 2,
		BIND_TOPRIGHT = 4,
		BIND_LEFT = 8,
		BIND_CENTER = 16,
		BIND_RIGHT = 32,
		BIND_BOTTOMLEFT = 64,
		BIND_BOTTOM = 128,
		BIND_BOTTOMRIGHT = 256,
	};
	enum BitmaskMode {
		BITMASK_2X2 = 0,
		BITMASK_3X3_MINIMAL = 1,
		BITMASK_3X3 = 2,
	};

	// constants


	static tile_set *_new();

	// methods
	vector2 _forward_atlas_subtile_selection(const int64_t atlastile_id, const object *tilemap, const vector2 tile_location);
	vector2 _forward_subtile_selection(const int64_t autotile_id, const int64_t bitmask, const object *tilemap, const vector2 tile_location);
	bool _is_tile_bound(const int64_t drawn_id, const int64_t neighbor_id);
	void autotile_clear_bitmask_map(const int64_t id);
	int64_t autotile_get_bitmask(const int64_t id, const vector2 coord);
	tile_set::BitmaskMode autotile_get_bitmask_mode(const int64_t id) const;
	vector2 autotile_get_icon_coordinate(const int64_t id) const;
	ref<occluder_polygon2d> autotile_get_light_occluder(const int64_t id, const vector2 coord) const;
	ref<navigation_polygon> autotile_get_navigation_polygon(const int64_t id, const vector2 coord) const;
	vector2 autotile_get_size(const int64_t id) const;
	int64_t autotile_get_spacing(const int64_t id) const;
	int64_t autotile_get_subtile_priority(const int64_t id, const vector2 coord);
	int64_t autotile_get_z_index(const int64_t id, const vector2 coord);
	void autotile_set_bitmask(const int64_t id, const vector2 bitmask, const int64_t flag);
	void autotile_set_bitmask_mode(const int64_t id, const int64_t mode);
	void autotile_set_icon_coordinate(const int64_t id, const vector2 coord);
	void autotile_set_light_occluder(const int64_t id, const ref<occluder_polygon2d> light_occluder, const vector2 coord);
	void autotile_set_navigation_polygon(const int64_t id, const ref<navigation_polygon> navigation_polygon_, const vector2 coord);
	void autotile_set_size(const int64_t id, const vector2 size);
	void autotile_set_spacing(const int64_t id, const int64_t spacing);
	void autotile_set_subtile_priority(const int64_t id, const vector2 coord, const int64_t priority);
	void autotile_set_z_index(const int64_t id, const vector2 coord, const int64_t z_index);
	void clear();
	void create_tile(const int64_t id);
	int64_t find_tile_by_name(const string name) const;
	int64_t get_last_unused_tile_id() const;
	array get_tiles_ids() const;
	void remove_tile(const int64_t id);
	void tile_add_shape(const int64_t id, const ref<shape2d> shape_, const transform2d shape_transform, const bool one_way = false, const vector2 autotile_coord = vector2(0, 0));
	ref<occluder_polygon2d> tile_get_light_occluder(const int64_t id) const;
	ref<shader_material> tile_get_material(const int64_t id) const;
	color tile_get_modulate(const int64_t id) const;
	string tile_get_name(const int64_t id) const;
	ref<navigation_polygon> tile_get_navigation_polygon(const int64_t id) const;
	vector2 tile_get_navigation_polygon_offset(const int64_t id) const;
	ref<texture> tile_get_normal_map(const int64_t id) const;
	vector2 tile_get_occluder_offset(const int64_t id) const;
	rect2 tile_get_region(const int64_t id) const;
	ref<shape2d> tile_get_shape(const int64_t id, const int64_t shape_id) const;
	int64_t tile_get_shape_count(const int64_t id) const;
	vector2 tile_get_shape_offset(const int64_t id, const int64_t shape_id) const;
	bool tile_get_shape_one_way(const int64_t id, const int64_t shape_id) const;
	real_t tile_get_shape_one_way_margin(const int64_t id, const int64_t shape_id) const;
	transform2d tile_get_shape_transform(const int64_t id, const int64_t shape_id) const;
	array tile_get_shapes(const int64_t id) const;
	ref<texture> tile_get_texture(const int64_t id) const;
	vector2 tile_get_texture_offset(const int64_t id) const;
	tile_set::TileMode tile_get_tile_mode(const int64_t id) const;
	int64_t tile_get_z_index(const int64_t id) const;
	void tile_set_light_occluder(const int64_t id, const ref<occluder_polygon2d> light_occluder);
	void tile_set_material(const int64_t id, const ref<shader_material> material_);
	void tile_set_modulate(const int64_t id, const color color_);
	void tile_set_name(const int64_t id, const string name);
	void tile_set_navigation_polygon(const int64_t id, const ref<navigation_polygon> navigation_polygon_);
	void tile_set_navigation_polygon_offset(const int64_t id, const vector2 navigation_polygon_offset);
	void tile_set_normal_map(const int64_t id, const ref<texture> normal_map);
	void tile_set_occluder_offset(const int64_t id, const vector2 occluder_offset);
	void tile_set_region(const int64_t id, const rect2 region);
	void tile_set_shape(const int64_t id, const int64_t shape_id, const ref<shape2d> shape_);
	void tile_set_shape_offset(const int64_t id, const int64_t shape_id, const vector2 shape_offset);
	void tile_set_shape_one_way(const int64_t id, const int64_t shape_id, const bool one_way);
	void tile_set_shape_one_way_margin(const int64_t id, const int64_t shape_id, const real_t one_way);
	void tile_set_shape_transform(const int64_t id, const int64_t shape_id, const transform2d shape_transform);
	void tile_set_shapes(const int64_t id, const array shapes);
	void tile_set_texture(const int64_t id, const ref<texture> texture_);
	void tile_set_texture_offset(const int64_t id, const vector2 texture_offset);
	void tile_set_tile_mode(const int64_t id, const int64_t tilemode);
	void tile_set_z_index(const int64_t id, const int64_t z_index);

};

}

#endif