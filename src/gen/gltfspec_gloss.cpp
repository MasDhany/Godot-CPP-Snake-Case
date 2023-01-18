#include "gltfspec_gloss.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "image.hpp"


namespace gd {


gltfspec_gloss::___method_bindings gltfspec_gloss::___mb = {};

void *gltfspec_gloss::_detail_class_tag = nullptr;

void gltfspec_gloss::___init_method_bindings() {
	___mb.mb_get_diffuse_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "get_diffuse_factor");
	___mb.mb_get_diffuse_img = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "get_diffuse_img");
	___mb.mb_get_gloss_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "get_gloss_factor");
	___mb.mb_get_spec_gloss_img = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "get_spec_gloss_img");
	___mb.mb_get_specular_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "get_specular_factor");
	___mb.mb_set_diffuse_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "set_diffuse_factor");
	___mb.mb_set_diffuse_img = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "set_diffuse_img");
	___mb.mb_set_gloss_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "set_gloss_factor");
	___mb.mb_set_spec_gloss_img = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "set_spec_gloss_img");
	___mb.mb_set_specular_factor = gd::api->godot_method_bind_get_method("GLTFSpecGloss", "set_specular_factor");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFSpecGloss");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltfspec_gloss *gltfspec_gloss::_new()
{
	return (gltfspec_gloss *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFSpecGloss")());
}
color gltfspec_gloss::get_diffuse_factor() {
	return ___godot_icall_Color(___mb.mb_get_diffuse_factor, (const object *) this);
}

ref<image> gltfspec_gloss::get_diffuse_img() {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb_get_diffuse_img, (const object *) this));
}

real_t gltfspec_gloss::get_gloss_factor() {
	return ___godot_icall_float(___mb.mb_get_gloss_factor, (const object *) this);
}

ref<image> gltfspec_gloss::get_spec_gloss_img() {
	return ref<image>::__internal_constructor(___godot_icall_Object(___mb.mb_get_spec_gloss_img, (const object *) this));
}

color gltfspec_gloss::get_specular_factor() {
	return ___godot_icall_Color(___mb.mb_get_specular_factor, (const object *) this);
}

void gltfspec_gloss::set_diffuse_factor(const color diffuse_factor) {
	___godot_icall_void_Color(___mb.mb_set_diffuse_factor, (const object *) this, diffuse_factor);
}

void gltfspec_gloss::set_diffuse_img(const ref<image> diffuse_img) {
	___godot_icall_void_Object(___mb.mb_set_diffuse_img, (const object *) this, diffuse_img.ptr());
}

void gltfspec_gloss::set_gloss_factor(const real_t gloss_factor) {
	___godot_icall_void_float(___mb.mb_set_gloss_factor, (const object *) this, gloss_factor);
}

void gltfspec_gloss::set_spec_gloss_img(const ref<image> spec_gloss_img) {
	___godot_icall_void_Object(___mb.mb_set_spec_gloss_img, (const object *) this, spec_gloss_img.ptr());
}

void gltfspec_gloss::set_specular_factor(const color specular_factor) {
	___godot_icall_void_Color(___mb.mb_set_specular_factor, (const object *) this, specular_factor);
}

}