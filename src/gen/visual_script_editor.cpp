#include "visual_script_editor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "script.hpp"


namespace gd {


visual_script_editor *visual_script_editor::_singleton = NULL;


visual_script_editor::visual_script_editor() {
	_owner = gd::api->godot_global_get_singleton((char *) "VisualScriptEditor");
}


visual_script_editor::___method_bindings visual_script_editor::___mb = {};

void *visual_script_editor::_detail_class_tag = nullptr;

void visual_script_editor::___init_method_bindings() {
	___mb.mb_add_custom_node = gd::api->godot_method_bind_get_method("_VisualScriptEditor", "add_custom_node");
	___mb.mb_remove_custom_node = gd::api->godot_method_bind_get_method("_VisualScriptEditor", "remove_custom_node");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_VisualScriptEditor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void visual_script_editor::add_custom_node(const string name, const string category, const ref<script> script_) {
	___godot_icall_void_String_String_Object(___mb.mb_add_custom_node, (const object *) this, name, category, script_.ptr());
}

void visual_script_editor::remove_custom_node(const string name, const string category) {
	___godot_icall_void_String_String(___mb.mb_remove_custom_node, (const object *) this, name, category);
}

}