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

#include <status/HapStatus.h>
#include "S_1_AccessoryInformation_doSet.h"
#include "../../iid/IID.h"

static void P_1_2_Identify_doSet(PropertyOperation *o)
{
    // TODO: 执行写操作: o->value->data.boolean->value;

    // 写属性成功
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
            o->status = HAP_RESOURCE_NOT_EXIST;
            break;
    }
}