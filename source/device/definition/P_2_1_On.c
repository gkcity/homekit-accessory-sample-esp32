/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_2_1_On.h
 *
 * @remark
 *
 */

#include "P_2_1_On.h"

Property * P_2_1_On(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(1, "homekit-spec", "on", 0x00000025, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ | ACCESS_WRITE | ACCESS_NOTIFY;
        thiz->format = FORMAT_BOOL;
    } while (false);

    return thiz;
}