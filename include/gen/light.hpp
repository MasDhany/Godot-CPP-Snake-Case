#ifndef GODOT_CPP_LIGHT_HPP
#define GODOT_CPP_LIGHT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "light.hpp"

#include "visual_instance.hpp"
namespace gd {


class light : public visual_instance {
	struct ___method_bindings {
		godot_method_bind *mb_get_bake_mode;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_cull_mask;
		godot_method_bind *mb_get_param;
		godot_method_bind *mb_get_shadow_color;
		godot_method_bind *mb_get_shadow_reverse_cull_face;
		godot_method_bind *mb_has_shadow;
		godot_method_bind *mb_is_editor_only;
		godot_method_bind *mb_is_negative;
		godot_method_bind *mb_set_bake_mode;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_cull_mask;
		godot_method_bind *mb_set_editor_only;
		godot_method_bind *mb_set_negative;
		godot_method_bind *mb_set_param;
		godot_method_bind *mb_set_shadow;
		godot_method_bind *mb_set_shadow_color;
		godot_method_bind *mb_set_shadow_reverse_cull_face;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Light"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Light"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BakeMode {
		BAKE_DISABLED = 0,
		BAKE_INDIRECT = 1,
		BAKE_ALL = 2,
	};
	enum Param {
		PARAM_ENERGY = 0,
		PARAM_INDIRECT_ENERGY = 1,
		PARAM_SIZE = 2,
		PARAM_SPECULAR = 3,
		PARAM_RANGE = 4,
		PARAM_ATTENUATION = 5,
		PARAM_SPOT_ANGLE = 6,
		PARAM_SPOT_ATTENUATION = 7,
		PARAM_CONTACT_SHADOW_SIZE = 8,
		PARAM_SHADOW_MAX_DISTANCE = 9,
		PARAM_SHADOW_SPLIT_1_OFFSET = 10,
		PARAM_SHADOW_SPLIT_2_OFFSET = 11,
		PARAM_SHADOW_SPLIT_3_OFFSET = 12,
		PARAM_SHADOW_NORMAL_BIAS = 13,
		PARAM_SHADOW_BIAS = 14,
		PARAM_SHADOW_BIAS_SPLIT_SCALE = 15,
		PARAM_MAX = 16,
	};

	// constants

	// methods
	light::BakeMode get_bake_mode() const;
	color get_color() const;
	int64_t get_cull_mask() const;
	real_t get_param(const int64_t param) const;
	color get_shadow_color() const;
	bool get_shadow_reverse_cull_face() const;
	bool has_shadow() const;
	bool is_editor_only() const;
	bool is_negative() const;
	void set_bake_mode(const int64_t bake_mode);
	void set_color(const color color_);
	void set_cull_mask(const int64_t cull_mask);
	void set_editor_only(const bool editor_only);
	void set_negative(const bool enabled);
	void set_param(const int64_t param, const real_t value);
	void set_shadow(const bool enabled);
	void set_shadow_color(const color shadow_color);
	void set_shadow_reverse_cull_face(const bool enable);

};

}

#endif