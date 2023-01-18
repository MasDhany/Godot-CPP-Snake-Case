#ifndef GODOT_CPP_MESHLIBRARY_HPP
#define GODOT_CPP_MESHLIBRARY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {

class mesh;
class navigation_mesh;
class texture;

class mesh_library : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_clear;
		godot_method_bind *mb_create_item;
		godot_method_bind *mb_find_item_by_name;
		godot_method_bind *mb_get_item_list;
		godot_method_bind *mb_get_item_mesh;
		godot_method_bind *mb_get_item_mesh_transform;
		godot_method_bind *mb_get_item_name;
		godot_method_bind *mb_get_item_navmesh;
		godot_method_bind *mb_get_item_navmesh_transform;
		godot_method_bind *mb_get_item_preview;
		godot_method_bind *mb_get_item_shapes;
		godot_method_bind *mb_get_last_unused_item_id;
		godot_method_bind *mb_remove_item;
		godot_method_bind *mb_set_item_mesh;
		godot_method_bind *mb_set_item_mesh_transform;
		godot_method_bind *mb_set_item_name;
		godot_method_bind *mb_set_item_navmesh;
		godot_method_bind *mb_set_item_navmesh_transform;
		godot_method_bind *mb_set_item_preview;
		godot_method_bind *mb_set_item_shapes;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MeshLibrary"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MeshLibrary"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static mesh_library *_new();

	// methods
	void clear();
	void create_item(const int64_t id);
	int64_t find_item_by_name(const string name) const;
	pool_int_array get_item_list() const;
	ref<mesh> get_item_mesh(const int64_t id) const;
	transform get_item_mesh_transform(const int64_t id) const;
	string get_item_name(const int64_t id) const;
	ref<navigation_mesh> get_item_navmesh(const int64_t id) const;
	transform get_item_navmesh_transform(const int64_t id) const;
	ref<texture> get_item_preview(const int64_t id) const;
	array get_item_shapes(const int64_t id) const;
	int64_t get_last_unused_item_id() const;
	void remove_item(const int64_t id);
	void set_item_mesh(const int64_t id, const ref<mesh> mesh_);
	void set_item_mesh_transform(const int64_t id, const transform mesh_transform);
	void set_item_name(const int64_t id, const string name);
	void set_item_navmesh(const int64_t id, const ref<navigation_mesh> navmesh);
	void set_item_navmesh_transform(const int64_t id, const transform navmesh);
	void set_item_preview(const int64_t id, const ref<texture> texture_);
	void set_item_shapes(const int64_t id, const array shapes);

};

}

#endif