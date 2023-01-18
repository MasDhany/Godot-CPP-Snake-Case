#include "crypto.hpp"


#include <core/godot_global.hpp>
#include <core/core_types.hpp>
#include <core/ref.hpp>
#include <core/godot.hpp>

#include "__icalls.hpp"


#include "crypto_key.hpp"
#include "x509_certificate.hpp"


namespace gd {


crypto::___method_bindings crypto::___mb = {};

void *crypto::_detail_class_tag = nullptr;

void crypto::___init_method_bindings() {
	___mb.mb_constant_time_compare = gd::api->godot_method_bind_get_method("Crypto", "constant_time_compare");
	___mb.mb_decrypt = gd::api->godot_method_bind_get_method("Crypto", "decrypt");
	___mb.mb_encrypt = gd::api->godot_method_bind_get_method("Crypto", "encrypt");
	___mb.mb_generate_random_bytes = gd::api->godot_method_bind_get_method("Crypto", "generate_random_bytes");
	___mb.mb_generate_rsa = gd::api->godot_method_bind_get_method("Crypto", "generate_rsa");
	___mb.mb_generate_self_signed_certificate = gd::api->godot_method_bind_get_method("Crypto", "generate_self_signed_certificate");
	___mb.mb_hmac_digest = gd::api->godot_method_bind_get_method("Crypto", "hmac_digest");
	___mb.mb_sign = gd::api->godot_method_bind_get_method("Crypto", "sign");
	___mb.mb_verify = gd::api->godot_method_bind_get_method("Crypto", "verify");
	godot_string_name class_name;
	gd::api->godot_string_name_new_data(&class_name, "Crypto");
	_detail_class_tag = gd::core_1_2_api->godot_get_class_tag(&class_name);
	gd::api->godot_string_name_destroy(&class_name);
}

crypto *crypto::_new()
{
	return (crypto *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, gd::api->godot_get_class_constructor((char *)"Crypto")());
}
bool crypto::constant_time_compare(const pool_byte_array trusted, const pool_byte_array received) {
	return ___godot_icall_bool_PoolByteArray_PoolByteArray(___mb.mb_constant_time_compare, (const object *) this, trusted, received);
}

pool_byte_array crypto::decrypt(const ref<crypto_key> key, const pool_byte_array ciphertext) {
	return ___godot_icall_PoolByteArray_Object_PoolByteArray(___mb.mb_decrypt, (const object *) this, key.ptr(), ciphertext);
}

pool_byte_array crypto::encrypt(const ref<crypto_key> key, const pool_byte_array plaintext) {
	return ___godot_icall_PoolByteArray_Object_PoolByteArray(___mb.mb_encrypt, (const object *) this, key.ptr(), plaintext);
}

pool_byte_array crypto::generate_random_bytes(const int64_t size) {
	return ___godot_icall_PoolByteArray_int(___mb.mb_generate_random_bytes, (const object *) this, size);
}

ref<crypto_key> crypto::generate_rsa(const int64_t size) {
	return ref<crypto_key>::__internal_constructor(___godot_icall_Object_int(___mb.mb_generate_rsa, (const object *) this, size));
}

ref<x509_certificate> crypto::generate_self_signed_certificate(const ref<crypto_key> key, const string issuer_name, const string not_before, const string not_after) {
	return ref<x509_certificate>::__internal_constructor(___godot_icall_Object_Object_String_String_String(___mb.mb_generate_self_signed_certificate, (const object *) this, key.ptr(), issuer_name, not_before, not_after));
}

pool_byte_array crypto::hmac_digest(const int64_t hash_type, const pool_byte_array key, const pool_byte_array msg) {
	return ___godot_icall_PoolByteArray_int_PoolByteArray_PoolByteArray(___mb.mb_hmac_digest, (const object *) this, hash_type, key, msg);
}

pool_byte_array crypto::sign(const int64_t hash_type, const pool_byte_array hash, const ref<crypto_key> key) {
	return ___godot_icall_PoolByteArray_int_PoolByteArray_Object(___mb.mb_sign, (const object *) this, hash_type, hash, key.ptr());
}

bool crypto::verify(const int64_t hash_type, const pool_byte_array hash, const pool_byte_array signature, const ref<crypto_key> key) {
	return ___godot_icall_bool_int_PoolByteArray_PoolByteArray_Object(___mb.mb_verify, (const object *) this, hash_type, hash, signature, key.ptr());
}

}