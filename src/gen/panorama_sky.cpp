#include "panorama_sky.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


panorama_sky::___method_bindings panorama_sky::___mb = {};

void *panorama_sky::_detail_class_tag = nullptr;

void panorama_sky::___init_method_bindings() {
	___mb.mb_get_panorama = gd::api->godot_method_bind_get_method("PanoramaSky", "get_panorama");
	___mb.mb_set_panorama = gd::api->godot_method_bind_get_method("PanoramaSky", "set_panorama");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "PanoramaSky");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

panorama_sky *panorama_sky::_new()
{
	return (panorama_sky *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"PanoramaSky")());
}
ref<texture> panorama_sky::get_panorama() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_panorama, (const object *) this));
}

void panorama_sky::set_panorama(const ref<texture> texture_) {
	___godot_icall_void_Object(___mb.mb_set_panorama, (const object *) this, texture_.ptr());
}

}