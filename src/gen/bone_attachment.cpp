#include "bone_attachment.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


bone_attachment::___method_bindings bone_attachment::___mb = {};

void *bone_attachment::_detail_class_tag = nullptr;

void bone_attachment::___init_method_bindings() {
	___mb.mb_get_bone_name = gd::api->godot_method_bind_get_method("BoneAttachment", "get_bone_name");
	___mb.mb_set_bone_name = gd::api->godot_method_bind_get_method("BoneAttachment", "set_bone_name");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "BoneAttachment");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bone_attachment *bone_attachment::_new()
{
	return (bone_attachment *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"BoneAttachment")());
}
string bone_attachment::get_bone_name() const {
	return ___godot_icall_String(___mb.mb_get_bone_name, (const object *) this);
}

void bone_attachment::set_bone_name(const string bone_name) {
	___godot_icall_void_String(___mb.mb_set_bone_name, (const object *) this, bone_name);
}

}