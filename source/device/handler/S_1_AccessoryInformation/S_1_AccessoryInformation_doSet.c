/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_1_AccessoryInformation_doSet.c
*
* @remark
*
*/

#include "S_1_AccessoryInformation_doSet.h"
#include "../../iid/IID.h"
#include <status/HapStatus.h>

/**
 * 值: o->value->data.boolean->value;
 * 取值: true 或　false
 */
static void P_1_2_Identify_doSet(PropertyOperation *o)
{
    // TODO: 执行写操作
    printf("P_1_2_Identify_doSet: %d\n", o->value->data.boolean->value);
    o->status = HAP_OK;
}

void S_1_AccessoryInformation_doSet(PropertyOperation *o)
{
    printf("S_1_AccessoryInformation_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_1_2_Identify:
            P_1_2_Identify_doSet(o);
            break;

        default:
            o->status = HAP_OUT_OF_RESOURCES;
            break;
    }
}