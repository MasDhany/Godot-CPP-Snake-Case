#include "animation_node.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_node.hpp"
#include "object.hpp"


namespace gd {


animation_node::___method_bindings animation_node::___mb = {};

void *animation_node::_detail_class_tag = nullptr;

void animation_node::___init_method_bindings() {
	___mb.mb__get_filters = gd::api->godot_method_bind_get_method("AnimationNode", "_get_filters");
	___mb.mb__set_filters = gd::api->godot_method_bind_get_method("AnimationNode", "_set_filters");
	___mb.mb_add_input = gd::api->godot_method_bind_get_method("AnimationNode", "add_input");
	___mb.mb_blend_animation = gd::api->godot_method_bind_get_method("AnimationNode", "blend_animation");
	___mb.mb_blend_input = gd::api->godot_method_bind_get_method("AnimationNode", "blend_input");
	___mb.mb_blend_node = gd::api->godot_method_bind_get_method("AnimationNode", "blend_node");
	___mb.mb_get_caption = gd::api->godot_method_bind_get_method("AnimationNode", "get_caption");
	___mb.mb_get_child_by_name = gd::api->godot_method_bind_get_method("AnimationNode", "get_child_by_name");
	___mb.mb_get_child_nodes = gd::api->godot_method_bind_get_method("AnimationNode", "get_child_nodes");
	___mb.mb_get_input_count = gd::api->godot_method_bind_get_method("AnimationNode", "get_input_count");
	___mb.mb_get_input_name = gd::api->godot_method_bind_get_method("AnimationNode", "get_input_name");
	___mb.mb_get_parameter = gd::api->godot_method_bind_get_method("AnimationNode", "get_parameter");
	___mb.mb_get_parameter_default_value = gd::api->godot_method_bind_get_method("AnimationNode", "get_parameter_default_value");
	___mb.mb_get_parameter_list = gd::api->godot_method_bind_get_method("AnimationNode", "get_parameter_list");
	___mb.mb_has_filter = gd::api->godot_method_bind_get_method("AnimationNode", "has_filter");
	___mb.mb_is_filter_enabled = gd::api->godot_method_bind_get_method("AnimationNode", "is_filter_enabled");
	___mb.mb_is_path_filtered = gd::api->godot_method_bind_get_method("AnimationNode", "is_path_filtered");
	___mb.mb_process = gd::api->godot_method_bind_get_method("AnimationNode", "process");
	___mb.mb_remove_input = gd::api->godot_method_bind_get_method("AnimationNode", "remove_input");
	___mb.mb_set_filter_enabled = gd::api->godot_method_bind_get_method("AnimationNode", "set_filter_enabled");
	___mb.mb_set_filter_path = gd::api->godot_method_bind_get_method("AnimationNode", "set_filter_path");
	___mb.mb_set_parameter = gd::api->godot_method_bind_get_method("AnimationNode", "set_parameter");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNode");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node *animation_node::_new()
{
	return (animation_node *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNode")());
}
array animation_node::_get_filters() const {
	return ___godot_icall_Array(___mb.mb__get_filters, (const object *) this);
}

void animation_node::_set_filters(const array filters) {
	___godot_icall_void_Array(___mb.mb__set_filters, (const object *) this, filters);
}

void animation_node::add_input(const string name) {
	___godot_icall_void_String(___mb.mb_add_input, (const object *) this, name);
}

void animation_node::blend_animation(const string animation_, const real_t time_, const real_t delta, const bool seeked, const real_t blend) {
	___godot_icall_void_String_float_float_bool_float(___mb.mb_blend_animation, (const object *) this, animation_, time_, delta, seeked, blend);
}

real_t animation_node::blend_input(const int64_t input_index, const real_t time_, const bool seek, const real_t blend, const int64_t filter, const bool optimize) {
	return ___godot_icall_float_int_float_bool_float_int_bool(___mb.mb_blend_input, (const object *) this, input_index, time_, seek, blend, filter, optimize);
}

real_t animation_node::blend_node(const string name, const ref<animation_node> node_, const real_t time_, const bool seek, const real_t blend, const int64_t filter, const bool optimize) {
	return ___godot_icall_float_String_Object_float_bool_float_int_bool(___mb.mb_blend_node, (const object *) this, name, node_.ptr(), time_, seek, blend, filter, optimize);
}

string animation_node::get_caption() {
	return ___godot_icall_String(___mb.mb_get_caption, (const object *) this);
}

object *animation_node::get_child_by_name(const string name) {
	return (object *) ___godot_icall_Object_String(___mb.mb_get_child_by_name, (const object *) this, name);
}

dictionary animation_node::get_child_nodes() {
	return ___godot_icall_Dictionary(___mb.mb_get_child_nodes, (const object *) this);
}

int64_t animation_node::get_input_count() const {
	return ___godot_icall_int(___mb.mb_get_input_count, (const object *) this);
}

string animation_node::get_input_name(const int64_t input_) {
	return ___godot_icall_String_int(___mb.mb_get_input_name, (const object *) this, input_);
}

variant animation_node::get_parameter(const string name) const {
	return ___godot_icall_Variant_String(___mb.mb_get_parameter, (const object *) this, name);
}

variant animation_node::get_parameter_default_value(const string name) {
	return ___godot_icall_Variant_String(___mb.mb_get_parameter_default_value, (const object *) this, name);
}

array animation_node::get_parameter_list() {
	return ___godot_icall_Array(___mb.mb_get_parameter_list, (const object *) this);
}

bool animation_node::has_filter() {
	return ___godot_icall_bool(___mb.mb_has_filter, (const object *) this);
}

bool animation_node::is_filter_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_filter_enabled, (const object *) this);
}

bool animation_node::is_path_filtered(const node_path path_) const {
	return ___godot_icall_bool_NodePath(___mb.mb_is_path_filtered, (const object *) this, path_);
}

void animation_node::process(const real_t time_, const bool seek) {
	___godot_icall_void_float_bool(___mb.mb_process, (const object *) this, time_, seek);
}

void animation_node::remove_input(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_input, (const object *) this, index);
}

void animation_node::set_filter_enabled(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_filter_enabled, (const object *) this, enable);
}

void animation_node::set_filter_path(const node_path path_, const bool enable) {
	___godot_icall_void_NodePath_bool(___mb.mb_set_filter_path, (const object *) this, path_, enable);
}

void animation_node::set_parameter(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_parameter, (const object *) this, name, value);
}

}