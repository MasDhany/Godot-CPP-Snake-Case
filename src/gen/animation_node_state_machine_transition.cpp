#include "animation_node_state_machine_transition.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_state_machine_transition::___method_bindings animation_node_state_machine_transition::___mb = {};

void *animation_node_state_machine_transition::_detail_class_tag = nullptr;

void animation_node_state_machine_transition::___init_method_bindings() {
	___mb.mb_get_advance_condition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_advance_condition");
	___mb.mb_get_priority = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_priority");
	___mb.mb_get_switch_mode = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_switch_mode");
	___mb.mb_get_xfade_time = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_xfade_time");
	___mb.mb_has_auto_advance = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "has_auto_advance");
	___mb.mb_is_disabled = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "is_disabled");
	___mb.mb_set_advance_condition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_advance_condition");
	___mb.mb_set_auto_advance = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_auto_advance");
	___mb.mb_set_disabled = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_disabled");
	___mb.mb_set_priority = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_priority");
	___mb.mb_set_switch_mode = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_switch_mode");
	___mb.mb_set_xfade_time = gd::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_xfade_time");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeStateMachineTransition");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_state_machine_transition *animation_node_state_machine_transition::_new()
{
	return (animation_node_state_machine_transition *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeStateMachineTransition")());
}
string animation_node_state_machine_transition::get_advance_condition() const {
	return ___godot_icall_String(___mb.mb_get_advance_condition, (const object *) this);
}

int64_t animation_node_state_machine_transition::get_priority() const {
	return ___godot_icall_int(___mb.mb_get_priority, (const object *) this);
}

animation_node_state_machine_transition::SwitchMode animation_node_state_machine_transition::get_switch_mode() const {
	return (animation_node_state_machine_transition::SwitchMode) ___godot_icall_int(___mb.mb_get_switch_mode, (const object *) this);
}

real_t animation_node_state_machine_transition::get_xfade_time() const {
	return ___godot_icall_float(___mb.mb_get_xfade_time, (const object *) this);
}

bool animation_node_state_machine_transition::has_auto_advance() const {
	return ___godot_icall_bool(___mb.mb_has_auto_advance, (const object *) this);
}

bool animation_node_state_machine_transition::is_disabled() const {
	return ___godot_icall_bool(___mb.mb_is_disabled, (const object *) this);
}

void animation_node_state_machine_transition::set_advance_condition(const string name) {
	___godot_icall_void_String(___mb.mb_set_advance_condition, (const object *) this, name);
}

void animation_node_state_machine_transition::set_auto_advance(const bool auto_advance) {
	___godot_icall_void_bool(___mb.mb_set_auto_advance, (const object *) this, auto_advance);
}

void animation_node_state_machine_transition::set_disabled(const bool disabled) {
	___godot_icall_void_bool(___mb.mb_set_disabled, (const object *) this, disabled);
}

void animation_node_state_machine_transition::set_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_priority, (const object *) this, priority);
}

void animation_node_state_machine_transition::set_switch_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_switch_mode, (const object *) this, mode);
}

void animation_node_state_machine_transition::set_xfade_time(const real_t secs) {
	___godot_icall_void_float(___mb.mb_set_xfade_time, (const object *) this, secs);
}

}