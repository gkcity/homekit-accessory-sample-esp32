/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_2_2_Name.h
 *
 * @remark
 *
 */

#include "P_2_2_Name.h"

Property * P_2_2_Name(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(2, "homekit-spec", "name", 0x00000023, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}