set(SOURCE_ROOT tinycrypto/source/src)
set(SOURCE_INC ${SOURCE_ROOT})

set(TinyCrypto_Header
        ${SOURCE_ROOT}/common/tiny_crypto_api.h
        ${SOURCE_ROOT}/base64/tiny_base64.h
        ${SOURCE_ROOT}/bignum/polarssl/bignum.h
        ${SOURCE_ROOT}/bignum/polarssl/bn_mul.h
        ${SOURCE_ROOT}/bignum/polarssl/polarssl_check_config.h
        ${SOURCE_ROOT}/bignum/polarssl/polarssl_config.h
        ${SOURCE_ROOT}/bignum/polarssl/polarssl_platform.h
        ${SOURCE_ROOT}/srp/srp_define.h
        ${SOURCE_ROOT}/srp/srp_both.h
        ${SOURCE_ROOT}/srp/srp_NG3072.h
        ${SOURCE_ROOT}/srp/SrpServer.h
        ${SOURCE_ROOT}/srp/SrpClient.h
        ${SOURCE_ROOT}/sha/sha1.h
        ${SOURCE_ROOT}/sha/sha512.h
        ${SOURCE_ROOT}/hmac/hmac.h
        ${SOURCE_ROOT}/hkdf/HKDF.h
        ${SOURCE_ROOT}/chacha20/ChaCha20.h
        ${SOURCE_ROOT}/poly1305/Poly1305.h
        ${SOURCE_ROOT}/chacha20poly1305/tiny_chacha20poly1305.h
        ${SOURCE_ROOT}/x25519/tiny_curve25519.h
        ${SOURCE_ROOT}/x25519/tiny_ed25519_key_exchange.h
        ${SOURCE_ROOT}/x25519/tiny_x25519_key_convert.h
        ${SOURCE_ROOT}/x25519/tiny_x25519_fe.h
        ${SOURCE_ROOT}/x25519/tiny_x25519_ge.h
        ${SOURCE_ROOT}/x25519/tiny_x25519_sc.h
        ${SOURCE_ROOT}/ed25519/ed25519.h
        ${SOURCE_ROOT}/ed25519/tiny_ed25519.h
        ${SOURCE_ROOT}/secret/SecretKey.h
        )

set(TinyCrypto_Source
        ${SOURCE_ROOT}/base64/tiny_base64.c
        ${SOURCE_ROOT}/bignum/polarssl/bignum.c
        ${SOURCE_ROOT}/bignum/polarssl/polarssl_platform.c
        ${SOURCE_ROOT}/srp/srp_both.c
        ${SOURCE_ROOT}/srp/srp_NG3072.c
        ${SOURCE_ROOT}/srp/SrpServer.c
        ${SOURCE_ROOT}/srp/SrpClient.c
        ${SOURCE_ROOT}/sha/sha1.c
        ${SOURCE_ROOT}/sha/sha512.c
        ${SOURCE_ROOT}/hmac/hmac.c
        ${SOURCE_ROOT}/hkdf/HKDF.c
        ${SOURCE_ROOT}/chacha20/ChaCha20.c
        ${SOURCE_ROOT}/poly1305/Poly1305.c
        ${SOURCE_ROOT}/chacha20poly1305/tiny_chacha20poly1305.c
        ${SOURCE_ROOT}/x25519/tiny_curve25519.c
        ${SOURCE_ROOT}/x25519/tiny_ed25519_key_exchange.c
        ${SOURCE_ROOT}/x25519/tiny_x25519_key_convert.c
        ${SOURCE_ROOT}/x25519/tiny_x25519_fe.c
        ${SOURCE_ROOT}/x25519/tiny_x25519_ge.c
        ${SOURCE_ROOT}/x25519/tiny_x25519_sc.c
        ${SOURCE_ROOT}/ed25519/ed25519.c
        ${SOURCE_ROOT}/ed25519/tiny_ed25519.c
        )

set(COMPONENT_ADD_INCLUDEDIRS ${SOURCE_INC})
set(COMPONENT_SRCS
	${TinyCrypto_Header}
	${TinyCrypto_Source}
        )

set(COMPONENT_REQUIRES tiny)

register_component()

component_compile_definitions(ESP32)
component_compile_definitions(LWIP_SOCKET)
component_compile_definitions(ICACHE_FLASH)
#component_compile_definitions(TINY_DEBUG)

component_compile_options(-Wno-multichar)
component_compile_options(-Wno-pointer-to-int-cast)
component_compile_options(-fPIC)
component_compile_options(-std=gnu99)
