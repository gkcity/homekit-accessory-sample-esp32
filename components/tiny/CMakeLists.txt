set(SOURCE_ROOT tiny/source/src)
set(SOURCE_INC
        ${SOURCE_ROOT}/TinyBase
        ${SOURCE_ROOT}/TinyPortable
        ${SOURCE_ROOT}/TinyContainer
        ${SOURCE_ROOT}/TinyLog
        ${SOURCE_ROOT}/TinyStringUtil
        ${SOURCE_ROOT}/TinyRandom
        ${SOURCE_ROOT}/ByteBuffer
        ${SOURCE_ROOT}/Json
        ${SOURCE_ROOT}/StringArray
        ${SOURCE_ROOT}/Netty
        ${SOURCE_ROOT}/HttpClient
        ${SOURCE_ROOT}/TcpClient)

#---------------------------
# TinyBase
#---------------------------

SET(TinyBase_Header
        ${SOURCE_ROOT}/TinyBase/tiny_api.h
        ${SOURCE_ROOT}/TinyBase/tiny_base.h
        ${SOURCE_ROOT}/TinyBase/tiny_define.h
        ${SOURCE_ROOT}/TinyBase/tiny_debug.h
        ${SOURCE_ROOT}/TinyBase/tiny_ret.h
        ${SOURCE_ROOT}/TinyBase/tiny_typedef.h
        )

SET(TinyBase_Source
        ${SOURCE_ROOT}/TinyBase/tiny_ret.c
        )

#---------------------------
# TinyPortable
#---------------------------

SET(TinyPortable_Header
        ${SOURCE_ROOT}/TinyPortable/tiny_inet.h
        ${SOURCE_ROOT}/TinyPortable/tiny_inline.h
        ${SOURCE_ROOT}/TinyPortable/tiny_lor.h
        ${SOURCE_ROOT}/TinyPortable/tiny_malloc.h
        ${SOURCE_ROOT}/TinyPortable/tiny_snprintf.h
        ${SOURCE_ROOT}/TinyPortable/tiny_socket.h
        ${SOURCE_ROOT}/TinyPortable/tiny_strdup.h
        ${SOURCE_ROOT}/TinyPortable/tiny_time.h
        )

SET(TinyPortable_Source
        ${SOURCE_ROOT}/TinyPortable/tiny_malloc.c
        ${SOURCE_ROOT}/TinyPortable/tiny_socket.c
        ${SOURCE_ROOT}/TinyPortable/tiny_strdup.c
        ${SOURCE_ROOT}/TinyPortable/tiny_time.c
        )

#---------------------------
# TinyContainer
#---------------------------

SET(TinyContainer_Header
        ${SOURCE_ROOT}/TinyContainer/TinyContainerListener.h
        ${SOURCE_ROOT}/TinyContainer/TinyList.h
        ${SOURCE_ROOT}/TinyContainer/TinyMap.h
        ${SOURCE_ROOT}/TinyContainer/TinyMapItem.h
        ${SOURCE_ROOT}/TinyContainer/TinyQueue.h
        )

SET(TinyContainer_Source
        ${SOURCE_ROOT}/TinyContainer/TinyList.c
        ${SOURCE_ROOT}/TinyContainer/TinyMap.c
        ${SOURCE_ROOT}/TinyContainer/TinyMapItem.c
        ${SOURCE_ROOT}/TinyContainer/TinyQueue.c
        )

#---------------------------
# TinyLog
#---------------------------

SET(TinyLog_Header
        ${SOURCE_ROOT}/TinyLog/tiny_log.h
        ${SOURCE_ROOT}/TinyLog/tiny_print_binary.h
        )

SET(TinyLog_Source
        ${SOURCE_ROOT}/TinyLog/tiny_log.c
        ${SOURCE_ROOT}/TinyLog/tiny_print_binary.c
        )

#---------------------------
# TinyStringUtil
#---------------------------

SET(TinyStringUtil_Header
        ${SOURCE_ROOT}/TinyStringUtil/tiny_char_util.h
        ${SOURCE_ROOT}/TinyStringUtil/tiny_str_equal.h
        ${SOURCE_ROOT}/TinyStringUtil/tiny_str_split.h
        ${SOURCE_ROOT}/TinyStringUtil/tiny_url_split.h
        ${SOURCE_ROOT}/TinyStringUtil/tiny_buffer_append.h
        ${SOURCE_ROOT}/TinyStringUtil/tiny_strnlen.h
        )

