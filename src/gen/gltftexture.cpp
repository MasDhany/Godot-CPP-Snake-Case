#include "gltftexture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


gltftexture::___method_bindings gltftexture::___mb = {};

void *gltftexture::_detail_class_tag = nullptr;

void gltftexture::___init_method_bindings() {
	___mb.mb_get_src_image = gd::api->godot_method_bind_get_method("GLTFTexture", "get_src_image");
	___mb.mb_set_src_image = gd::api->godot_method_bind_get_method("GLTFTexture", "set_src_image");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "GLTFTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

gltftexture *gltftexture::_new()
{
	return (gltftexture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"GLTFTexture")());
}
int64_t gltftexture::get_src_image() const {
	return ___godot_icall_int(___mb.mb_get_src_image, (const object *) this);
}

void gltftexture::set_src_image(const int64_t src_image) {
	___godot_icall_void_int(___mb.mb_set_src_image, (const object *) this, src_image);
}

}