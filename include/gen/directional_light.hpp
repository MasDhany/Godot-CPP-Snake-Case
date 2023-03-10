#ifndef GODOT_CPP_DIRECTIONALLIGHT_HPP
#define GODOT_CPP_DIRECTIONALLIGHT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "directional_light.hpp"

#include "light.hpp"
namespace gd {


class directional_light : public light {
	struct ___method_bindings {
		godot_method_bind *mb_get_shadow_depth_range;
		godot_method_bind *mb_get_shadow_mode;
		godot_method_bind *mb_is_blend_splits_enabled;
		godot_method_bind *mb_set_blend_splits;
		godot_method_bind *mb_set_shadow_depth_range;
		godot_method_bind *mb_set_shadow_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "DirectionalLight"; }
	static inline const char *___get_godot_class_name() { return (const char *) "DirectionalLight"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ShadowMode {
		SHADOW_ORTHOGONAL = 0,
		SHADOW_PARALLEL_2_SPLITS = 1,
		SHADOW_PARALLEL_4_SPLITS = 2,
	};
	enum ShadowDepthRange {
		SHADOW_DEPTH_RANGE_STABLE = 0,
		SHADOW_DEPTH_RANGE_OPTIMIZED = 1,
	};

	// constants


	static directional_light *_new();

	// methods
	directional_light::ShadowDepthRange get_shadow_depth_range() const;
	directional_light::ShadowMode get_shadow_mode() const;
	bool is_blend_splits_enabled() const;
	void set_blend_splits(const bool enabled);
	void set_shadow_depth_range(const int64_t mode);
	void set_shadow_mode(const int64_t mode);

};

}

#endif