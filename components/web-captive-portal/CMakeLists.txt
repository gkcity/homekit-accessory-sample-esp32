set(SOURCE_ROOT web-captive-portal/source/src)
set(SOURCE_INC ${SOURCE_ROOT}/captive-portal)

#-----------------------
# src
#-----------------------
SET(CaptivePortal_Header
		${SOURCE_ROOT}/captive-portal/CaptivePortal.h
		${SOURCE_ROOT}/captive-portal/CaptivePortalHandle.h
		${SOURCE_ROOT}/captive-portal/DNSServer.h
		${SOURCE_ROOT}/captive-portal/WebServer.h
		${SOURCE_ROOT}/captive-portal/WebServerHandler.h
        )

SET(CaptivePortal_Source
		${SOURCE_ROOT}/captive-portal/CaptivePortal.c
		${SOURCE_ROOT}/captive-portal/CaptivePortalHandle.c
		${SOURCE_ROOT}/captive-portal/DNSServer.c
		${SOURCE_ROOT}/captive-portal/WebServer.c
		${SOURCE_ROOT}/captive-portal/WebServerHandler.c
        )

set(COMPONENT_ADD_INCLUDEDIRS ${SOURCE_INC})
set(COMPONENT_SRCS
        ${CaptivePortal_Header}
        ${CaptivePortal_Source}
   )


set(COMPONENT_REQUIRES tiny tinymdns)

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
