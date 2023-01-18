#include "visual_script_comment.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_comment::___method_bindings visual_script_comment::___mb = {};

void *visual_script_comment::_detail_class_tag = nullptr;

void visual_script_comment::___init_method_bindings() {
	___mb.mb_get_description = gd::api->godot_method_bind_get_method("VisualScriptComment", "get_description");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("VisualScriptComment", "get_size");
	___mb.mb_get_title = gd::api->godot_method_bind_get_method("VisualScriptComment", "get_title");
	___mb.mb_set_description = gd::api->godot_method_bind_get_method("VisualScriptComment", "set_description");
	___mb.mb_set_size = gd::api->godot_method_bind_get_method("VisualScriptComment", "set_size");
	___mb.mb_set_title = gd::api->godot_method_bind_get_method("VisualScriptComment", "set_title");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptComment");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_comment *visual_script_comment::_new()
{
	return (visual_script_comment *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptComment")());
}
string visual_script_comment::get_description() const {
	return ___godot_icall_String(___mb.mb_get_description, (const object *) this);
}

vector2 visual_script_comment::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const object *) this);
}

string visual_script_comment::get_title() const {
	return ___godot_icall_String(___mb.mb_get_title, (const object *) this);
}

void visual_script_comment::set_description(const string description) {
	___godot_icall_void_String(___mb.mb_set_description, (const object *) this, description);
}

void visual_script_comment::set_size(const vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const object *) this, size);
}

void visual_script_comment::set_title(const string title) {
	___godot_icall_void_String(___mb.mb_set_title, (const object *) this, title);
}

}