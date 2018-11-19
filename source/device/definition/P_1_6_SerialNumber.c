/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_1_6_SerialNumber.h
 *
 * @remark
 *
 */

#include "P_1_6_SerialNumber.h"

Property * P_1_6_SerialNumber(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(6, "homekit-spec", "serial-number", 0x00000030, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}