SET(TinyStringUtil_Source
        ${SOURCE_ROOT}/TinyStringUtil/tiny_char_util.c
        ${SOURCE_ROOT}/TinyStringUtil/tiny_str_equal.c
        ${SOURCE_ROOT}/TinyStringUtil/tiny_str_split.c
        ${SOURCE_ROOT}/TinyStringUtil/tiny_url_split.c
        ${SOURCE_ROOT}/TinyStringUtil/tiny_buffer_append.c
        ${SOURCE_ROOT}/TinyStringUtil/tiny_strnlen.c
        )

#---------------------------
# TinyRandom
#---------------------------

SET(TinyRandom_Header
        ${SOURCE_ROOT}/TinyRandom/tiny_random.h
        )

SET(TinyRandom_Source
        ${SOURCE_ROOT}/TinyRandom/tiny_random.c
        )

#---------------------------
# ByteBuffer
#---------------------------

SET(ByteBuffer_Header
        ${SOURCE_ROOT}/ByteBuffer/ByteBuffer.h
        )

SET(ByteBuffer_Source
        ${SOURCE_ROOT}/ByteBuffer/ByteBuffer.c
        )

#-----------------------
# Netty
#-----------------------

SET(Netty_Header
        ${SOURCE_ROOT}/Netty/selector/Selector.h
        ${SOURCE_ROOT}/Netty/channel/Channel.h
        ${SOURCE_ROOT}/Netty/channel/ChannelAddress.h
        ${SOURCE_ROOT}/Netty/channel/ChannelHandler.h
        ${SOURCE_ROOT}/Netty/channel/ChannelTimer.h
        ${SOURCE_ROOT}/Netty/channel/ChannelIdles.h
        ${SOURCE_ROOT}/Netty/channel/ChannelIdleStateHandler.h
        ${SOURCE_ROOT}/Netty/channel/ChannelInitializer.h
        ${SOURCE_ROOT}/Netty/channel/SocketChannel.h
        ${SOURCE_ROOT}/Netty/channel/stream/StreamClientChannel.h
        ${SOURCE_ROOT}/Netty/channel/stream/StreamClientChannelContext.h
        ${SOURCE_ROOT}/Netty/channel/stream/StreamServerChannel.h
        ${SOURCE_ROOT}/Netty/channel/stream/StreamServerChannelContext.h
        ${SOURCE_ROOT}/Netty/channel/multicast/MulticastChannel.h
        ${SOURCE_ROOT}/Netty/channel/multicast/MulticastChannelContext.h
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessageCodec.h
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessageEncoder.h
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessage.h
        ${SOURCE_ROOT}/Netty/codec-http/HttpHeader.h
        ${SOURCE_ROOT}/Netty/codec-http/HttpContent.h
        ${SOURCE_ROOT}/Netty/codec-http/Bytes.h
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrame.h
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameFactory.h
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameCodec.h
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameEncoder.h
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameDecoder.h
        ${SOURCE_ROOT}/Netty/bootstrap/Bootstrap.h
        ${SOURCE_ROOT}/Netty/handler/HttpRequestHandlers.h
        ${SOURCE_ROOT}/Netty/handler/HttpRequestHandlerContext.h
        )

SET(Netty_Source
        ${SOURCE_ROOT}/Netty/selector/Selector.c
        ${SOURCE_ROOT}/Netty/channel/Channel.c
        ${SOURCE_ROOT}/Netty/channel/ChannelAddress.c
        ${SOURCE_ROOT}/Netty/channel/ChannelIdles.c
        ${SOURCE_ROOT}/Netty/channel/ChannelIdleStateHandler.c
        ${SOURCE_ROOT}/Netty/channel/SocketChannel.c
        ${SOURCE_ROOT}/Netty/channel/stream/StreamClientChannel.c
        ${SOURCE_ROOT}/Netty/channel/stream/StreamClientChannelContext.c
        ${SOURCE_ROOT}/Netty/channel/stream/StreamServerChannel.c
        ${SOURCE_ROOT}/Netty/channel/stream/StreamServerChannelContext.c
        ${SOURCE_ROOT}/Netty/channel/multicast/MulticastChannel.c
        ${SOURCE_ROOT}/Netty/channel/multicast/MulticastChannelContext.c
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessageCodec.c
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessageEncoder.c
        ${SOURCE_ROOT}/Netty/codec-http/HttpContent.c
        ${SOURCE_ROOT}/Netty/codec-http/HttpHeader.c
        ${SOURCE_ROOT}/Netty/codec-http/HttpMessage.c
        ${SOURCE_ROOT}/Netty/codec-http/Bytes.c
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrame.c
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameFactory.c
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameCodec.c
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameEncoder.c
        ${SOURCE_ROOT}/Netty/codec-websocket/WebSocketFrameDecoder.c
        ${SOURCE_ROOT}/Netty/bootstrap/Bootstrap.c
        ${SOURCE_ROOT}/Netty/handler/HttpRequestHandlers.c
        ${SOURCE_ROOT}/Netty/handler/HttpRequestHandlerContext.c
        )

