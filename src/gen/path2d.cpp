#include "path2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve2d.hpp"


namespace gd {


path2d::___method_bindings path2d::___mb = {};

void *path2d::_detail_class_tag = nullptr;

void path2d::___init_method_bindings() {
	___mb.mb__curve_changed = gd::api->godot_method_bind_get_method("Path2D", "_curve_changed");
	___mb.mb_get_curve = gd::api->godot_method_bind_get_method("Path2D", "get_curve");
	___mb.mb_set_curve = gd::api->godot_method_bind_get_method("Path2D", "set_curve");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Path2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

path2d *path2d::_new()
{
	return (path2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Path2D")());
}
void path2d::_curve_changed() {
	___godot_icall_void(___mb.mb__curve_changed, (const object *) this);
}

ref<curve2d> path2d::get_curve() const {
	return ref<curve2d>::__internal_constructor(___godot_icall_Object(___mb.mb_get_curve, (const object *) this));
}

void path2d::set_curve(const ref<curve2d> curve_) {
	___godot_icall_void_Object(___mb.mb_set_curve, (const object *) this, curve_.ptr());
}

}