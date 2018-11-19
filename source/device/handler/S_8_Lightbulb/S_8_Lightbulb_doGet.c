/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_8_Lightbulb_doGet.c
*
* @remark
*
*/

#include <status/HapStatus.h>
#include "S_8_Lightbulb_doGet.h"
#include "../../iid/IID.h"

static void P_8_9_On_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewBoolean(true) 或 JsonValue_NewBoolean(false)　
    // 取值: true 或　false

    o->value = JsonValue_NewBoolean(true); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

static void P_8_10_Brightness_doGet(PropertyOperation *o)
{
    // 格式: JsonValue_NewInteger(整数)　
    // 取值: 最小值: 0, 最大值: 100, 步长: 1

    o->value = JsonValue_NewInteger(0); // TODO: 这里需要读到属性真正的值

    // 读属性成功
    o->status = HAP_OK;
}

void S_8_Lightbulb_doGet(PropertyOperation *o)
{
    printf("S_8_Lightbulb_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_8_9_On:
            P_8_9_On_doGet(o);
            break;

        case IID_8_10_Brightness:
            P_8_10_Brightness_doGet(o);
            break;

        default:
            o->status = HAP_RESOURCE_NOT_EXIST;
            break;
    }
}