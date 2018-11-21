/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   InitializeConfiguration.c
*
* @remark
*
*/

#include "InitializeConfiguration.h"
#include <device/config/AccessoryCategoryIdentifier.h>

#define PRODUCT_ID          10006
#define PRODUCT_VERSION     1
#define LTSK                "+NC/fa+QFz6hHtcOUKUJK9EQEl/J1nKhh2ixj9hQtGU="
#define LTPK                "V6q8ABMPIOpEyJK/EsdpmsQFtX2+CbpaPMlYOjWNHLE="
#define MODEL               "light"
#define SETUP_ID            "7OSX"

static void InitializeAccessoryConfiguration(AccessoryConfig *thiz, const char *name, const char *setupCode)
{
    thiz->aid = 1;
    strncpy(thiz->name, name, ACCESSORY_NAME_LENGTH);
    strncpy(thiz->model, MODEL, ACCESSORY_MODEL_LENGTH);
    strncpy(thiz->setupCode, setupCode,ACCESSORY_SETUP_CODE_LENGTH);
    strncpy(thiz->setupId, SETUP_ID, ACCESSORY_SETUP_ID_LENGTH);
    thiz->configurationNumber = 2;
    thiz->categoryIdentifier = ACCESSORY_CATEGORY_LIGHTING;
    thiz->featureFlags = 0;
    thiz->stateNumber = 1;
    thiz->statusFlags = 0x01;
    thiz->protocolMajorVersion = 1;
    thiz->protocolMinorVersion = 1;
}

void InitializeConfiguration(DeviceConfig *thiz, const char *did, const char *name, const char *ip, const char *setupCode)
{
    strncpy(thiz->did, did, DEVICE_ID_LENGTH);
    strncpy(thiz->ip, ip, TINY_IP_LEN);
    strncpy(thiz->ltsk, LTSK, DEVICE_LTSK_BASE64_LENGTH);
    strncpy(thiz->ltpk, LTPK, DEVICE_LTPK_BASE64_LENGTH);
    thiz->productId = PRODUCT_ID;
    thiz->productVersion = PRODUCT_VERSION;
    thiz->port = 0;
    InitializeAccessoryConfiguration(&thiz->accessoryConfig, name, setupCode);
}
