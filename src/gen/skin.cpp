#include "skin.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


skin::___method_bindings skin::___mb = {};

void *skin::_detail_class_tag = nullptr;

void skin::___init_method_bindings() {
	___mb.mb_add_bind = gd::api->godot_method_bind_get_method("Skin", "add_bind");
	___mb.mb_clear_binds = gd::api->godot_method_bind_get_method("Skin", "clear_binds");
	___mb.mb_get_bind_bone = gd::api->godot_method_bind_get_method("Skin", "get_bind_bone");
	___mb.mb_get_bind_count = gd::api->godot_method_bind_get_method("Skin", "get_bind_count");
	___mb.mb_get_bind_name = gd::api->godot_method_bind_get_method("Skin", "get_bind_name");
	___mb.mb_get_bind_pose = gd::api->godot_method_bind_get_method("Skin", "get_bind_pose");
	___mb.mb_set_bind_bone = gd::api->godot_method_bind_get_method("Skin", "set_bind_bone");
	___mb.mb_set_bind_count = gd::api->godot_method_bind_get_method("Skin", "set_bind_count");
	___mb.mb_set_bind_name = gd::api->godot_method_bind_get_method("Skin", "set_bind_name");
	___mb.mb_set_bind_pose = gd::api->godot_method_bind_get_method("Skin", "set_bind_pose");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Skin");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

skin *skin::_new()
{
	return (skin *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Skin")());
}
void skin::add_bind(const int64_t bone, const transform pose) {
	___godot_icall_void_int_Transform(___mb.mb_add_bind, (const object *) this, bone, pose);
}

void skin::clear_binds() {
	___godot_icall_void(___mb.mb_clear_binds, (const object *) this);
}

int64_t skin::get_bind_bone(const int64_t bind_index) const {
	return ___godot_icall_int_int(___mb.mb_get_bind_bone, (const object *) this, bind_index);
}

int64_t skin::get_bind_count() const {
	return ___godot_icall_int(___mb.mb_get_bind_count, (const object *) this);
}

string skin::get_bind_name(const int64_t bind_index) const {
	return ___godot_icall_String_int(___mb.mb_get_bind_name, (const object *) this, bind_index);
}

transform skin::get_bind_pose(const int64_t bind_index) const {
	return ___godot_icall_Transform_int(___mb.mb_get_bind_pose, (const object *) this, bind_index);
}

void skin::set_bind_bone(const int64_t bind_index, const int64_t bone) {
	___godot_icall_void_int_int(___mb.mb_set_bind_bone, (const object *) this, bind_index, bone);
}

void skin::set_bind_count(const int64_t bind_count) {
	___godot_icall_void_int(___mb.mb_set_bind_count, (const object *) this, bind_count);
}

void skin::set_bind_name(const int64_t bind_index, const string name) {
	___godot_icall_void_int_String(___mb.mb_set_bind_name, (const object *) this, bind_index, name);
}

void skin::set_bind_pose(const int64_t bind_index, const transform pose) {
	___godot_icall_void_int_Transform(___mb.mb_set_bind_pose, (const object *) this, bind_index, pose);
}

}