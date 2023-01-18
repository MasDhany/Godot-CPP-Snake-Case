#include "path.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve3d.hpp"


namespace gd {


path::___method_bindings path::___mb = {};

void *path::_detail_class_tag = nullptr;

void path::___init_method_bindings() {
	___mb.mb__curve_changed = gd::api->godot_method_bind_get_method("Path", "_curve_changed");
	___mb.mb_get_curve = gd::api->godot_method_bind_get_method("Path", "get_curve");
	___mb.mb_set_curve = gd::api->godot_method_bind_get_method("Path", "set_curve");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Path");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

path *path::_new()
{
	return (path *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Path")());
}
void path::_curve_changed() {
	___godot_icall_void(___mb.mb__curve_changed, (const object *) this);
}

ref<curve3d> path::get_curve() const {
	return ref<curve3d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_curve, (const object *) this));
}

void path::set_curve(const ref<curve3d> curve_) {
	___godot_icall_void_Object(___mb.mb_set_curve, (const object *) this, curve_.ptr());
}

}