set(SOURCE_ROOT tinymdns/source/src)
set(SOURCE_INC ${SOURCE_ROOT}/dns-common
               ${SOURCE_ROOT}/dns-server
               ${SOURCE_ROOT}/mdns)

SET(Mdns_Header
        ${SOURCE_ROOT}/dns-common/api/mdns_api.h
        ${SOURCE_ROOT}/dns-common/codec/DnsMessageCodec.h
        ${SOURCE_ROOT}/dns-common/message/DnsTypedef.h
        ${SOURCE_ROOT}/dns-common/message/DnsName.h
        ${SOURCE_ROOT}/dns-common/message/DnsQuestion.h
        ${SOURCE_ROOT}/dns-common/message/DnsRecord.h
        ${SOURCE_ROOT}/dns-common/message/DnsMessage.h
        ${SOURCE_ROOT}/dns-common/message/ServiceInfo.h
        ${SOURCE_ROOT}/dns-server/DnsConstant.h
        ${SOURCE_ROOT}/dns-server/DnsServerHandler.h
        ${SOURCE_ROOT}/dns-server/DnsServerHandlerContext.h
        ${SOURCE_ROOT}/mdns/MdnsConstant.h
        ${SOURCE_ROOT}/mdns/MdnsHandler.h
        ${SOURCE_ROOT}/mdns/MdnsHandlerContext.h
        ${SOURCE_ROOT}/mdns/ServiceObserver.h
        ${SOURCE_ROOT}/mdns/ServiceListener.h
        )

SET(Mdns_Source
        ${SOURCE_ROOT}/dns-common/codec/DnsMessageCodec.c
        ${SOURCE_ROOT}/dns-common/message/DnsTypedef.c
        ${SOURCE_ROOT}/dns-common/message/DnsName.c
        ${SOURCE_ROOT}/dns-common/message/DnsQuestion.c
        ${SOURCE_ROOT}/dns-common/message/DnsRecord.c
        ${SOURCE_ROOT}/dns-common/message/DnsMessage.c
        ${SOURCE_ROOT}/dns-common/message/ServiceInfo.c
        ${SOURCE_ROOT}/dns-server/DnsServerHandler.c
        ${SOURCE_ROOT}/dns-server/DnsServerHandlerContext.c
        ${SOURCE_ROOT}/mdns/MdnsHandler.c
        ${SOURCE_ROOT}/mdns/MdnsHandlerContext.c
        ${SOURCE_ROOT}/mdns/ServiceObserver.c
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
