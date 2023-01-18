#include "texture3d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


texture3d::___method_bindings texture3d::___mb = {};

void *texture3d::_detail_class_tag = nullptr;

void texture3d::___init_method_bindings() {
	___mb.mb_create = gd::api->godot_method_bind_get_method("Texture3D", "create");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Texture3D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

texture3d *texture3d::_new()
{
	return (texture3d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Texture3D")());
}
void texture3d::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_create, (const object *) this, width, height, depth, format, flags);
}

}