#include "animation_node_blend_space1d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "animation_root_node.hpp"


namespace gd {


animation_node_blend_space1d::___method_bindings animation_node_blend_space1d::___mb = {};

void *animation_node_blend_space1d::_detail_class_tag = nullptr;

void animation_node_blend_space1d::___init_method_bindings() {
	___mb.mb__add_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "_add_blend_point");
	___mb.mb__tree_changed = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "_tree_changed");
	___mb.mb_add_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "add_blend_point");
	___mb.mb_get_blend_point_count = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_count");
	___mb.mb_get_blend_point_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_node");
	___mb.mb_get_blend_point_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_position");
	___mb.mb_get_max_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_max_space");
	___mb.mb_get_min_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_min_space");
	___mb.mb_get_snap = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_snap");
	___mb.mb_get_value_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_value_label");
	___mb.mb_remove_blend_point = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "remove_blend_point");
	___mb.mb_set_blend_point_node = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_blend_point_node");
	___mb.mb_set_blend_point_position = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_blend_point_position");
	___mb.mb_set_max_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_max_space");
	___mb.mb_set_min_space = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_min_space");
	___mb.mb_set_snap = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_snap");
	___mb.mb_set_value_label = gd::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_value_label");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeBlendSpace1D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_blend_space1d *animation_node_blend_space1d::_new()
{
	return (animation_node_blend_space1d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeBlendSpace1D")());
}
void animation_node_blend_space1d::_add_blend_point(const int64_t index, const ref<animation_root_node> node_) {
	___godot_icall_void_int_Object(___mb.mb__add_blend_point, (const object *) this, index, node_.ptr());
}

void animation_node_blend_space1d::_tree_changed() {
	___godot_icall_void(___mb.mb__tree_changed, (const object *) this);
}

void animation_node_blend_space1d::add_blend_point(const ref<animation_root_node> node_, const real_t pos, const int64_t at_index) {
	___godot_icall_void_Object_float_int(___mb.mb_add_blend_point, (const object *) this, node_.ptr(), pos, at_index);
}

int64_t animation_node_blend_space1d::get_blend_point_count() const {
	return ___godot_icall_int(___mb.mb_get_blend_point_count, (const object *) this);
}

ref<animation_root_node> animation_node_blend_space1d::get_blend_point_node(const int64_t point) const {
	return ref<animation_root_node>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_blend_point_node, (const object *) this, point));
}

real_t animation_node_blend_space1d::get_blend_point_position(const int64_t point) const {
	return ___godot_icall_float_int(___mb.mb_get_blend_point_position, (const object *) this, point);
}

real_t animation_node_blend_space1d::get_max_space() const {
	return ___godot_icall_float(___mb.mb_get_max_space, (const object *) this);
}

real_t animation_node_blend_space1d::get_min_space() const {
	return ___godot_icall_float(___mb.mb_get_min_space, (const object *) this);
}

real_t animation_node_blend_space1d::get_snap() const {
	return ___godot_icall_float(___mb.mb_get_snap, (const object *) this);
}

string animation_node_blend_space1d::get_value_label() const {
	return ___godot_icall_String(___mb.mb_get_value_label, (const object *) this);
}

void animation_node_blend_space1d::remove_blend_point(const int64_t point) {
	___godot_icall_void_int(___mb.mb_remove_blend_point, (const object *) this, point);
}

void animation_node_blend_space1d::set_blend_point_node(const int64_t point, const ref<animation_root_node> node_) {
	___godot_icall_void_int_Object(___mb.mb_set_blend_point_node, (const object *) this, point, node_.ptr());
}

void animation_node_blend_space1d::set_blend_point_position(const int64_t point, const real_t pos) {
	___godot_icall_void_int_float(___mb.mb_set_blend_point_position, (const object *) this, point, pos);
}

void animation_node_blend_space1d::set_max_space(const real_t max_space) {
	___godot_icall_void_float(___mb.mb_set_max_space, (const object *) this, max_space);
}

void animation_node_blend_space1d::set_min_space(const real_t min_space) {
	___godot_icall_void_float(___mb.mb_set_min_space, (const object *) this, min_space);
}

void animation_node_blend_space1d::set_snap(const real_t snap) {
	___godot_icall_void_float(___mb.mb_set_snap, (const object *) this, snap);
}

void animation_node_blend_space1d::set_value_label(const string text) {
	___godot_icall_void_String(___mb.mb_set_value_label, (const object *) this, text);
}

}