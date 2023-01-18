#include "animation_node_time_seek.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_time_seek::___method_bindings animation_node_time_seek::___mb = {};

void *animation_node_time_seek::_detail_class_tag = nullptr;

void animation_node_time_seek::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeTimeSeek");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_time_seek *animation_node_time_seek::_new()
{
	return (animation_node_time_seek *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeTimeSeek")());
}
}