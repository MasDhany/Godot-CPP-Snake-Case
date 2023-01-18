#include "animation_node_blend2.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_blend2::___method_bindings animation_node_blend2::___mb = {};

void *animation_node_blend2::_detail_class_tag = nullptr;

void animation_node_blend2::___init_method_bindings() {
	___mb.mb_is_using_sync = gd::api->godot_method_bind_get_method("AnimationNodeBlend2", "is_using_sync");
	___mb.mb_set_use_sync = gd::api->godot_method_bind_get_method("AnimationNodeBlend2", "set_use_sync");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeBlend2");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_blend2 *animation_node_blend2::_new()
{
	return (animation_node_blend2 *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeBlend2")());
}
bool animation_node_blend2::is_using_sync() const {
	return ___godot_icall_bool(___mb.mb_is_using_sync, (const object *) this);
}

void animation_node_blend2::set_use_sync(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_sync, (const object *) this, enable);
}

}