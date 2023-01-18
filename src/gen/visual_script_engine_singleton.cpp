#include "visual_script_engine_singleton.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_engine_singleton::___method_bindings visual_script_engine_singleton::___mb = {};

void *visual_script_engine_singleton::_detail_class_tag = nullptr;

void visual_script_engine_singleton::___init_method_bindings() {
	___mb.mb_get_singleton = gd::api->godot_method_bind_get_method("VisualScriptEngineSingleton", "get_singleton");
	___mb.mb_set_singleton = gd::api->godot_method_bind_get_method("VisualScriptEngineSingleton", "set_singleton");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptEngineSingleton");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_engine_singleton *visual_script_engine_singleton::_new()
{
	return (visual_script_engine_singleton *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptEngineSingleton")());
}
string visual_script_engine_singleton::get_singleton() {
	return ___godot_icall_String(___mb.mb_get_singleton, (const object *) this);
}

void visual_script_engine_singleton::set_singleton(const string name) {
	___godot_icall_void_String(___mb.mb_set_singleton, (const object *) this, name);
}

}