#include "shader_material.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "shader.hpp"


namespace gd {


shader_material::___method_bindings shader_material::___mb = {};

void *shader_material::_detail_class_tag = nullptr;

void shader_material::___init_method_bindings() {
	___mb.mb__shader_changed = gd::api->godot_method_bind_get_method("ShaderMaterial", "_shader_changed");
	___mb.mb_get_shader = gd::api->godot_method_bind_get_method("ShaderMaterial", "get_shader");
	___mb.mb_get_shader_param = gd::api->godot_method_bind_get_method("ShaderMaterial", "get_shader_param");
	___mb.mb_property_can_revert = gd::api->godot_method_bind_get_method("ShaderMaterial", "property_can_revert");
	___mb.mb_property_get_revert = gd::api->godot_method_bind_get_method("ShaderMaterial", "property_get_revert");
	___mb.mb_set_shader = gd::api->godot_method_bind_get_method("ShaderMaterial", "set_shader");
	___mb.mb_set_shader_param = gd::api->godot_method_bind_get_method("ShaderMaterial", "set_shader_param");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ShaderMaterial");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

shader_material *shader_material::_new()
{
	return (shader_material *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ShaderMaterial")());
}
void shader_material::_shader_changed() {
	___godot_icall_void(___mb.mb__shader_changed, (const object *) this);
}

ref<shader> shader_material::get_shader() const {
	return ref<shader>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shader, (const object *) this));
}

variant shader_material::get_shader_param(const string param) const {
	return ___godot_icall_Variant_String(___mb.mb_get_shader_param, (const object *) this, param);
}

bool shader_material::property_can_revert(const string name) {
	return ___godot_icall_bool_String(___mb.mb_property_can_revert, (const object *) this, name);
}

variant shader_material::property_get_revert(const string name) {
	return ___godot_icall_Variant_String(___mb.mb_property_get_revert, (const object *) this, name);
}

void shader_material::set_shader(const ref<shader> shader_) {
	___godot_icall_void_Object(___mb.mb_set_shader, (const object *) this, shader_.ptr());
}

void shader_material::set_shader_param(const string param, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_shader_param, (const object *) this, param, value);
}

}