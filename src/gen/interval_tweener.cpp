#include "interval_tweener.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


interval_tweener::___method_bindings interval_tweener::___mb = {};

void *interval_tweener::_detail_class_tag = nullptr;

void interval_tweener::___init_method_bindings() {
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "IntervalTweener");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

interval_tweener *interval_tweener::_new()
{
	return (interval_tweener *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"IntervalTweener")());
}
}