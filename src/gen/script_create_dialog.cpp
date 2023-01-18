#include "script_create_dialog.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


script_create_dialog::___method_bindings script_create_dialog::___mb = {};

void *script_create_dialog::_detail_class_tag = nullptr;

void script_create_dialog::___init_method_bindings() {
	___mb.mb__browse_class_in_tree = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_browse_class_in_tree");
	___mb.mb__browse_path = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_browse_path");
	___mb.mb__built_in_pressed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_built_in_pressed");
	___mb.mb__class_name_changed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_class_name_changed");
	___mb.mb__create = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_create");
	___mb.mb__file_selected = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_file_selected");
	___mb.mb__lang_changed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_lang_changed");
	___mb.mb__parent_name_changed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_parent_name_changed");
	___mb.mb__path_changed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_path_changed");
	___mb.mb__path_entered = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_path_entered");
	___mb.mb__path_hbox_sorted = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_path_hbox_sorted");
	___mb.mb__template_changed = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "_template_changed");
	___mb.mb_config = gd::api->godot_method_bind_get_method("ScriptCreateDialog", "config");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ScriptCreateDialog");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void script_create_dialog::_browse_class_in_tree() {
	___godot_icall_void(___mb.mb__browse_class_in_tree, (const object *) this);
}

void script_create_dialog::_browse_path(const bool arg0, const bool arg1) {
	___godot_icall_void_bool_bool(___mb.mb__browse_path, (const object *) this, arg0, arg1);
}

void script_create_dialog::_built_in_pressed() {
	___godot_icall_void(___mb.mb__built_in_pressed, (const object *) this);
}

void script_create_dialog::_class_name_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__class_name_changed, (const object *) this, arg0);
}

void script_create_dialog::_create() {
	___godot_icall_void(___mb.mb__create, (const object *) this);
}

void script_create_dialog::_file_selected(const string arg0) {
	___godot_icall_void_String(___mb.mb__file_selected, (const object *) this, arg0);
}

void script_create_dialog::_lang_changed(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__lang_changed, (const object *) this, arg0);
}

void script_create_dialog::_parent_name_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__parent_name_changed, (const object *) this, arg0);
}

void script_create_dialog::_path_changed(const string arg0) {
	___godot_icall_void_String(___mb.mb__path_changed, (const object *) this, arg0);
}

void script_create_dialog::_path_entered(const string arg0) {
	___godot_icall_void_String(___mb.mb__path_entered, (const object *) this, arg0);
}

void script_create_dialog::_path_hbox_sorted() {
	___godot_icall_void(___mb.mb__path_hbox_sorted, (const object *) this);
}

void script_create_dialog::_template_changed(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__template_changed, (const object *) this, arg0);
}

void script_create_dialog::config(const string inherits, const string path_, const bool built_in_enabled, const bool load_enabled) {
	___godot_icall_void_String_String_bool_bool(___mb.mb_config, (const object *) this, inherits, path_, built_in_enabled, load_enabled);
}

}