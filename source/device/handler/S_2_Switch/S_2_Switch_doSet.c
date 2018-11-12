/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   S_2_Switch_doSet.c
*
* @remark
*
*/

#include "S_2_Switch_doSet.h"
#include "../../iid/IID.h"

static void P_2_1_On_doSet(PropertyOperation *o)
{
}


void S_2_Switch_doSet(PropertyOperation *o)
{
    printf("S_2_Switch_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_2_1_On:
            P_2_1_On_doSet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}