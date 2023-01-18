#ifndef GODOT_CPP_MULTIMESH_HPP
#define GODOT_CPP_MULTIMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "multi_mesh.hpp"

#include "resource.hpp"
namespace gd {

class mesh;

class multi_mesh : public resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_color_array;
		godot_method_bind *mb__get_custom_data_array;
		godot_method_bind *mb__get_transform_2d_array;
		godot_method_bind *mb__get_transform_array;
		godot_method_bind *mb__set_color_array;
		godot_method_bind *mb__set_custom_data_array;
		godot_method_bind *mb__set_transform_2d_array;
		godot_method_bind *mb__set_transform_array;
		godot_method_bind *mb_get_aabb;
		godot_method_bind *mb_get_color_format;
		godot_method_bind *mb_get_custom_data_format;
		godot_method_bind *mb_get_instance_color;
		godot_method_bind *mb_get_instance_count;
		godot_method_bind *mb_get_instance_custom_data;
		godot_method_bind *mb_get_instance_transform;
		godot_method_bind *mb_get_instance_transform_2d;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_physics_interpolation_quality;
		godot_method_bind *mb_get_transform_format;
		godot_method_bind *mb_get_visible_instance_count;
		godot_method_bind *mb_reset_instance_physics_interpolation;
		godot_method_bind *mb_set_as_bulk_array;
		godot_method_bind *mb_set_as_bulk_array_interpolated;
		godot_method_bind *mb_set_color_format;
		godot_method_bind *mb_set_custom_data_format;
		godot_method_bind *mb_set_instance_color;
		godot_method_bind *mb_set_instance_count;
		godot_method_bind *mb_set_instance_custom_data;
		godot_method_bind *mb_set_instance_transform;
		godot_method_bind *mb_set_instance_transform_2d;
		godot_method_bind *mb_set_mesh;
		godot_method_bind *mb_set_physics_interpolation_quality;
		godot_method_bind *mb_set_transform_format;
		godot_method_bind *mb_set_visible_instance_count;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MultiMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MultiMesh"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PhysicsInterpolationQuality {
		INTERP_QUALITY_FAST = 0,
		INTERP_QUALITY_HIGH = 1,
	};
	enum TransformFormat {
		TRANSFORM_2D = 0,
		TRANSFORM_3D = 1,
	};
	enum CustomDataFormat {
		CUSTOM_DATA_NONE = 0,
		CUSTOM_DATA_8BIT = 1,
		CUSTOM_DATA_FLOAT = 2,
	};
	enum ColorFormat {
		COLOR_NONE = 0,
		COLOR_8BIT = 1,
		COLOR_FLOAT = 2,
	};

	// constants


	static multi_mesh *_new();

	// methods
	pool_color_array _get_color_array() const;
	pool_color_array _get_custom_data_array() const;
	pool_vector2_array _get_transform_2d_array() const;
	pool_vector3_array _get_transform_array() const;
	void _set_color_array(const pool_color_array arg0);
	void _set_custom_data_array(const pool_color_array arg0);
	void _set_transform_2d_array(const pool_vector2_array arg0);
	void _set_transform_array(const pool_vector3_array arg0);
	aabb get_aabb() const;
	multi_mesh::ColorFormat get_color_format() const;
	multi_mesh::CustomDataFormat get_custom_data_format() const;
	color get_instance_color(const int64_t instance) const;
	int64_t get_instance_count() const;
	color get_instance_custom_data(const int64_t instance) const;
	transform get_instance_transform(const int64_t instance) const;
	transform2d get_instance_transform_2d(const int64_t instance) const;
	ref<mesh> get_mesh() const;
	multi_mesh::PhysicsInterpolationQuality get_physics_interpolation_quality() const;
	multi_mesh::TransformFormat get_transform_format() const;
	int64_t get_visible_instance_count() const;
	void reset_instance_physics_interpolation(const int64_t instance);
	void set_as_bulk_array(const pool_real_array array_);
	void set_as_bulk_array_interpolated(const pool_real_array array_current, const pool_real_array array_previous);
	void set_color_format(const int64_t format);
	void set_custom_data_format(const int64_t format);
	void set_instance_color(const int64_t instance, const color color_);
	void set_instance_count(const int64_t count);
	void set_instance_custom_data(const int64_t instance, const color custom_data);
	void set_instance_transform(const int64_t instance, const transform transform_);
	void set_instance_transform_2d(const int64_t instance, const transform2d transform_);
	void set_mesh(const ref<mesh> mesh_);
	void set_physics_interpolation_quality(const int64_t quality);
	void set_transform_format(const int64_t format);
	void set_visible_instance_count(const int64_t count);

};

}

#endif