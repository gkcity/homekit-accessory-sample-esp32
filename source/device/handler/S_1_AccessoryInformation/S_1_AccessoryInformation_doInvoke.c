/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   S_1_AccessoryInformation_doInvoke.c
*
* @remark
*
*/

#include "S_1_AccessoryInformation_doInvoke.h"
#include "../../iid/IID.h"

void S_1_AccessoryInformation_doInvoke(ActionOperation *o)
{
    printf("S_1_AccessoryInformation_doInvoke: aiid = [%d]\n", o->aid.iid);

    switch (o->aid.iid)
    {
        default:
            o->status = -100;
            break;
    }
}