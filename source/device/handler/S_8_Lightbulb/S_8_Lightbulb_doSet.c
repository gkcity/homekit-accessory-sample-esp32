/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_8_Lightbulb_doSet.c
*
* @remark
*
*/

#include "S_8_Lightbulb_doSet.h"
#include "../../iid/IID.h"
#include <status/HapStatus.h>

/**
 * 值: o->value->data.number->value.intValue;
 * 取值: 1 或　0
 */
static void P_8_9_On_doSet(PropertyOperation *o)
{
    // TODO: 执行写操作
    o->status = HAP_OK;

    printf("P_8_9_On_doSet: %d\n", (int) o->value->data.number->value.intValue);
}

/**
 * 值: o->value->data.number->value.intValue;
 * 取值: 最小值: 0, 最大值: 100, 步长: 1
 */
static void P_8_10_Brightness_doSet(PropertyOperation *o)
{
    // TODO: 执行写操作
    o->status = HAP_OK;

    printf("P_8_10_Brightness_doSet: %d\n", (int) o->value->data.number->value.intValue);
}

void S_8_Lightbulb_doSet(PropertyOperation *o)
{
    printf("S_8_Lightbulb_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_8_9_On:
            P_8_9_On_doSet(o);
            break;

        case IID_8_10_Brightness:
            P_8_10_Brightness_doSet(o);
            break;

        default:
            o->status = HAP_OUT_OF_RESOURCES;
            break;
    }
}