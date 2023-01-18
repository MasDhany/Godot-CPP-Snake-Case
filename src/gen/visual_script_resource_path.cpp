#include "visual_script_resource_path.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_resource_path::___method_bindings visual_script_resource_path::___mb = {};

void *visual_script_resource_path::_detail_class_tag = nullptr;

void visual_script_resource_path::___init_method_bindings() {
	___mb.mb_get_resource_path = gd::api->godot_method_bind_get_method("VisualScriptResourcePath", "get_resource_path");
	___mb.mb_set_resource_path = gd::api->godot_method_bind_get_method("VisualScriptResourcePath", "set_resource_path");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptResourcePath");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_resource_path *visual_script_resource_path::_new()
{
	return (visual_script_resource_path *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptResourcePath")());
}
string visual_script_resource_path::get_resource_path() {
	return ___godot_icall_String(___mb.mb_get_resource_path, (const object *) this);
}

void visual_script_resource_path::set_resource_path(const string path_) {
	___godot_icall_void_String(___mb.mb_set_resource_path, (const object *) this, path_);
}

}