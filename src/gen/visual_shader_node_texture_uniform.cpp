#include "visual_shader_node_texture_uniform.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_shader_node_texture_uniform::___method_bindings visual_shader_node_texture_uniform::___mb = {};

void *visual_shader_node_texture_uniform::_detail_class_tag = nullptr;

void visual_shader_node_texture_uniform::___init_method_bindings() {
	___mb.mb_get_color_default = gd::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "get_color_default");
	___mb.mb_get_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "get_texture_type");
	___mb.mb_set_color_default = gd::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "set_color_default");
	___mb.mb_set_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "set_texture_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeTextureUniform");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_texture_uniform *visual_shader_node_texture_uniform::_new()
{
	return (visual_shader_node_texture_uniform *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeTextureUniform")());
}
visual_shader_node_texture_uniform::ColorDefault visual_shader_node_texture_uniform::get_color_default() const {
	return (visual_shader_node_texture_uniform::ColorDefault) ___godot_icall_int(___mb.mb_get_color_default, (const object *) this);
}

visual_shader_node_texture_uniform::TextureType visual_shader_node_texture_uniform::get_texture_type() const {
	return (visual_shader_node_texture_uniform::TextureType) ___godot_icall_int(___mb.mb_get_texture_type, (const object *) this);
}

void visual_shader_node_texture_uniform::set_color_default(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_color_default, (const object *) this, type);
}

void visual_shader_node_texture_uniform::set_texture_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_texture_type, (const object *) this, type);
}

}