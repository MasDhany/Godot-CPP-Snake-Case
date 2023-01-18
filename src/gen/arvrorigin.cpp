#include "arvrorigin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


arvrorigin::___method_bindings arvrorigin::___mb = {};

void *arvrorigin::_detail_class_tag = nullptr;

void arvrorigin::___init_method_bindings() {
	___mb.mb_get_world_scale = gd::api->godot_method_bind_get_method("ARVROrigin", "get_world_scale");
	___mb.mb_set_world_scale = gd::api->godot_method_bind_get_method("ARVROrigin", "set_world_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVROrigin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

arvrorigin *arvrorigin::_new()
{
	return (arvrorigin *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ARVROrigin")());
}
real_t arvrorigin::get_world_scale() const {
	return ___godot_icall_float(___mb.mb_get_world_scale, (const object *) this);
}

void arvrorigin::set_world_scale(const real_t world_scale) {
	___godot_icall_void_float(___mb.mb_set_world_scale, (const object *) this, world_scale);
}

}