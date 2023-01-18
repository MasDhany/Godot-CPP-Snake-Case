#ifndef GODOT_CPP_IP_HPP
#define GODOT_CPP_IP_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>
#include "ip.hpp"

#include "object.hpp"
namespace gd {


class ip : public object {
	static ip *_singleton;

	ip();

	struct ___method_bindings {
		godot_method_bind *mb_clear_cache;
		godot_method_bind *mb_erase_resolve_item;
		godot_method_bind *mb_get_local_addresses;
		godot_method_bind *mb_get_local_interfaces;
		godot_method_bind *mb_get_resolve_item_address;
		godot_method_bind *mb_get_resolve_item_addresses;
		godot_method_bind *mb_get_resolve_item_status;
		godot_method_bind *mb_resolve_hostname;
		godot_method_bind *mb_resolve_hostname_addresses;
		godot_method_bind *mb_resolve_hostname_queue_item;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline ip *get_singleton()
	{
		if (!ip::_singleton) {
			ip::_singleton = new ip;
		}
		return ip::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "IP"; }
	static inline const char *___get_godot_class_name() { return (const char *) "IP"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ResolverStatus {
		RESOLVER_STATUS_NONE = 0,
		RESOLVER_STATUS_WAITING = 1,
		RESOLVER_STATUS_DONE = 2,
		RESOLVER_STATUS_ERROR = 3,
	};
	enum Type {
		TYPE_NONE = 0,
		TYPE_IPV4 = 1,
		TYPE_IPV6 = 2,
		TYPE_ANY = 3,
	};

	// constants
	const static int RESOLVER_INVALID_ID = -1;
	const static int RESOLVER_MAX_QUERIES = 256;

	// methods
	void clear_cache(const string hostname = "");
	void erase_resolve_item(const int64_t id);
	array get_local_addresses() const;
	array get_local_interfaces() const;
	string get_resolve_item_address(const int64_t id) const;
	array get_resolve_item_addresses(const int64_t id) const;
	ip::ResolverStatus get_resolve_item_status(const int64_t id) const;
	string resolve_hostname(const string host, const int64_t ip_type = 3);
	array resolve_hostname_addresses(const string host, const int64_t ip_type = 3);
	int64_t resolve_hostname_queue_item(const string host, const int64_t ip_type = 3);

};

}

#endif