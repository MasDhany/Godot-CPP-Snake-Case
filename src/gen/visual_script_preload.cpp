#include "visual_script_preload.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "resource.hpp"


namespace gd {


visual_script_preload::___method_bindings visual_script_preload::___mb = {};

void *visual_script_preload::_detail_class_tag = nullptr;

void visual_script_preload::___init_method_bindings() {
	___mb.mb_get_preload = gd::api->godot_method_bind_get_method("VisualScriptPreload", "get_preload");
	___mb.mb_set_preload = gd::api->godot_method_bind_get_method("VisualScriptPreload", "set_preload");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptPreload");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_preload *visual_script_preload::_new()
{
	return (visual_script_preload *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptPreload")());
}
ref<resource> visual_script_preload::get_preload() const {
	return ref<resource>::__internal_constructor(___godot_icall_Object(___mb.mb_get_preload, (const object *) this));
}

void visual_script_preload::set_preload(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_set_preload, (const object *) this, resource_.ptr());
}

}