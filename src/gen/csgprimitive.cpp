#include "csgprimitive.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


csgprimitive::___method_bindings csgprimitive::___mb = {};

void *csgprimitive::_detail_class_tag = nullptr;

void csgprimitive::___init_method_bindings() {
	___mb.mb_is_inverting_faces = gd::api->godot_method_bind_get_method("CSGPrimitive", "is_inverting_faces");
	___mb.mb_set_invert_faces = gd::api->godot_method_bind_get_method("CSGPrimitive", "set_invert_faces");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CSGPrimitive");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool csgprimitive::is_inverting_faces() {
	return ___godot_icall_bool(___mb.mb_is_inverting_faces, (const object *) this);
}

void csgprimitive::set_invert_faces(const bool invert_faces) {
	___godot_icall_void_bool(___mb.mb_set_invert_faces, (const object *) this, invert_faces);
}

}