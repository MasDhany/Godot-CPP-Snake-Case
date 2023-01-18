#include "visual_shader_node_cube_map.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "cube_map.hpp"


namespace gd {


visual_shader_node_cube_map::___method_bindings visual_shader_node_cube_map::___mb = {};

void *visual_shader_node_cube_map::_detail_class_tag = nullptr;

void visual_shader_node_cube_map::___init_method_bindings() {
	___mb.mb_get_cube_map = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "get_cube_map");
	___mb.mb_get_source = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "get_source");
	___mb.mb_get_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "get_texture_type");
	___mb.mb_set_cube_map = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "set_cube_map");
	___mb.mb_set_source = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "set_source");
	___mb.mb_set_texture_type = gd::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "set_texture_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualShaderNodeCubeMap");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_shader_node_cube_map *visual_shader_node_cube_map::_new()
{
	return (visual_shader_node_cube_map *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualShaderNodeCubeMap")());
}
ref<cube_map> visual_shader_node_cube_map::get_cube_map() const {
	return ref<cube_map>::__internal_constructor(___godot_icall_Object(___mb.mb_get_cube_map, (const object *) this));
}

visual_shader_node_cube_map::Source visual_shader_node_cube_map::get_source() const {
	return (visual_shader_node_cube_map::Source) ___godot_icall_int(___mb.mb_get_source, (const object *) this);
}

visual_shader_node_cube_map::TextureType visual_shader_node_cube_map::get_texture_type() const {
	return (visual_shader_node_cube_map::TextureType) ___godot_icall_int(___mb.mb_get_texture_type, (const object *) this);
}

void visual_shader_node_cube_map::set_cube_map(const ref<cube_map> value) {
	___godot_icall_void_Object(___mb.mb_set_cube_map, (const object *) this, value.ptr());
}

void visual_shader_node_cube_map::set_source(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_source, (const object *) this, value);
}

void visual_shader_node_cube_map::set_texture_type(const int64_t value) {
	___godot_icall_void_int(___mb.mb_set_texture_type, (const object *) this, value);
}

}