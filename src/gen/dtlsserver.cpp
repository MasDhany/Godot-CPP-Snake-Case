#include "dtlsserver.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "crypto_key.hpp"
#include "packet_peer_dtls.hpp"
#include "packet_peer_udp.hpp"
#include "x509_certificate.hpp"


namespace gd {


dtlsserver::___method_bindings dtlsserver::___mb = {};

void *dtlsserver::_detail_class_tag = nullptr;

void dtlsserver::___init_method_bindings() {
	___mb.mb_setup = gd::api->godot_method_bind_get_method("DTLSServer", "setup");
	___mb.mb_take_connection = gd::api->godot_method_bind_get_method("DTLSServer", "take_connection");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "DTLSServer");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

dtlsserver *dtlsserver::_new()
{
	return (dtlsserver *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"DTLSServer")());
}
error dtlsserver::setup(const ref<crypto_key> key, const ref<x509_certificate> certificate, const ref<x509_certificate> chain) {
	return (error) ___godot_icall_int_Object_Object_Object(___mb.mb_setup, (const object *) this, key.ptr(), certificate.ptr(), chain.ptr());
}

ref<packet_peer_dtls> dtlsserver::take_connection(const ref<packet_peer_udp> udp_peer) {
	return ref<packet_peer_dtls>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_take_connection, (const object *) this, udp_peer.ptr()));
}

}