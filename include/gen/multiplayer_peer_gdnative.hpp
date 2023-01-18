#ifndef GODOT_CPP_MULTIPLAYERPEERGDNATIVE_HPP
#define GODOT_CPP_MULTIPLAYERPEERGDNATIVE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "networked_multiplayer_peer.hpp"
namespace gd {


class multiplayer_peer_gdnative : public networked_multiplayer_peer {
	struct ___method_bindings {
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MultiplayerPeerGDNative"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MultiplayerPeerGDNative"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static multiplayer_peer_gdnative *_new();

	// methods

};

}

#endif