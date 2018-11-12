/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_1_8_AccessoryFlags.h
 *
 * @remark
 *
 */

#include "P_1_8_AccessoryFlags.h"

Property * P_1_8_AccessoryFlags(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(8, "homekit-spec", "accessory-flags", 0x000000A6, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ | ACCESS_NOTIFY;
        thiz->format = FORMAT_UINT32;
    } while (false);

    return thiz;
}