#include "visual_script_sub_call.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_sub_call::___method_bindings visual_script_sub_call::___mb = {};

void *visual_script_sub_call::_detail_class_tag = nullptr;

void visual_script_sub_call::___init_method_bindings() {
	___mb.mb__subcall = gd::api->godot_method_bind_get_method("VisualScriptSubCall", "_subcall");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptSubCall");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_sub_call *visual_script_sub_call::_new()
{
	return (visual_script_sub_call *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptSubCall")());
}
variant visual_script_sub_call::_subcall(const variant arguments) {
	return ___godot_icall_Variant_Variant(___mb.mb__subcall, (const object *) this, arguments);
}

}