#include "animation_node_state_machine_playback.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_state_machine_playback::___method_bindings animation_node_state_machine_playback::___mb = {};

void *animation_node_state_machine_playback::_detail_class_tag = nullptr;

void animation_node_state_machine_playback::___init_method_bindings() {
	___mb.mb_get_current_length = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_length");
	___mb.mb_get_current_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_node");
	___mb.mb_get_current_play_position = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_play_position");
	___mb.mb_get_travel_path = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_travel_path");
	___mb.mb_is_playing = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "is_playing");
	___mb.mb_start = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "start");
	___mb.mb_stop = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "stop");
	___mb.mb_travel = gd::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "travel");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeStateMachinePlayback");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_state_machine_playback *animation_node_state_machine_playback::_new()
{
	return (animation_node_state_machine_playback *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeStateMachinePlayback")());
}
real_t animation_node_state_machine_playback::get_current_length() const {
	return ___godot_icall_float(___mb.mb_get_current_length, (const object *) this);
}

string animation_node_state_machine_playback::get_current_node() const {
	return ___godot_icall_String(___mb.mb_get_current_node, (const object *) this);
}

real_t animation_node_state_machine_playback::get_current_play_position() const {
	return ___godot_icall_float(___mb.mb_get_current_play_position, (const object *) this);
}

pool_string_array animation_node_state_machine_playback::get_travel_path() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_travel_path, (const object *) this);
}

bool animation_node_state_machine_playback::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const object *) this);
}

void animation_node_state_machine_playback::start(const string node_) {
	___godot_icall_void_String(___mb.mb_start, (const object *) this, node_);
}

void animation_node_state_machine_playback::stop() {
	___godot_icall_void(___mb.mb_stop, (const object *) this);
}

void animation_node_state_machine_playback::travel(const string to_node) {
	___godot_icall_void_String(___mb.mb_travel, (const object *) this, to_node);
}

}