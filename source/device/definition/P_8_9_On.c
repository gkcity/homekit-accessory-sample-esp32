/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_8_9_On.h
 *
 * @remark
 *
 */

#include "P_8_9_On.h"

Property * P_8_9_On(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(9, "homekit-spec", "on", 0x00000025, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ | ACCESS_WRITE | ACCESS_NOTIFY;
        thiz->format = FORMAT_BOOL;
    } while (false);

    return thiz;
}