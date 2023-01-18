#include "editor_script_picker.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "node.hpp"


namespace gd {


editor_script_picker::___method_bindings editor_script_picker::___mb = {};

void *editor_script_picker::_detail_class_tag = nullptr;

void editor_script_picker::___init_method_bindings() {
	___mb.mb_get_script_owner = gd::api->godot_method_bind_get_method("EditorScriptPicker", "get_script_owner");
	___mb.mb_set_script_owner = gd::api->godot_method_bind_get_method("EditorScriptPicker", "set_script_owner");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorScriptPicker");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

node *editor_script_picker::get_script_owner() const {
	return (node *) ___godot_icall_Object(___mb.mb_get_script_owner, (const object *) this);
}

void editor_script_picker::set_script_owner(const node *owner_node) {
	___godot_icall_void_Object(___mb.mb_set_script_owner, (const object *) this, owner_node);
}

}