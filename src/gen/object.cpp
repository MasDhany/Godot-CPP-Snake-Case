#include "object.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "object.hpp"
#include "reference.hpp"


namespace gd {


object::___method_bindings object::___mb = {};

void *object::_detail_class_tag = nullptr;

void object::___init_method_bindings() {
	___mb.mb__get = gd::api->godot_method_bind_get_method("Object", "_get");
	___mb.mb__get_property_list = gd::api->godot_method_bind_get_method("Object", "_get_property_list");
	___mb.mb__init = gd::api->godot_method_bind_get_method("Object", "_init");
	___mb.mb__notification = gd::api->godot_method_bind_get_method("Object", "_notification");
	___mb.mb__set = gd::api->godot_method_bind_get_method("Object", "_set");
	___mb.mb__to_string = gd::api->godot_method_bind_get_method("Object", "_to_string");
	___mb.mb_add_user_signal = gd::api->godot_method_bind_get_method("Object", "add_user_signal");
	___mb.mb_call = gd::api->godot_method_bind_get_method("Object", "call");
	___mb.mb_call_deferred = gd::api->godot_method_bind_get_method("Object", "call_deferred");
	___mb.mb_callv = gd::api->godot_method_bind_get_method("Object", "callv");
	___mb.mb_can_translate_messages = gd::api->godot_method_bind_get_method("Object", "can_translate_messages");
	___mb.mb_connect = gd::api->godot_method_bind_get_method("Object", "connect");
	___mb.mb_disconnect = gd::api->godot_method_bind_get_method("Object", "disconnect");
	___mb.mb_emit_signal = gd::api->godot_method_bind_get_method("Object", "emit_signal");
	___mb.mb_free = gd::api->godot_method_bind_get_method("Object", "free");
	___mb.mb_get = gd::api->godot_method_bind_get_method("Object", "get");
	___mb.mb_get_class = gd::api->godot_method_bind_get_method("Object", "get_class");
	___mb.mb_get_incoming_connections = gd::api->godot_method_bind_get_method("Object", "get_incoming_connections");
	___mb.mb_get_indexed = gd::api->godot_method_bind_get_method("Object", "get_indexed");
	___mb.mb_get_instance_id = gd::api->godot_method_bind_get_method("Object", "get_instance_id");
	___mb.mb_get_meta = gd::api->godot_method_bind_get_method("Object", "get_meta");
	___mb.mb_get_meta_list = gd::api->godot_method_bind_get_method("Object", "get_meta_list");
	___mb.mb_get_method_list = gd::api->godot_method_bind_get_method("Object", "get_method_list");
	___mb.mb_get_property_list = gd::api->godot_method_bind_get_method("Object", "get_property_list");
	___mb.mb_get_script = gd::api->godot_method_bind_get_method("Object", "get_script");
	___mb.mb_get_signal_connection_list = gd::api->godot_method_bind_get_method("Object", "get_signal_connection_list");
	___mb.mb_get_signal_list = gd::api->godot_method_bind_get_method("Object", "get_signal_list");
	___mb.mb_has_meta = gd::api->godot_method_bind_get_method("Object", "has_meta");
	___mb.mb_has_method = gd::api->godot_method_bind_get_method("Object", "has_method");
	___mb.mb_has_signal = gd::api->godot_method_bind_get_method("Object", "has_signal");
	___mb.mb_has_user_signal = gd::api->godot_method_bind_get_method("Object", "has_user_signal");
	___mb.mb_is_blocking_signals = gd::api->godot_method_bind_get_method("Object", "is_blocking_signals");
	___mb.mb_is_class = gd::api->godot_method_bind_get_method("Object", "is_class");
	___mb.mb_is_connected = gd::api->godot_method_bind_get_method("Object", "is_connected");
	___mb.mb_is_queued_for_deletion = gd::api->godot_method_bind_get_method("Object", "is_queued_for_deletion");
	___mb.mb_notification = gd::api->godot_method_bind_get_method("Object", "notification");
	___mb.mb_property_list_changed_notify = gd::api->godot_method_bind_get_method("Object", "property_list_changed_notify");
	___mb.mb_remove_meta = gd::api->godot_method_bind_get_method("Object", "remove_meta");
	___mb.mb_set = gd::api->godot_method_bind_get_method("Object", "set");
	___mb.mb_set_block_signals = gd::api->godot_method_bind_get_method("Object", "set_block_signals");
	___mb.mb_set_deferred = gd::api->godot_method_bind_get_method("Object", "set_deferred");
	___mb.mb_set_indexed = gd::api->godot_method_bind_get_method("Object", "set_indexed");
	___mb.mb_set_message_translation = gd::api->godot_method_bind_get_method("Object", "set_message_translation");
	___mb.mb_set_meta = gd::api->godot_method_bind_get_method("Object", "set_meta");
	___mb.mb_set_script = gd::api->godot_method_bind_get_method("Object", "set_script");
	___mb.mb_to_string = gd::api->godot_method_bind_get_method("Object", "to_string");
	___mb.mb_tr = gd::api->godot_method_bind_get_method("Object", "tr");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Object");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

object *object::_new()
{
	return (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Object")());
}
variant object::_get(const string property) {
	return ___godot_icall_Variant_String(___mb.mb__get, (const object *) this, property);
}

array object::_get_property_list() {
	return ___godot_icall_Array(___mb.mb__get_property_list, (const object *) this);
}

void object::_init() {
	___godot_icall_void(___mb.mb__init, (const object *) this);
}

void object::_notification(const int64_t what) {
	___godot_icall_void_int(___mb.mb__notification, (const object *) this, what);
}

bool object::_set(const string property, const variant value) {
	return ___godot_icall_bool_String_Variant(___mb.mb__set, (const object *) this, property, value);
}

string object::_to_string() {
	return ___godot_icall_String(___mb.mb__to_string, (const object *) this);
}

void object::add_user_signal(const string signal, const array arguments) {
	___godot_icall_void_String_Array(___mb.mb_add_user_signal, (const object *) this, signal, arguments);
}

variant object::call(const string method, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

void object::call_deferred(const string method, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = method;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_call_deferred, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

}

variant object::callv(const string method, const array arg_array) {
	return ___godot_icall_Variant_String_Array(___mb.mb_callv, (const object *) this, method, arg_array);
}

bool object::can_translate_messages() const {
	return ___godot_icall_bool(___mb.mb_can_translate_messages, (const object *) this);
}

error object::connect(const string signal, const object *target, const string method, const array binds, const int64_t flags) {
	return (error) ___godot_icall_int_String_Object_String_Array_int(___mb.mb_connect, (const object *) this, signal, target, method, binds, flags);
}

void object::disconnect(const string signal, const object *target, const string method) {
	___godot_icall_void_String_Object_String(___mb.mb_disconnect, (const object *) this, signal, target, method);
}

void object::emit_signal(const string signal, const array& __var_args) {
	variant __given_args[1];
	gd::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = signal;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((array &) __var_args)[i];
	}

	variant __result;
	*(godot_variant *) &__result = gd::api->godot_method_bind_call(___mb.mb_emit_signal, ((const object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	gd::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

}

void object::free() {
	gd::api->godot_object_destroy(_owner);
}

variant object::get(const string property) const {
	return ___godot_icall_Variant_String(___mb.mb_get, (const object *) this, property);
}

string object::get_class() const {
	return ___godot_icall_String(___mb.mb_get_class, (const object *) this);
}

array object::get_incoming_connections() const {
	return ___godot_icall_Array(___mb.mb_get_incoming_connections, (const object *) this);
}

variant object::get_indexed(const node_path property) const {
	return ___godot_icall_Variant_NodePath(___mb.mb_get_indexed, (const object *) this, property);
}

int64_t object::get_instance_id() const {
	return ___godot_icall_int(___mb.mb_get_instance_id, (const object *) this);
}

variant object::get_meta(const string name, const variant _default) const {
	return ___godot_icall_Variant_String_Variant(___mb.mb_get_meta, (const object *) this, name, _default);
}

pool_string_array object::get_meta_list() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_meta_list, (const object *) this);
}

array object::get_method_list() const {
	return ___godot_icall_Array(___mb.mb_get_method_list, (const object *) this);
}

array object::get_property_list() const {
	return ___godot_icall_Array(___mb.mb_get_property_list, (const object *) this);
}

reference *object::get_script() const {
	return (reference *) ___godot_icall_Object(___mb.mb_get_script, (const object *) this);
}

array object::get_signal_connection_list(const string signal) const {
	return ___godot_icall_Array_String(___mb.mb_get_signal_connection_list, (const object *) this, signal);
}

array object::get_signal_list() const {
	return ___godot_icall_Array(___mb.mb_get_signal_list, (const object *) this);
}

bool object::has_meta(const string name) const {
	return ___godot_icall_bool_String(___mb.mb_has_meta, (const object *) this, name);
}

bool object::has_method(const string method) const {
	return ___godot_icall_bool_String(___mb.mb_has_method, (const object *) this, method);
}

bool object::has_signal(const string signal) const {
	return ___godot_icall_bool_String(___mb.mb_has_signal, (const object *) this, signal);
}

bool object::has_user_signal(const string signal) const {
	return ___godot_icall_bool_String(___mb.mb_has_user_signal, (const object *) this, signal);
}

bool object::is_blocking_signals() const {
	return ___godot_icall_bool(___mb.mb_is_blocking_signals, (const object *) this);
}

bool object::is_class(const string _class) const {
	return ___godot_icall_bool_String(___mb.mb_is_class, (const object *) this, _class);
}

bool object::is_connected(const string signal, const object *target, const string method) const {
	return ___godot_icall_bool_String_Object_String(___mb.mb_is_connected, (const object *) this, signal, target, method);
}

bool object::is_queued_for_deletion() const {
	return ___godot_icall_bool(___mb.mb_is_queued_for_deletion, (const object *) this);
}

void object::notification(const int64_t what, const bool reversed) {
	___godot_icall_void_int_bool(___mb.mb_notification, (const object *) this, what, reversed);
}

void object::property_list_changed_notify() {
	___godot_icall_void(___mb.mb_property_list_changed_notify, (const object *) this);
}

void object::remove_meta(const string name) {
	___godot_icall_void_String(___mb.mb_remove_meta, (const object *) this, name);
}

void object::set(const string property, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set, (const object *) this, property, value);
}

void object::set_block_signals(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_block_signals, (const object *) this, enable);
}

void object::set_deferred(const string property, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_deferred, (const object *) this, property, value);
}

void object::set_indexed(const node_path property, const variant value) {
	___godot_icall_void_NodePath_Variant(___mb.mb_set_indexed, (const object *) this, property, value);
}

void object::set_message_translation(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_message_translation, (const object *) this, enable);
}

void object::set_meta(const string name, const variant value) {
	___godot_icall_void_String_Variant(___mb.mb_set_meta, (const object *) this, name, value);
}

void object::set_script(const reference *script_) {
	___godot_icall_void_Object(___mb.mb_set_script, (const object *) this, script_);
}

string object::to_string() {
	return ___godot_icall_String(___mb.mb_to_string, (const object *) this);
}

string object::tr(const string message) const {
	return ___godot_icall_String_String(___mb.mb_tr, (const object *) this, message);
}

}