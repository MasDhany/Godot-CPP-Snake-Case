#include "visual_script_sequence.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_sequence::___method_bindings visual_script_sequence::___mb = {};

void *visual_script_sequence::_detail_class_tag = nullptr;

void visual_script_sequence::___init_method_bindings() {
	___mb.mb_get_steps = gd::api->godot_method_bind_get_method("VisualScriptSequence", "get_steps");
	___mb.mb_set_steps = gd::api->godot_method_bind_get_method("VisualScriptSequence", "set_steps");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptSequence");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_sequence *visual_script_sequence::_new()
{
	return (visual_script_sequence *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptSequence")());
}
int64_t visual_script_sequence::get_steps() const {
	return ___godot_icall_int(___mb.mb_get_steps, (const object *) this);
}

void visual_script_sequence::set_steps(const int64_t steps) {
	___godot_icall_void_int(___mb.mb_set_steps, (const object *) this, steps);
}

}