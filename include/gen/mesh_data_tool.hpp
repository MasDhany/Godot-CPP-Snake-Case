#ifndef GODOT_CPP_MESHDATATOOL_HPP
#define GODOT_CPP_MESHDATATOOL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class array_mesh;
class material;

class mesh_data_tool : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_clear;
		godot_method_bind *mb_commit_to_surface;
		godot_method_bind *mb_create_from_surface;
		godot_method_bind *mb_get_edge_count;
		godot_method_bind *mb_get_edge_faces;
		godot_method_bind *mb_get_edge_meta;
		godot_method_bind *mb_get_edge_vertex;
		godot_method_bind *mb_get_face_count;
		godot_method_bind *mb_get_face_edge;
		godot_method_bind *mb_get_face_meta;
		godot_method_bind *mb_get_face_normal;
		godot_method_bind *mb_get_face_vertex;
		godot_method_bind *mb_get_format;
		godot_method_bind *mb_get_material;
		godot_method_bind *mb_get_vertex;
		godot_method_bind *mb_get_vertex_bones;
		godot_method_bind *mb_get_vertex_color;
		godot_method_bind *mb_get_vertex_count;
		godot_method_bind *mb_get_vertex_edges;
		godot_method_bind *mb_get_vertex_faces;
		godot_method_bind *mb_get_vertex_meta;
		godot_method_bind *mb_get_vertex_normal;
		godot_method_bind *mb_get_vertex_tangent;
		godot_method_bind *mb_get_vertex_uv;
		godot_method_bind *mb_get_vertex_uv2;
		godot_method_bind *mb_get_vertex_weights;
		godot_method_bind *mb_set_edge_meta;
		godot_method_bind *mb_set_face_meta;
		godot_method_bind *mb_set_material;
		godot_method_bind *mb_set_vertex;
		godot_method_bind *mb_set_vertex_bones;
		godot_method_bind *mb_set_vertex_color;
		godot_method_bind *mb_set_vertex_meta;
		godot_method_bind *mb_set_vertex_normal;
		godot_method_bind *mb_set_vertex_tangent;
		godot_method_bind *mb_set_vertex_uv;
		godot_method_bind *mb_set_vertex_uv2;
		godot_method_bind *mb_set_vertex_weights;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MeshDataTool"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MeshDataTool"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static mesh_data_tool *_new();

	// methods
	void clear();
	error commit_to_surface(const ref<array_mesh> mesh_);
	error create_from_surface(const ref<array_mesh> mesh_, const int64_t surface);
	int64_t get_edge_count() const;
	pool_int_array get_edge_faces(const int64_t idx) const;
	variant get_edge_meta(const int64_t idx) const;
	int64_t get_edge_vertex(const int64_t idx, const int64_t vertex) const;
	int64_t get_face_count() const;
	int64_t get_face_edge(const int64_t idx, const int64_t edge) const;
	variant get_face_meta(const int64_t idx) const;
	vector3 get_face_normal(const int64_t idx) const;
	int64_t get_face_vertex(const int64_t idx, const int64_t vertex) const;
	int64_t get_format() const;
	ref<material> get_material() const;
	vector3 get_vertex(const int64_t idx) const;
	pool_int_array get_vertex_bones(const int64_t idx) const;
	color get_vertex_color(const int64_t idx) const;
	int64_t get_vertex_count() const;
	pool_int_array get_vertex_edges(const int64_t idx) const;
	pool_int_array get_vertex_faces(const int64_t idx) const;
	variant get_vertex_meta(const int64_t idx) const;
	vector3 get_vertex_normal(const int64_t idx) const;
	plane get_vertex_tangent(const int64_t idx) const;
	vector2 get_vertex_uv(const int64_t idx) const;
	vector2 get_vertex_uv2(const int64_t idx) const;
	pool_real_array get_vertex_weights(const int64_t idx) const;
	void set_edge_meta(const int64_t idx, const variant meta);
	void set_face_meta(const int64_t idx, const variant meta);
	void set_material(const ref<material> material_);
	void set_vertex(const int64_t idx, const vector3 vertex);
	void set_vertex_bones(const int64_t idx, const pool_int_array bones);
	void set_vertex_color(const int64_t idx, const color color_);
	void set_vertex_meta(const int64_t idx, const variant meta);
	void set_vertex_normal(const int64_t idx, const vector3 normal);
	void set_vertex_tangent(const int64_t idx, const plane tangent);
	void set_vertex_uv(const int64_t idx, const vector2 uv);
	void set_vertex_uv2(const int64_t idx, const vector2 uv2);
	void set_vertex_weights(const int64_t idx, const pool_real_array weights);

};

}

#endif