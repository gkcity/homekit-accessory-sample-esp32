set(COMPONENT_ADD_INCLUDEDIRS include/hap-tcp include/hap-support)

set(COMPONENT_REQUIRES tinycrypto tinymdns tinyfx tiny)

register_component()

target_link_libraries(tinyhap INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/lib/libtinyhap_static.a")
