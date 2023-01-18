#include "thread.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"


namespace gd {


thread::___method_bindings thread::___mb = {};

void *thread::_detail_class_tag = nullptr;

void thread::___init_method_bindings() {
	___mb.mb_get_id = gd::api->godot_method_bind_get_method("_Thread", "get_id");
	___mb.mb_is_active = gd::api->godot_method_bind_get_method("_Thread", "is_active");
	___mb.mb_is_alive = gd::api->godot_method_bind_get_method("_Thread", "is_alive");
	___mb.mb_start = gd::api->godot_method_bind_get_method("_Thread", "start");
	___mb.mb_wait_to_finish = gd::api->godot_method_bind_get_method("_Thread", "wait_to_finish");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "_Thread");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

thread *thread::_new()
{
	return (thread *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"_Thread")());
}
string thread::get_id() const {
	return ___godot_icall_String(___mb.mb_get_id, (const object *) this);
}

bool thread::is_active() const {
	return ___godot_icall_bool(___mb.mb_is_active, (const object *) this);
}

bool thread::is_alive() const {
	return ___godot_icall_bool(___mb.mb_is_alive, (const object *) this);
}

error thread::start(const object *instance, const string method, const variant userdata, const int64_t priority) {
	return (error) ___godot_icall_int_Object_String_Variant_int(___mb.mb_start, (const object *) this, instance, method, userdata, priority);
}

variant thread::wait_to_finish() {
	return ___godot_icall_Variant(___mb.mb_wait_to_finish, (const object *) this);
}

}