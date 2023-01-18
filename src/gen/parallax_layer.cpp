#include "parallax_layer.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


parallax_layer::___method_bindings parallax_layer::___mb = {};

void *parallax_layer::_detail_class_tag = nullptr;

void parallax_layer::___init_method_bindings() {
	___mb.mb_get_mirroring = gd::api->godot_method_bind_get_method("ParallaxLayer", "get_mirroring");
	___mb.mb_get_motion_offset = gd::api->godot_method_bind_get_method("ParallaxLayer", "get_motion_offset");
	___mb.mb_get_motion_scale = gd::api->godot_method_bind_get_method("ParallaxLayer", "get_motion_scale");
	___mb.mb_set_mirroring = gd::api->godot_method_bind_get_method("ParallaxLayer", "set_mirroring");
	___mb.mb_set_motion_offset = gd::api->godot_method_bind_get_method("ParallaxLayer", "set_motion_offset");
	___mb.mb_set_motion_scale = gd::api->godot_method_bind_get_method("ParallaxLayer", "set_motion_scale");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ParallaxLayer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

parallax_layer *parallax_layer::_new()
{
	return (parallax_layer *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ParallaxLayer")());
}
vector2 parallax_layer::get_mirroring() const {
	return ___godot_icall_Vector2(___mb.mb_get_mirroring, (const object *) this);
}

vector2 parallax_layer::get_motion_offset() const {
	return ___godot_icall_Vector2(___mb.mb_get_motion_offset, (const object *) this);
}

vector2 parallax_layer::get_motion_scale() const {
	return ___godot_icall_Vector2(___mb.mb_get_motion_scale, (const object *) this);
}

void parallax_layer::set_mirroring(const vector2 mirror) {
	___godot_icall_void_Vector2(___mb.mb_set_mirroring, (const object *) this, mirror);
}

void parallax_layer::set_motion_offset(const vector2 offset) {
	___godot_icall_void_Vector2(___mb.mb_set_motion_offset, (const object *) this, offset);
}

void parallax_layer::set_motion_scale(const vector2 scale) {
	___godot_icall_void_Vector2(___mb.mb_set_motion_scale, (const object *) this, scale);
}

}