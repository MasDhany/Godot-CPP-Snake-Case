#include "curve_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "curve.hpp"


namespace gd {


curve_texture::___method_bindings curve_texture::___mb = {};

void *curve_texture::_detail_class_tag = nullptr;

void curve_texture::___init_method_bindings() {
	___mb.mb__update = gd::api->godot_method_bind_get_method("CurveTexture", "_update");
	___mb.mb_get_curve = gd::api->godot_method_bind_get_method("CurveTexture", "get_curve");
	___mb.mb_set_curve = gd::api->godot_method_bind_get_method("CurveTexture", "set_curve");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("CurveTexture", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CurveTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

curve_texture *curve_texture::_new()
{
	return (curve_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"CurveTexture")());
}
void curve_texture::_update() {
	___godot_icall_void(___mb.mb__update, (const object *) this);
}

ref<curve> curve_texture::get_curve() const {
	return ref<curve>::__internal_constructor(___godot_icall_Object(___mb.mb_get_curve, (const object *) this));
}

void curve_texture::set_curve(const ref<curve> curve_) {
	___godot_icall_void_Object(___mb.mb_set_curve, (const object *) this, curve_.ptr());
}

void curve_texture::set_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_width, (const object *) this, width);
}

}