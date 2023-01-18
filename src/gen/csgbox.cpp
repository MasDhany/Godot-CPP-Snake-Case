#include "csgbox.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "material.hpp"


namespace gd {


csgbox::___method_bindings csgbox::___mb = {};

void *csgbox::_detail_class_tag = nullptr;

void csgbox::___init_method_bindings() {
	___mb.mb_get_depth = gd::api->godot_method_bind_get_method("CSGBox", "get_depth");
	___mb.mb_get_height = gd::api->godot_method_bind_get_method("CSGBox", "get_height");
	___mb.mb_get_material = gd::api->godot_method_bind_get_method("CSGBox", "get_material");
	___mb.mb_get_width = gd::api->godot_method_bind_get_method("CSGBox", "get_width");
	___mb.mb_set_depth = gd::api->godot_method_bind_get_method("CSGBox", "set_depth");
	___mb.mb_set_height = gd::api->godot_method_bind_get_method("CSGBox", "set_height");
	___mb.mb_set_material = gd::api->godot_method_bind_get_method("CSGBox", "set_material");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("CSGBox", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGBox");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

csgbox *csgbox::_new()
{
	return (csgbox *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CSGBox")());
}
real_t csgbox::get_depth() const {
	return ___godot_icall_float(___mb.mb_get_depth, (const object *) this);
}

real_t csgbox::get_height() const {
	return ___godot_icall_float(___mb.mb_get_height, (const object *) this);
}

ref<material> csgbox::get_material() const {
	return ref<material>::__internal_constructor(___godot_icall_Object(___mb.mb_get_material, (const object *) this));
}

real_t csgbox::get_width() const {
	return ___godot_icall_float(___mb.mb_get_width, (const object *) this);
}

void csgbox::set_depth(const real_t depth) {
	___godot_icall_void_float(___mb.mb_set_depth, (const object *) this, depth);
}

void csgbox::set_height(const real_t height) {
	___godot_icall_void_float(___mb.mb_set_height, (const object *) this, height);
}

void csgbox::set_material(const ref<material> material_) {
	___godot_icall_void_Object(___mb.mb_set_material, (const object *) this, material_.ptr());
}

void csgbox::set_width(const real_t width) {
	___godot_icall_void_float(___mb.mb_set_width, (const object *) this, width);
}

}