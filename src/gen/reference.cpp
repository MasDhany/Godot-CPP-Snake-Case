#include "reference.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


reference::___method_bindings reference::___mb = {};

void *reference::_detail_class_tag = nullptr;

void reference::___init_method_bindings() {
	___mb.mb_init_ref = gd::api->godot_method_bind_get_method("Reference", "init_ref");
	___mb.mb_reference = gd::api->godot_method_bind_get_method("Reference", "reference");
	___mb.mb_unreference = gd::api->godot_method_bind_get_method("Reference", "unreference");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Reference");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

reference *reference::_new()
{
	return (reference *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Reference")());
}
bool reference::init_ref() {
	return ___godot_icall_bool(___mb.mb_init_ref, (const object *) this);
}

bool reference::reference_() {
	return ___godot_icall_bool(___mb.mb_reference, (const object *) this);
}

bool reference::unreference() {
	return ___godot_icall_bool(___mb.mb_unreference, (const object *) this);
}

}