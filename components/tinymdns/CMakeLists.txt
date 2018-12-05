set(SOURCE_ROOT tinymdns/source/src)
set(SOURCE_INC ${SOURCE_ROOT}/TinyMDNS)

SET(Mdns_Header
        ${SOURCE_ROOT}/TinyMDNS/mdns_api.h
        ${SOURCE_ROOT}/TinyMDNS/MdnsConstant.h
        ${SOURCE_ROOT}/TinyMDNS/ServiceInfo.h
        ${SOURCE_ROOT}/TinyMDNS/MdnsHandler.h
        ${SOURCE_ROOT}/TinyMDNS/MdnsHandlerContext.h
        ${SOURCE_ROOT}/TinyMDNS/ServiceObserver.h
        ${SOURCE_ROOT}/TinyMDNS/ServiceListener.h
        ${SOURCE_ROOT}/TinyMDNS/codec/DnsMessageCodec.h
        ${SOURCE_ROOT}/TinyMDNS/message/DnsTypedef.h
        ${SOURCE_ROOT}/TinyMDNS/message/DnsName.h
        ${SOURCE_ROOT}/TinyMDNS/message/DnsQuestion.h
        ${SOURCE_ROOT}/TinyMDNS/message/DnsRecord.h
        ${SOURCE_ROOT}/TinyMDNS/message/DnsMessage.h
        )

SET(Mdns_Source
        ${SOURCE_ROOT}/TinyMDNS/ServiceInfo.c
        ${SOURCE_ROOT}/TinyMDNS/MdnsHandler.c
        ${SOURCE_ROOT}/TinyMDNS/MdnsHandlerContext.c
        ${SOURCE_ROOT}/TinyMDNS/ServiceObserver.c
        ${SOURCE_ROOT}/TinyMDNS/codec/DnsMessageCodec.c
        ${SOURCE_ROOT}/TinyMDNS/message/DnsTypedef.c
        ${SOURCE_ROOT}/TinyMDNS/message/DnsName.c
        ${SOURCE_ROOT}/TinyMDNS/message/DnsQuestion.c
        ${SOURCE_ROOT}/TinyMDNS/message/DnsRecord.c
        ${SOURCE_ROOT}/TinyMDNS/message/DnsMessage.c
        )

set(COMPONENT_ADD_INCLUDEDIRS ${SOURCE_INC})
set(COMPONENT_SRCS
        ${Mdns_Header}
        ${Mdns_Source}
    )


set(COMPONENT_REQUIRES tiny)

register_component()

component_compile_definitions(TINY_STATIC)
component_compile_definitions(ESP32)
component_compile_definitions(LWIP_SOCKET)
component_compile_definitions(ICACHE_FLASH)
#component_compile_definitions(TINY_DEBUG)

component_compile_options(-Wno-multichar)
component_compile_options(-Wno-pointer-to-int-cast)
component_compile_options(-fPIC)
component_compile_options(-std=gnu99)
