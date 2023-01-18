#ifndef GODOT_CPP_VISUALINSTANCE_HPP
#define GODOT_CPP_VISUALINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "cull_instance.hpp"
namespace gd {


class visual_instance : public cull_instance {
	struct ___method_bindings {
		godot_method_bind *mb__get_visual_instance_rid;
		godot_method_bind *mb_get_aabb;
		godot_method_bind *mb_get_base;
		godot_method_bind *mb_get_instance;
		godot_method_bind *mb_get_layer_mask;
		godot_method_bind *mb_get_layer_mask_bit;
		godot_method_bind *mb_get_sorting_offset;
		godot_method_bind *mb_get_transformed_aabb;
		godot_method_bind *mb_is_sorting_use_aabb_center;
		godot_method_bind *mb_set_base;
		godot_method_bind *mb_set_layer_mask;
		godot_method_bind *mb_set_layer_mask_bit;
		godot_method_bind *mb_set_sorting_offset;
		godot_method_bind *mb_set_sorting_use_aabb_center;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualInstance"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	rid _get_visual_instance_rid() const;
	aabb get_aabb() const;
	rid get_base() const;
	rid get_instance() const;
	int64_t get_layer_mask() const;
	bool get_layer_mask_bit(const int64_t layer) const;
	real_t get_sorting_offset();
	aabb get_transformed_aabb() const;
	bool is_sorting_use_aabb_center();
	void set_base(const rid base);
	void set_layer_mask(const int64_t mask);
	void set_layer_mask_bit(const int64_t layer, const bool enabled);
	void set_sorting_offset(const real_t offset);
	void set_sorting_use_aabb_center(const bool enabled);

};

}

#endif