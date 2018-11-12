/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_1_7_HardwareRevision.h
 *
 * @remark
 *
 */

#include "P_1_7_HardwareRevision.h"

Property * P_1_7_HardwareRevision(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(7, "homekit-spec", "hardware-revision", 0x00000053, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}