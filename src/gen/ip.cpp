#include "ip.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"




namespace gd {


ip *ip::_singleton = NULL;


ip::ip() {
	_owner = gd::api->godot_global_get_singleton((char *) "IP");
}


ip::___method_bindings ip::___mb = {};

void *ip::_detail_class_tag = nullptr;

void ip::___init_method_bindings() {
	___mb.mb_clear_cache = gd::api->godot_method_bind_get_method("IP", "clear_cache");
	___mb.mb_erase_resolve_item = gd::api->godot_method_bind_get_method("IP", "erase_resolve_item");
	___mb.mb_get_local_addresses = gd::api->godot_method_bind_get_method("IP", "get_local_addresses");
	___mb.mb_get_local_interfaces = gd::api->godot_method_bind_get_method("IP", "get_local_interfaces");
	___mb.mb_get_resolve_item_address = gd::api->godot_method_bind_get_method("IP", "get_resolve_item_address");
	___mb.mb_get_resolve_item_addresses = gd::api->godot_method_bind_get_method("IP", "get_resolve_item_addresses");
	___mb.mb_get_resolve_item_status = gd::api->godot_method_bind_get_method("IP", "get_resolve_item_status");
	___mb.mb_resolve_hostname = gd::api->godot_method_bind_get_method("IP", "resolve_hostname");
	___mb.mb_resolve_hostname_addresses = gd::api->godot_method_bind_get_method("IP", "resolve_hostname_addresses");
	___mb.mb_resolve_hostname_queue_item = gd::api->godot_method_bind_get_method("IP", "resolve_hostname_queue_item");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "IP");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

void ip::clear_cache(const string hostname) {
	___godot_icall_void_String(___mb.mb_clear_cache, (const object *) this, hostname);
}

void ip::erase_resolve_item(const int64_t id) {
	___godot_icall_void_int(___mb.mb_erase_resolve_item, (const object *) this, id);
}

array ip::get_local_addresses() const {
	return ___godot_icall_Array(___mb.mb_get_local_addresses, (const object *) this);
}

array ip::get_local_interfaces() const {
	return ___godot_icall_Array(___mb.mb_get_local_interfaces, (const object *) this);
}

string ip::get_resolve_item_address(const int64_t id) const {
	return ___godot_icall_String_int(___mb.mb_get_resolve_item_address, (const object *) this, id);
}

array ip::get_resolve_item_addresses(const int64_t id) const {
	return ___godot_icall_Array_int(___mb.mb_get_resolve_item_addresses, (const object *) this, id);
}

ip::ResolverStatus ip::get_resolve_item_status(const int64_t id) const {
	return (ip::ResolverStatus) ___godot_icall_int_int(___mb.mb_get_resolve_item_status, (const object *) this, id);
}

string ip::resolve_hostname(const string host, const int64_t ip_type) {
	return ___godot_icall_String_String_int(___mb.mb_resolve_hostname, (const object *) this, host, ip_type);
}

array ip::resolve_hostname_addresses(const string host, const int64_t ip_type) {
	return ___godot_icall_Array_String_int(___mb.mb_resolve_hostname_addresses, (const object *) this, host, ip_type);
}

int64_t ip::resolve_hostname_queue_item(const string host, const int64_t ip_type) {
	return ___godot_icall_int_String_int(___mb.mb_resolve_hostname_queue_item, (const object *) this, host, ip_type);
}

}