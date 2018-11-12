/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   S_1_AccessoryInformation_doGet.c
*
* @remark
*
*/

#include "S_1_AccessoryInformation_doGet.h"
#include "../../iid/IID.h"

static void P_1_2_Manufacturer_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_3_Model_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_4_Name_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_5_SerialNumber_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_6_FirmwareRevision_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_7_HardwareRevision_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_1_8_AccessoryFlags_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

void S_1_AccessoryInformation_doGet(PropertyOperation *o)
{
    printf("S_1_AccessoryInformation_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_1_2_Manufacturer:
            P_1_2_Manufacturer_doGet(o);
            break;

        case IID_1_3_Model:
            P_1_3_Model_doGet(o);
            break;

        case IID_1_4_Name:
            P_1_4_Name_doGet(o);
            break;

        case IID_1_5_SerialNumber:
            P_1_5_SerialNumber_doGet(o);
            break;

        case IID_1_6_FirmwareRevision:
            P_1_6_FirmwareRevision_doGet(o);
            break;

        case IID_1_7_HardwareRevision:
            P_1_7_HardwareRevision_doGet(o);
            break;

        case IID_1_8_AccessoryFlags:
            P_1_8_AccessoryFlags_doGet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}