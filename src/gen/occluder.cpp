#include "occluder.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "occluder_shape.hpp"
#include "resource.hpp"


namespace gd {


occluder::___method_bindings occluder::___mb = {};

void *occluder::_detail_class_tag = nullptr;

void occluder::___init_method_bindings() {
	___mb.mb_get_shape = gd::api->godot_method_bind_get_method("Occluder", "get_shape");
	___mb.mb_resource_changed = gd::api->godot_method_bind_get_method("Occluder", "resource_changed");
	___mb.mb_set_shape = gd::api->godot_method_bind_get_method("Occluder", "set_shape");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Occluder");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

occluder *occluder::_new()
{
	return (occluder *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Occluder")());
}
ref<occluder_shape> occluder::get_shape() const {
	return ref<occluder_shape>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const object *) this));
}

void occluder::resource_changed(const ref<resource> resource_) {
	___godot_icall_void_Object(___mb.mb_resource_changed, (const object *) this, resource_.ptr());
}

void occluder::set_shape(const ref<occluder_shape> shape_) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const object *) this, shape_.ptr());
}

}