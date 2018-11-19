/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   S_1_AccessoryInformation.c
 *
 * @remark
 *
 */

#include "S_1_AccessoryInformation.h"
#include "P_1_2_Identify.h"
#include "P_1_3_Manufacturer.h"
#include "P_1_4_Model.h"
#include "P_1_5_Name.h"
#include "P_1_6_SerialNumber.h"
#include "P_1_7_FirmwareRevision.h"

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

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_2_Identify())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_3_Manufacturer())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_4_Model())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_5_Name())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_6_SerialNumber())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_1_7_FirmwareRevision())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }
    } while (false);

    return thiz;
}