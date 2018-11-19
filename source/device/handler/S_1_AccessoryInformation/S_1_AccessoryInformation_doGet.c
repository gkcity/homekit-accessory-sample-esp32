/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_1_AccessoryInformation_doGet.c
*
* @remark
*
*/

#include <status/HapStatus.h>
#include "S_1_AccessoryInformation_doGet.h"
#include "../../iid/IID.h"

static void P_1_3_Manufacturer_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewString(字符串)　
    // 取值: 字符串，没有限制取值范围

    o->value = JsonValue_NewString("hello"); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

static void P_1_4_Model_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewString(字符串)　
    // 取值: 字符串，没有限制取值范围

    o->value = JsonValue_NewString("hello"); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

static void P_1_5_Name_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewString(字符串)　
    // 取值: 字符串，没有限制取值范围

    o->value = JsonValue_NewString("hello"); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

static void P_1_6_SerialNumber_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewString(字符串)　
    // 取值: 字符串，没有限制取值范围

    o->value = JsonValue_NewString("hello"); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

static void P_1_7_FirmwareRevision_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewString(字符串)　
    // 取值: 字符串，没有限制取值范围

    o->value = JsonValue_NewString("hello"); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

void S_1_AccessoryInformation_doGet(PropertyOperation *o)
{
    printf("S_1_AccessoryInformation_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_1_3_Manufacturer:
            P_1_3_Manufacturer_doGet(o);
            break;

        case IID_1_4_Model:
            P_1_4_Model_doGet(o);
            break;

        case IID_1_5_Name:
            P_1_5_Name_doGet(o);
            break;

        case IID_1_6_SerialNumber:
            P_1_6_SerialNumber_doGet(o);
            break;

        case IID_1_7_FirmwareRevision:
            P_1_7_FirmwareRevision_doGet(o);
            break;

        default:
            o->status = HAP_RESOURCE_NOT_EXIST;
            break;
    }
}