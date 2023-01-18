#include "global_constants.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


global_constants *global_constants::_singleton = NULL;


global_constants::global_constants() {
	_owner = gd::api->godot_global_get_singleton((char *) "GlobalConstants");
}


global_constants::___method_bindings global_constants::___mb = {};

void *global_constants::_detail_class_tag = nullptr;

void global_constants::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GlobalConstants");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

}