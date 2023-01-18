#include "visual_shader_node_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


visual_shader_node_texture::___method_bindings visual_shader_node_texture::___mb = {};

void *visual_shader_node_texture::_detail_class_tag = nullptr;

void visual_shader_node_texture::___init_method_bindings() {
	___mb.mb_get_source = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_source");
	___mb.mb_get_texture = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_texture");
	___mb.mb_get_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_texture_type");
	___mb.mb_set_source = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_source");
	___mb.mb_set_texture = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_texture");
	___mb.mb_set_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_texture_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_texture *visual_shader_node_texture::_new()
{
	return (visual_shader_node_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeTexture")());
}
visual_shader_node_texture::Source visual_shader_node_texture::get_source() const {
	return (visual_shader_node_texture::Source) ___godot_icall_int(___mb.mb_get_source, (const object *) this);
}

ref<texture> visual_shader_node_texture::get_texture() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_texture, (const object *) this));
}

visual_shader_node_texture::TextureType visual_shader_node_texture::get_texture_type() const {
	return (visual_shader_node_texture::TextureType) ___godot_icall_int(___mb.mb_get_texture_type, (const object *) this);
}

void visual_shader_node_texture::set_source(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_source, (const object *) this, value);
}

void visual_shader_node_texture::set_texture(const ref<texture> value) {
	___godot_icall_void_Object(___mb.mb_set_texture, (const object *) this, value.ptr());
}

void visual_shader_node_texture::set_texture_type(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_texture_type, (const object *) this, value);
}

}