#---------------------------
# Json
#---------------------------

SET(Json_Header
        ${SOURCE_ROOT}/Json/JsonObject.h
        ${SOURCE_ROOT}/Json/JsonArray.h
        ${SOURCE_ROOT}/Json/JsonValue.h
	${SOURCE_ROOT}/Json/JsonDefinitions.h
        ${SOURCE_ROOT}/Json/codec/JsonDecoder.h
        ${SOURCE_ROOT}/Json/codec/JsonEncoder.h
        ${SOURCE_ROOT}/Json/codec/JsonToken.h
        ${SOURCE_ROOT}/Json/codec/JsonTokenizer.h
        ${SOURCE_ROOT}/Json/value/JsonNumber.h
        ${SOURCE_ROOT}/Json/value/JsonBoolean.h
        ${SOURCE_ROOT}/Json/value/JsonString.h
        )

SET(Json_Source
        ${SOURCE_ROOT}/Json/JsonObject.c
        ${SOURCE_ROOT}/Json/JsonArray.c
        ${SOURCE_ROOT}/Json/JsonValue.c
	${SOURCE_ROOT}/Json/JsonDefinitions.c
        ${SOURCE_ROOT}/Json/codec/JsonDecoder.c
        ${SOURCE_ROOT}/Json/codec/JsonEncoder.c
        ${SOURCE_ROOT}/Json/codec/JsonToken.c
        ${SOURCE_ROOT}/Json/codec/JsonTokenizer.c
        ${SOURCE_ROOT}/Json/value/JsonString.c
        ${SOURCE_ROOT}/Json/value/JsonNumber.c
        ${SOURCE_ROOT}/Json/value/JsonBoolean.c
        )

#---------------------------
# HttpClient
#---------------------------

SET(HttpClient_Header
        ${SOURCE_ROOT}/HttpClient/HttpClient.h
        ${SOURCE_ROOT}/HttpClient/HttpClientHandler.h
        ${SOURCE_ROOT}/HttpClient/HttpExchange.h
        )

SET(HttpClient_Source
        ${SOURCE_ROOT}/HttpClient/HttpClient.c
        ${SOURCE_ROOT}/HttpClient/HttpClientHandler.c
        ${SOURCE_ROOT}/HttpClient/HttpExchange.c
        )

#---------------------------
# TcpClient
#---------------------------

SET(TcpClient_Header
        ${SOURCE_ROOT}/TcpClient/TcpClient.h
        ${SOURCE_ROOT}/TcpClient/TcpClientHandler.h
        ${SOURCE_ROOT}/TcpClient/TcpExchange.h
        )

SET(TcpClient_Source
        ${SOURCE_ROOT}/TcpClient/TcpClient.c
        ${SOURCE_ROOT}/TcpClient/TcpClientHandler.c
        ${SOURCE_ROOT}/TcpClient/TcpExchange.c
        )

#---------------------------
# StringArray
#---------------------------

SET(StringArray_Header
        ${SOURCE_ROOT}/StringArray/StringArray.h
        )

SET(StringArray_Source
        ${SOURCE_ROOT}/StringArray/StringArray.c
        )

set(COMPONENT_ADD_INCLUDEDIRS ${SOURCE_INC})
set(COMPONENT_SRCS
            ${TinyBase_Header}
            ${TinyBase_Source}
            ${TinyPortable_Header}
            ${TinyPortable_Source}
            ${TinyContainer_Header}
            ${TinyContainer_Source}
            ${TinyLog_Header}
            ${TinyLog_Source}
            ${TinyStringUtil_Header}
            ${TinyStringUtil_Source}
            ${TinyRandom_Header}
            ${TinyRandom_Source}
            ${ByteBuffer_Header}
            ${ByteBuffer_Source}
            ${StringArray_Header}
            ${StringArray_Source}
            ${Netty_Header}
            ${Netty_Source}
            ${Json_Header}
            ${Json_Source}
            ${HttpClient_Header}
            ${HttpClient_Source}
            ${TcpClient_Header}
            ${TcpClient_Source}
            )


set(COMPONENT_REQUIRES lwip)

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
