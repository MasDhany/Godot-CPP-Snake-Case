#ifndef GODOT_CPP_OMNILIGHT_HPP
#define GODOT_CPP_OMNILIGHT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "omni_light.hpp"

#include "light.hpp"
namespace gd {


class omni_light : public light {
	struct ___method_bindings {
		godot_method_bind *mb_get_shadow_detail;
		godot_method_bind *mb_get_shadow_mode;
		godot_method_bind *mb_set_shadow_detail;
		godot_method_bind *mb_set_shadow_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OmniLight"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OmniLight"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ShadowMode {
		SHADOW_DUAL_PARABOLOID = 0,
		SHADOW_CUBE = 1,
	};
	enum ShadowDetail {
		SHADOW_DETAIL_VERTICAL = 0,
		SHADOW_DETAIL_HORIZONTAL = 1,
	};

	// constants


	static omni_light *_new();

	// methods
	omni_light::ShadowDetail get_shadow_detail() const;
	omni_light::ShadowMode get_shadow_mode() const;
	void set_shadow_detail(const int64_t detail);
	void set_shadow_mode(const int64_t mode);

};

}

#endif