#include "animation_node_state_machine.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_node.hpp"
#include "animation_node_state_machine_transition.hpp"


namespace gd {


animation_node_state_machine::___method_bindings animation_node_state_machine::___mb = {};

void *animation_node_state_machine::_detail_class_tag = nullptr;

void animation_node_state_machine::___init_method_bindings() {
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "_tree_changed");
	___mb.mb_add_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "add_node");
	___mb.mb_add_transition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "add_transition");
	___mb.mb_get_end_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_end_node");
	___mb.mb_get_graph_offset = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_graph_offset");
	___mb.mb_get_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node");
	___mb.mb_get_node_name = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node_name");
	___mb.mb_get_node_position = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node_position");
	___mb.mb_get_start_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_start_node");
	___mb.mb_get_transition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition");
	___mb.mb_get_transition_count = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_count");
	___mb.mb_get_transition_from = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_from");
	___mb.mb_get_transition_to = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_to");
	___mb.mb_has_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "has_node");
	___mb.mb_has_transition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "has_transition");
	___mb.mb_remove_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_node");
	___mb.mb_remove_transition = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_transition");
	___mb.mb_remove_transition_by_index = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_transition_by_index");
	___mb.mb_rename_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "rename_node");
	___mb.mb_replace_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "replace_node");
	___mb.mb_set_end_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_end_node");
	___mb.mb_set_graph_offset = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_graph_offset");
	___mb.mb_set_node_position = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_node_position");
	___mb.mb_set_start_node = gd::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_start_node");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeStateMachine");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_state_machine *animation_node_state_machine::_new()
{
	return (animation_node_state_machine *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeStateMachine")());
}
void animation_node_state_machine::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void animation_node_state_machine::add_node(const string name, const ref<animation_node> node_, const vector2 position) {
	___godot_icall_void_String_Object_Vector2(___mb.mb_add_node, (const object *) this, name, node_.ptr(), position);
}

void animation_node_state_machine::add_transition(const string from, const string to, const ref<animation_node_state_machine_transition> transition) {
	___godot_icall_void_String_String_Object(___mb.mb_add_transition, (const object *) this, from, to, transition.ptr());
}

string animation_node_state_machine::get_end_node() const {
	return ___godot_icall_String(___mb.mb_get_end_node, (const object *) this);
}

vector2 animation_node_state_machine::get_graph_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_graph_offset, (const object *) this);
}

ref<animation_node> animation_node_state_machine::get_node(const string name) const {
	return ref<animation_node>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_node, (const object *) this, name));
}

string animation_node_state_machine::get_node_name(const ref<animation_node> node_) const {
	return ___godot_icall_String_Object(___mb.mb_get_node_name, (const object *) this, node_.ptr());
}

vector2 animation_node_state_machine::get_node_position(const string name) const {
	return ___godot_icall_Vector2_String(___mb.mb_get_node_position, (const object *) this, name);
}

string animation_node_state_machine::get_start_node() const {
	return ___godot_icall_String(___mb.mb_get_start_node, (const object *) this);
}

ref<animation_node_state_machine_transition> animation_node_state_machine::get_transition(const int64_t idx) const {
	return ref<animation_node_state_machine_transition>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_transition, (const object *) this, idx));
}

int64_t animation_node_state_machine::get_transition_count() const {
	return ___godot_icall_int(___mb.mb_get_transition_count, (const object *) this);
}

string animation_node_state_machine::get_transition_from(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_transition_from, (const object *) this, idx);
}

string animation_node_state_machine::get_transition_to(const int64_t idx) const {
	return ___godot_icall_String_int(___mb.mb_get_transition_to, (const object *) this, idx);
}

bool animation_node_state_machine::has_node(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_node, (const object *) this, name);
}

bool animation_node_state_machine::has_transition(const string from, const string to) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_transition, (const object *) this, from, to);
}

void animation_node_state_machine::remove_node(const string name) {
	___godot_icall_void_String(___mb.mb_remove_node, (const object *) this, name);
}

void animation_node_state_machine::remove_transition(const string from, const string to) {
	___godot_icall_void_String_String(___mb.mb_remove_transition, (const object *) this, from, to);
}

void animation_node_state_machine::remove_transition_by_index(const int64_t idx) {
	___godot_icall_void_int(___mb.mb_remove_transition_by_index, (const object *) this, idx);
}

void animation_node_state_machine::rename_node(const string name, const string new_name) {
	___godot_icall_void_String_String(___mb.mb_rename_node, (const object *) this, name, new_name);
}

void animation_node_state_machine::replace_node(const string name, const ref<animation_node> node_) {
	___godot_icall_void_String_Object(___mb.mb_replace_node, (const object *) this, name, node_.ptr());
}

void animation_node_state_machine::set_end_node(const string name) {
	___godot_icall_void_String(___mb.mb_set_end_node, (const object *) this, name);
}

void animation_node_state_machine::set_graph_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_graph_offset, (const object *) this, offset);
}

void animation_node_state_machine::set_node_position(const string name, const vector2 position) {
	___godot_icall_void_String_Vector2(___mb.mb_set_node_position, (const object *) this, name, position);
}

void animation_node_state_machine::set_start_node(const string name) {
	___godot_icall_void_String(___mb.mb_set_start_node, (const object *) this, name);
}

}