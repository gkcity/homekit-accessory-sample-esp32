/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   S_1_AccessoryInformation_doSet.c
*
* @remark
*
*/

#include "S_1_AccessoryInformation_doSet.h"
#include "../../iid/IID.h"

static void P_1_1_Identify_doSet(PropertyOperation *o)
{
}


void S_1_AccessoryInformation_doSet(PropertyOperation *o)
{
    printf("S_1_AccessoryInformation_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_1_1_Identify:
            P_1_1_Identify_doSet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}