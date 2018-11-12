/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   S_2_Switch_doGet.c
*
* @remark
*
*/

#include "S_2_Switch_doGet.h"
#include "../../iid/IID.h"

static void P_2_1_On_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_2_2_Name_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

void S_2_Switch_doGet(PropertyOperation *o)
{
    printf("S_2_Switch_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_2_1_On:
            P_2_1_On_doGet(o);
            break;

        case IID_2_2_Name:
            P_2_2_Name_doGet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}