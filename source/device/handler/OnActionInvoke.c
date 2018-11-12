/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   OnActionInvoke.c
*
* @remark
*
*/

#include "OnActionInvoke.h"
#include "../iid/IID.h"
#include "S_1_AccessoryInformation/S_1_AccessoryInformation_doInvoke.h"
#include "S_2_Switch/S_2_Switch_doInvoke.h"

void OnActionInvoke(ActionOperation *o)
{
    printf("OnActionInvoke: did=[%s], siid = [%d], piid = [%d]\n", o->aid.did, o->aid.siid, o->aid.iid);

    switch (o->aid.siid)
    {
        case IID_1_AccessoryInformation:
            S_1_AccessoryInformation_doInvoke(o);
            break;

        case IID_2_Switch:
            S_2_Switch_doInvoke(o);
            break;

        default:
            break;
    }
}