#include "texture_array.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


texture_array::___method_bindings texture_array::___mb = {};

void *texture_array::_detail_class_tag = nullptr;

void texture_array::___init_method_bindings() {
	___mb.mb_create = gd::api->godot_method_bind_get_method("TextureArray", "create");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "TextureArray");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

texture_array *texture_array::_new()
{
	return (texture_array *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"TextureArray")());
}
void texture_array::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_create, (const object *) this, width, height, depth, format, flags);
}

}