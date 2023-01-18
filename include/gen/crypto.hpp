#ifndef GODOT_CPP_CRYPTO_HPP
#define GODOT_CPP_CRYPTO_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/ref.hpp>

#include "reference.hpp"
namespace gd {

class crypto_key;
class x509_certificate;

class crypto : public reference {
	struct ___method_bindings {
		godot_method_bind *mb_constant_time_compare;
		godot_method_bind *mb_decrypt;
		godot_method_bind *mb_encrypt;
		godot_method_bind *mb_generate_random_bytes;
		godot_method_bind *mb_generate_rsa;
		godot_method_bind *mb_generate_self_signed_certificate;
		godot_method_bind *mb_hmac_digest;
		godot_method_bind *mb_sign;
		godot_method_bind *mb_verify;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Crypto"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Crypto"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static crypto *_new();

	// methods
	bool constant_time_compare(const pool_byte_array trusted, const pool_byte_array received);
	pool_byte_array decrypt(const ref<crypto_key> key, const pool_byte_array ciphertext);
	pool_byte_array encrypt(const ref<crypto_key> key, const pool_byte_array plaintext);
	pool_byte_array generate_random_bytes(const int64_t size);
	ref<crypto_key> generate_rsa(const int64_t size);
	ref<x509_certificate> generate_self_signed_certificate(const ref<crypto_key> key, const string issuer_name = "CN=myserver,O=myorganisation,C=IT", const string not_before = "20140101000000", const string not_after = "20340101000000");
	pool_byte_array hmac_digest(const int64_t hash_type, const pool_byte_array key, const pool_byte_array msg);
	pool_byte_array sign(const int64_t hash_type, const pool_byte_array hash, const ref<crypto_key> key);
	bool verify(const int64_t hash_type, const pool_byte_array hash, const pool_byte_array signature, const ref<crypto_key> key);

};

}

#endif