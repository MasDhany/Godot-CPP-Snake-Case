#include "upnpdevice.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


upnpdevice::___method_bindings upnpdevice::___mb = {};

void *upnpdevice::_detail_class_tag = nullptr;

void upnpdevice::___init_method_bindings() {
	___mb.mb_add_port_mapping = gd::api->godot_method_bind_get_method("UPNPDevice", "add_port_mapping");
	___mb.mb_delete_port_mapping = gd::api->godot_method_bind_get_method("UPNPDevice", "delete_port_mapping");
	___mb.mb_get_description_url = gd::api->godot_method_bind_get_method("UPNPDevice", "get_description_url");
	___mb.mb_get_igd_control_url = gd::api->godot_method_bind_get_method("UPNPDevice", "get_igd_control_url");
	___mb.mb_get_igd_our_addr = gd::api->godot_method_bind_get_method("UPNPDevice", "get_igd_our_addr");
	___mb.mb_get_igd_service_type = gd::api->godot_method_bind_get_method("UPNPDevice", "get_igd_service_type");
	___mb.mb_get_igd_status = gd::api->godot_method_bind_get_method("UPNPDevice", "get_igd_status");
	___mb.mb_get_service_type = gd::api->godot_method_bind_get_method("UPNPDevice", "get_service_type");
	___mb.mb_is_valid_gateway = gd::api->godot_method_bind_get_method("UPNPDevice", "is_valid_gateway");
	___mb.mb_query_external_address = gd::api->godot_method_bind_get_method("UPNPDevice", "query_external_address");
	___mb.mb_set_description_url = gd::api->godot_method_bind_get_method("UPNPDevice", "set_description_url");
	___mb.mb_set_igd_control_url = gd::api->godot_method_bind_get_method("UPNPDevice", "set_igd_control_url");
	___mb.mb_set_igd_our_addr = gd::api->godot_method_bind_get_method("UPNPDevice", "set_igd_our_addr");
	___mb.mb_set_igd_service_type = gd::api->godot_method_bind_get_method("UPNPDevice", "set_igd_service_type");
	___mb.mb_set_igd_status = gd::api->godot_method_bind_get_method("UPNPDevice", "set_igd_status");
	___mb.mb_set_service_type = gd::api->godot_method_bind_get_method("UPNPDevice", "set_service_type");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "UPNPDevice");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

upnpdevice *upnpdevice::_new()
{
	return (upnpdevice *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"UPNPDevice")());
}
int64_t upnpdevice::add_port_mapping(const int64_t port, const int64_t port_internal, const string desc, const string proto, const int64_t duration) const {
	return ___godot_icall_int_int_int_String_String_int(___mb.mb_add_port_mapping, (const object *) this, port, port_internal, desc, proto, duration);
}

int64_t upnpdevice::delete_port_mapping(const int64_t port, const string proto) const {
	return ___godot_icall_int_int_String(___mb.mb_delete_port_mapping, (const object *) this, port, proto);
}

string upnpdevice::get_description_url() const {
	return ___godot_icall_String(___mb.mb_get_description_url, (const object *) this);
}

string upnpdevice::get_igd_control_url() const {
	return ___godot_icall_String(___mb.mb_get_igd_control_url, (const object *) this);
}

string upnpdevice::get_igd_our_addr() const {
	return ___godot_icall_String(___mb.mb_get_igd_our_addr, (const object *) this);
}

string upnpdevice::get_igd_service_type() const {
	return ___godot_icall_String(___mb.mb_get_igd_service_type, (const object *) this);
}

upnpdevice::IGDStatus upnpdevice::get_igd_status() const {
	return (upnpdevice::IGDStatus) ___godot_icall_int(___mb.mb_get_igd_status, (const object *) this);
}

string upnpdevice::get_service_type() const {
	return ___godot_icall_String(___mb.mb_get_service_type, (const object *) this);
}

bool upnpdevice::is_valid_gateway() const {
	return ___godot_icall_bool(___mb.mb_is_valid_gateway, (const object *) this);
}

string upnpdevice::query_external_address() const {
	return ___godot_icall_String(___mb.mb_query_external_address, (const object *) this);
}

void upnpdevice::set_description_url(const string url) {
	___godot_icall_void_String(___mb.mb_set_description_url, (const object *) this, url);
}

void upnpdevice::set_igd_control_url(const string url) {
	___godot_icall_void_String(___mb.mb_set_igd_control_url, (const object *) this, url);
}

void upnpdevice::set_igd_our_addr(const string addr) {
	___godot_icall_void_String(___mb.mb_set_igd_our_addr, (const object *) this, addr);
}

void upnpdevice::set_igd_service_type(const string type) {
	___godot_icall_void_String(___mb.mb_set_igd_service_type, (const object *) this, type);
}

void upnpdevice::set_igd_status(const int64_t status) {
	___godot_icall_void_int(___mb.mb_set_igd_status, (const object *) this, status);
}

void upnpdevice::set_service_type(const string type) {
	___godot_icall_void_String(___mb.mb_set_service_type, (const object *) this, type);
}

}