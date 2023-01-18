#include "atlas_texture.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "texture.hpp"


namespace gd {


atlas_texture::___method_bindings atlas_texture::___mb = {};

void *atlas_texture::_detail_class_tag = nullptr;

void atlas_texture::___init_method_bindings() {
	___mb.mb_get_atlas = gd::api->godot_method_bind_get_method("AtlasTexture", "get_atlas");
	___mb.mb_get_margin = gd::api->godot_method_bind_get_method("AtlasTexture", "get_margin");
	___mb.mb_get_region = gd::api->godot_method_bind_get_method("AtlasTexture", "get_region");
	___mb.mb_has_filter_clip = gd::api->godot_method_bind_get_method("AtlasTexture", "has_filter_clip");
	___mb.mb_set_atlas = gd::api->godot_method_bind_get_method("AtlasTexture", "set_atlas");
	___mb.mb_set_filter_clip = gd::api->godot_method_bind_get_method("AtlasTexture", "set_filter_clip");
	___mb.mb_set_margin = gd::api->godot_method_bind_get_method("AtlasTexture", "set_margin");
	___mb.mb_set_region = gd::api->godot_method_bind_get_method("AtlasTexture", "set_region");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "AtlasTexture");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

atlas_texture *atlas_texture::_new()
{
	return (atlas_texture *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"AtlasTexture")());
}
ref<texture> atlas_texture::get_atlas() const {
	return ref<texture>::__internal_constructor(___godot_icall_Object(___mb.mb_get_atlas, (const object *) this));
}

rect2 atlas_texture::get_margin() const {
	return ___godot_icall_Rect2(___mb.mb_get_margin, (const object *) this);
}

rect2 atlas_texture::get_region() const {
	return ___godot_icall_Rect2(___mb.mb_get_region, (const object *) this);
}

bool atlas_texture::has_filter_clip() const {
	return ___godot_icall_bool(___mb.mb_has_filter_clip, (const object *) this);
}

void atlas_texture::set_atlas(const ref<texture> atlas) {
	___godot_icall_void_Object(___mb.mb_set_atlas, (const object *) this, atlas.ptr());
}

void atlas_texture::set_filter_clip(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_filter_clip, (const object *) this, enable);
}

void atlas_texture::set_margin(const rect2 margin) {
	___godot_icall_void_Rect2(___mb.mb_set_margin, (const object *) this, margin);
}

void atlas_texture::set_region(const rect2 region) {
	___godot_icall_void_Rect2(___mb.mb_set_region, (const object *) this, region);
}

}