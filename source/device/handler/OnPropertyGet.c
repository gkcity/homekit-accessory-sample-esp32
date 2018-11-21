/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   OnPropertyGet.c
*
* @remark
*
*/

#include "OnPropertyGet.h"
#include "../iid/IID.h"
#include "S_1_AccessoryInformation/S_1_AccessoryInformation_doGet.h"
#include "S_8_Lightbulb/S_8_Lightbulb_doGet.h"

void OnPropertyGet(PropertyOperation *o)
{
    printf("OnPropertyGet: did = %s, siid = %d, piid = %d\n", o->pid.did, o->pid.siid, o->pid.iid);

    switch (o->pid.siid)
    {
        case IID_1_AccessoryInformation:
            S_1_AccessoryInformation_doGet(o);
            break;

        case IID_8_Lightbulb:
            S_8_Lightbulb_doGet(o);
            break;

        default:
            break;
    }
}
