#ifndef GODOT_CPP_SHADER_HPP
#define GODOT_CPP_SHADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "shader.hpp"

#include "resource.hpp"
namespace gd {

class texture;

class shader : public resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_code;
		godot_method_bind *mb_get_custom_defines;
		godot_method_bind *mb_get_default_texture_param;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_has_param;
		godot_method_bind *mb_set_code;
		godot_method_bind *mb_set_custom_defines;
		godot_method_bind *mb_set_default_texture_param;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Shader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Shader"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_SPATIAL = 0,
		MODE_CANVAS_ITEM = 1,
		MODE_PARTICLES = 2,
	};

	// constants


	static shader *_new();

	// methods
	string get_code() const;
	string get_custom_defines() const;
	ref<texture> get_default_texture_param(const string param) const;
	shader::Mode get_mode() const;
	bool has_param(const string name) const;
	void set_code(const string code);
	void set_custom_defines(const string custom_defines);
	void set_default_texture_param(const string param, const ref<texture> texture_);

};

}

#endif