#include "bone2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


bone2d::___method_bindings bone2d::___mb = {};

void *bone2d::_detail_class_tag = nullptr;

void bone2d::___init_method_bindings() {
	___mb.mb_apply_rest = gd::api->godot_method_bind_get_method("Bone2D", "apply_rest");
	___mb.mb_get_default_length = gd::api->godot_method_bind_get_method("Bone2D", "get_default_length");
	___mb.mb_get_index_in_skeleton = gd::api->godot_method_bind_get_method("Bone2D", "get_index_in_skeleton");
	___mb.mb_get_rest = gd::api->godot_method_bind_get_method("Bone2D", "get_rest");
	___mb.mb_get_skeleton_rest = gd::api->godot_method_bind_get_method("Bone2D", "get_skeleton_rest");
	___mb.mb_set_default_length = gd::api->godot_method_bind_get_method("Bone2D", "set_default_length");
	___mb.mb_set_rest = gd::api->godot_method_bind_get_method("Bone2D", "set_rest");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Bone2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bone2d *bone2d::_new()
{
	return (bone2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Bone2D")());
}
void bone2d::apply_rest() {
	___godot_icall_void(___mb.mb_apply_rest, (const object *) this);
}

real_t bone2d::get_default_length() const {
	return ___godot_icall_float(___mb.mb_get_default_length, (const object *) this);
}

int64_t bone2d::get_index_in_skeleton() const {
	return ___godot_icall_int(___mb.mb_get_index_in_skeleton, (const object *) this);
}

transform2d bone2d::get_rest() const {
	return ___godot_icall_Transform2D(___mb.mb_get_rest, (const object *) this);
}

transform2d bone2d::get_skeleton_rest() const {
	return ___godot_icall_Transform2D(___mb.mb_get_skeleton_rest, (const object *) this);
}

void bone2d::set_default_length(const real_t default_length) {
	___godot_icall_void_float(___mb.mb_set_default_length, (const object *) this, default_length);
}

void bone2d::set_rest(const transform2d rest) {
	___godot_icall_void_Transform2D(___mb.mb_set_rest, (const object *) this, rest);
}

}