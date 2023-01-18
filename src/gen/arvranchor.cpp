#include "arvranchor.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "mesh.hpp"


namespace gd {


arvranchor::___method_bindings arvranchor::___mb = {};

void *arvranchor::_detail_class_tag = nullptr;

void arvranchor::___init_method_bindings() {
	___mb.mb_get_anchor_id = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_anchor_id");
	___mb.mb_get_anchor_name = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_anchor_name");
	___mb.mb_get_is_active = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_is_active");
	___mb.mb_get_mesh = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_mesh");
	___mb.mb_get_plane = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_plane");
	___mb.mb_get_size = gd::api->godot_method_bind_get_method("ARVRAnchor", "get_size");
	___mb.mb_set_anchor_id = gd::api->godot_method_bind_get_method("ARVRAnchor", "set_anchor_id");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "ARVRAnchor");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

arvranchor *arvranchor::_new()
{
	return (arvranchor *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"ARVRAnchor")());
}
int64_t arvranchor::get_anchor_id() const {
	return ___godot_icall_int(___mb.mb_get_anchor_id, (const object *) this);
}

string arvranchor::get_anchor_name() const {
	return ___godot_icall_String(___mb.mb_get_anchor_name, (const object *) this);
}

bool arvranchor::get_is_active() const {
	return ___godot_icall_bool(___mb.mb_get_is_active, (const object *) this);
}

ref<mesh> arvranchor::get_mesh() const {
	return ref<mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const object *) this));
}

plane arvranchor::get_plane() const {
	return ___godot_icall_Plane(___mb.mb_get_plane, (const object *) this);
}

vector3 arvranchor::get_size() const {
	return ___godot_icall_Vector3(___mb.mb_get_size, (const object *) this);
}

void arvranchor::set_anchor_id(const int64_t anchor_id) {
	___godot_icall_void_int(___mb.mb_set_anchor_id, (const object *) this, anchor_id);
}

}