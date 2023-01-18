#include "animation_node_transition.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


animation_node_transition::___method_bindings animation_node_transition::___mb = {};

void *animation_node_transition::_detail_class_tag = nullptr;

void animation_node_transition::___init_method_bindings() {
	___mb.mb_get_cross_fade_time = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "get_cross_fade_time");
	___mb.mb_get_enabled_inputs = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "get_enabled_inputs");
	___mb.mb_get_input_caption = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "get_input_caption");
	___mb.mb_is_input_set_as_auto_advance = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "is_input_set_as_auto_advance");
	___mb.mb_set_cross_fade_time = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "set_cross_fade_time");
	___mb.mb_set_enabled_inputs = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "set_enabled_inputs");
	___mb.mb_set_input_as_auto_advance = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "set_input_as_auto_advance");
	___mb.mb_set_input_caption = gd::api->godot_method_bind_get_method("AnimationNodeTransition", "set_input_caption");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AnimationNodeTransition");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

animation_node_transition *animation_node_transition::_new()
{
	return (animation_node_transition *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AnimationNodeTransition")());
}
real_t animation_node_transition::get_cross_fade_time() const {
	return ___godot_icall_float(___mb.mb_get_cross_fade_time, (const object *) this);
}

int64_t animation_node_transition::get_enabled_inputs() {
	return ___godot_icall_int(___mb.mb_get_enabled_inputs, (const object *) this);
}

string animation_node_transition::get_input_caption(const int64_t input_) const {
	return ___godot_icall_String_int(___mb.mb_get_input_caption, (const object *) this, input_);
}

bool animation_node_transition::is_input_set_as_auto_advance(const int64_t input_) const {
	return ___godot_icall_bool_int(___mb.mb_is_input_set_as_auto_advance, (const object *) this, input_);
}

void animation_node_transition::set_cross_fade_time(const real_t time_) {
	___godot_icall_void_float(___mb.mb_set_cross_fade_time, (const object *) this, time_);
}

void animation_node_transition::set_enabled_inputs(const int64_t amount) {
	___godot_icall_void_int(___mb.mb_set_enabled_inputs, (const object *) this, amount);
}

void animation_node_transition::set_input_as_auto_advance(const int64_t input_, const bool enable) {
	___godot_icall_void_int_bool(___mb.mb_set_input_as_auto_advance, (const object *) this, input_, enable);
}

void animation_node_transition::set_input_caption(const int64_t input_, const string caption) {
	___godot_icall_void_int_String(___mb.mb_set_input_caption, (const object *) this, input_, caption);
}

}