/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   S_1_AccessoryInformation.c
 *
 * @remark
 *
 */

#include "S_1_AccessoryInformation.h"
#include "P_1_1_Identify.h"
#include "P_1_2_Manufacturer.h"
#include "P_1_3_Model.h"
#include "P_1_4_Name.h"
#include "P_1_5_SerialNumber.h"
#include "P_1_6_FirmwareRevision.h"
#include "P_1_7_HardwareRevision.h"
#include "P_1_8_AccessoryFlags.h"

Service * S_1_AccessoryInformation(void)
{
    Service *thiz = NULL;

    do
    {
        thiz = Service_NewInstance(1, "homekit-spec", "accessory-information", 0x0000003E, NULL);
        if (thiz == NULL)
        {
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_1_Identify())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_2_Manufacturer())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_3_Model())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_4_Name())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_5_SerialNumber())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_6_FirmwareRevision())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_7_HardwareRevision())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_8_AccessoryFlags())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }
    } while (false);

    return thiz;
}