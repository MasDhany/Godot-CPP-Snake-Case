#include "weak_ref.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


weak_ref::___method_bindings weak_ref::___mb = {};

void *weak_ref::_detail_class_tag = nullptr;

void weak_ref::___init_method_bindings() {
	___mb.mb_get_ref = gd::api->godot_method_bind_get_method("WeakRef", "get_ref");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "WeakRef");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

weak_ref *weak_ref::_new()
{
	return (weak_ref *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"WeakRef")());
}
variant weak_ref::get_ref() const {
	return ___godot_icall_Variant(___mb.mb_get_ref, (const object *) this);
}

}