#include "room_group.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


room_group::___method_bindings room_group::___mb = {};

void *room_group::_detail_class_tag = nullptr;

void room_group::___init_method_bindings() {
	___mb.mb_get_roomgroup_priority = gd::api->godot_method_bind_get_method("RoomGroup", "get_roomgroup_priority");
	___mb.mb_set_roomgroup_priority = gd::api->godot_method_bind_get_method("RoomGroup", "set_roomgroup_priority");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "RoomGroup");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

room_group *room_group::_new()
{
	return (room_group *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"RoomGroup")());
}
int64_t room_group::get_roomgroup_priority() const {
	return ___godot_icall_int(___mb.mb_get_roomgroup_priority, (const object *) this);
}

void room_group::set_roomgroup_priority(const int64_t p_priority) {
	___godot_icall_void_int(___mb.mb_set_roomgroup_priority, (const object *) this, p_priority);
}

}