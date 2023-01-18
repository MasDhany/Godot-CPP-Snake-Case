#include "editor_script.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "editor_interface.hpp"
#include "node.hpp"


namespace gd {


editor_script::___method_bindings editor_script::___mb = {};

void *editor_script::_detail_class_tag = nullptr;

void editor_script::___init_method_bindings() {
	___mb.mb__run = gd::api->godot_method_bind_get_method("EditorScript", "_run");
	___mb.mb_add_root_node = gd::api->godot_method_bind_get_method("EditorScript", "add_root_node");
	___mb.mb_get_editor_interface = gd::api->godot_method_bind_get_method("EditorScript", "get_editor_interface");
	___mb.mb_get_scene = gd::api->godot_method_bind_get_method("EditorScript", "get_scene");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "EditorScript");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void editor_script::_run() {
	___godot_icall_void(___mb.mb__run, (const object *) this);
}

void editor_script::add_root_node(const node *node_) {
	___godot_icall_void_Object(___mb.mb_add_root_node, (const object *) this, node_);
}

editor_interface *editor_script::get_editor_interface() {
	return (editor_interface *) ___godot_icall_Object(___mb.mb_get_editor_interface, (const object *) this);
}

node *editor_script::get_scene() {
	return (node *) ___godot_icall_Object(___mb.mb_get_scene, (const object *) this);
}

}