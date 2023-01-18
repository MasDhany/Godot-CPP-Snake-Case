#include "short_cut.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "input_event.hpp"


namespace gd {


short_cut::___method_bindings short_cut::___mb = {};

void *short_cut::_detail_class_tag = nullptr;

void short_cut::___init_method_bindings() {
	___mb.mb_get_as_text = gd::api->godot_method_bind_get_method("ShortCut", "get_as_text");
	___mb.mb_get_shortcut = gd::api->godot_method_bind_get_method("ShortCut", "get_shortcut");
	___mb.mb_is_shortcut = gd::api->godot_method_bind_get_method("ShortCut", "is_shortcut");
	___mb.mb_is_valid = gd::api->godot_method_bind_get_method("ShortCut", "is_valid");
	___mb.mb_set_shortcut = gd::api->godot_method_bind_get_method("ShortCut", "set_shortcut");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ShortCut");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

short_cut *short_cut::_new()
{
	return (short_cut *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ShortCut")());
}
string short_cut::get_as_text() const {
	return ___godot_icall_String(___mb.mb_get_as_text, (const object *) this);
}

ref<input_event> short_cut::get_shortcut() const {
	return ref<input_event>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shortcut, (const object *) this));
}

bool short_cut::is_shortcut(const ref<input_event> event) const {
	return ___godot_icall_bool_Object(___mb.mb_is_shortcut, (const object *) this, event.ptr());
}

bool short_cut::is_valid() const {
	return ___godot_icall_bool(___mb.mb_is_valid, (const object *) this);
}

void short_cut::set_shortcut(const ref<input_event> event) {
	___godot_icall_void_Object(___mb.mb_set_shortcut, (const object *) this, event.ptr());
}

}