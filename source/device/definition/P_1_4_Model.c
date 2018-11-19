/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_1_4_Model.h
 *
 * @remark
 *
 */

#include "P_1_4_Model.h"

Property * P_1_4_Model(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(4, "homekit-spec", "model", 0x00000021, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}