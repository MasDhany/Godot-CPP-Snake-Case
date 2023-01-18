#include "upnp.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "upnpdevice.hpp"


namespace gd {


upnp::___method_bindings upnp::___mb = {};

void *upnp::_detail_class_tag = nullptr;

void upnp::___init_method_bindings() {
	___mb.mb_add_device = gd::api->godot_method_bind_get_method("UPNP", "add_device");
	___mb.mb_add_port_mapping = gd::api->godot_method_bind_get_method("UPNP", "add_port_mapping");
	___mb.mb_clear_devices = gd::api->godot_method_bind_get_method("UPNP", "clear_devices");
	___mb.mb_delete_port_mapping = gd::api->godot_method_bind_get_method("UPNP", "delete_port_mapping");
	___mb.mb_discover = gd::api->godot_method_bind_get_method("UPNP", "discover");
	___mb.mb_get_device = gd::api->godot_method_bind_get_method("UPNP", "get_device");
	___mb.mb_get_device_count = gd::api->godot_method_bind_get_method("UPNP", "get_device_count");
	___mb.mb_get_discover_local_port = gd::api->godot_method_bind_get_method("UPNP", "get_discover_local_port");
	___mb.mb_get_discover_multicast_if = gd::api->godot_method_bind_get_method("UPNP", "get_discover_multicast_if");
	___mb.mb_get_gateway = gd::api->godot_method_bind_get_method("UPNP", "get_gateway");
	___mb.mb_is_discover_ipv6 = gd::api->godot_method_bind_get_method("UPNP", "is_discover_ipv6");
	___mb.mb_query_external_address = gd::api->godot_method_bind_get_method("UPNP", "query_external_address");
	___mb.mb_remove_device = gd::api->godot_method_bind_get_method("UPNP", "remove_device");
	___mb.mb_set_device = gd::api->godot_method_bind_get_method("UPNP", "set_device");
	___mb.mb_set_discover_ipv6 = gd::api->godot_method_bind_get_method("UPNP", "set_discover_ipv6");
	___mb.mb_set_discover_local_port = gd::api->godot_method_bind_get_method("UPNP", "set_discover_local_port");
	___mb.mb_set_discover_multicast_if = gd::api->godot_method_bind_get_method("UPNP", "set_discover_multicast_if");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "UPNP");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

upnp *upnp::_new()
{
	return (upnp *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"UPNP")());
}
void upnp::add_device(const ref<upnpdevice> device) {
	___godot_icall_void_Object(___mb.mb_add_device, (const object *) this, device.ptr());
}

int64_t upnp::add_port_mapping(const int64_t port, const int64_t port_internal, const string desc, const string proto, const int64_t duration) const {
	return ___godot_icall_int_int_int_String_String_int(___mb.mb_add_port_mapping, (const object *) this, port, port_internal, desc, proto, duration);
}

void upnp::clear_devices() {
	___godot_icall_void(___mb.mb_clear_devices, (const object *) this);
}

int64_t upnp::delete_port_mapping(const int64_t port, const string proto) const {
	return ___godot_icall_int_int_String(___mb.mb_delete_port_mapping, (const object *) this, port, proto);
}

int64_t upnp::discover(const int64_t timeout, const int64_t ttl, const string device_filter) {
	return ___godot_icall_int_int_int_String(___mb.mb_discover, (const object *) this, timeout, ttl, device_filter);
}

ref<upnpdevice> upnp::get_device(const int64_t index) const {
	return ref<upnpdevice>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_device, (const object *) this, index));
}

int64_t upnp::get_device_count() const {
	return ___godot_icall_int(___mb.mb_get_device_count, (const object *) this);
}

int64_t upnp::get_discover_local_port() const {
	return ___godot_icall_int(___mb.mb_get_discover_local_port, (const object *) this);
}

string upnp::get_discover_multicast_if() const {
	return ___godot_icall_String(___mb.mb_get_discover_multicast_if, (const object *) this);
}

ref<upnpdevice> upnp::get_gateway() const {
	return ref<upnpdevice>::__internal_constructor(___godot_icall_Object(___mb.mb_get_gateway, (const object *) this));
}

bool upnp::is_discover_ipv6() const {
	return ___godot_icall_bool(___mb.mb_is_discover_ipv6, (const object *) this);
}

string upnp::query_external_address() const {
	return ___godot_icall_String(___mb.mb_query_external_address, (const object *) this);
}

void upnp::remove_device(const int64_t index) {
	___godot_icall_void_int(___mb.mb_remove_device, (const object *) this, index);
}

void upnp::set_device(const int64_t index, const ref<upnpdevice> device) {
	___godot_icall_void_int_Object(___mb.mb_set_device, (const object *) this, index, device.ptr());
}

void upnp::set_discover_ipv6(const bool ipv6) {
	___godot_icall_void_bool(___mb.mb_set_discover_ipv6, (const object *) this, ipv6);
}

void upnp::set_discover_local_port(const int64_t port) {
	___godot_icall_void_int(___mb.mb_set_discover_local_port, (const object *) this, port);
}

void upnp::set_discover_multicast_if(const string m_if) {
	___godot_icall_void_String(___mb.mb_set_discover_multicast_if, (const object *) this, m_if);
}

}