/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   OnPropertySet.c
*
* @remark
*
*/

#include "OnPropertySet.h"
#include "../iid/IID.h"
#include "../print/PrintValue.h"
#include "S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.h"
#include "S_2_Switch/S_2_Switch_doSet.h"

void OnPropertySet(PropertyOperation *o)
{
    printf("OnPropertySet: did=[%s], siid = [%d], piid = [%d]\n", o->pid.did, o->pid.siid, o->pid.iid);
    printValue(o->value);

    switch (o->pid.siid)
    {
        case IID_1_AccessoryInformation:
            S_1_AccessoryInformation_doSet(o);
            break;

        case IID_2_Switch:
            S_2_Switch_doSet(o);
            break;

        default:
            break;
    }
}