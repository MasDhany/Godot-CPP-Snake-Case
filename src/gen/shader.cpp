#include "shader.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


shader::___method_bindings shader::___mb = {};

void *shader::_detail_class_tag = nullptr;

void shader::___init_method_bindings() {
	___mb.mb_get_code = gd::api->godot_method_bind_get_method("Shader", "get_code");
	___mb.mb_get_custom_defines = gd::api->godot_method_bind_get_method("Shader", "get_custom_defines");
	___mb.mb_get_default_texture_param = gd::api->godot_method_bind_get_method("Shader", "get_default_texture_param");
	___mb.mb_get_mode = gd::api->godot_method_bind_get_method("Shader", "get_mode");
	___mb.mb_has_param = gd::api->godot_method_bind_get_method("Shader", "has_param");
	___mb.mb_set_code = gd::api->godot_method_bind_get_method("Shader", "set_code");
	___mb.mb_set_custom_defines = gd::api->godot_method_bind_get_method("Shader", "set_custom_defines");
	___mb.mb_set_default_texture_param = gd::api->godot_method_bind_get_method("Shader", "set_default_texture_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Shader");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

shader *shader::_new()
{
	return (shader *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Shader")());
}
string shader::get_code() const {
	return ___godot_icall_String(___mb.mb_get_code, (const object *) this);
}

string shader::get_custom_defines() const {
	return ___godot_icall_String(___mb.mb_get_custom_defines, (const object *) this);
}

ref<texture> shader::get_default_texture_param(const string param) const {
	return ref<texture>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_default_texture_param, (const object *) this, param));
}

shader::Mode shader::get_mode() const {
	return (shader::Mode) ___godot_icall_int(___mb.mb_get_mode, (const object *) this);
}

bool shader::has_param(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_param, (const object *) this, name);
}

void shader::set_code(const string code) {
	___godot_icall_void_String(___mb.mb_set_code, (const object *) this, code);
}

void shader::set_custom_defines(const string custom_defines) {
	___godot_icall_void_String(___mb.mb_set_custom_defines, (const object *) this, custom_defines);
}

void shader::set_default_texture_param(const string param, const ref<texture> texture_) {
	___godot_icall_void_String_Object(___mb.mb_set_default_texture_param, (const object *) this, param, texture_.ptr());
}

}