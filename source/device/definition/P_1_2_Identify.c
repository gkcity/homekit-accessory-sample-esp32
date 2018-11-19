/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_1_2_Identify.h
 *
 * @remark
 *
 */

#include "P_1_2_Identify.h"

Property * P_1_2_Identify(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(2, "homekit-spec", "identify", 0x00000014, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_WRITE;
        thiz->format = FORMAT_BOOL;
    } while (false);

    return thiz;
}