#include "visual_script_constructor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


visual_script_constructor::___method_bindings visual_script_constructor::___mb = {};

void *visual_script_constructor::_detail_class_tag = nullptr;

void visual_script_constructor::___init_method_bindings() {
	___mb.mb_get_constructor = gd::api->godot_method_bind_get_method("VisualScriptConstructor", "get_constructor");
	___mb.mb_get_constructor_type = gd::api->godot_method_bind_get_method("VisualScriptConstructor", "get_constructor_type");
	___mb.mb_set_constructor = gd::api->godot_method_bind_get_method("VisualScriptConstructor", "set_constructor");
	___mb.mb_set_constructor_type = gd::api->godot_method_bind_get_method("VisualScriptConstructor", "set_constructor_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "VisualScriptConstructor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

visual_script_constructor *visual_script_constructor::_new()
{
	return (visual_script_constructor *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"VisualScriptConstructor")());
}
dictionary visual_script_constructor::get_constructor() const {
	return ___godot_icall_Dictionary(___mb.mb_get_constructor, (const object *) this);
}

variant::Type visual_script_constructor::get_constructor_type() const {
	return (variant::Type) ___godot_icall_int(___mb.mb_get_constructor_type, (const object *) this);
}

void visual_script_constructor::set_constructor(const dictionary constructor) {
	___godot_icall_void_Dictionary(___mb.mb_set_constructor, (const object *) this, constructor);
}

void visual_script_constructor::set_constructor_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_constructor_type, (const object *) this, type);
}

}