#ifndef GODOT_CPP_GIPROBEDATA_HPP
#define GODOT_CPP_GIPROBEDATA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "resource.hpp"
namespace gd {


class giprobe_data : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_bias;
		godot_method_bind *mb_get_bounds;
		godot_method_bind *mb_get_cell_size;
		godot_method_bind *mb_get_dynamic_data;
		godot_method_bind *mb_get_dynamic_range;
		godot_method_bind *mb_get_energy;
		godot_method_bind *mb_get_normal_bias;
		godot_method_bind *mb_get_propagation;
		godot_method_bind *mb_get_to_cell_xform;
		godot_method_bind *mb_is_compressed;
		godot_method_bind *mb_is_interior;
		godot_method_bind *mb_set_bias;
		godot_method_bind *mb_set_bounds;
		godot_method_bind *mb_set_cell_size;
		godot_method_bind *mb_set_compress;
		godot_method_bind *mb_set_dynamic_data;
		godot_method_bind *mb_set_dynamic_range;
		godot_method_bind *mb_set_energy;
		godot_method_bind *mb_set_interior;
		godot_method_bind *mb_set_normal_bias;
		godot_method_bind *mb_set_propagation;
		godot_method_bind *mb_set_to_cell_xform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GIProbeData"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GIProbeData"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static giprobe_data *_new();

	// methods
	real_t get_bias() const;
	aabb get_bounds() const;
	real_t get_cell_size() const;
	pool_int_array get_dynamic_data() const;
	int64_t get_dynamic_range() const;
	real_t get_energy() const;
	real_t get_normal_bias() const;
	real_t get_propagation() const;
	transform get_to_cell_xform() const;
	bool is_compressed() const;
	bool is_interior() const;
	void set_bias(const real_t bias);
	void set_bounds(const aabb bounds);
	void set_cell_size(const real_t cell_size);
	void set_compress(const bool compress);
	void set_dynamic_data(const pool_int_array dynamic_data);
	void set_dynamic_range(const int64_t dynamic_range);
	void set_energy(const real_t energy);
	void set_interior(const bool interior);
	void set_normal_bias(const real_t bias);
	void set_propagation(const real_t propagation);
	void set_to_cell_xform(const transform to_cell_xform);

};

}

#endif