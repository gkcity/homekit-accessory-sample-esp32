# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

SET(DEVICE_SRC
        source/device/definition/Switch.h
        source/device/definition/Switch.c
        source/device/definition/S_1_AccessoryInformation.h
        source/device/definition/S_1_AccessoryInformation.c
        source/device/definition/P_1_1_Identify.h
        source/device/definition/P_1_1_Identify.c
        source/device/definition/P_1_2_Manufacturer.h
        source/device/definition/P_1_2_Manufacturer.c
        source/device/definition/P_1_3_Model.h
        source/device/definition/P_1_3_Model.c
        source/device/definition/P_1_4_Name.h
        source/device/definition/P_1_4_Name.c
        source/device/definition/P_1_5_SerialNumber.h
        source/device/definition/P_1_5_SerialNumber.c
        source/device/definition/P_1_6_FirmwareRevision.h
        source/device/definition/P_1_6_FirmwareRevision.c
        source/device/definition/P_1_7_HardwareRevision.h
        source/device/definition/P_1_7_HardwareRevision.c
        source/device/definition/P_1_8_AccessoryFlags.h
        source/device/definition/P_1_8_AccessoryFlags.c
        source/device/definition/S_2_Switch.h
        source/device/definition/S_2_Switch.c
        source/device/definition/P_2_1_On.h
        source/device/definition/P_2_1_On.c
        source/device/definition/P_2_2_Name.h
        source/device/definition/P_2_2_Name.c
        source/device/handler/OnActionInvoke.h
        source/device/handler/OnActionInvoke.c
        source/device/handler/OnPropertyGet.h
        source/device/handler/OnPropertyGet.c
        source/device/handler/OnPropertySet.h
        source/device/handler/OnPropertySet.c
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doGet.h
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doGet.c
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.h
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.c
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doInvoke.h
        source/device/handler/S_1_AccessoryInformation/S_1_AccessoryInformation_doInvoke.c
        source/device/handler/S_2_Switch/S_2_Switch_doGet.h
        source/device/handler/S_2_Switch/S_2_Switch_doGet.c
        source/device/handler/S_2_Switch/S_2_Switch_doSet.h
        source/device/handler/S_2_Switch/S_2_Switch_doSet.c
        source/device/handler/S_2_Switch/S_2_Switch_doInvoke.h
        source/device/handler/S_2_Switch/S_2_Switch_doInvoke.c
        source/device/iid/IID.h
        source/device/initializer/AccessoryCategoryIdentifier.h
        source/device/initializer/InitializeConfiguration.h
        source/device/initializer/InitializeConfiguration.c
        source/device/print/PrintValue.h
        source/device/print/PrintValue.c
        )

set(MAIN_SRCS 
        ${DEVICE_SRC}
        source/persistence/HapPersistenceImpl.h
        source/persistence/HapPersistenceImpl.c
        source/DeviceStack.h
        source/DeviceStack.c
        source/main_esp32.c
        )

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

ADD_DEFINITIONS(-DLWIP_SOCKET)
ADD_DEFINITIONS(-DESP32)
ADD_DEFINITIONS(-DICACHE_FLASH)
ADD_DEFINITIONS(-DTINY_DEBUG)

project(homekit-accessory-lightbulb-esp32)
