#include "proxy_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


proxy_texture::___method_bindings proxy_texture::___mb = {};

void *proxy_texture::_detail_class_tag = nullptr;

void proxy_texture::___init_method_bindings() {
	___mb.mb_get_base = gd::api->godot_method_bind_get_method("ProxyTexture", "get_base");
	___mb.mb_set_base = gd::api->godot_method_bind_get_method("ProxyTexture", "set_base");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ProxyTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

proxy_texture *proxy_texture::_new()
{
	return (proxy_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ProxyTexture")());
}
ref<texture> proxy_texture::get_base() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_base, (const object *) this));
}

void proxy_texture::set_base(const ref<texture> base) {
	___godot_icall_void_Object(___mb.mb_set_base, (const object *) this, base.ptr());
}

}