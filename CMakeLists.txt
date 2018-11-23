# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

SET(DEVICE_SRC
        source/device/definition/Lightbulb.h
        source/device/definition/Lightbulb.c
        source/device/definition/S_1_AccessoryInformation.h
        source/device/definition/S_1_AccessoryInformation.c
        source/device/definition/P_1_2_Identify.h
        source/device/definition/P_1_2_Identify.c
        source/device/definition/P_1_3_Manufacturer.h
        source/device/definition/P_1_3_Manufacturer.c
        source/device/definition/P_1_4_Model.h
        source/device/definition/P_1_4_Model.c
        source/device/definition/P_1_5_Name.h
        source/device/definition/P_1_5_Name.c
        source/device/definition/P_1_6_SerialNumber.h
        source/device/definition/P_1_6_SerialNumber.c
        source/device/definition/P_1_7_FirmwareRevision.h
        source/device/definition/P_1_7_FirmwareRevision.c
        source/device/definition/S_8_Lightbulb.h
        source/device/definition/S_8_Lightbulb.c
        source/device/definition/P_8_9_On.h
        source/device/definition/P_8_9_On.c
        source/device/definition/P_8_10_Brightness.h
        source/device/definition/P_8_10_Brightness.c
        source/device/handler/OnPropertyGet.h
        source/device/handler/OnPropertyGet.c
        source/device/handler/OnPropertySet.h
        source/device/handler/OnPropertySet.c
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doGet.h
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doGet.c
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.h
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.c
        source/device/handler/S_8_Lightbulb/S_8_Lightbulb_doGet.h
        source/device/handler/S_8_Lightbulb/S_8_Lightbulb_doGet.c
        source/device/handler/S_8_Lightbulb/S_8_Lightbulb_doSet.h
        source/device/handler/S_8_Lightbulb/S_8_Lightbulb_doSet.c
        source/device/initializer/InitializeConfiguration.h
        source/device/initializer/InitializeConfiguration.c
        source/device/print/PrintValue.h
        source/device/print/PrintValue.c
        )

set(MAIN_SRCS 
        ${DEVICE_SRC}
        source/persistence/HapPersistenceImpl.h
        source/persistence/HapPersistenceImpl.c
        source/HomeKitStack.h
        source/HomeKitStack.c
        source/main.c
        )

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

ADD_DEFINITIONS(-DLWIP_SOCKET)
ADD_DEFINITIONS(-DESP32)
ADD_DEFINITIONS(-DICACHE_FLASH)
#ADD_DEFINITIONS(-DTINY_DEBUG)

project(homekit-accessory-lightbulb-esp32)
