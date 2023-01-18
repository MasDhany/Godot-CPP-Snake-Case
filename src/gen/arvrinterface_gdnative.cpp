#include "arvrinterface_gdnative.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


arvrinterface_gdnative::___method_bindings arvrinterface_gdnative::___mb = {};

void *arvrinterface_gdnative::_detail_class_tag = nullptr;

void arvrinterface_gdnative::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRInterfaceGDNative");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

arvrinterface_gdnative *arvrinterface_gdnative::_new()
{
	return (arvrinterface_gdnative *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ARVRInterfaceGDNative")());
}
}