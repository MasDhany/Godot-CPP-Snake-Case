#include "animation_node_animation.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_animation::___method_bindings animation_node_animation::___mb = {};

void *animation_node_animation::_detail_class_tag = nullptr;

void animation_node_animation::___init_method_bindings() {
	___mb.mb_get_animation = gd::api->godot_method_bind_get_method("AnimationNodeAnimation", "get_animation");
	___mb.mb_set_animation = gd::api->godot_method_bind_get_method("AnimationNodeAnimation", "set_animation");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeAnimation");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_animation *animation_node_animation::_new()
{
	return (animation_node_animation *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeAnimation")());
}
string animation_node_animation::get_animation() const {
	return ___godot_icall_String(___mb.mb_get_animation, (const object *) this);
}

void animation_node_animation::set_animation(const string name) {
	___godot_icall_void_String(___mb.mb_set_animation, (const object *) this, name);
}

}