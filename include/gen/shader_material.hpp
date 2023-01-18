#ifndef GODOT_CPP_SHADERMATERIAL_HPP
#define GODOT_CPP_SHADERMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "material.hpp"
namespace gd {

class shader;

class shader_material : public material {
	struct ___method_bindings {
		godot_method_bind *mb__shader_changed;
		godot_method_bind *mb_get_shader;
		godot_method_bind *mb_get_shader_param;
		godot_method_bind *mb_property_can_revert;
		godot_method_bind *mb_property_get_revert;
		godot_method_bind *mb_set_shader;
		godot_method_bind *mb_set_shader_param;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ShaderMaterial"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ShaderMaterial"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static shader_material *_new();

	// methods
	void _shader_changed();
	ref<shader> get_shader() const;
	variant get_shader_param(const string param) const;
	bool property_can_revert(const string name);
	variant property_get_revert(const string name);
	void set_shader(const ref<shader> shader_);
	void set_shader_param(const string param, const variant value);

};

}

#endif