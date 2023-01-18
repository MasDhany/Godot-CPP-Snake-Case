#include "visual_script_scene_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_scene_node::___method_bindings visual_script_scene_node::___mb = {};

void *visual_script_scene_node::_detail_class_tag = nullptr;

void visual_script_scene_node::___init_method_bindings() {
	___mb.mb_get_node_path = gd::api->godot_method_bind_get_method("VisualScriptSceneNode", "get_node_path");
	___mb.mb_set_node_path = gd::api->godot_method_bind_get_method("VisualScriptSceneNode", "set_node_path");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptSceneNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_scene_node *visual_script_scene_node::_new()
{
	return (visual_script_scene_node *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptSceneNode")());
}
node_path visual_script_scene_node::get_node_path() {
	return ___godot_icall_NodePath(___mb.mb_get_node_path, (const object *) this);
}

void visual_script_scene_node::set_node_path(const node_path path_) {
	___godot_icall_void_NodePath(___mb.mb_set_node_path, (const object *) this, path_);
}

}