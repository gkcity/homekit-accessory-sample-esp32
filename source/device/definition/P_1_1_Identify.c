/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_1_1_Identify.h
 *
 * @remark
 *
 */

#include "P_1_1_Identify.h"

Property * P_1_1_Identify(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(1, "homekit-spec", "identify", 0x00000014, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_WRITE;
        thiz->format = FORMAT_BOOL;
    } while (false);

    return thiz;
}