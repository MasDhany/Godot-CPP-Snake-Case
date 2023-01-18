#include "cull_instance.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


cull_instance::___method_bindings cull_instance::___mb = {};

void *cull_instance::_detail_class_tag = nullptr;

void cull_instance::___init_method_bindings() {
	___mb.mb_get_allow_merging = gd::api->godot_method_bind_get_method("CullInstance", "get_allow_merging");
	___mb.mb_get_include_in_bound = gd::api->godot_method_bind_get_method("CullInstance", "get_include_in_bound");
	___mb.mb_get_portal_autoplace_priority = gd::api->godot_method_bind_get_method("CullInstance", "get_portal_autoplace_priority");
	___mb.mb_get_portal_mode = gd::api->godot_method_bind_get_method("CullInstance", "get_portal_mode");
	___mb.mb_set_allow_merging = gd::api->godot_method_bind_get_method("CullInstance", "set_allow_merging");
	___mb.mb_set_include_in_bound = gd::api->godot_method_bind_get_method("CullInstance", "set_include_in_bound");
	___mb.mb_set_portal_autoplace_priority = gd::api->godot_method_bind_get_method("CullInstance", "set_portal_autoplace_priority");
	___mb.mb_set_portal_mode = gd::api->godot_method_bind_get_method("CullInstance", "set_portal_mode");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "CullInstance");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

bool cull_instance::get_allow_merging() const {
	return ___godot_icall_bool(___mb.mb_get_allow_merging, (const object *) this);
}

bool cull_instance::get_include_in_bound() const {
	return ___godot_icall_bool(___mb.mb_get_include_in_bound, (const object *) this);
}

int64_t cull_instance::get_portal_autoplace_priority() const {
	return ___godot_icall_int(___mb.mb_get_portal_autoplace_priority, (const object *) this);
}

cull_instance::PortalMode cull_instance::get_portal_mode() const {
	return (cull_instance::PortalMode) ___godot_icall_int(___mb.mb_get_portal_mode, (const object *) this);
}

void cull_instance::set_allow_merging(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_allow_merging, (const object *) this, enabled);
}

void cull_instance::set_include_in_bound(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_include_in_bound, (const object *) this, enabled);
}

void cull_instance::set_portal_autoplace_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_portal_autoplace_priority, (const object *) this, priority);
}

void cull_instance::set_portal_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_portal_mode, (const object *) this, mode);
}

}