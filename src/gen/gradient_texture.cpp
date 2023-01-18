#include "gradient_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "gradient.hpp"


namespace gd {


gradient_texture::___method_bindings gradient_texture::___mb = {};

void *gradient_texture::_detail_class_tag = nullptr;

void gradient_texture::___init_method_bindings() {
	___mb.mb__update = gd::api->godot_method_bind_get_method("GradientTexture", "_update");
	___mb.mb_get_gradient = gd::api->godot_method_bind_get_method("GradientTexture", "get_gradient");
	___mb.mb_set_gradient = gd::api->godot_method_bind_get_method("GradientTexture", "set_gradient");
	___mb.mb_set_width = gd::api->godot_method_bind_get_method("GradientTexture", "set_width");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GradientTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gradient_texture *gradient_texture::_new()
{
	return (gradient_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GradientTexture")());
}
void gradient_texture::_update() {
	___godot_icall_void(___mb.mb__update, (const object *) this);
}

ref<gradient> gradient_texture::get_gradient() const {
	return ref<gradient>::__internal_constructor(___godot_icall_Object(___mb.mb_get_gradient, (const object *) this));
}

void gradient_texture::set_gradient(const ref<gradient> gradient_) {
	___godot_icall_void_Object(___mb.mb_set_gradient, (const object *) this, gradient_.ptr());
}

void gradient_texture::set_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_width, (const object *) this, width);
}

}