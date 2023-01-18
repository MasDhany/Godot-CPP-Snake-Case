#include "skeleton2d.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "bone2d.hpp"


namespace gd {


skeleton2d::___method_bindings skeleton2d::___mb = {};

void *skeleton2d::_detail_class_tag = nullptr;

void skeleton2d::___init_method_bindings() {
	___mb.mb__update_bone_setup = gd::api->godot_method_bind_get_method("Skeleton2D", "_update_bone_setup");
	___mb.mb__update_transform = gd::api->godot_method_bind_get_method("Skeleton2D", "_update_transform");
	___mb.mb_get_bone = gd::api->godot_method_bind_get_method("Skeleton2D", "get_bone");
	___mb.mb_get_bone_count = gd::api->godot_method_bind_get_method("Skeleton2D", "get_bone_count");
	___mb.mb_get_skeleton = gd::api->godot_method_bind_get_method("Skeleton2D", "get_skeleton");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Skeleton2D");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

skeleton2d *skeleton2d::_new()
{
	return (skeleton2d *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Skeleton2D")());
}
void skeleton2d::_update_bone_setup() {
	___godot_icall_void(___mb.mb__update_bone_setup, (const object *) this);
}

void skeleton2d::_update_transform() {
	___godot_icall_void(___mb.mb__update_transform, (const object *) this);
}

bone2d *skeleton2d::get_bone(const int64_t idx) {
	return (bone2d *) ___godot_icall_Object_int(___mb.mb_get_bone, (const object *) this, idx);
}

int64_t skeleton2d::get_bone_count() const {
	return ___godot_icall_int(___mb.mb_get_bone_count, (const object *) this);
}

rid skeleton2d::get_skeleton() const {
	return ___godot_icall_RID(___mb.mb_get_skeleton, (const object *) this);
}

}